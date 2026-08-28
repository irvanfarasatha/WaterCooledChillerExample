# logic1 Results

This folder is for running `logic1.mo` and exporting the cleaned CSV result.

All three Trial_Final logics use the same ramped room demand, peaking at approximately 240 TR, with two equal 150 TR chillers.

Main files:

- `run_logic1.mos` - OpenModelica command script.
- `run_logic1.ps1` - runs OpenModelica, writes the log, and converts raw output to the final CSV.
- `run_logic1.py` - optional Python version of the same workflow, if Python is available.
- `update_csv.py` - easy-to-find Python launcher for refreshing the CSV.
- `openmodelica_run.log` - created when the run starts; contains run/debug text.
- `logic1_results.csv` - final analysis table.

Recommended command from the repository root, if Python is available:

```powershell
python "Trial_Final\logic 1\update_csv.py"
```

Direct PowerShell command:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Trial_Final\logic 1\run_logic1.ps1"
```

To rebuild only `logic1_results.csv` from the existing raw OpenModelica CSV:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Trial_Final\logic 1\run_logic1.ps1" -PostprocessOnly
```

The final CSV separates the heat terms:

- `room_internal_heat_gain_kW` / `room_internal_heat_gain_TR` comes from the room heat source, currently `QSou.Q_flow`.
- `actual_total_chiller_cooling_kW` / `actual_total_chiller_cooling_TR` is calculated from chilled-water flow and chiller inlet-outlet dT.
- `unmet_cooling_load_kW` / `unmet_cooling_load_TR` and `cooling_load_met_percent` report capacity shortfall and demand coverage.

The actual chiller cooling can differ from the room heat gain during startup, low-load periods, thermal storage, outdoor heat exchange, and control transients. Actual-performance columns are left blank when actual chiller cooling is below 5 TR, because kW/TR is not meaningful when the denominator is very small.

The final CSV excludes AHU/supply/return air fan power from plant performance. The water-side plant power includes chiller power, chilled-water pumps, condenser-water pumps, and cooling tower fan power.

Chiller staging is handled in `logic1.mo` by `chillerStagingCtrl`. Chiller 1 is the lead chiller; chiller 2 is enabled only when the room heat gain used for staging is above `chiller1Capacity_TR`. Change `chillerCapacity_TR`, `chiller1Capacity_TR`, or `chiller2Capacity_TR` near the top of `logic1.mo` if you want a different TR capacity later.

OpenModelica may also leave `logic1_raw_*` compile files in this folder. The main files to use are `run_logic1.mos`, `openmodelica_run.log`, and `logic1_results.csv`.
