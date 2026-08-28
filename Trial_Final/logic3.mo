model logic3 "Combined flow-first CHW control with CHWST reset and staged chillers"
  replaceable package MediumA = Buildings.Media.Air "Medium model";
  replaceable package MediumW = Buildings.Media.Water "Medium model";
  parameter Modelica.SIunits.Height rooHei = 3 "Height of the room";
  parameter Modelica.SIunits.Length rooWid = 30 "Width of the room";
  parameter Modelica.SIunits.Length rooLen = 50 "Length of the room";
  parameter Modelica.SIunits.Power QRoo_flow = 844044.6 "Heat generation of the computer room; approximately 240 TR peak load";
  parameter Modelica.SIunits.MassFlowRate mAir_flow_nominal = QRoo_flow / (1005 * 15) "Nominal mass flow rate at fan";
  parameter Modelica.SIunits.Power P_nominal = 80E3 "Nominal compressor power (at y=1)";
  parameter Modelica.SIunits.TemperatureDifference dTEva_nominal = 10 "Temperature difference evaporator inlet-outlet";
  parameter Modelica.SIunits.TemperatureDifference dTCon_nominal = 10 "Temperature difference condenser outlet-inlet";
  parameter Real COPc_nominal = 3 "Chiller COP";
  parameter Real kWPerTR = 3.5168525 "Cooling capacity conversion from refrigeration tons to kW";
  parameter Real chillerCapacity_TR = 150 "Default nominal capacity for each chiller";
  parameter Real chiller1Capacity_TR = chillerCapacity_TR "Nominal capacity of chiller 1";
  parameter Real chiller2Capacity_TR = chillerCapacity_TR "Nominal capacity of chiller 2";
  parameter Real chillerStageDeadband_TR = 10 "Deadband below chiller 1 capacity before staging chiller 2 off";
  parameter Real chillerMinimumLoad_TR = 0.1 "Minimum cooling load before chiller 1 is enabled";
  parameter Modelica.SIunits.Time chillerStageSamplePeriod = 5 * 60 "Sampling period for chiller staging decisions";
  parameter Modelica.SIunits.Time demandRampDuration = 36000 "Duration of the common room cooling demand ramp";
  parameter Modelica.SIunits.Time demandRampStartTime = 13046400 "Start time of the common room cooling demand ramp";
  parameter Modelica.SIunits.Power chiller1Capacity = chiller1Capacity_TR * kWPerTR * 1000 "Nominal cooling capacity of chiller 1";
  parameter Modelica.SIunits.Power chiller2Capacity = chiller2Capacity_TR * kWPerTR * 1000 "Nominal cooling capacity of chiller 2";
  parameter Modelica.SIunits.MassFlowRate mCHW_flow_nominal = chiller1Capacity / (4200 * 5) "Nominal chilled-water flow per chiller at the 5 degC design delta-T";
  parameter Modelica.SIunits.MassFlowRate mCW_flow_nominal = chiller1Capacity / (4200 * dTCon_nominal) "Nominal condenser-water flow per chiller";
  parameter Modelica.SIunits.PressureDifference dp_nominal = 500 "Nominal pressure difference";
  parameter Modelica.SIunits.MassFlowRate mCHWPumpMax = mCHW_flow_nominal "Nominal CHW flow limit per enabled chiller";
  parameter Modelica.SIunits.Temperature TCHWRTSet = 273.15 + 12 "Target chilled water return temperature (CHWRT) for the CHWST reset control";
  parameter Modelica.SIunits.Temperature TChiSetMin = 273.15 + 7 "Minimum allowed chiller leaving water temperature setpoint (CHWST floor)";
  parameter Modelica.SIunits.Temperature TChiSetMax = 273.15 + 11.9 "Maximum allowed chiller leaving water temperature setpoint (kept below 12 degC)";

  block ChillerLeavingTempPID "Timed PI controller that resets the chiller leaving water temperature (CHWST) to hold the CHW return temperature (CHWRT) near a target"
    parameter Modelica.SIunits.Temperature TCHWRTSet = 273.15 + 12 "Target CHW return temperature";
    parameter Modelica.SIunits.TemperatureDifference dTDeadband = 0.2 "Neutral band around TCHWRTSet";
    parameter Modelica.SIunits.Time internalSamplePeriod = 5 * 60 "Delay between active control actions";
    parameter Modelica.SIunits.Time externalSamplePeriod = 10 * 60 "Delay after CHWRT is inside the neutral band";
    parameter Modelica.SIunits.Time tempResponseTime = 120 "Time constant for smoothing the CHWST command";
    parameter Modelica.SIunits.Temperature TChiSetMin = 273.15 + 5 "Minimum allowed chiller leaving water temperature setpoint (CHWST floor)";
    parameter Modelica.SIunits.Temperature TChiSetMax = 273.15 + 11.9 "Maximum allowed chiller leaving water temperature setpoint (kept below 12 degC)";
    parameter Modelica.SIunits.Temperature TChiSetStart = TChiSetMin "Initial CHWST command";
    parameter Real kP(unit = "K/K") = 1 "PID proportional gain from CHWRT error to CHWST adjustment";
    parameter Modelica.SIunits.Time Ti = 15 * 60 "PID integral time";
    parameter Modelica.SIunits.Time Td = 0 "PID derivative time; keep 0 for PI behavior";
    Modelica.Blocks.Interfaces.BooleanInput pumpOn "Manual operating state for the pump and chiller" annotation(
      Placement(transformation(extent = {{-120, 70}, {-80, 110}})));
    Modelica.Blocks.Interfaces.RealInput TCHWReturn(unit = "K") "Measured CHW return temperature" annotation(
      Placement(transformation(extent = {{-120, -30}, {-80, 10}})));
    Modelica.Blocks.Interfaces.RealOutput TCHWSTSet(unit = "K") "Chiller leaving (CHW supply) water temperature setpoint command" annotation(
      Placement(transformation(extent = {{80, 30}, {120, 70}})));
    Modelica.Blocks.Interfaces.RealOutput dT(unit = "K") "Measured CHWRT minus target CHWRT" annotation(
      Placement(transformation(extent = {{80, -10}, {120, 30}})));
    Modelica.Blocks.Interfaces.BooleanOutput requestMoreChiller "True when CHWST is already at its floor and CHWRT is still above target" annotation(
      Placement(transformation(extent = {{80, -90}, {120, -50}})));

  protected
    constant Real tempEps(unit = "K") = 1e-6;
    Real dTErr(unit = "K");
    discrete Real dTErrInt(unit = "K.s", start = 0, fixed = true);
    discrete Real dTErrSample(unit = "K", start = 0, fixed = true);
    discrete Modelica.SIunits.Time lastControlTime(start = 0, fixed = true);
    discrete Modelica.SIunits.Time nextControlTime(start = 0, fixed = true);
    discrete Modelica.SIunits.Temperature TChiSet(start = TChiSetStart, fixed = true);
    discrete Modelica.SIunits.Temperature TChiRaw(start = TChiSetStart, fixed = true);
    Modelica.SIunits.Temperature TChiCmd(start = TChiSetStart, fixed = true);
  equation
    dT = TCHWReturn - TCHWRTSet;
    dTErr = dT;
    der(TChiCmd) = (TChiSet - TChiCmd) / tempResponseTime;
    TCHWSTSet = TChiCmd;
  algorithm
    when initial() then
      dTErrInt := 0;
      dTErrSample := dTErr;
      lastControlTime := time;
      nextControlTime := time + internalSamplePeriod;
      TChiSet := TChiSetStart;
      TChiRaw := TChiSetStart;
      requestMoreChiller := false;
    elsewhen time >= pre(nextControlTime) then
      if not pumpOn then
        dTErrInt := 0;
        dTErrSample := dTErr;
        TChiSet := TChiSetStart;
        TChiRaw := TChiSetStart;
        requestMoreChiller := false;
        nextControlTime := time + externalSamplePeriod;
      elseif abs(dTErr) <= dTDeadband then
        dTErrInt := pre(dTErrInt);
        dTErrSample := dTErr;
        TChiSet := pre(TChiSet);
        TChiRaw := pre(TChiRaw);
        requestMoreChiller := false;
        nextControlTime := time + externalSamplePeriod;
      else
        if (pre(TChiSet) > TChiSetMin + tempEps and pre(TChiSet) < TChiSetMax - tempEps) or (pre(TChiSet) <= TChiSetMin + tempEps and dTErr < 0) or (pre(TChiSet) >= TChiSetMax - tempEps and dTErr > 0) then
          dTErrInt := pre(dTErrInt) + dTErr * (time - pre(lastControlTime));
        else
          dTErrInt := pre(dTErrInt);
        end if;

        dTErrSample := dTErr;
        TChiRaw := TChiSetStart - kP * dTErr - kP / Ti * dTErrInt - kP * Td * (dTErr - pre(dTErrSample)) / max(time - pre(lastControlTime), 1e-6);

        TChiSet := min(TChiSetMax, max(TChiSetMin, TChiRaw));
        requestMoreChiller := dTErr > dTDeadband and TChiSet <= TChiSetMin + tempEps;
        nextControlTime := time + internalSamplePeriod;
      end if;
      lastControlTime := time;
    end when;
    annotation(
      Icon(coordinateSystem(preserveAspectRatio = false), graphics = {
        Rectangle(extent = {{-80, 80}, {80, -80}}, lineColor = {0, 0, 127}, fillColor = {235, 245, 255}, fillPattern = FillPattern.Solid),
        Text(extent = {{-70, 22}, {70, -14}}, textString = "CHWST PID"),
        Text(extent = {{-70, -24}, {70, -56}}, textString = "reset")}),
      Diagram(coordinateSystem(preserveAspectRatio = false)));
  end ChillerLeavingTempPID;

  block CombinedChilledWaterControl "Flow control first, then CHWST reset at minimum flow"
    parameter Modelica.SIunits.TemperatureDifference dTSet = 5 "Target chilled-water return-supply temperature difference";
    parameter Modelica.SIunits.TemperatureDifference dTDeadband = 0.2 "Neutral band around dTSet";
    parameter Modelica.SIunits.Time samplePeriod = 5 * 60 "Delay between control actions";
    parameter Modelica.SIunits.Time externalSamplePeriod = 10 * 60 "Delay after the target is inside the neutral band";
    parameter Modelica.SIunits.Time responseTime = 120 "Time constant for smoothing commands";
    parameter Modelica.SIunits.MassFlowRate mCHWMin = 0.3 "Minimum flow for an enabled chiller";
    parameter Modelica.SIunits.MassFlowRate mCHWMax = 1 "Maximum flow for an enabled chiller";
    parameter Modelica.SIunits.MassFlowRate mCHWStart = mCHWMax "Initial flow command";
    parameter Modelica.SIunits.Temperature TCHWRTSet = 273.15 + 12 "Target chilled-water return temperature during reset";
    parameter Modelica.SIunits.Temperature TChiSetMin = 273.15 + 5 "Minimum CHW supply temperature";
    parameter Modelica.SIunits.Temperature TChiSetMax = 273.15 + 11.9 "Maximum CHW supply temperature, kept below 12 degC";
    parameter Modelica.SIunits.Temperature TChiSetStart = 273.15 + 7 "Initial CHW supply temperature";
    parameter Real flowKP(unit = "kg/(s.K)") = 0.25 "Flow proportional gain";
    parameter Real loadGain(unit = "kg/(s.W)") = 1e-5 "Flow gain from unmet coil load";
    parameter Real tempKP(unit = "K/K") = 1 "CHW supply temperature proportional gain";
    parameter Real tempLoadGain(unit = "K/W") = 1e-5 "CHWST reduction gain from unmet coil load";
    parameter Modelica.SIunits.Power unmetLoadDeadband = 1000 "Allowed coil-load shortfall before invoking supervisory action";
    Modelica.Blocks.Interfaces.BooleanInput pumpOn annotation(Placement(transformation(extent = {{-120, 70}, {-80, 110}})));
    Modelica.Blocks.Interfaces.RealInput TCHWSupply(unit = "K") annotation(Placement(transformation(extent = {{-120, 10}, {-80, 50}})));
    Modelica.Blocks.Interfaces.RealInput TCHWReturn(unit = "K") annotation(Placement(transformation(extent = {{-120, -30}, {-80, 10}})));
    Modelica.Blocks.Interfaces.RealInput coolingDemand(unit = "W") annotation(Placement(transformation(extent = {{-120, -70}, {-80, -30}})));
    Modelica.Blocks.Interfaces.RealInput coilCooling(unit = "W") annotation(Placement(transformation(extent = {{-120, -110}, {-80, -70}})));
    Modelica.Blocks.Interfaces.RealOutput mCHW_flow(unit = "kg/s") annotation(Placement(transformation(extent = {{80, 50}, {120, 90}})));
    Modelica.Blocks.Interfaces.RealOutput TCHWSTSet(unit = "K") annotation(Placement(transformation(extent = {{80, 10}, {120, 50}})));
    Modelica.Blocks.Interfaces.RealOutput dT(unit = "K") annotation(Placement(transformation(extent = {{80, -30}, {120, 10}})));
    Modelica.Blocks.Interfaces.BooleanOutput requestMoreChiller annotation(Placement(transformation(extent = {{80, -90}, {120, -50}})));
  protected
    constant Real eps = 1e-6;
    Real dTErr(unit = "K");
    Real returnErr(unit = "K");
    Real unmetLoad(unit = "W");
    discrete Boolean resetMode(start = false, fixed = true);
    discrete Modelica.SIunits.MassFlowRate flowSet(start = mCHWStart, fixed = true);
    discrete Modelica.SIunits.Temperature tempSet(start = TChiSetStart, fixed = true);
    Modelica.SIunits.MassFlowRate flowCmd(start = mCHWStart, fixed = true);
    Modelica.SIunits.Temperature tempCmd(start = TChiSetStart, fixed = true);
    discrete Modelica.SIunits.Time nextControlTime(start = 0, fixed = true);
  equation
    dT = TCHWReturn - TCHWSupply;
    dTErr = dT - dTSet;
    returnErr = TCHWReturn - TCHWRTSet;
    unmetLoad = max(0, coolingDemand - max(0, coilCooling));
    der(flowCmd) = (flowSet - flowCmd) / responseTime;
    der(tempCmd) = (tempSet - tempCmd) / responseTime;
    mCHW_flow = if pumpOn then flowCmd else 0;
    TCHWSTSet = tempCmd;
  algorithm
    when initial() then
      resetMode := false;
      flowSet := mCHWStart;
      tempSet := TChiSetStart;
      requestMoreChiller := false;
      nextControlTime := time + samplePeriod;
    elsewhen time >= pre(nextControlTime) then
      if not pumpOn then
        resetMode := false;
        flowSet := mCHWStart;
        tempSet := TChiSetStart;
        requestMoreChiller := false;
        nextControlTime := time + externalSamplePeriod;
      elseif not pre(resetMode) then
        if unmetLoad > unmetLoadDeadband and pre(flowSet) <= mCHWMin + eps and dTErr < -dTDeadband then
          flowSet := mCHWMin;
          resetMode := true;
        elseif unmetLoad > unmetLoadDeadband then
          flowSet := min(mCHWMax, max(mCHWMin, pre(flowSet) + max(loadGain * unmetLoad, flowKP * max(dTErr, 0))));
          resetMode := false;
        else
          flowSet := min(mCHWMax, max(mCHWMin, pre(flowSet) + flowKP * dTErr));
          resetMode := false;
        end if;
        tempSet := pre(tempSet);
        requestMoreChiller := false;
        nextControlTime := time + samplePeriod;
      else
        flowSet := mCHWMin;
        tempSet := min(TChiSetMax, max(TChiSetMin, pre(tempSet) - tempKP * returnErr - tempLoadGain * unmetLoad));
        resetMode := not (unmetLoad <= unmetLoadDeadband and returnErr < -dTDeadband and tempSet >= TChiSetMax - eps);
        requestMoreChiller := unmetLoad > unmetLoadDeadband and tempSet <= TChiSetMin + eps;
        nextControlTime := time + samplePeriod;
      end if;
    end when;
  end CombinedChilledWaterControl;

  block ChillerStagingControl "Room heat gain based chiller staging controller"
    parameter Real kWPerTR = 3.5168525 "Cooling capacity conversion from refrigeration tons to kW";
    parameter Real chiller1Capacity_TR = 150 "Nominal capacity of chiller 1";
    parameter Real chiller2Capacity_TR = 150 "Nominal capacity of chiller 2";
    parameter Real stage2OnThreshold_TR = chiller1Capacity_TR "Room heat gain above which chiller 2 is enabled";
    parameter Real stage2OffThreshold_TR = chiller1Capacity_TR - 10 "Room heat gain below which chiller 2 is disabled";
    parameter Real stage2OnShortfall_TR = 2 "Coil shortfall above which chiller 2 is enabled";
    parameter Real stage2OffShortfall_TR = 0.5 "Coil shortfall below which chiller 2 may be disabled";
    parameter Real minimumLoad_TR = 0.1 "Minimum room heat gain before chiller 1 is enabled";
    parameter Modelica.SIunits.Time samplePeriod = 5 * 60 "Sampling period for staging decisions";
    parameter Modelica.SIunits.MassFlowRate mCW_flow_nominal = 1 "Nominal condenser-water mass flow per enabled chiller";
    Modelica.Blocks.Interfaces.RealInput roomHeatGain(unit = "W") "Current internal room heat gain used for staging" annotation(
      Placement(transformation(extent = {{-120, -20}, {-80, 20}})));
    Modelica.Blocks.Interfaces.RealInput deliveredCooling(unit = "W") "Cooling delivered by the air-side coil" annotation(
      Placement(transformation(extent = {{-120, -60}, {-80, -20}})));
    Modelica.Blocks.Interfaces.BooleanOutput chiller1On "Enable chiller 1" annotation(
      Placement(transformation(extent = {{80, 50}, {120, 90}})));
    Modelica.Blocks.Interfaces.BooleanOutput chiller2On "Enable chiller 2" annotation(
      Placement(transformation(extent = {{80, 10}, {120, 50}})));
    Modelica.Blocks.Interfaces.RealOutput roomHeatGain_TR(unit = "1") "Internal room heat gain in refrigeration tons" annotation(
      Placement(transformation(extent = {{80, -30}, {120, 10}})));
    Modelica.Blocks.Interfaces.RealOutput yChiller1(unit = "1") "Real enable signal for chiller 1 equipment" annotation(
      Placement(transformation(extent = {{80, -70}, {120, -30}})));
    Modelica.Blocks.Interfaces.RealOutput yChiller2(unit = "1") "Real enable signal for chiller 2 equipment" annotation(
      Placement(transformation(extent = {{80, -110}, {120, -70}})));
    Modelica.Blocks.Interfaces.RealOutput mCW_flow1(unit = "kg/s") "Condenser-water pump command for chiller 1" annotation(
      Placement(transformation(extent = {{80, -150}, {120, -110}})));
    Modelica.Blocks.Interfaces.RealOutput mCW_flow2(unit = "kg/s") "Condenser-water pump command for chiller 2" annotation(
      Placement(transformation(extent = {{80, -190}, {120, -150}})));

  protected
    discrete Boolean stage2On(start = false, fixed = true);
    Real coolingShortfall_TR(unit = "1");
  equation
    roomHeatGain_TR = max(roomHeatGain, 0) / (kWPerTR * 1000);
    coolingShortfall_TR = max(0, max(roomHeatGain, 0) - max(deliveredCooling, 0)) / (kWPerTR * 1000);
    chiller1On = roomHeatGain_TR > minimumLoad_TR;
    chiller2On = chiller1On and stage2On;
    yChiller1 = if chiller1On then 1 else 0;
    yChiller2 = if chiller2On then 1 else 0;
    mCW_flow1 = if chiller1On then mCW_flow_nominal else 0;
    mCW_flow2 = if chiller2On then mCW_flow_nominal else 0;
  algorithm
    when initial() then
      stage2On := roomHeatGain_TR > stage2OnThreshold_TR or (roomHeatGain_TR > stage2OffThreshold_TR and coolingShortfall_TR > stage2OnShortfall_TR);
    elsewhen sample(0, samplePeriod) then
      if roomHeatGain_TR <= minimumLoad_TR then
        stage2On := false;
      elseif pre(stage2On) then
        stage2On := not (roomHeatGain_TR < stage2OffThreshold_TR and coolingShortfall_TR < stage2OffShortfall_TR);
      else
        stage2On := roomHeatGain_TR > stage2OnThreshold_TR or (roomHeatGain_TR > stage2OffThreshold_TR and coolingShortfall_TR > stage2OnShortfall_TR);
      end if;
    end when;
    annotation(
      Icon(coordinateSystem(preserveAspectRatio = false), graphics = {
        Rectangle(extent = {{-80, 80}, {80, -80}}, lineColor = {0, 0, 127}, fillColor = {245, 250, 235}, fillPattern = FillPattern.Solid),
        Text(extent = {{-70, 24}, {70, -12}}, textString = "Stage"),
        Text(extent = {{-70, -24}, {70, -56}}, textString = "Chillers")}),
      Diagram(coordinateSystem(preserveAspectRatio = false)));
  end ChillerStagingControl;

  Buildings.Fluid.Movers.FlowControlled_m_flow fanSup(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal, dp_nominal = 249, nominalValuesDefineDefaultPressureCurve = true, addPowerToMedium = false, dp(start = 249), m_flow(start = mAir_flow_nominal), use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, T_start = 293.15) "Supply fan for air flow through the room" annotation(
    Placement(visible = true, transformation(extent = {{354, -235}, {334, -215}}, rotation = 0)));
  Buildings.Fluid.HeatExchangers.DryCoilCounterFlow cooCoi(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumA, m2_flow_nominal = mAir_flow_nominal, m1_flow_nominal = mCHW_flow_nominal, m1_flow(start = mCHW_flow_nominal), m2_flow(start = mAir_flow_nominal), dp2_nominal = 249 * 3, UA_nominal = mAir_flow_nominal * 1006 * 5, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp1_nominal(displayUnit = "Pa") = 1000 + 89580) "Cooling coil" annotation(
    Placement(visible = true, transformation(extent = {{306, -180}, {286, -160}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant mFanFlo(k = mAir_flow_nominal) "Mass flow rate of fan" annotation(
    Placement(visible = true, transformation(extent = {{288, -206}, {308, -186}}, rotation = 0)));
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCHW(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal, dp_nominal = 325474, nominalValuesDefineDefaultPressureCurve = true, m_flow(start = mCHW_flow_nominal), dp(start = 325474), use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "Chilled water pump" annotation(
    Placement(visible = true, transformation(origin = {220, 70}, extent = {{10, 10}, {-10, -10}}, rotation = 270)));
  Buildings.Fluid.Storage.ExpansionVessel expVesCHW(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000) "Expansion vessel" annotation(
    Placement(visible = true, transformation(extent = {{256, -155}, {276, -135}}, rotation = 0)));
  Buildings.Fluid.HeatExchangers.CoolingTowers.YorkCalc cooTow(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal, PFan_nominal = 6000, TAirInWB_nominal(displayUnit = "degC") = 283.15, TApp_nominal = 6, dp_nominal = 14930 + 14930 + 74650, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial) "Cooling tower" annotation(
    Placement(visible = true, transformation(origin = {280, 239}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCW(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal, dp_nominal = 214992, nominalValuesDefineDefaultPressureCurve = true, dp(start = 214992), use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "Condenser water pump" annotation(
    Placement(visible = true, transformation(origin = {360, 200}, extent = {{-10, 10}, {10, -10}}, rotation = 270)));
  Buildings.Fluid.Actuators.Valves.TwoWayLinear val5(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 89580, y_start = 1, use_inputFilter = false) "Control valve for condenser water loop of chiller" annotation(
    Placement(visible = true, transformation(origin = {220, 180}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Buildings.Fluid.Actuators.Valves.TwoWayEqualPercentage val1(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 14930, use_inputFilter = false, from_dp = true) "Bypass control valve for economizer. 1: disable economizer, 0: enable economoizer" annotation(
    Placement(visible = true, transformation(origin = {220, -122}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Buildings.Fluid.Storage.ExpansionVessel expVesChi(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000) annotation(
    Placement(visible = true, transformation(extent = {{242, 143}, {262, 163}}, rotation = 0)));
  Buildings.Fluid.Chillers.ElectricEIR chi(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumW, m1_flow_nominal = mCW_flow_nominal, m2_flow_nominal = mCHW_flow_nominal, dp2_nominal = 0, dp1_nominal = 0, per = Buildings.Fluid.Chillers.Data.ElectricEIR.ElectricEIRChiller_Carrier_19XR_742kW_5_42COP_VSD(QEva_flow_nominal = -chiller1Capacity), energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) annotation(
    Placement(visible = true, transformation(extent = {{280, 83}, {260, 103}}, rotation = 0)));
  Buildings.Fluid.Actuators.Valves.TwoWayLinear val6(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 14930 + 89580, y_start = 1, use_inputFilter = false, from_dp = true) "Control valve for chilled water leaving from chiller" annotation(
    Placement(visible = true, transformation(origin = {362, 68}, extent = {{-10, 10}, {10, -10}}, rotation = 270)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCHWChi1In(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal) "Temperature of chilled water entering chiller 1" annotation(
    Placement(visible = true, transformation(origin = {242, 87}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCHWChi1Out(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal) "Temperature of chilled water leaving chiller 1" annotation(
    Placement(visible = true, transformation(origin = {322, 87}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TAirSup(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal) "Supply air temperature to data center" annotation(
    Placement(visible = true, transformation(origin = {270, -225}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCHWEntChi(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal) "Temperature of chilled water entering chiller" annotation(
    Placement(visible = true, transformation(origin = {364, -148}, extent = {{10, 10}, {-10, -10}}, rotation = 270)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCWLeaTow(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal) "Temperature of condenser water leaving the cooling tower" annotation(
    Placement(visible = true, transformation(origin = {340, 119}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCWEntTow(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal) "Temperature of condenser water entering cooling tower 1" annotation(
    Placement(visible = true, transformation(origin = {245, 239}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Actuators.Valves.TwoWayEqualPercentage valByp(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 14930, y_start = 0, use_inputFilter = false, from_dp = true) "Bypass valve for chiller." annotation(
    Placement(visible = true, transformation(origin = {292, -74}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCHWLeaCoi(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal) "Temperature of chilled water leaving the cooling coil" annotation(
    Placement(visible = true, transformation(origin = {220, -148}, extent = {{10, 10}, {-10, -10}}, rotation = 270)));
  Buildings.BoundaryConditions.WeatherData.ReaderTMY3 weaData(filNam = Modelica.Utilities.Files.loadResource("modelica://Buildings/Resources/weatherdata/USA_CA_San.Francisco.Intl.AP.724940_TMY3.mos")) annotation(
    Placement(transformation(extent = {{-360, -100}, {-340, -80}})));
  Buildings.BoundaryConditions.WeatherData.Bus weaBus annotation(
    Placement(transformation(extent = {{-332, -98}, {-312, -78}})));
  Modelica.Blocks.Sources.Constant TSetRoom(k = 273.15 + 23) "Room temperature setpoint within the 20 to 26 degC operating band" annotation(
    Placement(visible = true, transformation(origin = {110, -95}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression mCHWFlow1Cmd(y = combinedCtrl1.mCHW_flow) "Combined CHW flow command for chiller 1" annotation(
    Placement(visible = true, transformation(origin = {178, 69}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.MixingVolumes.MixingVolume vol(redeclare package Medium = MediumA, nPorts = 2, V = rooLen * rooWid * rooHei, m_flow_nominal = mAir_flow_nominal, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, final T_start = 293.15, final prescribedHeatFlowRate = true) "Volume of air in the room" annotation(
    Placement(visible = true, transformation(origin = {230, -240}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor TRooAir "Temperature of the room" annotation(
    Placement(visible = true, transformation(extent = {{260, -292}, {280, -272}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput roomCoolingDemand(unit = "W") "Common room cooling demand";
  Modelica.Blocks.Interfaces.RealOutput coilCooling(unit = "W") "Cooling transferred from air to chilled water by the coil";
  Modelica.Blocks.Interfaces.RealOutput chiller1EvaporatorCooling(unit = "W") "Cooling produced by chiller 1 evaporator";
  Modelica.Blocks.Interfaces.RealOutput chiller2EvaporatorCooling(unit = "W") "Cooling produced by chiller 2 evaporator";
  Modelica.Blocks.Interfaces.RealOutput roomTemperature(unit = "K") "Room air temperature";
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow QSou "Heat source of the room" annotation(
    Placement(visible = true, transformation(extent = {{182, -292}, {202, -272}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = demandRampDuration, height = QRoo_flow, offset = 0, startTime = demandRampStartTime) annotation(
    Placement(visible = true, transformation(extent = {{140, -292}, {160, -272}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression roomDemandSignal(y = QSou.Q_flow) "Authoritative common room cooling demand from the room heat source" annotation(
    Placement(transformation(extent = {{100, -296}, {120, -276}})));
  Modelica.Blocks.Sources.RealExpression coilCoolingSignal(y = cooCoi.Q1_flow) "Air-side coil cooling signal" annotation(
    Placement(transformation(extent = {{100, -250}, {120, -230}})));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature TOut annotation(
    Placement(visible = true, transformation(extent = {{134, -266}, {154, -246}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor theCon(G = 10000 / 30) annotation(
    Placement(visible = true, transformation(extent = {{182, -266}, {202, -246}}, rotation = 0)));
  Buildings.Examples.ChillerPlant.BaseClasses.Controls.KMinusU KMinusU(k = 1) annotation(
    Placement(visible = true, transformation(origin = {192, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Controls.Continuous.LimPID conPIDTAirSup(Td = 1, Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, k = 0.1, reverseAction = true, strict = true) annotation(
    Placement(visible = true, transformation(origin = {160, -122}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Movers.FlowControlled_m_flow fanRet(redeclare package Medium = MediumA, T_start = 293.15, dp_nominal = 249, nominalValuesDefineDefaultPressureCurve = true, addPowerToMedium = false, dp(start = 249), energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, m_flow(start = mAir_flow_nominal), m_flow_nominal = mAir_flow_nominal, use_inputFilter = false) "Return fan for air flow from the room" annotation(
    Placement(visible = true, transformation(extent = {{202, -235}, {182, -215}}, rotation = 0)));
  Buildings.Fluid.Actuators.Dampers.Exponential damRet(redeclare package Medium = MediumA, m_flow(start = 0.3 * mAir_flow_nominal), m_flow_nominal = mAir_flow_nominal, use_inputFilter = false) annotation(
    Placement(visible = true, transformation(origin = {150, -202}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Buildings.Fluid.Actuators.Dampers.Exponential damEA(redeclare package Medium = MediumA, m_flow(start = 0.7 * mAir_flow_nominal), m_flow_nominal = mAir_flow_nominal, use_inputFilter = false) annotation(
    Placement(visible = true, transformation(origin = {110, -226}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Buildings.Fluid.Actuators.Dampers.Exponential damOA(redeclare package Medium = MediumA, m_flow(start = 0.7 * mAir_flow_nominal), m_flow_nominal = mAir_flow_nominal, use_inputFilter = false) annotation(
    Placement(visible = true, transformation(origin = {110, -176}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant damCon(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {30, -145}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Examples.ChillerPlant.BaseClasses.Controls.KMinusU kMinusU(k = 1) annotation(
    Placement(visible = true, transformation(origin = {110, -128}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.FixedResistances.Junction junRet(redeclare package Medium = MediumA, T_start = 293.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mAir_flow_nominal * {1, -1, -1}) annotation(
    Placement(visible = true, transformation(origin = {150, -226}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Buildings.Fluid.Sources.Outside out(redeclare package Medium = MediumA, nPorts = 2, use_C_in = false) annotation(
    Placement(visible = true, transformation(extent = {{48, -206}, {68, -186}}, rotation = 0)));
  Buildings.Fluid.FixedResistances.Junction junOut(redeclare package Medium = MediumA, T_start = 293.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mAir_flow_nominal * {1, -1, 1}) annotation(
    Placement(visible = true, transformation(origin = {150, -176}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.RelativePressure PCHW(redeclare package Medium = MediumW) annotation(
    Placement(visible = true, transformation(origin = {292, -102}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));

  Buildings.Fluid.Movers.FlowControlled_m_flow pumCHW2(redeclare package Medium = MediumW, dp_nominal = 325474, nominalValuesDefineDefaultPressureCurve = true, dp(start = 325474), energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, m_flow(start = mCHW_flow_nominal), m_flow_nominal = mCHW_flow_nominal, use_inputFilter = false) annotation(
    Placement(visible = true, transformation(origin = {-32, 72}, extent = {{10, 10}, {-10, -10}}, rotation = 270)));
  Buildings.Fluid.Actuators.Valves.TwoWayLinear val8(redeclare package Medium = MediumW, dpFixed_nominal = 14930 + 89580, dpValve_nominal = 20902, from_dp = true, m_flow_nominal = mCHW_flow_nominal, use_inputFilter = false, y_start = 1) annotation(
    Placement(visible = true, transformation(origin = {128, 16}, extent = {{-10, 10}, {10, -10}}, rotation = 270)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCHWChi2In(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal) "Temperature of chilled water entering chiller 2" annotation(
    Placement(visible = true, transformation(origin = {8, 87}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCHWChi2Out(redeclare package Medium = MediumW, m_flow_nominal = mCHW_flow_nominal) "Temperature of chilled water leaving chiller 2" annotation(
    Placement(visible = true, transformation(origin = {88, 87}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.HeatExchangers.CoolingTowers.YorkCalc cooTow2(redeclare package Medium = MediumW, PFan_nominal = 6000, TAirInWB_nominal(displayUnit = "degC") = 283.15, TApp_nominal = 6, dp_nominal = 14930 + 14930 + 74650, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial, m_flow_nominal = mCW_flow_nominal) "Cooling tower 2" annotation(
    Placement(visible = true, transformation(origin = {48, 229}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression mCHWFlow2Cmd(y = combinedCtrl2.mCHW_flow) "Combined CHW flow command for chiller 2" annotation(
    Placement(visible = true, transformation(origin = {-90, 71}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCW2(redeclare package Medium = MediumW, dp_nominal = 214992, nominalValuesDefineDefaultPressureCurve = true, dp(start = 214992), energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, m_flow_nominal = mCW_flow_nominal, use_inputFilter = false) annotation(
    Placement(visible = true, transformation(origin = {128, 200}, extent = {{-10, 10}, {10, -10}}, rotation = 270)));
  Buildings.Fluid.Storage.ExpansionVessel expVesChi2(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000) annotation(
    Placement(visible = true, transformation(extent = {{10, 143}, {30, 163}}, rotation = 0)));
  Buildings.Fluid.Actuators.Valves.TwoWayLinear val7(redeclare package Medium = MediumW, dpFixed_nominal = 89580, dpValve_nominal = 20902, m_flow_nominal = mCW_flow_nominal, use_inputFilter = false, y_start = 1) annotation(
    Placement(visible = true, transformation(origin = {-12, 180}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TWCLeaTow2(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal) annotation(
    Placement(visible = true, transformation(origin = {108, 119}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Buildings.Fluid.Sensors.TemperatureTwoPort TCWEntTow2(redeclare package Medium = MediumW, m_flow_nominal = mCW_flow_nominal) "Temperature of condenser water entering cooling tower 2" annotation(
    Placement(visible = true, transformation(origin = {13, 229}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Buildings.Fluid.Chillers.ElectricEIR chi2(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumW, dp1_nominal = 0, dp2_nominal = 0, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, m1_flow_nominal = mCW_flow_nominal, m2_flow_nominal = mCHW_flow_nominal, per = Buildings.Fluid.Chillers.Data.ElectricEIR.ElectricEIRChiller_Carrier_19XR_742kW_5_42COP_VSD(QEva_flow_nominal = -chiller2Capacity)) annotation(
    Placement(visible = true, transformation(extent = {{48, 83}, {28, 103}}, rotation = 0)));
  Buildings.Fluid.FixedResistances.Junction junCHWSup(redeclare package Medium = MediumW, T_start = 293.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mCHW_flow_nominal * {1, -1, 1}) annotation(
    Placement(visible = true, transformation(origin = {364, 2}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Buildings.Fluid.FixedResistances.Junction junCHWRet(redeclare package Medium = MediumW, T_start = 293.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mCHW_flow_nominal * {1, -1, -1}) annotation(
    Placement(visible = true, transformation(origin = {220, -38}, extent = {{10, -10}, {-10, 10}}, rotation = 270)));

  Buildings.Fluid.FixedResistances.Junction junCHWRet2(redeclare package Medium = MediumW, T_start = 293.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mCHW_flow_nominal * {1, -1, -1}) annotation(
    Placement(visible = true, transformation(origin = {-12, -28}, extent = {{10, -10}, {-10, 10}}, rotation = 270)));
  Buildings.Fluid.FixedResistances.Junction junCHWSup2(redeclare package Medium = MediumW, T_start = 293.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mCHW_flow_nominal * {1, -1, 1}) annotation(
    Placement(visible = true, transformation(origin = {128, -12}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Buildings.Fluid.Actuators.Valves.TwoWayLinear val8_2(redeclare package Medium = MediumW, dpFixed_nominal = 14930 + 89580, dpValve_nominal = 20902, from_dp = true, m_flow_nominal = mCHW_flow_nominal, use_inputFilter = false, y_start = 1) annotation(
    Placement(visible = true, transformation(origin = {-12, 2}, extent = {{10, -10}, {-10, 10}}, rotation = 270)));
  CombinedChilledWaterControl combinedCtrl1(dTSet = 5, dTDeadband = 0.2, samplePeriod = 5 * 60, externalSamplePeriod = 10 * 60, responseTime = 120, mCHWMin = 0.3 * mCHW_flow_nominal, mCHWMax = mCHW_flow_nominal, mCHWStart = mCHW_flow_nominal, TCHWRTSet = TCHWRTSet, TChiSetMin = TChiSetMin, TChiSetMax = TChiSetMax, TChiSetStart = 273.15 + 7) "Flow-first control with CHWST reset for chiller 1" annotation(
    Placement(visible = true, transformation(origin = {382, 34}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  CombinedChilledWaterControl combinedCtrl2(dTSet = 5, dTDeadband = 0.2, samplePeriod = 5 * 60, externalSamplePeriod = 10 * 60, responseTime = 120, mCHWMin = 0.3 * mCHW_flow_nominal, mCHWMax = mCHW_flow_nominal, mCHWStart = mCHW_flow_nominal, TCHWRTSet = TCHWRTSet, TChiSetMin = TChiSetMin, TChiSetMax = TChiSetMax, TChiSetStart = 273.15 + 7) "Flow-first control with CHWST reset for chiller 2" annotation(
    Placement(visible = true, transformation(origin = {370, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ChillerStagingControl chillerStagingCtrl(kWPerTR = kWPerTR, chiller1Capacity_TR = chiller1Capacity_TR, chiller2Capacity_TR = chiller2Capacity_TR, stage2OnThreshold_TR = chiller1Capacity_TR, stage2OffThreshold_TR = chiller1Capacity_TR - chillerStageDeadband_TR, minimumLoad_TR = chillerMinimumLoad_TR, samplePeriod = chillerStageSamplePeriod, mCW_flow_nominal = mCW_flow_nominal) "Priority staging controller: chiller 1 first, chiller 2 above chiller 1 room-heat-gain capacity" annotation(
    Placement(visible = true, transformation(origin = {320, 130}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  roomCoolingDemand = max(0, QSou.Q_flow);
  coilCooling = max(0, cooCoi.Q1_flow);
  chiller1EvaporatorCooling = max(0, -chi.Q2_flow);
  chiller2EvaporatorCooling = max(0, -chi2.Q2_flow);
  roomTemperature = TRooAir.T;
  connect(expVesCHW.port_a, cooCoi.port_b1) annotation(
    Line(points = {{266, -155}, {266, -164.5}, {286, -164.5}, {286, -164}}, color = {0, 127, 255}, thickness = 0.5));
  connect(cooTow.port_b, pumCW.port_a) annotation(
    Line(points = {{290, 239}, {369, 239}, {369, 210}}, color = {0, 127, 255}, thickness = 0.5));
  connect(val5.port_a, chi.port_b1) annotation(
    Line(points = {{220, 170}, {220, 99}, {256, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(expVesChi.port_a, chi.port_b1) annotation(
    Line(points = {{252, 143}, {252, 99}, {260, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(cooCoi.port_b2, fanSup.port_a) annotation(
    Line(points = {{306, -176}, {365, -176}, {365, -225}, {354, -225}}, color = {0, 127, 255}, thickness = 0.5));
  connect(mFanFlo.y, fanSup.m_flow_in) annotation(
    Line(points = {{309, -196}, {344, -196}, {344, -213}}, color = {0, 0, 127}, pattern = LinePattern.Dash));
  connect(TAirSup.port_a, fanSup.port_b) annotation(
    Line(points = {{280, -225}, {334, -225}}, color = {0, 127, 255}, thickness = 0.5));
  connect(val1.port_a, TCHWLeaCoi.port_b) annotation(
    Line(points = {{220, -132}, {220, -138}}, color = {0, 127, 255}, thickness = 0.5));
  connect(TCWLeaTow.port_b, chi.port_a1) annotation(
    Line(points = {{330, 119}, {310, 119}, {310, 99}, {284, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(weaData.weaBus, weaBus) annotation(
    Line(points = {{-340, -90}, {-331, -90}, {-331, -88}, {-322, -88}}, color = {255, 204, 51}, thickness = 0.5, smooth = Smooth.None),
    Text(string = "%second", index = 1, extent = {{6, 3}, {6, 3}}));
  connect(cooTow.TAir, weaBus.TWetBul) annotation(
    Line(points = {{268, 243}, {-322, 243}, {-322, -88}}, color = {0, 0, 127}, pattern = LinePattern.Dash));
  connect(val5.port_b, TCWEntTow.port_a) annotation(
    Line(points = {{220, 190}, {220, 239}, {235, 239}}, color = {0, 127, 255}, thickness = 0.5));
  connect(TCWEntTow.port_b, cooTow.port_a) annotation(
    Line(points = {{255, 239}, {261, 239}}, color = {0, 127, 255}, thickness = 0.5));
  connect(pumCW.port_b, TCWLeaTow.port_a) annotation(
    Line(points = {{360, 190}, {360, 119}, {342, 119}}, color = {0, 127, 255}, thickness = 0.5));
  connect(chi.port_b2, TCHWChi1Out.port_a) annotation(
    Line(points = {{280, 87}, {312, 87}}, color = {0, 127, 255}, thickness = 0.5));
  connect(TCHWChi1Out.port_b, val6.port_a) annotation(
    Line(points = {{332, 87}, {362, 87}, {362, 78}}, color = {0, 127, 255}, thickness = 0.5));
  connect(chillerStagingCtrl.yChiller1, val5.y) annotation(
    Line(points = {{340, 120}, {213, 120}, {213, 179}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.yChiller1, val6.y) annotation(
    Line(points = {{340, 120}, {350, 120}, {350, 68}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.mCW_flow1, pumCW.m_flow_in) annotation(
    Line(points = {{340, 104}, {355, 104}, {355, 199}}, color = {0, 0, 127}));
  connect(mCHWFlow1Cmd.y, pumCHW.m_flow_in) annotation(
    Line(points = {{189, 69}, {206, 69}, {206, 70}, {220, 70}}, color = {0, 0, 127}));
  connect(combinedCtrl1.TCHWSTSet, chi.TSet) annotation(
    Line(points = {{382, 34}, {390, 34}, {390, 110}, {281, 110}, {281, 89}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.chiller1On, chi.on) annotation(
    Line(points = {{340, 144}, {340, 111}, {279, 111}, {279, 96}}, color = {255, 0, 255}));
  connect(chillerStagingCtrl.chiller1On, combinedCtrl1.pumpOn) annotation(
    Line(points = {{340, 144}, {382, 144}, {382, 34}}, color = {255, 0, 255}));
  connect(coilCoolingSignal.y, combinedCtrl1.coilCooling);
  connect(roomDemandSignal.y, combinedCtrl1.coolingDemand);
  connect(coilCoolingSignal.y, chillerStagingCtrl.deliveredCooling);
  connect(chillerStagingCtrl.yChiller1, cooTow.y) annotation(
    Line(points = {{340, 120}, {340, 247}, {268, 247}}, color = {0, 0, 127}));
  connect(TRooAir.port, vol.heatPort) annotation(
    Line(points = {{260, -282}, {242, -282}, {242, -240}}, color = {191, 0, 0}));
  connect(QSou.port, vol.heatPort) annotation(
    Line(points = {{202, -282}, {242, -282}, {242, -240}}, color = {191, 0, 0}));
  connect(ramp.y, QSou.Q_flow) annotation(
    Line(points = {{161, -282}, {181, -282}}, color = {0, 0, 127}));
  connect(roomDemandSignal.y, chillerStagingCtrl.roomHeatGain) annotation(
    Line(points = {{161, -282}, {170, -282}, {170, 130}, {300, 130}}, color = {0, 0, 127}));
  connect(theCon.port_a, TOut.port) annotation(
    Line(points = {{182, -256}, {154, -256}}, color = {191, 0, 0}));
  connect(theCon.port_b, vol.heatPort) annotation(
    Line(points = {{202, -256}, {242, -256}, {242, -240}}, color = {191, 0, 0}));
  connect(TOut.T, weaBus.TDryBul) annotation(
    Line(points = {{132, -256}, {-322, -256}, {-322, -88}}, color = {0, 0, 127}));
  connect(TAirSup.port_b, vol.ports[1]) annotation(
    Line(points = {{260, -225}, {232, -225}, {232, -230}}, color = {0, 127, 255}));
  connect(cooCoi.port_b1, TCHWLeaCoi.port_a) annotation(
    Line(points = {{286, -164}, {224, -164}, {224, -158}}, color = {0, 127, 255}));
  connect(pumCHW.port_b, TCHWChi1In.port_a) annotation(
    Line(points = {{224, 79}, {224, 87}, {232, 87}}, color = {0, 127, 255}));
  connect(TCHWChi1In.port_b, chi.port_a2) annotation(
    Line(points = {{252, 87}, {260, 87}}, color = {0, 127, 255}));
  connect(valByp.port_a, val1.port_b) annotation(
    Line(points = {{282, -74}, {226, -74}, {226, -112}}, color = {0, 127, 255}));
  connect(valByp.port_b, TCHWEntChi.port_b) annotation(
    Line(points = {{302, -74}, {364, -74}, {364, -138}}, color = {0, 127, 255}));
  connect(cooCoi.port_a1, TCHWEntChi.port_a) annotation(
    Line(points = {{306, -164}, {364, -164}, {364, -158}}, color = {0, 127, 255}));
  connect(TSetRoom.y, conPIDTAirSup.u_s) annotation(
    Line(points = {{121, -95}, {132, -95}, {132, -122}, {148, -122}}, color = {0, 0, 127}));
  connect(conPIDTAirSup.y, val1.y) annotation(
    Line(points = {{171, -122}, {210, -122}}, color = {0, 0, 127}));
  connect(KMinusU.u, conPIDTAirSup.y) annotation(
    Line(points = {{180, -62}, {173.2, -62}, {173.2, -122}}, color = {0, 0, 127}));
  connect(KMinusU.y, valByp.y) annotation(
    Line(points = {{203, -62}, {290, -62}}, color = {0, 0, 127}));
  connect(TRooAir.T, conPIDTAirSup.u_m) annotation(
    Line(points = {{270, -282}, {270, -170}, {162, -170}, {162, -134}}, color = {0, 0, 127}));
  connect(fanRet.m_flow_in, mFanFlo.y) annotation(
    Line(points = {{192, -213}, {309, -213}, {309, -196}}, color = {0, 0, 127}));
  connect(damCon.y, damOA.y) annotation(
    Line(points = {{41, -145}, {108, -145}, {108, -164}}, color = {0, 0, 127}));
  connect(damEA.y, damCon.y) annotation(
    Line(points = {{110, -238}, {90, -238}, {90, -145}, {42, -145}, {42, -145.5}, {43, -145.5}, {43, -145}}, color = {0, 0, 127}));
  connect(kMinusU.u, damCon.y) annotation(
    Line(points = {{98.2, -128}, {89.2, -128}, {89.2, -144.75}, {41.2, -144.75}, {41.2, -145}}, color = {0, 0, 127}));
  connect(kMinusU.y, damRet.y) annotation(
    Line(points = {{121, -128}, {132, -128}, {132, -201.5}, {140, -201.5}, {140, -202}}, color = {0, 0, 127}));
  connect(fanRet.port_a, vol.ports[2]) annotation(
    Line(points = {{202, -225}, {232, -225}, {232, -230}}, color = {0, 127, 255}));
  connect(junRet.port_2, damEA.port_a) annotation(
    Line(points = {{140, -226}, {116, -226}}, color = {0, 127, 255}));
  connect(junRet.port_3, damRet.port_a) annotation(
    Line(points = {{150, -216}, {150, -212}}, color = {0, 127, 255}));
  connect(junRet.port_1, fanRet.port_b) annotation(
    Line(points = {{160, -226}, {163, -226}, {163, -225}, {180, -225}}, color = {0, 127, 255}));
  connect(damOA.port_a, out.ports[1]) annotation(
    Line(points = {{100, -176}, {70, -176}, {70, -196}}, color = {0, 127, 255}));
  connect(damEA.port_b, out.ports[2]) annotation(
    Line(points = {{100, -226}, {70, -226}, {70, -196}}, color = {0, 127, 255}));
  connect(out.weaBus, weaBus);
  connect(damOA.port_b, junOut.port_1) annotation(
    Line(points = {{120, -176}, {144, -176}}, color = {0, 127, 255}));
  connect(junOut.port_2, cooCoi.port_a2) annotation(
    Line(points = {{160, -176}, {284, -176}}, color = {0, 127, 255}));
  connect(junOut.port_3, damRet.port_b) annotation(
    Line(points = {{150, -186}, {150, -192}}, color = {0, 127, 255}));
  connect(PCHW.port_a, valByp.port_b) annotation(
    Line(points = {{302, -102}, {302, -107}, {304, -107}, {304, -74}}, color = {0, 127, 255}));
  connect(PCHW.port_b, valByp.port_a) annotation(
    Line(points = {{282, -102}, {282, -107}, {284, -107}, {284, -74}}, color = {0, 127, 255}));
  connect(mCHWFlow2Cmd.y, pumCHW2.m_flow_in) annotation(
    Line(points = {{-79, 71}, {-32, 71}, {-32, 72}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.yChiller2, val7.y) annotation(
    Line(points = {{340, 112}, {340, 172}, {-19, 172}, {-19, 179}}, color = {0, 0, 127}));
  connect(cooTow2.port_b, pumCW2.port_a) annotation(
    Line(points = {{58, 229}, {128, 229}, {128, 210}}, color = {0, 127, 255}, thickness = 0.5));
  connect(combinedCtrl2.TCHWSTSet, chi2.TSet) annotation(
    Line(points = {{370, -36}, {378, -36}, {378, 110}, {49, 110}, {49, 89}}, color = {0, 0, 127}));
  connect(chi2.port_b2, TCHWChi2Out.port_a) annotation(
    Line(points = {{48, 87}, {78, 87}}, color = {0, 127, 255}, thickness = 0.5));
  connect(TCHWChi2Out.port_b, val8.port_a) annotation(
    Line(points = {{98, 87}, {128, 87}, {128, 26}}, color = {0, 127, 255}, thickness = 0.5));
  connect(pumCHW2.port_b, TCHWChi2In.port_a) annotation(
    Line(points = {{-32, 72}, {-46, 72}, {-46, 86}, {8, 86}, {8, 87}}, color = {0, 127, 255}));
  connect(TCHWChi2In.port_b, chi2.port_a2) annotation(
    Line(points = {{18, 87}, {28, 87}}, color = {0, 127, 255}));
  connect(TWCLeaTow2.port_b, chi2.port_a1) annotation(
    Line(points = {{98, 119}, {78, 119}, {78, 99}, {52, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(val7.port_a, chi2.port_b1) annotation(
    Line(points = {{-12, 170}, {-12, 99}, {24, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(chillerStagingCtrl.mCW_flow2, pumCW2.m_flow_in) annotation(
    Line(points = {{340, 96}, {116, 96}, {116, 200}}, color = {0, 0, 127}));
  connect(val7.port_b, TCWEntTow2.port_a) annotation(
    Line(points = {{-12, 190}, {-12, 229}, {3, 229}}, color = {0, 127, 255}, thickness = 0.5));
  connect(TCWEntTow2.port_b, cooTow2.port_a) annotation(
    Line(points = {{23, 229}, {38, 229}}, color = {0, 127, 255}, thickness = 0.5));
  connect(expVesChi2.port_a, chi2.port_b1) annotation(
    Line(points = {{20, 143}, {20, 99}, {28, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(chillerStagingCtrl.yChiller2, cooTow2.y) annotation(
    Line(points = {{340, 112}, {340, 237}, {36, 237}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.chiller2On, chi2.on) annotation(
    Line(points = {{340, 136}, {340, 111}, {47, 111}, {47, 96}}, color = {255, 0, 255}));
  connect(chillerStagingCtrl.chiller2On, combinedCtrl2.pumpOn) annotation(
    Line(points = {{340, 136}, {346, 136}, {346, -36}, {370, -36}}, color = {255, 0, 255}));
  connect(coilCoolingSignal.y, combinedCtrl2.coilCooling);
  connect(roomDemandSignal.y, combinedCtrl2.coolingDemand);
  connect(TCHWChi1In.T, combinedCtrl1.TCHWReturn) annotation(
    Line(points = {{242, 98}, {206, 98}, {206, 45}, {382, 45}, {382, 34}}, color = {0, 0, 127}));
  connect(TCHWChi2In.T, combinedCtrl2.TCHWReturn) annotation(
    Line(points = {{8, 98}, {206, 98}, {206, -56}, {346, -56}, {346, -16}, {370, -16}, {370, -36}}, color = {0, 0, 127}));
  connect(TCHWChi1Out.T, combinedCtrl1.TCHWSupply) annotation(
    Line(points = {{322, 76}, {322, 34}, {382, 34}}, color = {0, 0, 127}));
  connect(TCHWChi2Out.T, combinedCtrl2.TCHWSupply) annotation(
    Line(points = {{88, 76}, {88, -36}, {370, -36}}, color = {0, 0, 127}));
  connect(pumCW2.port_b, TWCLeaTow2.port_a) annotation(
    Line(points = {{128, 190}, {128, 119}, {110, 119}}, color = {0, 127, 255}, thickness = 0.5));
  connect(cooTow2.TAir, weaBus.TWetBul) annotation(
    Line(points = {{36, 234}, {-322, 234}, {-322, -88}}, color = {0, 0, 127}));
  connect(junCHWRet.port_2, pumCHW.port_a) annotation(
    Line(points = {{220, -28}, {220, 60}}, color = {0, 127, 255}));
  connect(junCHWRet.port_1, val1.port_b) annotation(
    Line(points = {{220, -48}, {220, -112}}, color = {0, 127, 255}));
  connect(val6.port_b, junCHWSup.port_1) annotation(
    Line(points = {{362, 68}, {348, 68}, {348, 12}, {364, 12}, {364, 2}}, color = {0, 127, 255}));
  connect(junCHWSup.port_2, TCHWEntChi.port_b) annotation(
    Line(points = {{364, 2}, {350, 2}, {350, -157.6}, {364, -157.6}, {364, -148}}, color = {0, 127, 255}));
  connect(junCHWSup2.port_2, junCHWSup.port_3) annotation(
    Line(points = {{128, -12}, {114, -12}, {114, -26}, {206, -26}, {206, 2}, {364, 2}}, color = {0, 127, 255}));
  connect(junCHWSup2.port_1, val8.port_b) annotation(
    Line(points = {{128, -2}, {128, 6}}, color = {0, 127, 255}));
  connect(junCHWRet2.port_1, junCHWRet.port_3) annotation(
    Line(points = {{-12, -38}, {210, -38}}, color = {0, 127, 255}));
  connect(chillerStagingCtrl.yChiller2, val8_2.y) annotation(
    Line(points = {{340, 112}, {340, 2}, {0, 2}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.yChiller2, val8.y) annotation(
    Line(points = {{340, 112}, {340, 16}, {116, 16}}, color = {0, 0, 127}));
  connect(val8_2.port_a, junCHWRet2.port_2) annotation(
    Line(points = {{-12, -8}, {-12, -18}}, color = {0, 127, 255}));
  connect(val8_2.port_b, pumCHW2.port_a) annotation(
    Line(points = {{-12, 2}, {-46, 2}, {-46, 82}, {-32, 82}, {-32, 72}}, color = {0, 127, 255}));
  annotation(
    uses(Modelica(version = "3.2.2"), Buildings(version = "6.0.0")),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-400, -300}, {400, 300}})),
    experiment(StartTime = 13046400, Tolerance = 1e-6, StopTime = 13651200),
    Documentation(info = "<HTML>
<p>
This model is the chilled water plant with discrete time control and
trim and respond logic for a data center. The model is described at
<a href=\"Buildings.Examples.ChillerPlant\">
Buildings.Examples.ChillerPlant</a>.
</p>
</html>", revisions = "<html>
<ul>
<li>
September 21, 2017, by Michael Wetter:<br/>
Set <code>from_dp = true</code> in <code>val6</code> and in <code>valByp</code>
which is needed for Dymola 2018FD01 beta 2 for
<a href=\"modelica://Buildings.Examples.ChillerPlant.DataCenterDiscreteTimeControl\">
Buildings.Examples.ChillerPlant.DataCenterDiscreteTimeControl</a>
to converge.
</li>
<li>
January 22, 2016, by Michael Wetter:<br/>
Corrected type declaration of pressure difference.
This is
for <a href=\"https://github.com/ibpsa/modelica-ibpsa/issues/404\">#404</a>.
</li>
<li>
January 13, 2015 by Michael Wetter:<br/>
Moved model to <code>BaseClasses</code> because the continuous and discrete time
implementation of the trim and respond logic do not extend from a common class,
and hence the <code>constrainedby</code> operator is not applicable.
Moving the model here allows to implement both controllers without using a
<code>replaceable</code> class.
</li>
<li>
January 12, 2015 by Michael Wetter:<br/>
Made media instances replaceable, and used the same instance for both
water loops.
This was done to simplify the numerical benchmarks.
</li>
<li>
December 22, 2014 by Michael Wetter:<br/>
Removed <code>Modelica.Fluid.System</code>
to address issue
<a href=\"https://github.com/lbl-srg/modelica-buildings/issues/311\">#311</a>.
</li>
<li>
March 25, 2014, by Michael Wetter:<br/>
Updated model with new expansion vessel.
</li>
<li>
December 5, 2012, by Michael Wetter:<br/>
Removed the filtered speed calculation for the valves to reduce computing time by 25%.
</li>
<li>
October 16, 2012, by Wangda Zuo:<br/>
Reimplemented the controls.
</li>
<li>
July 20, 2011, by Wangda Zuo:<br/>
Added comments and merge to library.
</li>
<li>
January 18, 2011, by Wangda Zuo:<br/>
First implementation.
</li>
</ul>
</html>"));
end logic3;
