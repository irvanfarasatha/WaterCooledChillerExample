model logic1 "Primary only chiller plant system with water-side economizer"
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

  block ChilledWaterPumpPID "Timed PID controller for one chilled-water pump"
    parameter Modelica.SIunits.TemperatureDifference dTSet = 5 "Target CHW return-supply temperature difference";
    parameter Modelica.SIunits.TemperatureDifference dTDeadband = 0.2 "Neutral band around dTSet";
    parameter Modelica.SIunits.Time internalSamplePeriod = 5 * 60 "Delay between active control actions";
    parameter Modelica.SIunits.Time externalSamplePeriod = 10 * 60 "Delay after dT is inside the neutral band";
    parameter Modelica.SIunits.Time flowResponseTime = 120 "Time constant for smoothing the pump mass flow command";
    parameter Modelica.SIunits.PressureDifference minHead = 500 "Minimum pump head before requesting more chiller";
    parameter Modelica.SIunits.MassFlowRate mCHWMin = 0.3 "Minimum mass flow rate for each enabled CHW pump";
    parameter Modelica.SIunits.MassFlowRate mCHWMax = 1 "Maximum mass flow rate for each enabled CHW pump";
    parameter Modelica.SIunits.MassFlowRate mCHWStart = mCHWMax "Initial mass flow rate command";
    parameter Real kP(unit = "kg/(s.K)") = 0.25 "PID proportional gain from dT error to mass flow";
    parameter Real loadGain(unit = "kg/(s.W)") = 1e-5 "Flow gain from unmet coil load";
    parameter Modelica.SIunits.Power unmetLoadDeadband = 1000 "Allowed coil-load shortfall before overriding delta-T trim";
    parameter Modelica.SIunits.Time Ti = 15 * 60 "PID integral time";
    parameter Modelica.SIunits.Time Td = 0 "PID derivative time; keep 0 for PI behavior";
    Modelica.Blocks.Interfaces.BooleanInput pumpOn "Manual operating state for the pump and chiller" annotation(
      Placement(transformation(extent = {{-120, 70}, {-80, 110}})));
    Modelica.Blocks.Interfaces.RealInput TCHWSupply(unit = "K") "CHW supply temperature" annotation(
      Placement(transformation(extent = {{-120, 10}, {-80, 50}})));
    Modelica.Blocks.Interfaces.RealInput TCHWReturn(unit = "K") "CHW return temperature" annotation(
      Placement(transformation(extent = {{-120, -30}, {-80, 10}})));
    Modelica.Blocks.Interfaces.RealInput pumpHeadInput(unit = "Pa") "Measured CHW pump head or differential pressure" annotation(
      Placement(transformation(extent = {{-120, -70}, {-80, -30}})));
    Modelica.Blocks.Interfaces.RealInput coolingDemand(unit = "W") "Room cooling demand" annotation(
      Placement(transformation(extent = {{-120, -110}, {-80, -70}})));
    Modelica.Blocks.Interfaces.RealInput coilCooling(unit = "W") "Cooling delivered by the air-side coil" annotation(
      Placement(transformation(extent = {{-120, -150}, {-80, -110}})));
    Modelica.Blocks.Interfaces.RealOutput mCHW_flow(unit = "kg/s") "Mass flow command for this CHW pump" annotation(
      Placement(transformation(extent = {{80, 30}, {120, 70}})));
    Modelica.Blocks.Interfaces.RealOutput dT(unit = "K") "Measured CHW return-supply temperature difference" annotation(
      Placement(transformation(extent = {{80, -10}, {120, 30}})));
    Modelica.Blocks.Interfaces.RealOutput pumpHead(unit = "Pa") "Pressure signal used by the controller" annotation(
      Placement(transformation(extent = {{80, -50}, {120, -10}})));
    Modelica.Blocks.Interfaces.BooleanOutput requestMoreChiller "True when flow cannot be reduced because head is already too low" annotation(
      Placement(transformation(extent = {{80, -90}, {120, -50}})));

  protected
    constant Real flowEps(unit = "kg/s") = 1e-6;
    Real dTErr(unit = "K");
    Real unmetLoad(unit = "W");
    discrete Real dTErrInt(unit = "K.s", start = 0, fixed = true);
    discrete Real dTErrSample(unit = "K", start = 0, fixed = true);
    discrete Modelica.SIunits.Time lastControlTime(start = 0, fixed = true);
    discrete Modelica.SIunits.Time nextControlTime(start = 0, fixed = true);
    discrete Modelica.SIunits.MassFlowRate mCHWSet(start = mCHWStart, fixed = true);
    discrete Modelica.SIunits.MassFlowRate mCHWRaw(start = mCHWStart, fixed = true);
    Modelica.SIunits.MassFlowRate mCHWCmd(start = mCHWStart, fixed = true);
  equation
    dT = TCHWReturn - TCHWSupply;
    dTErr = dT - dTSet;
    unmetLoad = max(0, coolingDemand - max(0, coilCooling));
    pumpHead = pumpHeadInput;
    der(mCHWCmd) = (mCHWSet - mCHWCmd) / flowResponseTime;
    mCHW_flow = if pumpOn then mCHWCmd else 0;
  algorithm
    when initial() then
      dTErrInt := 0;
      dTErrSample := dTErr;
      lastControlTime := time;
      nextControlTime := time + internalSamplePeriod;
      mCHWSet := mCHWStart;
      mCHWRaw := mCHWStart;
      requestMoreChiller := false;
    elsewhen time >= pre(nextControlTime) then
      if not pumpOn then
        dTErrInt := 0;
        dTErrSample := dTErr;
        mCHWSet := mCHWStart;
        mCHWRaw := mCHWStart;
        requestMoreChiller := false;
        nextControlTime := time + externalSamplePeriod;
      elseif abs(dTErr) <= dTDeadband and unmetLoad <= unmetLoadDeadband then
        dTErrInt := pre(dTErrInt);
        dTErrSample := dTErr;
        mCHWSet := pre(mCHWSet);
        mCHWRaw := pre(mCHWRaw);
        requestMoreChiller := false;
        nextControlTime := time + externalSamplePeriod;
      else
        if (pre(mCHWSet) > mCHWMin + flowEps and pre(mCHWSet) < mCHWMax - flowEps) or (pre(mCHWSet) <= mCHWMin + flowEps and dTErr > 0) or (pre(mCHWSet) >= mCHWMax - flowEps and dTErr < 0) then
          dTErrInt := pre(dTErrInt) + dTErr * (time - pre(lastControlTime));
        else
          dTErrInt := pre(dTErrInt);
        end if;

        dTErrSample := dTErr;
        if unmetLoad > unmetLoadDeadband then
          mCHWRaw := pre(mCHWSet) + max(loadGain * unmetLoad, kP * max(dTErr, 0));
        else
          mCHWRaw := pre(mCHWSet) + kP * dTErr + kP * Td * (dTErr - pre(dTErrSample)) / max(time - pre(lastControlTime), 1e-6);
        end if;

        if unmetLoad <= unmetLoadDeadband and dTErr < -dTDeadband and pumpHead <= minHead then
          mCHWSet := mCHWMin;
          requestMoreChiller := true;
        else
          mCHWSet := min(mCHWMax, max(mCHWMin, mCHWRaw));
          requestMoreChiller := false;
        end if;
        nextControlTime := time + internalSamplePeriod;
      end if;
      lastControlTime := time;
    end when;
    annotation(
      Icon(coordinateSystem(preserveAspectRatio = false), graphics = {
        Rectangle(extent = {{-80, 80}, {80, -80}}, lineColor = {0, 0, 127}, fillColor = {235, 245, 255}, fillPattern = FillPattern.Solid),
        Text(extent = {{-70, 22}, {70, -14}}, textString = "CHW PID"),
        Text(extent = {{-70, -24}, {70, -56}}, textString = "m_flow")}),
      Diagram(coordinateSystem(preserveAspectRatio = false)));
  end ChilledWaterPumpPID;

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
  Modelica.Blocks.Sources.Constant chiTSet(k = 273.15 + 7) "Set point for chilled water temperature " annotation(
    Placement(visible = true, transformation(origin = {260, 69}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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
  Modelica.Blocks.Sources.Constant chiTSet2(k = 273.15 + 7) annotation(
    Placement(visible = true, transformation(origin = {28, 69}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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
  ChilledWaterPumpPID chwPump1PID(mCHWMin = 0.3 * mCHW_flow_nominal, mCHWMax = mCHW_flow_nominal, mCHWStart = mCHW_flow_nominal, dTSet = 5, dTDeadband = 0.2, internalSamplePeriod = 5 * 60, externalSamplePeriod = 10 * 60, flowResponseTime = 120, minHead = dp_nominal, kP = 0.25 * mCHW_flow_nominal / 5, Ti = 15 * 60, Td = 0) "PID mass flow controller for chilled-water pump 1" annotation(
    Placement(visible = true, transformation(origin = {382, 34}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ChilledWaterPumpPID chwPump2PID(mCHWMin = 0.3 * mCHW_flow_nominal, mCHWMax = mCHW_flow_nominal, mCHWStart = mCHW_flow_nominal, dTSet = 5, dTDeadband = 0.2, internalSamplePeriod = 5 * 60, externalSamplePeriod = 10 * 60, flowResponseTime = 120, minHead = dp_nominal, kP = 0.25 * mCHW_flow_nominal / 5, Ti = 15 * 60, Td = 0) "PID mass flow controller for chilled-water pump 2" annotation(
    Placement(visible = true, transformation(origin = {370, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ChillerStagingControl chillerStagingCtrl(kWPerTR = kWPerTR, chiller1Capacity_TR = chiller1Capacity_TR, chiller2Capacity_TR = chiller2Capacity_TR, stage2OnThreshold_TR = chiller1Capacity_TR, stage2OffThreshold_TR = chiller1Capacity_TR - chillerStageDeadband_TR, minimumLoad_TR = chillerMinimumLoad_TR, samplePeriod = chillerStageSamplePeriod, mCW_flow_nominal = mCW_flow_nominal) "Priority staging controller: chiller 1 first, chiller 2 above chiller 1 room-heat-gain capacity" annotation(
    Placement(visible = true, transformation(origin = {304, 140}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
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
    Line(points = {{304, 140}, {280, 140}, {280, 139}, {206, 139}, {206, 170}, {220, 170}, {220, 180}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.yChiller1, val6.y) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 116}, {308, 116}, {308, 66}, {362, 66}, {362, 68}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.mCW_flow1, pumCW.m_flow_in) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 200}, {360, 200}}, color = {0, 0, 127}));
  connect(chwPump1PID.mCHW_flow, pumCHW.m_flow_in) annotation(
    Line(points = {{382, 34}, {206, 34}, {206, 70}, {220, 70}}, color = {0, 0, 127}));
  connect(chiTSet.y, chi.TSet) annotation(
    Line(points = {{271, 69}, {281, 69}, {281, 89}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.chiller1On, chi.on) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 107}, {256, 107}, {256, 84}, {270, 84}, {270, 93}}, color = {255, 0, 255}));
  connect(chillerStagingCtrl.chiller1On, chwPump1PID.pumpOn) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 116}, {308, 116}, {308, 26}, {382, 26}, {382, 34}}, color = {255, 0, 255}));
  connect(chillerStagingCtrl.yChiller1, cooTow.y) annotation(
    Line(points = {{304, 140}, {266, 140}, {266, 242}, {280, 242}, {280, 239}}, color = {0, 0, 127}));
  connect(TRooAir.port, vol.heatPort) annotation(
    Line(points = {{260, -282}, {242, -282}, {242, -240}}, color = {191, 0, 0}));
  connect(QSou.port, vol.heatPort) annotation(
    Line(points = {{202, -282}, {242, -282}, {242, -240}}, color = {191, 0, 0}));
  connect(ramp.y, QSou.Q_flow) annotation(
    Line(points = {{161, -282}, {181, -282}}, color = {0, 0, 127}));
  connect(roomDemandSignal.y, chillerStagingCtrl.roomHeatGain) annotation(
    Line(points = {{161, -282}, {161, 140}, {304, 140}}, color = {0, 0, 127}));
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
  connect(chwPump2PID.mCHW_flow, pumCHW2.m_flow_in) annotation(
    Line(points = {{370, -36}, {346, -36}, {346, 55}, {-46, 55}, {-46, 72}, {-32, 72}}, color = {0, 0, 127}));
  connect(roomDemandSignal.y, chwPump1PID.coolingDemand);
  connect(coilCoolingSignal.y, chwPump1PID.coilCooling);
  connect(chillerStagingCtrl.yChiller2, val7.y) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 139}, {-26, 139}, {-26, 170}, {-12, 170}, {-12, 180}}, color = {0, 0, 127}));
  connect(coilCoolingSignal.y, chillerStagingCtrl.deliveredCooling);
  connect(cooTow2.port_b, pumCW2.port_a) annotation(
    Line(points = {{58, 229}, {128, 229}, {128, 210}}, color = {0, 127, 255}, thickness = 0.5));
  connect(roomDemandSignal.y, chwPump2PID.coolingDemand);
  connect(coilCoolingSignal.y, chwPump2PID.coilCooling);
  connect(chiTSet2.y, chi2.TSet) annotation(
    Line(points = {{39, 69}, {49, 69}, {49, 89}}, color = {0, 0, 127}));
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
    Line(points = {{304, 140}, {266, 140}, {266, 139}, {114, 139}, {114, 200}, {128, 200}}, color = {0, 0, 127}));
  connect(val7.port_b, TCWEntTow2.port_a) annotation(
    Line(points = {{-12, 190}, {-12, 229}, {3, 229}}, color = {0, 127, 255}, thickness = 0.5));
  connect(TCWEntTow2.port_b, cooTow2.port_a) annotation(
    Line(points = {{23, 229}, {38, 229}}, color = {0, 127, 255}, thickness = 0.5));
  connect(expVesChi2.port_a, chi2.port_b1) annotation(
    Line(points = {{20, 143}, {20, 99}, {28, 99}}, color = {0, 127, 255}, thickness = 0.5));
  connect(chillerStagingCtrl.yChiller2, cooTow2.y) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 214.5}, {34, 214.5}, {34, 232}, {48, 232}, {48, 229}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.chiller2On, chi2.on) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 133}, {24, 133}, {24, 99}, {38, 99}, {38, 93}}, color = {255, 0, 255}));
  connect(chillerStagingCtrl.chiller2On, chwPump2PID.pumpOn) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 116}, {308, 116}, {308, -16}, {370, -16}, {370, -36}}, color = {255, 0, 255}));
  connect(TCHWChi1Out.T, chwPump1PID.TCHWSupply) annotation(
    Line(points = {{322, 98}, {350, 98}, {350, 42}, {382, 42}, {382, 34}}, color = {0, 0, 127}));
  connect(TCHWChi1In.T, chwPump1PID.TCHWReturn) annotation(
    Line(points = {{242, 98}, {206, 98}, {206, 45}, {382, 45}, {382, 34}}, color = {0, 0, 127}));
  connect(PCHW.p_rel, chwPump1PID.pumpHeadInput) annotation(
    Line(points = {{292, -102}, {278, -102}, {278, 39}, {382, 39}, {382, 34}}, color = {0, 0, 127}));
  connect(TCHWChi2Out.T, chwPump2PID.TCHWSupply) annotation(
    Line(points = {{88, 98}, {346, 98}, {346, -46}, {370, -46}, {370, -36}}, color = {0, 0, 127}));
  connect(TCHWChi2In.T, chwPump2PID.TCHWReturn) annotation(
    Line(points = {{8, 98}, {206, 98}, {206, -56}, {346, -56}, {346, -16}, {370, -16}, {370, -36}}, color = {0, 0, 127}));
  connect(PCHW.p_rel, chwPump2PID.pumpHeadInput) annotation(
    Line(points = {{292, -102}, {278, -102}, {278, -26}, {370, -26}, {370, -36}}, color = {0, 0, 127}));
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
    Line(points = {{304, 140}, {280, 140}, {280, 139}, {206, 139}, {206, 41}, {-26, 41}, {-26, 12}, {-12, 12}, {-12, 2}}, color = {0, 0, 127}));
  connect(chillerStagingCtrl.yChiller2, val8.y) annotation(
    Line(points = {{304, 140}, {280, 140}, {280, 139}, {256, 139}, {256, 101}, {114, 101}, {114, 16}, {128, 16}}, color = {0, 0, 127}));
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
end logic1;
