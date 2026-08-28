# coding: utf-8
"""Run logic1 with OpenModelica and export a clean analysis CSV.

Main outputs in this folder:
- run_logic1.mos
- openmodelica_run.log
- logic1_results.csv
"""

from __future__ import annotations

import argparse
import csv
import math
import os
import re
import shutil
import subprocess
import sys
from datetime import datetime, timedelta
from itertools import chain
from pathlib import Path


SCRIPT_DIR = Path(__file__).resolve().parent
MODEL_FILE = SCRIPT_DIR.parent / "logic1.mo"
MOS_FILE = SCRIPT_DIR / "run_logic1.mos"
LOG_FILE = SCRIPT_DIR / "openmodelica_run.log"
RAW_PREFIX = "logic1_raw"
RAW_CSV = SCRIPT_DIR / f"{RAW_PREFIX}_res.csv"
FINAL_CSV = SCRIPT_DIR / "logic1_results.csv"

DEFAULT_OMC = Path(r"C:\Program Files\OpenModelica1.27.0-64bit\bin\omc.exe")
DEFAULT_START_TIME = 13046400.0
DEFAULT_STOP_TIME = 13651200.0
DEFAULT_STEP_SECONDS = 300.0
DEFAULT_TOLERANCE = 1e-6

KW_PER_TR = 3.5168525
WATER_CP_KJ_PER_KGK = 4.2
WATER_DENSITY_KG_PER_M3 = 1000.0
PUMP_EFFICIENCY = 0.70
CHW_PUMP_DP_PA = 325474.0
CW_PUMP_DP_PA = 214992.0
COOLING_TOWER_FAN_NOMINAL_KW = 6.0
MIN_ACTUAL_COOLING_TR_FOR_PERFORMANCE = 5.0
SYNTHETIC_YEAR_START = datetime(2001, 1, 1)


VARIABLE_FILTER = (
    r".*"
)
OLD_VARIABLE_FILTER = (
    r"time|TOut\.T|weaBus\.TDryBul|weaData\..*TDryBul.*|"
    r"QSou\.Q_flow|ramp\.y|roomCoolingDemand|coilCooling|chiller1EvaporatorCooling|chiller2EvaporatorCooling|cooCoi\.Q1_flow|chi\.Q2_flow|chi2\.Q2_flow|TRooAir\.T|vol\.T|chillerStagingCtrl\..*|"
    r"chi\.on|chi2\.on|chi\.P|chi2\.P|chi\.P.*|chi2\.P.*|"
    r"TCHWChi1In\.(T|m_flow)|TCHWChi1Out\.(T|m_flow)|"
    r"TCHWChi2In\.(T|m_flow)|TCHWChi2Out\.(T|m_flow)|"
    r"TCWEntTow\.(T|m_flow)|TCWLeaTow\.(T|m_flow)|"
    r"TCWEntTow2\.(T|m_flow)|TWCLeaTow2\.(T|m_flow)|"
    r"pumCHW\..*|pumCHW2\..*|pumCW\..*|pumCW2\..*|"
    r"cooTow\..*|cooTow2\..*|"
    r"chwPump1PID\.mCHW_flow|chwPump2PID\.mCHW_flow"
)


FINAL_HEADER = [
    "timestamp",
    "time_s",
    "elapsed_minutes",
    "outdoor_temp_degC",
    "room_demand_kW",
    "room_demand_TR",
    "room_internal_heat_gain_kW",
    "room_internal_heat_gain_TR",
    "room_temperature_degC",
    "coil_cooling_kW",
    "coil_cooling_TR",
    "chiller_1_evaporator_cooling_kW",
    "chiller_1_evaporator_cooling_TR",
    "chiller_2_evaporator_cooling_kW",
    "chiller_2_evaporator_cooling_TR",
    "chiller_evaporator_cooling_kW",
    "chiller_evaporator_cooling_TR",
    "chiller_1_status",
    "chiller_1_inlet_temp_degC",
    "chiller_1_outlet_temp_degC",
    "chiller_1_dT_degC",
    "chiller_1_mass_flow_kg_s",
    "chiller_1_actual_cooling_kW",
    "chiller_1_actual_cooling_TR",
    "chiller_2_status",
    "chiller_2_inlet_temp_degC",
    "chiller_2_outlet_temp_degC",
    "chiller_2_dT_degC",
    "chiller_2_mass_flow_kg_s",
    "chiller_2_actual_cooling_kW",
    "chiller_2_actual_cooling_TR",
    "actual_total_chiller_cooling_kW",
    "actual_total_chiller_cooling_TR",
    "chilled_water_supply_temp_degC",
    "chilled_water_return_temp_degC",
    "chilled_water_deltaT_degC",
    "chilled_water_mass_flow_kg_s",
    "chilled_water_sensor_cooling_kW",
    "chilled_water_sensor_cooling_TR",
    "unmet_cooling_load_kW",
    "unmet_cooling_load_TR",
    "cooling_load_met_percent",
    "cooling_tower_1_heat_extracted_kW",
    "cooling_tower_2_heat_extracted_kW",
    "cooling_tower_total_heat_extracted_kW",
    "chiller_1_power_kW",
    "chiller_2_power_kW",
    "chiller_total_power_kW",
    "chw_pump_1_power_kW",
    "chw_pump_2_power_kW",
    "cw_pump_1_power_kW",
    "cw_pump_2_power_kW",
    "pump_total_power_kW",
    "cooling_tower_fan_total_power_kW",
    "water_side_total_power_kW",
    "chiller_performance_actual_kW_per_TR",
    "plant_performance_actual_kW_per_TR",
    "chiller_performance_room_gain_kW_per_TR",
    "plant_performance_room_gain_kW_per_TR",
    "chiller_1_chwst_setpoint_degC",
    "chiller_2_chwst_setpoint_degC",
    "chiller_1_request_more_chiller",
    "chiller_2_request_more_chiller",
]


SIGNALS = {
    "outdoor_temp": ["TOut.T", "weaBus.TDryBul", "weaData.weaBus.TDryBul"],
    "room_heat_gain": ["QSou.Q_flow", "roomDemandSignal.y", "ramp.y", "QRoo_flow"],
    "room_temperature": ["roomTemperature", "TRooAir.T", "vol.T"],
    "coil_cooling": ["cooCoi.Q1_flow", "coilCooling"],
    "chiller_1_evaporator_cooling": ["chi.Q2_flow", "chiller1EvaporatorCooling"],
    "chiller_2_evaporator_cooling": ["chi2.Q2_flow", "chiller2EvaporatorCooling"],
    "chiller_1_status": ["chillerStagingCtrl.chiller1On", "chi.on"],
    "chiller_2_status": ["chillerStagingCtrl.chiller2On", "chi2.on"],
    "chiller_1_inlet_temp": ["TCHWChi1In.T"],
    "chiller_1_outlet_temp": ["TCHWChi1Out.T"],
    "chiller_2_inlet_temp": ["TCHWChi2In.T"],
    "chiller_2_outlet_temp": ["TCHWChi2Out.T"],
    "chw_supply_temp": ["TCHWEntChi.T"],
    "chw_return_temp": ["TCHWLeaCoi.T"],
    "chw_mass_flow": ["TCHWEntChi.m_flow", "TCHWLeaCoi.m_flow", "cooCoi.m1_flow"],
    "chiller_1_mass_flow": [
        "TCHWChi1In.m_flow",
        "TCHWChi1Out.m_flow",
        "pumCHW.m_flow",
        "pumCHW.m_flow_actual",
        "chwPump1PID.mCHW_flow",
        "pumCHW.m_flow_in",
    ],
    "chiller_2_mass_flow": [
        "TCHWChi2In.m_flow",
        "TCHWChi2Out.m_flow",
        "pumCHW2.m_flow",
        "pumCHW2.m_flow_actual",
        "chwPump2PID.mCHW_flow",
        "pumCHW2.m_flow_in",
    ],
    "tower_1_inlet_temp": ["TCWEntTow.T"],
    "tower_1_outlet_temp": ["TCWLeaTow.T"],
    "tower_2_inlet_temp": ["TCWEntTow2.T"],
    "tower_2_outlet_temp": ["TWCLeaTow2.T"],
    "tower_1_mass_flow": [
        "TCWEntTow.m_flow",
        "TCWLeaTow.m_flow",
        "pumCW.m_flow",
        "pumCW.m_flow_actual",
        "pumCW.m_flow_in",
    ],
    "tower_2_mass_flow": [
        "TCWEntTow2.m_flow",
        "TWCLeaTow2.m_flow",
        "pumCW2.m_flow",
        "pumCW2.m_flow_actual",
        "pumCW2.m_flow_in",
    ],
    "chiller_1_power": ["chi.P", "chi.PEle", "chi.PCom", "chi.PCompressor"],
    "chiller_2_power": ["chi2.P", "chi2.PEle", "chi2.PCom", "chi2.PCompressor"],
    "chw_pump_1_power": ["pumCHW.P", "pumCHW.PEle", "pumCHW.WFlo", "pumCHW.PSha"],
    "chw_pump_2_power": ["pumCHW2.P", "pumCHW2.PEle", "pumCHW2.WFlo", "pumCHW2.PSha"],
    "cw_pump_1_power": ["pumCW.P", "pumCW.PEle", "pumCW.WFlo", "pumCW.PSha"],
    "cw_pump_2_power": ["pumCW2.P", "pumCW2.PEle", "pumCW2.WFlo", "pumCW2.PSha"],
    "tower_1_fan_power": ["cooTow.PFan", "cooTow.P", "cooTow.PFan_flow"],
    "tower_2_fan_power": ["cooTow2.PFan", "cooTow2.P", "cooTow2.PFan_flow"],
    "tower_1_fan_signal": ["cooTow.y", "chillerStagingCtrl.yChiller1"],
    "tower_2_fan_signal": ["cooTow2.y", "chillerStagingCtrl.yChiller2"],
    "chiller_1_chwst_setpoint": ["chi.TSet", "chiTSet.y"],
    "chiller_2_chwst_setpoint": ["chi2.TSet", "chiTSet2.y"],
    "chiller_1_request_more_chiller": ["chwPump1PID.requestMoreChiller"],
    "chiller_2_request_more_chiller": ["chwPump2PID.requestMoreChiller"],
}


def modelica_path(path: Path) -> str:
    return path.resolve().as_posix()


def find_omc(user_value: str | None) -> Path:
    candidates: list[Path] = []
    if user_value:
        candidates.append(Path(user_value))
    if os.environ.get("OMC_PATH"):
        candidates.append(Path(os.environ["OMC_PATH"]))
    if shutil.which("omc"):
        candidates.append(Path(shutil.which("omc")))
    candidates.append(DEFAULT_OMC)

    for candidate in candidates:
        if candidate.is_file():
            return candidate

    searched = "\n".join(f"  - {candidate}" for candidate in candidates)
    raise FileNotFoundError("OpenModelica compiler was not found. Checked:\n" + searched)


def write_mos(args: argparse.Namespace) -> None:
    intervals = args.intervals
    if intervals is None:
        intervals = max(1, int(round((args.stop_time - args.start_time) / args.step_seconds)))

    mos_text = f"""cd(\"{modelica_path(SCRIPT_DIR)}\");
loadModel(Modelica, {{\"3.2.2\"}});
loadModel(Buildings, {{\"6.0.0\"}});
loadFile(\"{modelica_path(MODEL_FILE)}\");
simulate(
  logic1,
  startTime = {args.start_time:g},
  stopTime = {args.stop_time:g},
  numberOfIntervals = {intervals},
  tolerance = {args.tolerance:g},
  outputFormat = \"csv\",
  fileNamePrefix = \"{RAW_PREFIX}\",
  variableFilter = \"{VARIABLE_FILTER.replace(chr(92), chr(92) + chr(92))}\"
);
getErrorString();
"""
    MOS_FILE.write_text(mos_text, encoding="utf-8")


def run_openmodelica(omc: Path) -> Path:
    completed = subprocess.run(
        [str(omc), str(MOS_FILE)],
        cwd=str(SCRIPT_DIR),
        text=True,
        capture_output=True,
    )
    output = completed.stdout + completed.stderr
    result_file = result_file_from_output(output) or RAW_CSV

    LOG_FILE.write_text(
        "COMMAND\n=======\n"
        + f"{omc} {MOS_FILE}\n\n"
        + "RETURN CODE\n===========\n"
        + f"{completed.returncode}\n\n"
        + "STDOUT\n======\n"
        + completed.stdout
        + "\nSTDERR\n======\n"
        + completed.stderr,
        encoding="utf-8",
    )

    if (
        completed.returncode != 0
        or "Simulation execution failed" in output
        or re.search(r'resultFile\s*=\s*""', output)
        or not Path(result_file).is_file()
    ):
        raise RuntimeError(
            "OpenModelica did not produce the raw CSV result. "
            f"See {LOG_FILE} for details."
        )

    return Path(result_file)


def result_file_from_output(output: str) -> Path | None:
    match = re.search(r'resultFile\s*=\s*"([^"]+)"', output)
    if match:
        return Path(match.group(1))
    return None


def open_modelica_csv(path: Path):
    with path.open("r", encoding="utf-8-sig", newline="") as handle:
        reader = csv.reader(handle)
        header = None
        for row in reader:
            if row and row[0].strip().strip('"') == "time":
                header = [cell.strip().strip('"') for cell in row]
                break
        if header is None:
            raise ValueError(f"Could not find a CSV header row in {path}")
        for row in reader:
            if not row:
                continue
            values = [cell.strip().strip('"') for cell in row]
            if len(values) < len(header):
                values.extend([""] * (len(header) - len(values)))
            yield dict(zip(header, values))


def read_header(path: Path) -> list[str]:
    with path.open("r", encoding="utf-8-sig", newline="") as handle:
        reader = csv.reader(handle)
        for row in reader:
            if row and row[0].strip().strip('"') == "time":
                return [cell.strip().strip('"') for cell in row]
    raise ValueError(f"Could not find a CSV header row in {path}")


def choose_signals(headers: list[str]) -> dict[str, str | None]:
    available = set(headers)
    return {
        key: next((candidate for candidate in candidates if candidate in available), None)
        for key, candidates in SIGNALS.items()
    }


def parse_float(value: str | None, default: float = 0.0) -> float:
    if value is None or value == "":
        return default
    lowered = value.lower()
    if lowered == "true":
        return 1.0
    if lowered == "false":
        return 0.0
    try:
        return float(value)
    except ValueError:
        return default


def get_value(row: dict[str, str], selected: dict[str, str | None], key: str, default: float = 0.0) -> float:
    return parse_float(row.get(selected.get(key)), default)


def temperature_deg_c(value: float) -> float:
    return value - 273.15 if value > 150.0 else value


def power_kw(value: float) -> float:
    return value / 1000.0


def status_text(value: float) -> str:
    return "on" if value >= 0.5 else "off"


def flag_text(value: float) -> str:
    return "yes" if value >= 0.5 else "no"


def safe_ratio(numerator: float, denominator: float, min_denominator: float = 1e-9) -> float:
    if abs(denominator) < min_denominator:
        return math.nan
    return numerator / denominator


def pump_power_from_flow_kw(mass_flow_kg_s: float, pressure_drop_pa: float) -> float:
    volume_flow_m3_s = abs(mass_flow_kg_s) / WATER_DENSITY_KG_PER_M3
    return pressure_drop_pa * volume_flow_m3_s / PUMP_EFFICIENCY / 1000.0


def tower_heat_kw(mass_flow_kg_s: float, inlet_temp_c: float, outlet_temp_c: float) -> float:
    heat_kw = abs(mass_flow_kg_s) * WATER_CP_KJ_PER_KGK * (inlet_temp_c - outlet_temp_c)
    return max(0.0, heat_kw)


def chiller_cooling_kw(
    mass_flow_kg_s: float,
    inlet_temp_c: float,
    outlet_temp_c: float,
    status: float,
) -> float:
    if status < 0.5 or abs(mass_flow_kg_s) < 1e-9:
        return 0.0
    cooling_kw = abs(mass_flow_kg_s) * WATER_CP_KJ_PER_KGK * (inlet_temp_c - outlet_temp_c)
    return max(0.0, cooling_kw)


def evaporator_cooling_kw(value_w: float) -> float:
    value_kw = power_kw(value_w)
    return max(0.0, -value_kw if value_kw < 0 else value_kw)


def chilled_water_sensor_cooling_kw(mass_flow_kg_s: float, return_temp_c: float, supply_temp_c: float) -> float:
    return max(0.0, abs(mass_flow_kg_s) * WATER_CP_KJ_PER_KGK * (return_temp_c - supply_temp_c))


def round_value(value: float | str) -> float | str:
    if isinstance(value, str):
        return value
    if math.isnan(value) or math.isinf(value):
        return ""
    return round(value, 6)


def append_log(text: str) -> None:
    with LOG_FILE.open("a", encoding="utf-8") as handle:
        handle.write("\n" + text)


def export_clean_csv(raw_csv: Path, final_csv: Path, start_time: float, stop_time: float, step_seconds: float) -> int:
    headers = read_header(raw_csv)
    selected = choose_signals(headers)
    missing_required = [
        key
        for key in [
            "outdoor_temp",
            "room_heat_gain",
            "room_temperature",
            "coil_cooling",
            "chiller_1_evaporator_cooling",
            "chiller_2_evaporator_cooling",
            "chiller_1_inlet_temp",
            "chiller_1_outlet_temp",
            "chiller_2_inlet_temp",
            "chiller_2_outlet_temp",
            "chw_supply_temp",
            "chw_return_temp",
            "chw_mass_flow",
            "chiller_1_mass_flow",
            "chiller_2_mass_flow",
            "chiller_1_power",
            "chiller_2_power",
        ]
        if selected.get(key) is None
    ]
    if missing_required:
        raise RuntimeError(
            "The raw CSV is missing required signals: "
            + ", ".join(missing_required)
            + f". See {LOG_FILE} and raw file {raw_csv}."
        )

    optional_missing = sorted(key for key, value in selected.items() if value is None)
    raw_rows = list(open_modelica_csv(raw_csv))
    if not raw_rows:
        raise RuntimeError(f"The raw CSV has no data rows: {raw_csv}")
    first_raw_time = parse_float(raw_rows[0].get("time"), math.nan)
    last_raw_time = parse_float(raw_rows[-1].get("time"), math.nan)
    time_tolerance = max(1e-6, step_seconds / 2.0)
    if (
        math.isnan(first_raw_time)
        or math.isnan(last_raw_time)
        or first_raw_time > start_time + time_tolerance
        or last_raw_time < stop_time - time_tolerance
    ):
        raise RuntimeError(
            "Raw OpenModelica CSV time range is incomplete: "
            f"first={first_raw_time}, last={last_raw_time}, expected {start_time} to {stop_time}."
        )
    rows_written = 0
    with final_csv.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.writer(handle)
        writer.writerow(FINAL_HEADER)
        for row in raw_rows:
            time_s = parse_float(row.get("time"))
            elapsed_minutes = (time_s - start_time) / 60.0
            timestamp = SYNTHETIC_YEAR_START + timedelta(seconds=time_s)

            outdoor_temp_c = temperature_deg_c(get_value(row, selected, "outdoor_temp"))
            room_heat_gain_kw = power_kw(get_value(row, selected, "room_heat_gain", 844044.6))
            room_heat_gain_tr = room_heat_gain_kw / KW_PER_TR
            room_temperature_c = temperature_deg_c(get_value(row, selected, "room_temperature"))
            coil_cooling_kw = max(0.0, power_kw(get_value(row, selected, "coil_cooling")))
            chiller_1_evaporator_cooling_kw = evaporator_cooling_kw(get_value(row, selected, "chiller_1_evaporator_cooling"))
            chiller_2_evaporator_cooling_kw = evaporator_cooling_kw(get_value(row, selected, "chiller_2_evaporator_cooling"))

            chiller_1_status = get_value(row, selected, "chiller_1_status", 1.0)
            chiller_2_status = get_value(row, selected, "chiller_2_status", 1.0)
            chiller_1_in_c = temperature_deg_c(get_value(row, selected, "chiller_1_inlet_temp"))
            chiller_1_out_c = temperature_deg_c(get_value(row, selected, "chiller_1_outlet_temp"))
            chiller_2_in_c = temperature_deg_c(get_value(row, selected, "chiller_2_inlet_temp"))
            chiller_2_out_c = temperature_deg_c(get_value(row, selected, "chiller_2_outlet_temp"))
            chiller_1_flow = abs(get_value(row, selected, "chiller_1_mass_flow"))
            chiller_2_flow = abs(get_value(row, selected, "chiller_2_mass_flow"))
            chiller_1_dt = chiller_1_in_c - chiller_1_out_c
            chiller_2_dt = chiller_2_in_c - chiller_2_out_c
            chiller_1_cooling_kw = chiller_cooling_kw(
                chiller_1_flow, chiller_1_in_c, chiller_1_out_c, chiller_1_status
            )
            chiller_2_cooling_kw = chiller_cooling_kw(
                chiller_2_flow, chiller_2_in_c, chiller_2_out_c, chiller_2_status
            )
            actual_total_chiller_cooling_kw = chiller_1_cooling_kw + chiller_2_cooling_kw
            chiller_1_cooling_tr = chiller_1_cooling_kw / KW_PER_TR
            chiller_2_cooling_tr = chiller_2_cooling_kw / KW_PER_TR
            actual_total_chiller_cooling_tr = actual_total_chiller_cooling_kw / KW_PER_TR
            chw_supply_temp_c = temperature_deg_c(get_value(row, selected, "chw_supply_temp"))
            chw_return_temp_c = temperature_deg_c(get_value(row, selected, "chw_return_temp"))
            chw_mass_flow = abs(get_value(row, selected, "chw_mass_flow"))
            chw_delta_t_c = chw_return_temp_c - chw_supply_temp_c
            chw_sensor_cooling_kw = chilled_water_sensor_cooling_kw(chw_mass_flow, chw_return_temp_c, chw_supply_temp_c)
            unmet_cooling_load_kw = max(0.0, room_heat_gain_kw - coil_cooling_kw)
            unmet_cooling_load_tr = unmet_cooling_load_kw / KW_PER_TR
            cooling_load_met_percent = 100.0 * min(1.0, coil_cooling_kw / room_heat_gain_kw) if room_heat_gain_kw > 0 else math.nan

            tower_1_in_c = temperature_deg_c(get_value(row, selected, "tower_1_inlet_temp"))
            tower_1_out_c = temperature_deg_c(get_value(row, selected, "tower_1_outlet_temp"))
            tower_2_in_c = temperature_deg_c(get_value(row, selected, "tower_2_inlet_temp"))
            tower_2_out_c = temperature_deg_c(get_value(row, selected, "tower_2_outlet_temp"))
            tower_1_flow = get_value(row, selected, "tower_1_mass_flow")
            tower_2_flow = get_value(row, selected, "tower_2_mass_flow")
            tower_1_heat_kw = tower_heat_kw(tower_1_flow, tower_1_in_c, tower_1_out_c)
            tower_2_heat_kw = tower_heat_kw(tower_2_flow, tower_2_in_c, tower_2_out_c)
            tower_total_heat_kw = tower_1_heat_kw + tower_2_heat_kw

            chiller_1_power_kw = max(0.0, power_kw(get_value(row, selected, "chiller_1_power")))
            chiller_2_power_kw = max(0.0, power_kw(get_value(row, selected, "chiller_2_power")))
            chiller_total_power_kw = chiller_1_power_kw + chiller_2_power_kw

            chw_pump_1_power_kw = power_or_estimate(
                row, selected, "chw_pump_1_power", chiller_1_flow, CHW_PUMP_DP_PA
            )
            chw_pump_2_power_kw = power_or_estimate(
                row, selected, "chw_pump_2_power", chiller_2_flow, CHW_PUMP_DP_PA
            )
            cw_pump_1_power_kw = power_or_estimate(
                row, selected, "cw_pump_1_power", tower_1_flow, CW_PUMP_DP_PA
            )
            cw_pump_2_power_kw = power_or_estimate(
                row, selected, "cw_pump_2_power", tower_2_flow, CW_PUMP_DP_PA
            )
            pump_total_power_kw = (
                chw_pump_1_power_kw
                + chw_pump_2_power_kw
                + cw_pump_1_power_kw
                + cw_pump_2_power_kw
            )

            tower_fan_total_power_kw = (
                tower_fan_power(row, selected, "tower_1_fan_power", "tower_1_fan_signal")
                + tower_fan_power(row, selected, "tower_2_fan_power", "tower_2_fan_signal")
            )
            water_side_total_power_kw = (
                chiller_total_power_kw + pump_total_power_kw + tower_fan_total_power_kw
            )
            chiller_1_chwst_setpoint_c = temperature_deg_c(
                get_value(row, selected, "chiller_1_chwst_setpoint", 280.15)
            )
            chiller_2_chwst_setpoint_c = temperature_deg_c(
                get_value(row, selected, "chiller_2_chwst_setpoint", 280.15)
            )
            chiller_1_request_more_chiller = flag_text(
                get_value(row, selected, "chiller_1_request_more_chiller", 0.0)
            )
            chiller_2_request_more_chiller = flag_text(
                get_value(row, selected, "chiller_2_request_more_chiller", 0.0)
            )

            writer.writerow(
                [
                    timestamp.isoformat(sep=" "),
                    *[
                        round_value(value)
                        for value in [
                            time_s,
                            elapsed_minutes,
                            outdoor_temp_c,
                            room_heat_gain_kw,
                            room_heat_gain_tr,
                            room_heat_gain_kw,
                            room_heat_gain_tr,
                            room_temperature_c,
                            coil_cooling_kw,
                            coil_cooling_kw / KW_PER_TR,
                            chiller_1_evaporator_cooling_kw,
                            chiller_1_evaporator_cooling_kw / KW_PER_TR,
                            chiller_2_evaporator_cooling_kw,
                            chiller_2_evaporator_cooling_kw / KW_PER_TR,
                            chiller_1_evaporator_cooling_kw + chiller_2_evaporator_cooling_kw,
                            (chiller_1_evaporator_cooling_kw + chiller_2_evaporator_cooling_kw) / KW_PER_TR,
                        ]
                    ],
                    status_text(chiller_1_status),
                    *[
                        round_value(value)
                        for value in [
                            chiller_1_in_c,
                            chiller_1_out_c,
                            chiller_1_dt,
                            chiller_1_flow,
                            chiller_1_cooling_kw,
                            chiller_1_cooling_tr,
                        ]
                    ],
                    status_text(chiller_2_status),
                    *[
                        round_value(value)
                        for value in [
                            chiller_2_in_c,
                            chiller_2_out_c,
                            chiller_2_dt,
                            chiller_2_flow,
                            chiller_2_cooling_kw,
                            chiller_2_cooling_tr,
                            actual_total_chiller_cooling_kw,
                            actual_total_chiller_cooling_tr,
                            chw_supply_temp_c,
                            chw_return_temp_c,
                            chw_delta_t_c,
                            chw_mass_flow,
                            chw_sensor_cooling_kw,
                            chw_sensor_cooling_kw / KW_PER_TR,
                            unmet_cooling_load_kw,
                            unmet_cooling_load_tr,
                            cooling_load_met_percent,
                            tower_1_heat_kw,
                            tower_2_heat_kw,
                            tower_total_heat_kw,
                            chiller_1_power_kw,
                            chiller_2_power_kw,
                            chiller_total_power_kw,
                            chw_pump_1_power_kw,
                            chw_pump_2_power_kw,
                            cw_pump_1_power_kw,
                            cw_pump_2_power_kw,
                            pump_total_power_kw,
                            tower_fan_total_power_kw,
                            water_side_total_power_kw,
                            safe_ratio(
                                chiller_total_power_kw,
                                actual_total_chiller_cooling_tr,
                                MIN_ACTUAL_COOLING_TR_FOR_PERFORMANCE,
                            ),
                            safe_ratio(
                                water_side_total_power_kw,
                                actual_total_chiller_cooling_tr,
                                MIN_ACTUAL_COOLING_TR_FOR_PERFORMANCE,
                            ),
                            safe_ratio(chiller_total_power_kw, room_heat_gain_tr),
                            safe_ratio(water_side_total_power_kw, room_heat_gain_tr),
                            chiller_1_chwst_setpoint_c,
                            chiller_2_chwst_setpoint_c,
                        ]
                    ],
                    chiller_1_request_more_chiller,
                    chiller_2_request_more_chiller,
                ]
            )
            rows_written += 1

    log_lines = [
        "\nPOSTPROCESS\n===========\n",
        f"Raw CSV:   {raw_csv}\n",
        f"Final CSV: {final_csv}\n",
        f"Rows:      {rows_written}\n",
        "\nSelected raw signals:\n",
    ]
    for key in sorted(selected):
        log_lines.append(f"  {key}: {selected[key] or '[estimated or not used]'}\n")
    if optional_missing:
        log_lines.append("\nOptional missing signals used fallback estimates where needed:\n")
        for key in optional_missing:
            log_lines.append(f"  - {key}\n")
    append_log("".join(log_lines))
    return rows_written


def power_or_estimate(
    row: dict[str, str],
    selected: dict[str, str | None],
    power_key: str,
    mass_flow_kg_s: float,
    pressure_drop_pa: float,
) -> float:
    if selected.get(power_key):
        return max(0.0, power_kw(get_value(row, selected, power_key)))
    return pump_power_from_flow_kw(mass_flow_kg_s, pressure_drop_pa)


def tower_fan_power(
    row: dict[str, str],
    selected: dict[str, str | None],
    power_key: str,
    signal_key: str,
) -> float:
    if selected.get(power_key):
        return max(0.0, power_kw(get_value(row, selected, power_key)))
    signal = max(0.0, min(1.0, get_value(row, selected, signal_key, 1.0)))
    return signal * COOLING_TOWER_FAN_NOMINAL_KW


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Run logic1 with OpenModelica and export logic1_results.csv."
    )
    parser.add_argument("--omc", default=None, help="Path to omc.exe")
    parser.add_argument("--start-time", type=float, default=DEFAULT_START_TIME)
    parser.add_argument("--stop-time", type=float, default=DEFAULT_STOP_TIME)
    parser.add_argument("--step-seconds", type=float, default=DEFAULT_STEP_SECONDS)
    parser.add_argument("--intervals", type=int, default=None)
    parser.add_argument("--tolerance", type=float, default=DEFAULT_TOLERANCE)
    parser.add_argument(
        "--postprocess-only",
        action="store_true",
        help="Skip OpenModelica and rebuild logic1_results.csv from the raw CSV.",
    )
    args = parser.parse_args()

    try:
        if not MODEL_FILE.is_file():
            raise FileNotFoundError(f"Could not find model file: {MODEL_FILE}")

        write_mos(args)
        if args.postprocess_only:
            raw_csv = RAW_CSV
            if not raw_csv.is_file():
                raise FileNotFoundError(f"Could not find raw CSV: {raw_csv}")
        else:
            omc = find_omc(args.omc)
            raw_csv = run_openmodelica(omc)

        rows = export_clean_csv(raw_csv, FINAL_CSV, args.start_time, args.stop_time, args.step_seconds)
        print(f"OpenModelica script: {MOS_FILE}")
        print(f"Run log:              {LOG_FILE}")
        print(f"Raw result CSV:       {raw_csv}")
        print(f"Final result CSV:     {FINAL_CSV}")
        print(f"Rows written:         {rows}")
        return 0
    except Exception as exc:
        LOG_FILE.write_text(f"ERROR\n=====\n{exc}\n", encoding="utf-8")
        print(f"Error: {exc}")
        print(f"Run log: {LOG_FILE}")
        return 1


if __name__ == "__main__":
    sys.exit(main())
