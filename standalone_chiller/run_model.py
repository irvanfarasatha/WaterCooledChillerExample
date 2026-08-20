# coding: utf-8
"""Create the chiller efficiency Excel table for WaterCooledChillerExample7.

Open WaterCooledChillerExample7.mo to see the Modelica model.
Run this Python file to create the Excel result table.
"""

import argparse
import sys
import zipfile
from pathlib import Path
from xml.sax.saxutils import escape


# Easy-to-change control settings.
INTERNAL_LOOP_DELAY_MINUTES = 5
EXTERNAL_LOOP_DELAY_MINUTES = 15
PUMP_ADJUSTMENT_FRACTION = 0.05
CHILLER_COUNT = 1
TARGET_DELTA_T_DEGC = 5.0

# Model/load settings from WaterCooledChillerExample7.mo.
LOAD_KW = 200.0
START_TIME_S = 13046400.0
STOP_TIME_S = 13651200.0
CHILLER_OUTLET_TEMP_DEGC = 5.0
WATER_CP_KJ_PER_KGK = 4.2
DELTA_T_DEADBAND_DEGC = 0.05

# Efficiency assumptions.
CHILLER_COP = 5.42
TONS_PER_KW = 1.0 / 3.5168525
WATER_DENSITY_KG_PER_M3 = 1000.0
AIR_DENSITY_KG_PER_M3 = 1.2
PUMP_EFFICIENCY = 0.70
FAN_EFFICIENCY = 0.65
COOLING_TOWER_FAN_POWER_KW = 6.0
INCLUDE_AIR_FANS_IN_WHOLE_PLANT = True

# Sizing inherited from the Modelica model.
NOMINAL_CHW_DELTA_T_DEGC = 20.0
NOMINAL_CW_DELTA_T_DEGC = 6.0
AIR_DELTA_T_DEGC = 15.0
AIR_CP_KJ_PER_KGK = 1.005
CHW_PUMP_DP_PA = 325474.0
CW_PUMP_DP_PA = 214992.0
AIR_FAN_DP_PA = 249.0
AIR_FAN_COUNT = 2
MIN_MASS_FLOW_FRACTION = 0.30
MAX_MASS_FLOW_FRACTION = 2.50


def excel_column_name(index):
    name = ""
    while index > 0:
        index -= 1
        name = chr(65 + index % 26) + name
        index //= 26
    return name


def worksheet_xml(rows, text_columns=None, wide_columns=None):
    text_columns = set(text_columns or [])
    wide_columns = set(wide_columns or [])
    lines = [
        '<?xml version="1.0" encoding="UTF-8" standalone="yes"?>',
        (
            '<worksheet xmlns="http://schemas.openxmlformats.org/'
            'spreadsheetml/2006/main" xmlns:r="http://schemas.openxmlformats.org/'
            'officeDocument/2006/relationships">'
        ),
    ]

    if wide_columns:
        lines.append("<cols>")
        for column in sorted(wide_columns):
            lines.append(
                f'<col min="{column}" max="{column}" width="20" customWidth="1"/>'
            )
        lines.append("</cols>")

    lines.append("<sheetData>")
    for row_index, row in enumerate(rows, start=1):
        lines.append(f'<row r="{row_index}">')
        for column_index, value in enumerate(row, start=1):
            cell_ref = f"{excel_column_name(column_index)}{row_index}"
            if row_index == 1 or column_index in text_columns or isinstance(value, str):
                lines.append(
                    f'<c r="{cell_ref}" t="inlineStr"><is><t>'
                    f"{escape(str(value))}</t></is></c>"
                )
            else:
                lines.append(f'<c r="{cell_ref}"><v>{float(value):.10g}</v></c>')
        lines.append("</row>")
    lines.append("</sheetData>")
    lines.append("</worksheet>")
    return "\n".join(lines)


def write_text_to_zip(workbook, path, text):
    workbook.writestr(path, text.encode("utf-8"))


def write_xlsx(output_path, sheets):
    output_path.parent.mkdir(parents=True, exist_ok=True)

    with zipfile.ZipFile(output_path, "w", zipfile.ZIP_DEFLATED) as workbook:
        write_text_to_zip(
            workbook,
            "[Content_Types].xml",
            """<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<Types xmlns="http://schemas.openxmlformats.org/package/2006/content-types">
  <Default Extension="rels" ContentType="application/vnd.openxmlformats-package.relationships+xml"/>
  <Default Extension="xml" ContentType="application/xml"/>
  <Override PartName="/xl/workbook.xml" ContentType="application/vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+xml"/>
  <Override PartName="/xl/styles.xml" ContentType="application/vnd.openxmlformats-officedocument.spreadsheetml.styles+xml"/>
  <Override PartName="/xl/worksheets/sheet1.xml" ContentType="application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml"/>
  <Override PartName="/xl/worksheets/sheet2.xml" ContentType="application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml"/>
  <Override PartName="/xl/worksheets/sheet3.xml" ContentType="application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml"/>
  <Override PartName="/xl/worksheets/sheet4.xml" ContentType="application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml"/>
</Types>
""",
        )
        write_text_to_zip(
            workbook,
            "_rels/.rels",
            """<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<Relationships xmlns="http://schemas.openxmlformats.org/package/2006/relationships">
  <Relationship Id="rId1" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument" Target="xl/workbook.xml"/>
</Relationships>
""",
        )

        sheet_tags = []
        relationship_tags = []
        for index, (sheet_name, _rows, _text_columns) in enumerate(sheets, start=1):
            sheet_tags.append(
                f'<sheet name="{escape(sheet_name)}" sheetId="{index}" r:id="rId{index}"/>'
            )
            relationship_tags.append(
                f'<Relationship Id="rId{index}" '
                'Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet" '
                f'Target="worksheets/sheet{index}.xml"/>'
            )

        write_text_to_zip(
            workbook,
            "xl/workbook.xml",
            """<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<workbook xmlns="http://schemas.openxmlformats.org/spreadsheetml/2006/main" xmlns:r="http://schemas.openxmlformats.org/officeDocument/2006/relationships">
  <sheets>
    %s
  </sheets>
</workbook>
"""
            % "\n    ".join(sheet_tags),
        )
        write_text_to_zip(
            workbook,
            "xl/_rels/workbook.xml.rels",
            """<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<Relationships xmlns="http://schemas.openxmlformats.org/package/2006/relationships">
  %s
  <Relationship Id="rIdStyles" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/styles" Target="styles.xml"/>
</Relationships>
"""
            % "\n  ".join(relationship_tags),
        )
        write_text_to_zip(
            workbook,
            "xl/styles.xml",
            """<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<styleSheet xmlns="http://schemas.openxmlformats.org/spreadsheetml/2006/main">
  <fonts count="1"><font><sz val="11"/><name val="Calibri"/></font></fonts>
  <fills count="1"><fill><patternFill patternType="none"/></fill></fills>
  <borders count="1"><border><left/><right/><top/><bottom/><diagonal/></border></borders>
  <cellStyleXfs count="1"><xf numFmtId="0" fontId="0" fillId="0" borderId="0"/></cellStyleXfs>
  <cellXfs count="1"><xf numFmtId="0" fontId="0" fillId="0" borderId="0" xfId="0"/></cellXfs>
  <cellStyles count="1"><cellStyle name="Normal" xfId="0" builtinId="0"/></cellStyles>
</styleSheet>
""",
        )

        for index, (_sheet_name, rows, text_columns) in enumerate(sheets, start=1):
            write_text_to_zip(
                workbook,
                f"xl/worksheets/sheet{index}.xml",
                worksheet_xml(
                    rows,
                    text_columns=text_columns,
                    wide_columns=range(1, max(len(rows[0]), 1) + 1),
                ),
            )


def pump_power_kw(mass_flow_kg_s, delta_pressure_pa):
    volume_flow_m3_s = mass_flow_kg_s / WATER_DENSITY_KG_PER_M3
    return delta_pressure_pa * volume_flow_m3_s / PUMP_EFFICIENCY / 1000.0


def air_fan_power_kw(air_mass_flow_kg_s):
    volume_flow_m3_s = air_mass_flow_kg_s / AIR_DENSITY_KG_PER_M3
    return AIR_FAN_COUNT * AIR_FAN_DP_PA * volume_flow_m3_s / FAN_EFFICIENCY / 1000.0


def rounded_row(values):
    row = []
    for value in values:
        if isinstance(value, (int, float)):
            row.append(round(value, 6))
        else:
            row.append(value)
    return row


def build_rows(args):
    load_per_chiller_kw = args.load_kw / args.chiller_count
    load_tr = args.load_kw * TONS_PER_KW
    nominal_chw_mass_flow = (
        2.0 * args.load_kw / (WATER_CP_KJ_PER_KGK * NOMINAL_CHW_DELTA_T_DEGC)
    )
    nominal_cw_mass_flow = (
        2.0 * args.load_kw / (WATER_CP_KJ_PER_KGK * NOMINAL_CW_DELTA_T_DEGC)
    )
    air_mass_flow = args.load_kw / (AIR_CP_KJ_PER_KGK * AIR_DELTA_T_DEGC)
    min_mass_flow = nominal_chw_mass_flow * MIN_MASS_FLOW_FRACTION
    max_mass_flow = nominal_chw_mass_flow * MAX_MASS_FLOW_FRACTION
    time_step_s = args.internal_delay_minutes * 60.0
    external_loop_delay_s = args.external_delay_minutes * 60.0
    mass_flow = nominal_chw_mass_flow
    next_control_time_s = START_TIME_S

    summary_rows = [
        [
            "Time Step (min)",
            "Load (kW)",
            "Chiller Only Efficiency (kW/TR)",
            "Whole Plant Efficiency (kW/TR)",
            "Chiller Inlet Temp (degC)",
            "Chiller Outlet Temp (degC)",
            "Mass Flow Rate (kg/s)",
        ]
    ]
    requested_header = [
        "Time Step (min)",
        "Load (kW)",
        "Efficiency (kW/TR)",
        "Chiller Inlet Temp (degC)",
        "Chiller Outlet Temp (degC)",
        "Mass Flow Rate (kg/s)",
    ]
    chiller_only_rows = [requested_header]
    whole_plant_rows = [requested_header]

    step_count = int(round((STOP_TIME_S - START_TIME_S) / time_step_s)) + 1
    for step in range(step_count):
        time_s = START_TIME_S + step * time_step_s
        time_min = (time_s - START_TIME_S) / 60.0
        delta_t = load_per_chiller_kw / (mass_flow * WATER_CP_KJ_PER_KGK)
        outlet_temp = CHILLER_OUTLET_TEMP_DEGC
        inlet_temp = outlet_temp + delta_t

        chiller_power_kw = args.load_kw / args.chiller_cop
        chw_pump_power_kw = pump_power_kw(mass_flow, CHW_PUMP_DP_PA)
        cw_pump_power_kw = pump_power_kw(nominal_cw_mass_flow, CW_PUMP_DP_PA)
        air_power_kw = air_fan_power_kw(air_mass_flow) if args.include_air_fans else 0.0
        whole_plant_power_kw = (
            chiller_power_kw
            + chw_pump_power_kw
            + cw_pump_power_kw
            + COOLING_TOWER_FAN_POWER_KW
            + air_power_kw
        )
        chiller_only_eff = chiller_power_kw / load_tr
        whole_plant_eff = whole_plant_power_kw / load_tr

        summary_rows.append(
            rounded_row(
                [
                    time_min,
                    args.load_kw,
                    chiller_only_eff,
                    whole_plant_eff,
                    inlet_temp,
                    outlet_temp,
                    mass_flow,
                ]
            )
        )
        chiller_only_rows.append(
            rounded_row(
                [time_min, args.load_kw, chiller_only_eff, inlet_temp, outlet_temp, mass_flow]
            )
        )
        whole_plant_rows.append(
            rounded_row(
                [time_min, args.load_kw, whole_plant_eff, inlet_temp, outlet_temp, mass_flow]
            )
        )

        if time_s >= next_control_time_s - 0.001:
            if delta_t > args.target_delta_t_degC + DELTA_T_DEADBAND_DEGC:
                mass_flow = min(mass_flow * (1.0 + args.pump_adjustment), max_mass_flow)
                next_control_time_s = time_s + time_step_s
            elif (
                delta_t < args.target_delta_t_degC - DELTA_T_DEADBAND_DEGC
                and mass_flow > min_mass_flow
            ):
                mass_flow = max(mass_flow * (1.0 - args.pump_adjustment), min_mass_flow)
                next_control_time_s = time_s + time_step_s
            else:
                next_control_time_s = time_s + external_loop_delay_s

    config_rows = [
        ["Parameter", "Value", "Unit/Note"],
        ["Internal loop delay", args.internal_delay_minutes, "minutes"],
        ["External loop delay", args.external_delay_minutes, "minutes"],
        ["Pump adjustment", args.pump_adjustment, "fraction per internal-loop action"],
        ["Chiller count", args.chiller_count, "one active chiller by default"],
        ["Target deltaT", args.target_delta_t_degC, "degC"],
        ["DeltaT deadband", DELTA_T_DEADBAND_DEGC, "degC"],
        ["Load", args.load_kw, "kW, from QRoo_flow = 200000 W"],
        ["Chiller COP", args.chiller_cop, "nominal COP assumption"],
        ["Chiller outlet temperature", CHILLER_OUTLET_TEMP_DEGC, "degC"],
        ["Nominal CHW mass flow", round(nominal_chw_mass_flow, 6), "kg/s"],
        ["Nominal CW mass flow", round(nominal_cw_mass_flow, 6), "kg/s"],
        ["Include air fans in whole plant", str(args.include_air_fans), "true/false"],
        [
            "Whole plant boundary",
            "chiller + CHW pump + CW pump + cooling tower fan + optional air fans",
            "power boundary",
        ],
    ]

    return summary_rows, chiller_only_rows, whole_plant_rows, config_rows


def parse_args():
    script_dir = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(
        description="Create the chiller efficiency Excel workbook."
    )
    parser.add_argument(
        "--output",
        default=str(script_dir / "results" / "chiller_efficiency_logic.xlsx"),
        help="Excel workbook path to create.",
    )
    parser.add_argument("--load-kw", type=float, default=LOAD_KW)
    parser.add_argument(
        "--internal-delay-minutes", type=float, default=INTERNAL_LOOP_DELAY_MINUTES
    )
    parser.add_argument(
        "--external-delay-minutes", type=float, default=EXTERNAL_LOOP_DELAY_MINUTES
    )
    parser.add_argument("--pump-adjustment", type=float, default=PUMP_ADJUSTMENT_FRACTION)
    parser.add_argument("--chiller-count", type=int, default=CHILLER_COUNT)
    parser.add_argument("--target-delta-t-degc", type=float, default=TARGET_DELTA_T_DEGC)
    parser.add_argument("--chiller-cop", type=float, default=CHILLER_COP)
    parser.add_argument(
        "--no-air-fans",
        dest="include_air_fans",
        action="store_false",
        help="Exclude air fans from the whole-plant efficiency sheet.",
    )
    parser.set_defaults(include_air_fans=INCLUDE_AIR_FANS_IN_WHOLE_PLANT)
    return parser.parse_args()


def main():
    args = parse_args()
    output_path = Path(args.output).resolve()

    summary_rows, chiller_only_rows, whole_plant_rows, config_rows = build_rows(args)
    write_xlsx(
        output_path,
        [
            ("Summary", summary_rows, []),
            ("ChillerOnly", chiller_only_rows, []),
            ("WholePlant", whole_plant_rows, []),
            ("Config", config_rows, [1, 3]),
        ],
    )

    final = summary_rows[-1]
    print(f"Excel file: {output_path}")
    print(f"Rows:       {len(summary_rows) - 1}")
    print(f"Final flow: {final[6]} kg/s")
    print(f"Final chiller-only efficiency: {final[2]} kW/TR")
    print(f"Final whole-plant efficiency:  {final[3]} kW/TR")
    return 0


if __name__ == "__main__":
    sys.exit(main())
