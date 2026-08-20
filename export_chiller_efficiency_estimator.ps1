# Generates an Excel workbook for the chilled-water pump logic estimator.
# Edit the variables in this block, then rerun this script.

$ErrorActionPreference = "Stop"
$OutputPath = "outputs\chiller_efficiency_logic.xlsx"

# Core controls requested by the user.
$InternalLoopDelayMinutes = 5
$ExternalLoopDelayMinutes = 15
$PumpAdjustmentFraction = 0.05
$ChillerCount = 1
$TargetDeltaT_degC = 5.0

# Model/load assumptions from WaterCooledChillerExample7.
$Load_kW = 200.0
$StartTime_s = 13046400.0
$StopTime_s = 13651200.0
$ChillerOutletTemp_degC = 5.0
$WaterCp_kJ_per_kgK = 4.2
$DeltaTDeadband_degC = 0.05

# Chiller/plant efficiency assumptions.
$ChillerCOP = 5.42
$TonsPer_kW = 1.0 / 3.5168525
$WaterDensity_kg_per_m3 = 1000.0
$AirDensity_kg_per_m3 = 1.2
$PumpEfficiency = 0.70
$FanEfficiency = 0.65
$CoolingTowerFanPower_kW = 6.0
$IncludeAirFansInWholePlant = $true

# Component sizing inherited from the Modelica model.
$NominalCHWDeltaT_degC = 20.0
$NominalCWDeltaT_degC = 6.0
$AirDeltaT_degC = 15.0
$AirCp_kJ_per_kgK = 1.005
$CHWPumpDp_Pa = 325474.0
$CWPumpDp_Pa = 214992.0
$AirFanDp_Pa = 249.0
$AirFanCount = 2
$MinMassFlowFraction = 0.30
$MaxMassFlowFraction = 2.50

function Escape-XmlText {
    param([AllowNull()][object]$Value)
    if ($null -eq $Value) {
        return ""
    }

    return [System.Security.SecurityElement]::Escape([string]$Value)
}

function Convert-ToExcelColumnName {
    param([int]$Index)

    $name = ""
    while ($Index -gt 0) {
        $Index--
        $name = [char](65 + ($Index % 26)) + $name
        $Index = [math]::Floor($Index / 26)
    }

    return $name
}

function New-WorksheetXml {
    param(
        [array]$Rows,
        [int[]]$TextColumns = @(),
        [int[]]$WideColumns = @()
    )

    $sb = [System.Text.StringBuilder]::new()
    [void]$sb.AppendLine('<?xml version="1.0" encoding="UTF-8" standalone="yes"?>')
    [void]$sb.AppendLine('<worksheet xmlns="http://schemas.openxmlformats.org/spreadsheetml/2006/main" xmlns:r="http://schemas.openxmlformats.org/officeDocument/2006/relationships">')

    if ($WideColumns.Count -gt 0) {
        [void]$sb.AppendLine('<cols>')
        foreach ($col in $WideColumns) {
            [void]$sb.AppendLine(('<col min="{0}" max="{0}" width="18" customWidth="1"/>' -f $col))
        }
        [void]$sb.AppendLine('</cols>')
    }

    [void]$sb.AppendLine('<sheetData>')

    for ($r = 0; $r -lt $Rows.Count; $r++) {
        $rowNumber = $r + 1
        [void]$sb.AppendLine(('<row r="{0}">' -f $rowNumber))

        for ($c = 0; $c -lt $Rows[$r].Count; $c++) {
            $columnNumber = $c + 1
            $cellRef = (Convert-ToExcelColumnName $columnNumber) + $rowNumber
            $value = $Rows[$r][$c]

            if ($TextColumns -contains $columnNumber -or $r -eq 0 -or $value -is [string]) {
                [void]$sb.AppendLine(('<c r="{0}" t="inlineStr"><is><t>{1}</t></is></c>' -f $cellRef, (Escape-XmlText $value)))
            }
            else {
                $number = [Convert]::ToString([double]$value, [System.Globalization.CultureInfo]::InvariantCulture)
                [void]$sb.AppendLine(('<c r="{0}"><v>{1}</v></c>' -f $cellRef, $number))
            }
        }

        [void]$sb.AppendLine('</row>')
    }

    [void]$sb.AppendLine('</sheetData>')
    [void]$sb.AppendLine('</worksheet>')
    return $sb.ToString()
}

function Write-TextFile {
    param(
        [string]$Path,
        [string]$Content
    )

    $directory = Split-Path -Parent $Path
    if ($directory -and -not (Test-Path -LiteralPath $directory)) {
        New-Item -ItemType Directory -Path $directory | Out-Null
    }

    [System.IO.File]::WriteAllText($Path, $Content, [System.Text.UTF8Encoding]::new($false))
}

function Get-PumpPowerkW {
    param(
        [double]$MassFlow_kg_s,
        [double]$DeltaPressure_Pa
    )

    $volumeFlow_m3_s = $MassFlow_kg_s / $WaterDensity_kg_per_m3
    return ($DeltaPressure_Pa * $volumeFlow_m3_s / $PumpEfficiency) / 1000.0
}

function Get-AirFanPowerkW {
    param([double]$AirMassFlow_kg_s)

    $volumeFlow_m3_s = $AirMassFlow_kg_s / $AirDensity_kg_per_m3
    return (($AirFanDp_Pa * $volumeFlow_m3_s / $FanEfficiency) / 1000.0) * $AirFanCount
}

$loadPerChiller_kW = $Load_kW / $ChillerCount
$loadTR = $Load_kW * $TonsPer_kW
$nominalCHWMassFlow_kg_s = (2.0 * $Load_kW) / ($WaterCp_kJ_per_kgK * $NominalCHWDeltaT_degC)
$nominalCWMassFlow_kg_s = (2.0 * $Load_kW) / ($WaterCp_kJ_per_kgK * $NominalCWDeltaT_degC)
$airMassFlow_kg_s = $Load_kW / ($AirCp_kJ_per_kgK * $AirDeltaT_degC)
$minMassFlow_kg_s = $nominalCHWMassFlow_kg_s * $MinMassFlowFraction
$maxMassFlow_kg_s = $nominalCHWMassFlow_kg_s * $MaxMassFlowFraction
$timeStep_s = [double]$InternalLoopDelayMinutes * 60.0
$externalLoopDelay_s = [double]$ExternalLoopDelayMinutes * 60.0
$massFlow_kg_s = $nominalCHWMassFlow_kg_s
$nextControlTime_s = $StartTime_s

$summaryRows = @()
$chillerOnlyRows = @()
$wholePlantRows = @()

$summaryRows += ,@(
    "Time Step",
    "Load (kW)",
    "Chiller Only Efficiency (kW/TR)",
    "Whole Plant Efficiency (kW/TR)",
    "Chiller Inlet Temp (degC)",
    "Chiller Outlet Temp (degC)",
    "Mass Flow Rate (kg/s)"
)

$requestedHeader = @(
    "Time Step",
    "Load (kW)",
    "Efficiency (kW/TR)",
    "Chiller Inlet Temp (degC)",
    "Chiller Outlet Temp (degC)",
    "Mass Flow Rate (kg/s)"
)
$chillerOnlyRows += ,$requestedHeader
$wholePlantRows += ,$requestedHeader

for ($time_s = $StartTime_s; $time_s -le ($StopTime_s + 0.001); $time_s += $timeStep_s) {
    $deltaT_degC = $loadPerChiller_kW / ($massFlow_kg_s * $WaterCp_kJ_per_kgK)
    $chillerOutlet_degC = $ChillerOutletTemp_degC
    $chillerInlet_degC = $chillerOutlet_degC + $deltaT_degC

    $chillerPower_kW = $Load_kW / $ChillerCOP
    $chwPumpPower_kW = Get-PumpPowerkW -MassFlow_kg_s $massFlow_kg_s -DeltaPressure_Pa $CHWPumpDp_Pa
    $cwPumpPower_kW = Get-PumpPowerkW -MassFlow_kg_s $nominalCWMassFlow_kg_s -DeltaPressure_Pa $CWPumpDp_Pa
    $airFanPower_kW = 0.0
    if ($IncludeAirFansInWholePlant) {
        $airFanPower_kW = Get-AirFanPowerkW -AirMassFlow_kg_s $airMassFlow_kg_s
    }

    $wholePlantPower_kW = $chillerPower_kW + $chwPumpPower_kW + $cwPumpPower_kW + $CoolingTowerFanPower_kW + $airFanPower_kW
    $chillerOnlyEfficiency_kW_TR = $chillerPower_kW / $loadTR
    $wholePlantEfficiency_kW_TR = $wholePlantPower_kW / $loadTR

    $summaryRows += ,@(
        [math]::Round(($time_s - $StartTime_s) / 60.0, 6),
        [math]::Round($Load_kW, 6),
        [math]::Round($chillerOnlyEfficiency_kW_TR, 6),
        [math]::Round($wholePlantEfficiency_kW_TR, 6),
        [math]::Round($chillerInlet_degC, 6),
        [math]::Round($chillerOutlet_degC, 6),
        [math]::Round($massFlow_kg_s, 6)
    )

    $chillerOnlyRows += ,@(
        [math]::Round(($time_s - $StartTime_s) / 60.0, 6),
        [math]::Round($Load_kW, 6),
        [math]::Round($chillerOnlyEfficiency_kW_TR, 6),
        [math]::Round($chillerInlet_degC, 6),
        [math]::Round($chillerOutlet_degC, 6),
        [math]::Round($massFlow_kg_s, 6)
    )

    $wholePlantRows += ,@(
        [math]::Round(($time_s - $StartTime_s) / 60.0, 6),
        [math]::Round($Load_kW, 6),
        [math]::Round($wholePlantEfficiency_kW_TR, 6),
        [math]::Round($chillerInlet_degC, 6),
        [math]::Round($chillerOutlet_degC, 6),
        [math]::Round($massFlow_kg_s, 6)
    )

    if ($time_s -ge ($nextControlTime_s - 0.001)) {
        if ($deltaT_degC -gt ($TargetDeltaT_degC + $DeltaTDeadband_degC)) {
            $massFlow_kg_s = [math]::Min($massFlow_kg_s * (1.0 + $PumpAdjustmentFraction), $maxMassFlow_kg_s)
            $nextControlTime_s = $time_s + $timeStep_s
        }
        elseif ($deltaT_degC -lt ($TargetDeltaT_degC - $DeltaTDeadband_degC) -and $massFlow_kg_s -gt $minMassFlow_kg_s) {
            $massFlow_kg_s = [math]::Max($massFlow_kg_s * (1.0 - $PumpAdjustmentFraction), $minMassFlow_kg_s)
            $nextControlTime_s = $time_s + $timeStep_s
        }
        else {
            $nextControlTime_s = $time_s + $externalLoopDelay_s
        }
    }
}

$configRows = @(
    @("Parameter", "Value", "Unit/Note"),
    @("Internal loop delay", $InternalLoopDelayMinutes, "minutes"),
    @("External loop delay", $ExternalLoopDelayMinutes, "minutes"),
    @("Pump adjustment", $PumpAdjustmentFraction, "fraction per internal-loop action"),
    @("Chiller count", $ChillerCount, "one active chiller by default"),
    @("Target deltaT", $TargetDeltaT_degC, "degC"),
    @("DeltaT deadband", $DeltaTDeadband_degC, "degC, avoids infinite hunting around target"),
    @("Load", $Load_kW, "kW, from QRoo_flow = 200000 W"),
    @("Chiller COP", $ChillerCOP, "Carrier_19XR_742kW_5_42COP_VSD nominal COP basis"),
    @("Chiller outlet temperature", $ChillerOutletTemp_degC, "degC, from chiTSet = 273.15 + 5"),
    @("Nominal CHW mass flow", [math]::Round($nominalCHWMassFlow_kg_s, 6), "kg/s, from Modelica sizing expression"),
    @("Nominal CW mass flow", [math]::Round($nominalCWMassFlow_kg_s, 6), "kg/s"),
    @("Include air fans in whole plant", $IncludeAirFansInWholePlant, "true/false"),
    @("Whole plant boundary", "chiller + CHW pump + CW pump + cooling tower fan + optional air fans", "power boundary"),
    @("Time step", $InternalLoopDelayMinutes, "minutes")
)

$outputFile = Join-Path (Get-Location) $OutputPath
$outputDirectory = Split-Path -Parent $outputFile
if (-not (Test-Path -LiteralPath $outputDirectory)) {
    New-Item -ItemType Directory -Path $outputDirectory | Out-Null
}

$temporaryRoot = Join-Path $outputDirectory ("xlsx_tmp_" + [Guid]::NewGuid().ToString("N"))
New-Item -ItemType Directory -Path $temporaryRoot | Out-Null

try {
    Write-TextFile -Path (Join-Path $temporaryRoot "[Content_Types].xml") -Content @'
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
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
'@

    Write-TextFile -Path (Join-Path $temporaryRoot "_rels\.rels") -Content @'
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<Relationships xmlns="http://schemas.openxmlformats.org/package/2006/relationships">
  <Relationship Id="rId1" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument" Target="xl/workbook.xml"/>
</Relationships>
'@

    Write-TextFile -Path (Join-Path $temporaryRoot "xl\workbook.xml") -Content @'
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<workbook xmlns="http://schemas.openxmlformats.org/spreadsheetml/2006/main" xmlns:r="http://schemas.openxmlformats.org/officeDocument/2006/relationships">
  <sheets>
    <sheet name="Summary" sheetId="1" r:id="rId1"/>
    <sheet name="ChillerOnly" sheetId="2" r:id="rId2"/>
    <sheet name="WholePlant" sheetId="3" r:id="rId3"/>
    <sheet name="Config" sheetId="4" r:id="rId4"/>
  </sheets>
</workbook>
'@

    Write-TextFile -Path (Join-Path $temporaryRoot "xl\_rels\workbook.xml.rels") -Content @'
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<Relationships xmlns="http://schemas.openxmlformats.org/package/2006/relationships">
  <Relationship Id="rId1" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet" Target="worksheets/sheet1.xml"/>
  <Relationship Id="rId2" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet" Target="worksheets/sheet2.xml"/>
  <Relationship Id="rId3" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet" Target="worksheets/sheet3.xml"/>
  <Relationship Id="rId4" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet" Target="worksheets/sheet4.xml"/>
  <Relationship Id="rId5" Type="http://schemas.openxmlformats.org/officeDocument/2006/relationships/styles" Target="styles.xml"/>
</Relationships>
'@

    Write-TextFile -Path (Join-Path $temporaryRoot "xl\styles.xml") -Content @'
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<styleSheet xmlns="http://schemas.openxmlformats.org/spreadsheetml/2006/main">
  <fonts count="1"><font><sz val="11"/><name val="Calibri"/></font></fonts>
  <fills count="1"><fill><patternFill patternType="none"/></fill></fills>
  <borders count="1"><border><left/><right/><top/><bottom/><diagonal/></border></borders>
  <cellStyleXfs count="1"><xf numFmtId="0" fontId="0" fillId="0" borderId="0"/></cellStyleXfs>
  <cellXfs count="1"><xf numFmtId="0" fontId="0" fillId="0" borderId="0" xfId="0"/></cellXfs>
  <cellStyles count="1"><cellStyle name="Normal" xfId="0" builtinId="0"/></cellStyles>
</styleSheet>
'@

    Write-TextFile -Path (Join-Path $temporaryRoot "xl\worksheets\sheet1.xml") -Content (New-WorksheetXml -Rows $summaryRows -WideColumns @(1,2,3,4,5,6,7))
    Write-TextFile -Path (Join-Path $temporaryRoot "xl\worksheets\sheet2.xml") -Content (New-WorksheetXml -Rows $chillerOnlyRows -WideColumns @(1,2,3,4,5,6))
    Write-TextFile -Path (Join-Path $temporaryRoot "xl\worksheets\sheet3.xml") -Content (New-WorksheetXml -Rows $wholePlantRows -WideColumns @(1,2,3,4,5,6))
    Write-TextFile -Path (Join-Path $temporaryRoot "xl\worksheets\sheet4.xml") -Content (New-WorksheetXml -Rows $configRows -TextColumns @(1,3) -WideColumns @(1,2,3))

    if (Test-Path -LiteralPath $outputFile) {
        Remove-Item -LiteralPath $outputFile -Force
    }

    Add-Type -AssemblyName System.IO.Compression
    Add-Type -AssemblyName System.IO.Compression.FileSystem
    $zip = [System.IO.Compression.ZipFile]::Open($outputFile, [System.IO.Compression.ZipArchiveMode]::Create)
    $temporaryRootWithSeparator = $temporaryRoot.TrimEnd('\') + '\'
    try {
        Get-ChildItem -LiteralPath $temporaryRoot -File -Recurse | ForEach-Object {
            $relativePath = $_.FullName.Substring($temporaryRootWithSeparator.Length)
            $entryName = $relativePath -replace '\\', '/'
            [System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
                $zip,
                $_.FullName,
                $entryName,
                [System.IO.Compression.CompressionLevel]::Optimal
            ) | Out-Null
        }
    }
    finally {
        $zip.Dispose()
    }
}
finally {
    if (Test-Path -LiteralPath $temporaryRoot) {
        Remove-Item -LiteralPath $temporaryRoot -Recurse -Force
    }
}

Write-Host "Wrote $outputFile"
Write-Host ("Rows: {0}" -f ($summaryRows.Count - 1))
Write-Host ("Final mass flow: {0} kg/s" -f ([math]::Round($summaryRows[-1][6], 6)))
Write-Host ("Final chiller-only efficiency: {0} kW/TR" -f ([math]::Round($summaryRows[-1][2], 6)))
Write-Host ("Final whole-plant efficiency: {0} kW/TR" -f ([math]::Round($summaryRows[-1][3], 6)))
