# logic3 Results

This folder is for running `logic3.mo` and exporting the cleaned CSV result.

All three Trial_Final logics use the same ramped room demand, peaking at approximately 240 TR, with two equal 150 TR chillers.

`logic3` combines the two control strategies with the priority shown in the algorithm:

- Each enabled chiller first modulates its chilled-water mass flow between `mCHWMin` and `mCHWMax` to maintain a 5 degC return-to-supply temperature difference.
- When flow reaches its minimum and the 5 degC target is still not met, `CombinedChilledWaterControl` resets CHWST to hold CHWRT near `TCHWRTSet` (default 12 degC), down to `TChiSetMin` (default 7 degC).
- Chiller 1 is the lead chiller. Chiller 2 is staged on when the room load exceeds chiller 1 capacity, using the existing hysteresis controller.
- Flow and temperature commands are smoothed with first-order lags.

All the parameters above live at the top of `logic3.mo` and are easy to change, in particular `TChiSetMin` (the "smallest CHWST allowed") and `TCHWRTSet` (the CHWRT target).

Main files:

- `run_logic3.mos` - OpenModelica command script.
- `run_logic3.ps1` - runs OpenModelica, writes the log, and converts raw output to the final CSV.
- `run_logic3.py` - optional Python version of the same workflow, if Python is available.
- `update_csv.py` - easy-to-find Python launcher for refreshing the CSV.
- `openmodelica_run.log` - created when the run starts; contains run/debug text.
- `logic3_results.csv` - final analysis table.
- `logic3_charts.ipynb` - notebook that plots the results, including the CHWST reset behavior.

Recommended command from the repository root, if Python is available:

```powershell
python "Trial_Final\logic3\update_csv.py"
```

Direct PowerShell command:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Trial_Final\logic3\run_logic3.ps1"
```

To rebuild only `logic3_results.csv` from the existing raw OpenModelica CSV:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Trial_Final\logic3\run_logic3.ps1" -PostprocessOnly
```

The final CSV has the same columns as `logic1`'s results (see `Trial_Final\logic 1\README.md` for the definitions), plus four columns specific to `logic3`:

- `chiller_1_chwst_setpoint_degC` / `chiller_2_chwst_setpoint_degC` - the commanded CHWST setpoint fed to each chiller (`chi.TSet` / `chi2.TSet`). Compare against `chiller_1_outlet_temp_degC` / `chiller_2_outlet_temp_degC` to see how closely the chiller tracks its setpoint, and against `chiller_1_inlet_temp_degC` / `chiller_2_inlet_temp_degC` (the CHWRT) to see how close CHWRT is being held to `TCHWRTSet` (12 degC by default).
- `chiller_1_request_more_chiller` / `chiller_2_request_more_chiller` - "yes"/"no" flag, true when that chiller's CHWST is pinned at its floor (`TChiSetMin`) and CHWRT is still above target.

`actual_total_chiller_cooling_kW` / `actual_total_chiller_cooling_TR` is computed directly from measured chilled-water flow and chiller inlet-outlet dT (`Q = m_dot * cp * dT`), independent of the combined control logic.

Chiller staging is unchanged from `logic1`: handled by `chillerStagingCtrl` in `logic3.mo`, based on room heat gain thresholds (`chiller1Capacity_TR`, `chiller2Capacity_TR`, `chillerStageDeadband_TR`, `chillerMinimumLoad_TR`).

OpenModelica may also leave `logic3_raw_*` compile files in this folder. The main files to use are `run_logic3.mos`, `openmodelica_run.log`, and `logic3_results.csv`.

