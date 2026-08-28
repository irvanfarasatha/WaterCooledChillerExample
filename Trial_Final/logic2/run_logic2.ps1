param(
    [string]$OmcPath = "C:\Program Files\OpenModelica1.27.0-64bit\bin\omc.exe",
    [double]$StartTime = 13046400,
    [double]$StopTime = 13651200,
    [double]$StepSeconds = 300,
    [double]$Tolerance = 1e-6,
    [switch]$PostprocessOnly
)

$ErrorActionPreference = "Stop"

$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$ModelFile = Join-Path (Split-Path -Parent $ScriptDir) "logic2.mo"
$MosFile = Join-Path $ScriptDir "run_logic2.mos"
$LogFile = Join-Path $ScriptDir "openmodelica_run.log"
$RawPrefix = "logic2_raw"
$RawCsv = Join-Path $ScriptDir "$($RawPrefix)_res.csv"
$FinalCsv = Join-Path $ScriptDir "logic2_results.csv"

$KwPerTR = 3.5168525
$WaterCpKJPerKgK = 4.2
$WaterDensityKgPerM3 = 1000.0
$PumpEfficiency = 0.70
$ChwPumpDpPa = 325474.0
$CwPumpDpPa = 214992.0
$CoolingTowerFanNominalKW = 6.0
$MinActualCoolingTRForPerformance = 5.0
$SyntheticYearStart = [datetime]"2001-01-01T00:00:00"

$VariableFilter = ".*"

$Signals = @{
    outdoor_temp = @("TOut.T", "weaBus.TDryBul", "weaData.weaBus.TDryBul")
    room_heat_gain = @("QSou.Q_flow", "roomDemandSignal.y", "ramp.y", "QRoo_flow")
    room_temperature = @("roomTemperature", "TRooAir.T", "vol.T")
    coil_cooling = @("cooCoi.Q1_flow", "coilCooling")
    chiller_1_evaporator_cooling = @("chi.Q2_flow", "chiller1EvaporatorCooling")
    chiller_2_evaporator_cooling = @("chi2.Q2_flow", "chiller2EvaporatorCooling")
    chiller_1_status = @("chillerStagingCtrl.chiller1On", "chi.on")
    chiller_2_status = @("chillerStagingCtrl.chiller2On", "chi2.on")
    chiller_1_inlet_temp = @("TCHWChi1In.T")
    chiller_1_outlet_temp = @("TCHWChi1Out.T")
    chiller_2_inlet_temp = @("TCHWChi2In.T")
    chiller_2_outlet_temp = @("TCHWChi2Out.T")
    chiller_1_mass_flow = @("TCHWChi1In.m_flow", "TCHWChi1Out.m_flow", "pumCHW.m_flow", "pumCHW.m_flow_actual", "pumCHW.m_flow_in")
    chiller_2_mass_flow = @("TCHWChi2In.m_flow", "TCHWChi2Out.m_flow", "pumCHW2.m_flow", "pumCHW2.m_flow_actual", "pumCHW2.m_flow_in")
    chw_supply_temp = @("TCHWEntChi.T")
    chw_return_temp = @("TCHWLeaCoi.T")
    chw_mass_flow = @("TCHWEntChi.m_flow", "TCHWLeaCoi.m_flow", "cooCoi.m1_flow")
    tower_1_inlet_temp = @("TCWEntTow.T")
    tower_1_outlet_temp = @("TCWLeaTow.T")
    tower_2_inlet_temp = @("TCWEntTow2.T")
    tower_2_outlet_temp = @("TWCLeaTow2.T")
    tower_1_mass_flow = @("TCWEntTow.m_flow", "TCWLeaTow.m_flow", "pumCW.m_flow", "pumCW.m_flow_actual", "pumCW.m_flow_in")
    tower_2_mass_flow = @("TCWEntTow2.m_flow", "TWCLeaTow2.m_flow", "pumCW2.m_flow", "pumCW2.m_flow_actual", "pumCW2.m_flow_in")
    chiller_1_power = @("chi.P", "chi.PEle", "chi.PCom", "chi.PCompressor")
    chiller_2_power = @("chi2.P", "chi2.PEle", "chi2.PCom", "chi2.PCompressor")
    chw_pump_1_power = @("pumCHW.P", "pumCHW.PEle", "pumCHW.WFlo", "pumCHW.PSha")
    chw_pump_2_power = @("pumCHW2.P", "pumCHW2.PEle", "pumCHW2.WFlo", "pumCHW2.PSha")
    cw_pump_1_power = @("pumCW.P", "pumCW.PEle", "pumCW.WFlo", "pumCW.PSha")
    cw_pump_2_power = @("pumCW2.P", "pumCW2.PEle", "pumCW2.WFlo", "pumCW2.PSha")
    tower_1_fan_power = @("cooTow.PFan", "cooTow.P", "cooTow.PFan_flow")
    tower_2_fan_power = @("cooTow2.PFan", "cooTow2.P", "cooTow2.PFan_flow")
    tower_1_fan_signal = @("cooTow.y", "chillerStagingCtrl.yChiller1")
    tower_2_fan_signal = @("cooTow2.y", "chillerStagingCtrl.yChiller2")
    chiller_1_chwst_setpoint = @("chi.TSet", "chwstCtrl1.TCHWSTSet")
    chiller_2_chwst_setpoint = @("chi2.TSet", "chwstCtrl2.TCHWSTSet")
    chiller_1_request_more_chiller = @("chwstCtrl1.requestMoreChiller")
    chiller_2_request_more_chiller = @("chwstCtrl2.requestMoreChiller")
}

function ConvertTo-ModelicaPath($Path) {
    return ((Resolve-Path -LiteralPath $Path).Path -replace "\\", "/")
}

function Write-MosFile {
    $intervals = [Math]::Max(1, [int][Math]::Round(($StopTime - $StartTime) / $StepSeconds))
    $scriptPath = ConvertTo-ModelicaPath $ScriptDir
    $modelPath = ConvertTo-ModelicaPath $ModelFile
    $mosText = @"
cd("$scriptPath");
loadModel(Modelica, {"3.2.2"});
loadModel(Buildings, {"6.0.0"});
loadFile("$modelPath");
simulate(
  logic2,
  startTime = $StartTime,
  stopTime = $StopTime,
  numberOfIntervals = $intervals,
  tolerance = $Tolerance,
  outputFormat = "csv",
  fileNamePrefix = "$RawPrefix",
  variableFilter = "$VariableFilter"
);
getErrorString();
"@
    Set-Content -LiteralPath $MosFile -Value $mosText -Encoding UTF8
}

function Select-Signal($Headers, $Candidates) {
    foreach ($candidate in $Candidates) {
        if ($Headers -contains $candidate) {
            return $candidate
        }
    }
    return $null
}

function Split-CsvHeaderLine([string]$Line) {
    if ($Line.StartsWith('"') -and $Line.EndsWith('"')) {
        return [string[]]($Line.Substring(1, $Line.Length - 2) -split '","')
    }
    return [string[]]($Line -split ",")
}

function Get-UniqueHeaders([string[]]$Headers) {
    $counts = @{}
    $uniqueHeaders = @()
    foreach ($header in $Headers) {
        $name = $header
        if ([string]::IsNullOrWhiteSpace($name)) {
            $name = "unnamed"
        }
        if ($counts.ContainsKey($name)) {
            $counts[$name] += 1
            $uniqueHeaders += "${name}__dup$($counts[$name])"
        } else {
            $counts[$name] = 1
            $uniqueHeaders += $name
        }
    }
    return [string[]]$uniqueHeaders
}

function Import-OpenModelicaCsv([string]$Path) {
    $lines = @(Get-Content -LiteralPath $Path)
    if ($lines.Count -lt 2) {
        return [PSCustomObject]@{
            Rows = @()
            Headers = @()
        }
    }
    $headers = Split-CsvHeaderLine $lines[0]
    $uniqueHeaders = Get-UniqueHeaders $headers
    $rows = @($lines | Select-Object -Skip 1 | ConvertFrom-Csv -Header $uniqueHeaders)
    return [PSCustomObject]@{
        Rows = @($rows)
        Headers = @($uniqueHeaders)
    }
}

function ConvertTo-DoubleValue($Value, [double]$Default = 0.0) {
    if ($null -eq $Value -or $Value -eq "") {
        return $Default
    }
    if ($Value -is [bool]) {
        return $(if ($Value) { 1.0 } else { 0.0 })
    }
    $text = [string]$Value
    if ($text.Equals("true", [StringComparison]::OrdinalIgnoreCase)) {
        return 1.0
    }
    if ($text.Equals("false", [StringComparison]::OrdinalIgnoreCase)) {
        return 0.0
    }
    $parsed = 0.0
    if ([double]::TryParse($text, [Globalization.NumberStyles]::Float, [Globalization.CultureInfo]::InvariantCulture, [ref]$parsed)) {
        return $parsed
    }
    return $Default
}

function Get-SelectedValue($Row, $Selected, [string]$Key, [double]$Default = 0.0) {
    $name = $Selected[$Key]
    if ([string]::IsNullOrWhiteSpace($name)) {
        return $Default
    }
    return ConvertTo-DoubleValue ($Row.PSObject.Properties[$name].Value) $Default
}

function ConvertTo-DegC([double]$Value) {
    if ($Value -gt 150.0) {
        return $Value - 273.15
    }
    return $Value
}

function ConvertTo-kW([double]$Value) {
    return $Value / 1000.0
}

function ConvertTo-Status([double]$Value) {
    if ($Value -ge 0.5) {
        return "on"
    }
    return "off"
}

function ConvertTo-Flag([double]$Value) {
    if ($Value -ge 0.5) {
        return "yes"
    }
    return "no"
}

function Get-SafeRatio([double]$Numerator, [double]$Denominator, [double]$MinDenominator = 1e-9) {
    if ([Math]::Abs($Denominator) -lt $MinDenominator) {
        return $null
    }
    return $Numerator / $Denominator
}

function Get-PumpPowerFromFlowKW([double]$MassFlowKgS, [double]$PressureDropPa) {
    $volumeFlowM3S = [Math]::Abs($MassFlowKgS) / $WaterDensityKgPerM3
    return $PressureDropPa * $volumeFlowM3S / $PumpEfficiency / 1000.0
}

function Get-TowerHeatKW([double]$MassFlowKgS, [double]$InletTempC, [double]$OutletTempC) {
    $heatKW = [Math]::Abs($MassFlowKgS) * $WaterCpKJPerKgK * ($InletTempC - $OutletTempC)
    return [Math]::Max(0.0, $heatKW)
}

function Get-ChillerCoolingKW([double]$MassFlowKgS, [double]$InletTempC, [double]$OutletTempC, [double]$Status) {
    if ($Status -lt 0.5 -or [Math]::Abs($MassFlowKgS) -lt 1e-9) {
        return 0.0
    }
    $coolingKW = [Math]::Abs($MassFlowKgS) * $WaterCpKJPerKgK * ($InletTempC - $OutletTempC)
    return [Math]::Max(0.0, $coolingKW)
}

function Get-EvaporatorCoolingKW([double]$CoolingW) {
    return [Math]::Max(0.0, -(ConvertTo-kW $CoolingW))
}

function Get-ChilledWaterSensorCoolingKW([double]$MassFlowKgS, [double]$SupplyTempC, [double]$ReturnTempC) {
    $coolingKW = [Math]::Abs($MassFlowKgS) * $WaterCpKJPerKgK * ($ReturnTempC - $SupplyTempC)
    return [Math]::Max(0.0, $coolingKW)
}

function Get-PowerOrEstimateKW($Row, $Selected, [string]$PowerKey, [double]$MassFlowKgS, [double]$PressureDropPa) {
    if (-not [string]::IsNullOrWhiteSpace($Selected[$PowerKey])) {
        return [Math]::Max(0.0, (ConvertTo-kW (Get-SelectedValue $Row $Selected $PowerKey)))
    }
    return Get-PumpPowerFromFlowKW $MassFlowKgS $PressureDropPa
}

function Get-TowerFanPowerKW($Row, $Selected, [string]$PowerKey, [string]$SignalKey) {
    if (-not [string]::IsNullOrWhiteSpace($Selected[$PowerKey])) {
        return [Math]::Max(0.0, (ConvertTo-kW (Get-SelectedValue $Row $Selected $PowerKey)))
    }
    $signal = Get-SelectedValue $Row $Selected $SignalKey 1.0
    $signal = [Math]::Max(0.0, [Math]::Min(1.0, $signal))
    return $signal * $CoolingTowerFanNominalKW
}

function Round-OrBlank($Value) {
    if ($null -eq $Value) {
        return ""
    }
    return [Math]::Round([double]$Value, 6)
}

function Run-OpenModelica {
    if (-not (Test-Path -LiteralPath $OmcPath -PathType Leaf)) {
        throw "OpenModelica compiler not found at $OmcPath"
    }
    $oldErrorActionPreference = $ErrorActionPreference
    $ErrorActionPreference = "Continue"
    try {
        $output = & $OmcPath $MosFile 2>&1
        $exitCode = $LASTEXITCODE
    } finally {
        $ErrorActionPreference = $oldErrorActionPreference
    }
    $outputText = ($output | Out-String)
    $logText = @"
COMMAND
=======
$OmcPath $MosFile

RETURN CODE
===========
$exitCode

OPENMODELICA OUTPUT
===================
$outputText
"@
    Set-Content -LiteralPath $LogFile -Value $logText -Encoding UTF8
    if ($outputText -match "Simulation execution failed" -or $outputText -match 'resultFile\s*=\s*""') {
        throw "OpenModelica simulation failed. See $LogFile"
    }
    if ($exitCode -ne 0) {
        throw "OpenModelica failed. See $LogFile"
    }
    $match = [regex]::Match($outputText, 'resultFile\s*=\s*"([^"]+)"')
    if ($match.Success) {
        $path = $match.Groups[1].Value
        if (-not [IO.Path]::IsPathRooted($path)) {
            $path = Join-Path $ScriptDir $path
        }
        return $path
    }
    return $RawCsv
}

function Export-CleanCsv($RawResultCsv) {
    if (-not (Test-Path -LiteralPath $RawResultCsv -PathType Leaf)) {
        throw "Raw OpenModelica CSV not found at $RawResultCsv"
    }

    $rawData = Import-OpenModelicaCsv $RawResultCsv
    $rows = @($rawData.Rows)
    if ($rows.Count -eq 0) {
        throw "Raw OpenModelica CSV has no rows: $RawResultCsv"
    }

    $headers = @($rawData.Headers)
    $selected = @{}
    foreach ($key in $Signals.Keys) {
        $selected[$key] = Select-Signal $headers $Signals[$key]
    }

    $required = @(
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
        "chiller_1_mass_flow",
        "chiller_2_mass_flow",
        "chw_supply_temp",
        "chw_return_temp",
        "chw_mass_flow",
        "chiller_1_power",
        "chiller_2_power"
    )
    $missingRequired = @($required | Where-Object { [string]::IsNullOrWhiteSpace($selected[$_]) })
    if ($missingRequired.Count -gt 0) {
        throw ("Raw CSV is missing required signals: " + ($missingRequired -join ", "))
    }

    $timedRows = @(
        $rows |
            ForEach-Object {
                [PSCustomObject]@{
                    Time = ConvertTo-DoubleValue ($_.PSObject.Properties["time"].Value)
                    Row = $_
                }
            } |
            Sort-Object Time
    )
    $firstRawTime = $timedRows[0].Time
    $lastRawTime = $timedRows[$timedRows.Count - 1].Time
    $timeTolerance = [Math]::Max(1e-6, $StepSeconds / 2.0)
    if ($firstRawTime -gt $StartTime + $timeTolerance -or $lastRawTime -lt $StopTime - $timeTolerance) {
        throw "Raw OpenModelica CSV time range is incomplete: first=$firstRawTime, last=$lastRawTime, expected $StartTime to $StopTime"
    }
    $targetCount = [Math]::Max(1, [int][Math]::Round(($StopTime - $StartTime) / $StepSeconds) + 1)
    $rowIndex = 0
    $sampledRows = for ($sampleIndex = 0; $sampleIndex -lt $targetCount; $sampleIndex++) {
        $targetTime = $StartTime + $sampleIndex * $StepSeconds
        while (
            $rowIndex + 1 -lt $timedRows.Count -and
            [Math]::Abs($timedRows[$rowIndex + 1].Time - $targetTime) -le [Math]::Abs($timedRows[$rowIndex].Time - $targetTime)
        ) {
            $rowIndex++
        }
        $timedRows[$rowIndex]
    }

    $cleanRows = foreach ($entry in $sampledRows) {
        $row = $entry.Row
        $timeS = $entry.Time
        $elapsedMinutes = ($timeS - $StartTime) / 60.0
        $timestamp = $SyntheticYearStart.AddSeconds($timeS).ToString("yyyy-MM-dd HH:mm:ss")

        $outdoorTempC = ConvertTo-DegC (Get-SelectedValue $row $selected "outdoor_temp")
        $roomHeatGainKW = ConvertTo-kW (Get-SelectedValue $row $selected "room_heat_gain" 844044.6)
        $roomHeatGainTR = $roomHeatGainKW / $KwPerTR
        $roomTemperatureC = ConvertTo-DegC (Get-SelectedValue $row $selected "room_temperature")
        $coilCoolingKW = [Math]::Max(0.0, (ConvertTo-kW (Get-SelectedValue $row $selected "coil_cooling")))
        $chiller1EvaporatorCoolingKW = Get-EvaporatorCoolingKW (Get-SelectedValue $row $selected "chiller_1_evaporator_cooling")
        $chiller2EvaporatorCoolingKW = Get-EvaporatorCoolingKW (Get-SelectedValue $row $selected "chiller_2_evaporator_cooling")
        $chillerEvaporatorCoolingKW = $chiller1EvaporatorCoolingKW + $chiller2EvaporatorCoolingKW

        $chiller1Status = Get-SelectedValue $row $selected "chiller_1_status" 1.0
        $chiller2Status = Get-SelectedValue $row $selected "chiller_2_status" 1.0
        $chiller1InC = ConvertTo-DegC (Get-SelectedValue $row $selected "chiller_1_inlet_temp")
        $chiller1OutC = ConvertTo-DegC (Get-SelectedValue $row $selected "chiller_1_outlet_temp")
        $chiller2InC = ConvertTo-DegC (Get-SelectedValue $row $selected "chiller_2_inlet_temp")
        $chiller2OutC = ConvertTo-DegC (Get-SelectedValue $row $selected "chiller_2_outlet_temp")
        $chiller1Flow = [Math]::Abs((Get-SelectedValue $row $selected "chiller_1_mass_flow"))
        $chiller2Flow = [Math]::Abs((Get-SelectedValue $row $selected "chiller_2_mass_flow"))
        $chiller1DT = $chiller1InC - $chiller1OutC
        $chiller2DT = $chiller2InC - $chiller2OutC
        $chiller1CoolingKW = Get-ChillerCoolingKW $chiller1Flow $chiller1InC $chiller1OutC $chiller1Status
        $chiller2CoolingKW = Get-ChillerCoolingKW $chiller2Flow $chiller2InC $chiller2OutC $chiller2Status
        $actualTotalChillerCoolingKW = $chiller1CoolingKW + $chiller2CoolingKW
        $chiller1CoolingTR = $chiller1CoolingKW / $KwPerTR
        $chiller2CoolingTR = $chiller2CoolingKW / $KwPerTR
        $actualTotalChillerCoolingTR = $actualTotalChillerCoolingKW / $KwPerTR

        $chwSupplyTempC = ConvertTo-DegC (Get-SelectedValue $row $selected "chw_supply_temp")
        $chwReturnTempC = ConvertTo-DegC (Get-SelectedValue $row $selected "chw_return_temp")
        $chwDeltaTC = $chwReturnTempC - $chwSupplyTempC
        $chwMassFlow = [Math]::Abs((Get-SelectedValue $row $selected "chw_mass_flow"))
        $chwSensorCoolingKW = Get-ChilledWaterSensorCoolingKW $chwMassFlow $chwSupplyTempC $chwReturnTempC

        $tower1InC = ConvertTo-DegC (Get-SelectedValue $row $selected "tower_1_inlet_temp")
        $tower1OutC = ConvertTo-DegC (Get-SelectedValue $row $selected "tower_1_outlet_temp")
        $tower2InC = ConvertTo-DegC (Get-SelectedValue $row $selected "tower_2_inlet_temp")
        $tower2OutC = ConvertTo-DegC (Get-SelectedValue $row $selected "tower_2_outlet_temp")
        $tower1Flow = Get-SelectedValue $row $selected "tower_1_mass_flow"
        $tower2Flow = Get-SelectedValue $row $selected "tower_2_mass_flow"
        $tower1HeatKW = Get-TowerHeatKW $tower1Flow $tower1InC $tower1OutC
        $tower2HeatKW = Get-TowerHeatKW $tower2Flow $tower2InC $tower2OutC
        $towerTotalHeatKW = $tower1HeatKW + $tower2HeatKW

        $chiller1PowerKW = [Math]::Max(0.0, (ConvertTo-kW (Get-SelectedValue $row $selected "chiller_1_power")))
        $chiller2PowerKW = [Math]::Max(0.0, (ConvertTo-kW (Get-SelectedValue $row $selected "chiller_2_power")))
        $chillerTotalPowerKW = $chiller1PowerKW + $chiller2PowerKW

        $chwPump1PowerKW = Get-PowerOrEstimateKW $row $selected "chw_pump_1_power" $chiller1Flow $ChwPumpDpPa
        $chwPump2PowerKW = Get-PowerOrEstimateKW $row $selected "chw_pump_2_power" $chiller2Flow $ChwPumpDpPa
        $cwPump1PowerKW = Get-PowerOrEstimateKW $row $selected "cw_pump_1_power" $tower1Flow $CwPumpDpPa
        $cwPump2PowerKW = Get-PowerOrEstimateKW $row $selected "cw_pump_2_power" $tower2Flow $CwPumpDpPa
        $pumpTotalPowerKW = $chwPump1PowerKW + $chwPump2PowerKW + $cwPump1PowerKW + $cwPump2PowerKW

        $towerFanTotalPowerKW = (
            (Get-TowerFanPowerKW $row $selected "tower_1_fan_power" "tower_1_fan_signal") +
            (Get-TowerFanPowerKW $row $selected "tower_2_fan_power" "tower_2_fan_signal")
        )
        $waterSideTotalPowerKW = $chillerTotalPowerKW + $pumpTotalPowerKW + $towerFanTotalPowerKW

        $chiller1ChwstSetpointC = ConvertTo-DegC (Get-SelectedValue $row $selected "chiller_1_chwst_setpoint" 280.15)
        $chiller2ChwstSetpointC = ConvertTo-DegC (Get-SelectedValue $row $selected "chiller_2_chwst_setpoint" 280.15)
        $chiller1RequestMoreChiller = ConvertTo-Flag (Get-SelectedValue $row $selected "chiller_1_request_more_chiller" 0.0)
        $chiller2RequestMoreChiller = ConvertTo-Flag (Get-SelectedValue $row $selected "chiller_2_request_more_chiller" 0.0)

        $unmetCoolingLoadKW = [Math]::Max(0.0, $roomHeatGainKW - $coilCoolingKW)
        $coolingLoadMetPercent = if ($roomHeatGainKW -gt 0) { 100.0 * [Math]::Min(1.0, $coilCoolingKW / $roomHeatGainKW) } else { [double]::NaN }
        [PSCustomObject][ordered]@{
            timestamp = $timestamp
            time_s = Round-OrBlank $timeS
            elapsed_minutes = Round-OrBlank $elapsedMinutes
            outdoor_temp_degC = Round-OrBlank $outdoorTempC
            room_internal_heat_gain_kW = Round-OrBlank $roomHeatGainKW
            room_internal_heat_gain_TR = Round-OrBlank $roomHeatGainTR
            room_demand_kW = Round-OrBlank $roomHeatGainKW
            room_demand_TR = Round-OrBlank $roomHeatGainTR
            room_temperature_degC = Round-OrBlank $roomTemperatureC
            coil_cooling_kW = Round-OrBlank $coilCoolingKW
            coil_cooling_TR = Round-OrBlank ($coilCoolingKW / $KwPerTR)
            chiller_evaporator_cooling_kW = Round-OrBlank $chillerEvaporatorCoolingKW
            chiller_evaporator_cooling_TR = Round-OrBlank ($chillerEvaporatorCoolingKW / $KwPerTR)
            chiller_1_evaporator_cooling_kW = Round-OrBlank $chiller1EvaporatorCoolingKW
            chiller_1_evaporator_cooling_TR = Round-OrBlank ($chiller1EvaporatorCoolingKW / $KwPerTR)
            chiller_2_evaporator_cooling_kW = Round-OrBlank $chiller2EvaporatorCoolingKW
            chiller_2_evaporator_cooling_TR = Round-OrBlank ($chiller2EvaporatorCoolingKW / $KwPerTR)
            chiller_1_status = ConvertTo-Status $chiller1Status
            chiller_1_inlet_temp_degC = Round-OrBlank $chiller1InC
            chiller_1_outlet_temp_degC = Round-OrBlank $chiller1OutC
            chiller_1_dT_degC = Round-OrBlank $chiller1DT
            chiller_1_mass_flow_kg_s = Round-OrBlank $chiller1Flow
            chiller_1_actual_cooling_kW = Round-OrBlank $chiller1CoolingKW
            chiller_1_actual_cooling_TR = Round-OrBlank $chiller1CoolingTR
            chiller_2_status = ConvertTo-Status $chiller2Status
            chiller_2_inlet_temp_degC = Round-OrBlank $chiller2InC
            chiller_2_outlet_temp_degC = Round-OrBlank $chiller2OutC
            chiller_2_dT_degC = Round-OrBlank $chiller2DT
            chiller_2_mass_flow_kg_s = Round-OrBlank $chiller2Flow
            chiller_2_actual_cooling_kW = Round-OrBlank $chiller2CoolingKW
            chiller_2_actual_cooling_TR = Round-OrBlank $chiller2CoolingTR
            actual_total_chiller_cooling_kW = Round-OrBlank $actualTotalChillerCoolingKW
            actual_total_chiller_cooling_TR = Round-OrBlank $actualTotalChillerCoolingTR
            chilled_water_supply_temp_degC = Round-OrBlank $chwSupplyTempC
            chilled_water_return_temp_degC = Round-OrBlank $chwReturnTempC
            chilled_water_deltaT_degC = Round-OrBlank $chwDeltaTC
            chilled_water_mass_flow_kg_s = Round-OrBlank $chwMassFlow
            chilled_water_sensor_cooling_kW = Round-OrBlank $chwSensorCoolingKW
            chilled_water_sensor_cooling_TR = Round-OrBlank ($chwSensorCoolingKW / $KwPerTR)
            unmet_cooling_load_kW = Round-OrBlank $unmetCoolingLoadKW
            unmet_cooling_load_TR = Round-OrBlank ($unmetCoolingLoadKW / $KwPerTR)
            cooling_load_met_percent = Round-OrBlank $coolingLoadMetPercent
            cooling_tower_1_heat_extracted_kW = Round-OrBlank $tower1HeatKW
            cooling_tower_2_heat_extracted_kW = Round-OrBlank $tower2HeatKW
            cooling_tower_total_heat_extracted_kW = Round-OrBlank $towerTotalHeatKW
            chiller_1_power_kW = Round-OrBlank $chiller1PowerKW
            chiller_2_power_kW = Round-OrBlank $chiller2PowerKW
            chiller_total_power_kW = Round-OrBlank $chillerTotalPowerKW
            chw_pump_1_power_kW = Round-OrBlank $chwPump1PowerKW
            chw_pump_2_power_kW = Round-OrBlank $chwPump2PowerKW
            cw_pump_1_power_kW = Round-OrBlank $cwPump1PowerKW
            cw_pump_2_power_kW = Round-OrBlank $cwPump2PowerKW
            pump_total_power_kW = Round-OrBlank $pumpTotalPowerKW
            cooling_tower_fan_total_power_kW = Round-OrBlank $towerFanTotalPowerKW
            water_side_total_power_kW = Round-OrBlank $waterSideTotalPowerKW
            chiller_performance_actual_kW_per_TR = Round-OrBlank (Get-SafeRatio $chillerTotalPowerKW $actualTotalChillerCoolingTR $MinActualCoolingTRForPerformance)
            plant_performance_actual_kW_per_TR = Round-OrBlank (Get-SafeRatio $waterSideTotalPowerKW $actualTotalChillerCoolingTR $MinActualCoolingTRForPerformance)
            chiller_performance_room_gain_kW_per_TR = Round-OrBlank (Get-SafeRatio $chillerTotalPowerKW $roomHeatGainTR)
            plant_performance_room_gain_kW_per_TR = Round-OrBlank (Get-SafeRatio $waterSideTotalPowerKW $roomHeatGainTR)
            chiller_1_chwst_setpoint_degC = Round-OrBlank $chiller1ChwstSetpointC
            chiller_2_chwst_setpoint_degC = Round-OrBlank $chiller2ChwstSetpointC
            chiller_1_request_more_chiller = $chiller1RequestMoreChiller
            chiller_2_request_more_chiller = $chiller2RequestMoreChiller
        }
    }

    $cleanRows | Export-Csv -LiteralPath $FinalCsv -NoTypeInformation -Encoding UTF8

    $selectedLines = foreach ($key in ($selected.Keys | Sort-Object)) {
        $value = $selected[$key]
        if ([string]::IsNullOrWhiteSpace($value)) {
            "  $($key): [estimated or not used]"
        } else {
            "  $($key): $value"
        }
    }
    Add-Content -LiteralPath $LogFile -Encoding UTF8 -Value @"

POSTPROCESS
===========
Raw CSV:   $RawResultCsv
Final CSV: $FinalCsv
Rows:      $($cleanRows.Count)

Selected raw signals:
$($selectedLines -join [Environment]::NewLine)
"@

    return $cleanRows.Count
}

Write-MosFile
if ($PostprocessOnly) {
    $rawResultCsv = $RawCsv
    if (-not (Test-Path -LiteralPath $rawResultCsv -PathType Leaf)) {
        throw "PostprocessOnly was requested, but raw CSV was not found at $rawResultCsv"
    }
    Add-Content -LiteralPath $LogFile -Encoding UTF8 -Value @"

POSTPROCESS ONLY
================
Skipped OpenModelica and rebuilt the final CSV from the existing raw CSV.
"@
} else {
    $rawResultCsv = Run-OpenModelica
}
$rowsWritten = Export-CleanCsv $rawResultCsv

Write-Host "OpenModelica script: $MosFile"
Write-Host "Run log:              $LogFile"
Write-Host "Raw result CSV:       $rawResultCsv"
Write-Host "Final result CSV:     $FinalCsv"
Write-Host "Rows written:         $rowsWritten"
