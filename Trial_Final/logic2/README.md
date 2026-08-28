# logic2 Results

This folder is for running `logic2.mo` and exporting the cleaned CSV result.

All three Trial_Final logics use the same ramped room demand, peaking at approximately 240 TR, with two equal 150 TR chillers.

`logic2` is a variant of `logic1` with a different chilled-water control strategy:

- The CHW pumps no longer run a flow-modulating PID. Each pump runs at a **constant maximum flow** (`mCHWPumpMax`, top of `logic2.mo`) whenever its chiller is enabled, and zero when disabled.
- The chiller leaving water temperature setpoint (CHWST) is **no longer fixed at 5 degC**. Instead a new `ChillerLeavingTempPID` block (`chwstCtrl1` / `chwstCtrl2` in `logic2.mo`) resets CHWST every sample period to hold the CHW return temperature (CHWRT) near a target (`TCHWRTSet`, default 12 degC):
  - If CHWRT is above target (high load), CHWST is lowered (more cooling), down to a floor `TChiSetMin` (default 7 degC).
  - If CHWRT is below target (low load), CHWST is raised (less cooling), up to a ceiling `TChiSetMax` (default equal to `TCHWRTSet`).
  - If CHWST is already at its floor and CHWRT is still above target, the controller's `requestMoreChiller` output goes true (informational; chiller staging itself is still handled by `chillerStagingCtrl`, unchanged from `logic1`).
- The response is smoothed with a first-order lag (`tempResponseTime`) so CHWST moves gradually rather than in discrete steps.

All the parameters above live at the top of `logic2.mo` and are easy to change, in particular `TChiSetMin` (the "smallest CHWST allowed") and `TCHWRTSet` (the CHWRT target).

Main files:

- `run_logic2.mos` - OpenModelica command script.
- `run_logic2.ps1` - runs OpenModelica, writes the log, and converts raw output to the final CSV.
- `run_logic2.py` - optional Python version of the same workflow, if Python is available.
- `update_csv.py` - easy-to-find Python launcher for refreshing the CSV.
- `openmodelica_run.log` - created when the run starts; contains run/debug text.
- `logic2_results.csv` - final analysis table.
- `logic2_charts.ipynb` - notebook that plots the results, including the CHWST reset behavior.

Recommended command from the repository root, if Python is available:

```powershell
python "Trial_Final\logic2\update_csv.py"
```

Direct PowerShell command:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Trial_Final\logic2\run_logic2.ps1"
```

To rebuild only `logic2_results.csv` from the existing raw OpenModelica CSV:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Trial_Final\logic2\run_logic2.ps1" -PostprocessOnly
```

The final CSV has the same columns as `logic1`'s results (see `Trial_Final\logic 1\README.md` for the definitions), plus four columns specific to `logic2`:

- `chiller_1_chwst_setpoint_degC` / `chiller_2_chwst_setpoint_degC` - the commanded CHWST setpoint fed to each chiller (`chi.TSet` / `chi2.TSet`). Compare against `chiller_1_outlet_temp_degC` / `chiller_2_outlet_temp_degC` to see how closely the chiller tracks its setpoint, and against `chiller_1_inlet_temp_degC` / `chiller_2_inlet_temp_degC` (the CHWRT) to see how close CHWRT is being held to `TCHWRTSet` (12 degC by default).
- `chiller_1_request_more_chiller` / `chiller_2_request_more_chiller` - "yes"/"no" flag, true when that chiller's CHWST is pinned at its floor (`TChiSetMin`) and CHWRT is still above target.

`actual_total_chiller_cooling_kW` / `actual_total_chiller_cooling_TR` is still computed directly from measured chilled-water flow and chiller inlet-outlet dT (`Q = m_dot * cp * dT`), independent of the CHWST reset logic - the flow is now constant/max rather than PID-varied, but the calculation itself is unchanged from `logic1`.

Chiller staging is unchanged from `logic1`: handled by `chillerStagingCtrl` in `logic2.mo`, based on room heat gain thresholds (`chiller1Capacity_TR`, `chiller2Capacity_TR`, `chillerStageDeadband_TR`, `chillerMinimumLoad_TR`).

OpenModelica may also leave `logic2_raw_*` compile files in this folder. The main files to use are `run_logic2.mos`, `openmodelica_run.log`, and `logic2_results.csv`.
