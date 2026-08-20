model ChillerPlant3Chiller_Staged
  "Primary-only chiller plant, 3 chillers / 3 towers, staged by cooling load (no forced parallel operation)"

  // ============================================================
  // ASSUMPTIONS TO REVIEW BEFORE TRUSTING RESULTS
  // 1) Weather file below is still the San Francisco TMY3 file inherited
  //    from the original example. Replace weaData.filNam with an actual
  //    Jakarta / Indonesia TMY3 or EPW file, and update TAirInWB_nominal
  //    on the cooling towers to match your real design wet-bulb (a
  //    placeholder of 27 degC is used below, which is closer to Jakarta
  //    than the original 10 degC, but should be replaced with your
  //    design condition).
  // 2) All three chillers reuse the SAME normalized performance curve
  //    (Carrier_19XR, COP 5.42) with only the nominal capacity rescaled.
  //    This preserves part-load COP shape but not manufacturer-specific
  //    performance. Replace with real chiller submittal data if the
  //    energy results need to be defensible.
  // 3) Cooling tower fan power uses an assumed 25 W/TR (typical VFD
  //    tower order of magnitude). Replace PFan1/2/3 with nameplate data.
  // 4) Pump head (dp_nominal) is carried over from the original example
  //    as a placeholder. It has NOT been recalculated from your actual
  //    pipe network - replace once you have a system curve.
  // 5) Each chiller/tower pair is modeled as its own dedicated loop
  //    (chiller 1 with tower 1, etc.), not a fully cross-connected
  //    common header where any tower can serve any chiller. This gives
  //    the same staging behavior for simulation purposes; say so if you
  //    need to simulate a specific pump/tower failure or swap scenario
  //    and I will add the cross-tie valves.
  // 6) CHWP-4 and CWP-4 (the 4th pump on each side, per your P&ID) are
  //    NOT instantiated as a 4th active branch. They represent installed
  //    standby/redundant capacity and are not part of the staging logic
  //    below. Say if you want them modeled explicitly (e.g. to simulate
  //    a duty pump failing over to standby).
  // 7) The room heat load (QRoo_flow, ramped 0 to 1100 TR) is a stand-in
  //    test profile to exercise the full staging sequence, NOT your
  //    actual data center load. The room's own physical size (30 x 50 x
  //    3 m) is no longer representative at this heat flux; it is being
  //    used purely as a lumped proxy for total connected plant demand.
  //    Replace with a real load profile when you have one.
  // ============================================================

  replaceable package MediumA = Buildings.Media.Air "Medium model";
  replaceable package MediumW = Buildings.Media.Water "Medium model";

  // ---------------- Room / AHU sizing ----------------
  parameter Modelica.SIunits.Height rooHei = 3 "Height of the room (proxy load, see note 7)";
  parameter Modelica.SIunits.Length rooWid = 30 "Width of the room (proxy load, see note 7)";
  parameter Modelica.SIunits.Length rooLen = 50 "Length of the room (proxy load, see note 7)";
  parameter Modelica.SIunits.Power QRoo_flow = 1100 * 3516.8
    "Peak test load, 1100 TR - replace with real metered/estimated plant load";
  parameter Modelica.SIunits.MassFlowRate mAir_flow_nominal = QRoo_flow / (1005 * 15)
    "Nominal mass flow rate at fan, sized off QRoo_flow";
  parameter Modelica.SIunits.PressureDifference dp_nominal = 500 "Generic nominal pressure difference";

  // ---------------- Plant-wide design basis ----------------
  parameter Real TR = 3516.8 "W per ton of refrigeration";
  parameter Modelica.SIunits.SpecificHeatCapacity cpW = 4200 "Water specific heat capacity";
  parameter Modelica.SIunits.TemperatureDifference dTDesign = 5
    "Design delta-T across evaporator and condenser (matches plant control design basis)";
  parameter Real COP_nominal = 5.42 "COP of the reused Carrier_19XR performance curve";
  parameter Real heatRejFactor = 1 + 1 / COP_nominal "Condenser duty = evaporator duty x this factor";

  // ---------------- Chiller capacities (400 / 400 / 500 TR) ----------------
  parameter Modelica.SIunits.Power QChi1_nominal = -400 * TR "CH-1, primary, 400 TR";
  parameter Modelica.SIunits.Power QChi2_nominal = -400 * TR "CH-2, secondary, 400 TR";
  parameter Modelica.SIunits.Power QChi3_nominal = -500 * TR "CH-3, backup, 500 TR";

  parameter Modelica.SIunits.MassFlowRate mCHW1_flow_nominal = -QChi1_nominal / (cpW * dTDesign);
  parameter Modelica.SIunits.MassFlowRate mCHW2_flow_nominal = -QChi2_nominal / (cpW * dTDesign);
  parameter Modelica.SIunits.MassFlowRate mCHW3_flow_nominal = -QChi3_nominal / (cpW * dTDesign);

  parameter Modelica.SIunits.MassFlowRate mCW1_flow_nominal = -QChi1_nominal * heatRejFactor / (cpW * dTDesign);
  parameter Modelica.SIunits.MassFlowRate mCW2_flow_nominal = -QChi2_nominal * heatRejFactor / (cpW * dTDesign);
  parameter Modelica.SIunits.MassFlowRate mCW3_flow_nominal = -QChi3_nominal * heatRejFactor / (cpW * dTDesign);

  // ---------------- Cooling tower capacities (600 / 1000 / 500 TR) ----------------
  parameter Modelica.SIunits.MassFlowRate mCT1_flow_nominal = 600 * TR / (cpW * dTDesign);
  parameter Modelica.SIunits.MassFlowRate mCT2_flow_nominal = 1000 * TR / (cpW * dTDesign);
  parameter Modelica.SIunits.MassFlowRate mCT3_flow_nominal = 500 * TR / (cpW * dTDesign);
  parameter Modelica.SIunits.Power PFan1_nominal = 600 * 25 "Assumed 25 W/TR, replace with nameplate";
  parameter Modelica.SIunits.Power PFan2_nominal = 1000 * 25 "Assumed 25 W/TR, replace with nameplate";
  parameter Modelica.SIunits.Power PFan3_nominal = 500 * 25 "Assumed 25 W/TR, replace with nameplate";

  // ---------------- Pump head placeholders (see note 4) ----------------
  parameter Modelica.SIunits.PressureDifference dpCHW_nominal = 325474 "Placeholder, from original example";
  parameter Modelica.SIunits.PressureDifference dpCW_nominal = 214992 "Placeholder, from original example";

  // ---------------- Staging thresholds (feedforward on total load signal) ----------------
  // Stage 2 (CH-2) enables at 90% of CH-1 capacity, disables at 65% (hysteresis deadband, assumed).
  // Stage 3 (CH-3, backup) enables at 90% of CH-1+CH-2 combined, disables at 65%.
  parameter Modelica.SIunits.Power stage2_uHigh = 0.90 * 400 * TR;
  parameter Modelica.SIunits.Power stage2_uLow = 0.65 * 400 * TR;
  parameter Modelica.SIunits.Power stage3_uHigh = 0.90 * 800 * TR;
  parameter Modelica.SIunits.Power stage3_uLow = 0.65 * 800 * TR;

  // ================= Air side / room (existing AHU, forced full duty) =================
  Buildings.Fluid.Movers.FlowControlled_m_flow fanSup(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal, dp_nominal = 249, nominalValuesDefineDefaultPressureCurve = true, addPowerToMedium = false, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, T_start = 293.15) "Supply fan";
  Buildings.Fluid.Movers.FlowControlled_m_flow fanRet(redeclare package Medium = MediumA, T_start = 293.15, dp_nominal = 249, nominalValuesDefineDefaultPressureCurve = true, addPowerToMedium = false, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, m_flow_nominal = mAir_flow_nominal, use_inputFilter = false) "Return fan";
  Buildings.Fluid.HeatExchangers.DryCoilCounterFlow cooCoi(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumA, m2_flow_nominal = mAir_flow_nominal, m1_flow_nominal = mCHW1_flow_nominal + mCHW2_flow_nominal + mCHW3_flow_nominal, dp2_nominal = 249 * 3, UA_nominal = mAir_flow_nominal * 1006 * 5, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp1_nominal(displayUnit = "Pa") = 1000 + 89580) "Cooling coil, always fully open (no capacity modulation)";
  Modelica.Blocks.Sources.Constant mFanFlo(k = mAir_flow_nominal) "Supply fan flow signal";
  Buildings.Fluid.Actuators.Dampers.Exponential damRet(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal, use_inputFilter = false);
  Buildings.Fluid.Actuators.Dampers.Exponential damEA(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal, use_inputFilter = false);
  Buildings.Fluid.Actuators.Dampers.Exponential damOA(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal, use_inputFilter = false);
  Modelica.Blocks.Sources.Constant damCon(k = 0.7) "Unchanged fixed damper position from original AHU";
  Buildings.Examples.ChillerPlant.BaseClasses.Controls.KMinusU kMinusU(k = 1);
  Buildings.Fluid.FixedResistances.Junction junRet(redeclare package Medium = MediumA, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mAir_flow_nominal * {1, -1, -1});
  Buildings.Fluid.Sources.Outside out(redeclare package Medium = MediumA, nPorts = 2, use_C_in = false);
  Buildings.Fluid.FixedResistances.Junction junOut(redeclare package Medium = MediumA, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = mAir_flow_nominal * {1, -1, 1});
  Buildings.Fluid.Sensors.TemperatureTwoPort TAirSup(redeclare package Medium = MediumA, m_flow_nominal = mAir_flow_nominal) "Supply air temperature (monitoring only)";
  Buildings.BoundaryConditions.WeatherData.ReaderTMY3 weaData(filNam = Modelica.Utilities.Files.loadResource("modelica://Buildings/Resources/weatherdata/USA_CA_San.Francisco.Intl.AP.724940_TMY3.mos")) "PLACEHOLDER - replace with a Jakarta TMY3/EPW file, see note 1";
  Buildings.BoundaryConditions.WeatherData.Bus weaBus;
  Buildings.Fluid.MixingVolumes.MixingVolume vol(redeclare package Medium = MediumA, nPorts = 2, V = rooLen * rooWid * rooHei, m_flow_nominal = mAir_flow_nominal, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, final T_start = 293.15, final prescribedHeatFlowRate = true) "Lumped proxy for total connected load, see note 7";
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor TRooAir;
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow QSou;
  Modelica.Blocks.Sources.Ramp ramp(duration = 36000, height = QRoo_flow, offset = 0, startTime = 0) "Test load profile 0 to 1100 TR, drives staging below";
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature TOut;
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor theCon(G = 10000 / 30);

  // ================= Branch 1: CH-1 (400 TR, primary/lead) + CT-1 (600 TR) =================
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCHW1(redeclare package Medium = MediumW, m_flow_nominal = mCHW1_flow_nominal, dp_nominal = dpCHW_nominal, nominalValuesDefineDefaultPressureCurve = true, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CHWP-1";
  Buildings.Fluid.Chillers.ElectricEIR chi1(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumW, m1_flow_nominal = mCW1_flow_nominal, m2_flow_nominal = mCHW1_flow_nominal, QEva_flow_nominal = QChi1_nominal, dp2_nominal = 0, dp1_nominal = 0, per = Buildings.Fluid.Chillers.Data.ElectricEIR.ElectricEIRChiller_Carrier_19XR_742kW_5_42COP_VSD(), energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CH-1, 400 TR primary";
  Buildings.Fluid.Storage.ExpansionVessel expVesCW1(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000);
  Buildings.Fluid.Actuators.Valves.TwoWayLinear valCW1(redeclare package Medium = MediumW, m_flow_nominal = mCW1_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 89580, y_start = 1, use_inputFilter = false) "CT-1 isolation valve, fully open";
  Buildings.Fluid.Actuators.Valves.TwoWayLinear valCHW1(redeclare package Medium = MediumW, m_flow_nominal = mCHW1_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 14930 + 89580, y_start = 1, use_inputFilter = false, from_dp = true) "CH-1 outlet isolation valve, fully open";
  Buildings.Fluid.HeatExchangers.CoolingTowers.YorkCalc cooTow1(redeclare package Medium = MediumW, m_flow_nominal = mCT1_flow_nominal, PFan_nominal = PFan1_nominal, TAirInWB_nominal(displayUnit = "degC") = 300.15, TApp_nominal = 6, dp_nominal = 14930 + 14930 + 74650, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial) "CT-1, 600 TR";
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCW1(redeclare package Medium = MediumW, m_flow_nominal = mCW1_flow_nominal, dp_nominal = dpCW_nominal, nominalValuesDefineDefaultPressureCurve = true, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CWP-1";
  Buildings.Fluid.Sensors.TemperatureTwoPort TCWLeaTow1(redeclare package Medium = MediumW, m_flow_nominal = mCW1_flow_nominal);

  // ================= Branch 2: CH-2 (400 TR, secondary) + CT-2 (1000 TR) =================
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCHW2(redeclare package Medium = MediumW, m_flow_nominal = mCHW2_flow_nominal, dp_nominal = dpCHW_nominal, nominalValuesDefineDefaultPressureCurve = true, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CHWP-2";
  Buildings.Fluid.Chillers.ElectricEIR chi2(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumW, m1_flow_nominal = mCW2_flow_nominal, m2_flow_nominal = mCHW2_flow_nominal, QEva_flow_nominal = QChi2_nominal, dp2_nominal = 0, dp1_nominal = 0, per = Buildings.Fluid.Chillers.Data.ElectricEIR.ElectricEIRChiller_Carrier_19XR_742kW_5_42COP_VSD(), energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CH-2, 400 TR secondary";
  Buildings.Fluid.Storage.ExpansionVessel expVesCW2(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000);
  Buildings.Fluid.Actuators.Valves.TwoWayLinear valCW2(redeclare package Medium = MediumW, m_flow_nominal = mCW2_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 89580, y_start = 1, use_inputFilter = false) "CT-2 isolation valve";
  Buildings.Fluid.Actuators.Valves.TwoWayLinear valCHW2(redeclare package Medium = MediumW, m_flow_nominal = mCHW2_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 14930 + 89580, y_start = 1, use_inputFilter = false, from_dp = true) "CH-2 outlet isolation valve";
  Buildings.Fluid.HeatExchangers.CoolingTowers.YorkCalc cooTow2(redeclare package Medium = MediumW, m_flow_nominal = mCT2_flow_nominal, PFan_nominal = PFan2_nominal, TAirInWB_nominal(displayUnit = "degC") = 300.15, TApp_nominal = 6, dp_nominal = 14930 + 14930 + 74650, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial) "CT-2, 1000 TR";
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCW2(redeclare package Medium = MediumW, m_flow_nominal = mCW2_flow_nominal, dp_nominal = dpCW_nominal, nominalValuesDefineDefaultPressureCurve = true, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CWP-2";
  Buildings.Fluid.Sensors.TemperatureTwoPort TCWLeaTow2(redeclare package Medium = MediumW, m_flow_nominal = mCW2_flow_nominal);

  // ================= Branch 3: CH-3 (500 TR, backup/last stage) + CT-3 (500 TR) =================
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCHW3(redeclare package Medium = MediumW, m_flow_nominal = mCHW3_flow_nominal, dp_nominal = dpCHW_nominal, nominalValuesDefineDefaultPressureCurve = true, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CHWP-3";
  Buildings.Fluid.Chillers.ElectricEIR chi3(redeclare package Medium1 = MediumW, redeclare package Medium2 = MediumW, m1_flow_nominal = mCW3_flow_nominal, m2_flow_nominal = mCHW3_flow_nominal, QEva_flow_nominal = QChi3_nominal, dp2_nominal = 0, dp1_nominal = 0, per = Buildings.Fluid.Chillers.Data.ElectricEIR.ElectricEIRChiller_Carrier_19XR_742kW_5_42COP_VSD(), energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CH-3, 500 TR backup/last stage";
  Buildings.Fluid.Storage.ExpansionVessel expVesCW3(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000);
  Buildings.Fluid.Actuators.Valves.TwoWayLinear valCW3(redeclare package Medium = MediumW, m_flow_nominal = mCW3_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 89580, y_start = 1, use_inputFilter = false) "CT-3 isolation valve";
  Buildings.Fluid.Actuators.Valves.TwoWayLinear valCHW3(redeclare package Medium = MediumW, m_flow_nominal = mCHW3_flow_nominal, dpValve_nominal = 20902, dpFixed_nominal = 14930 + 89580, y_start = 1, use_inputFilter = false, from_dp = true) "CH-3 outlet isolation valve";
  Buildings.Fluid.HeatExchangers.CoolingTowers.YorkCalc cooTow3(redeclare package Medium = MediumW, m_flow_nominal = mCT3_flow_nominal, PFan_nominal = PFan3_nominal, TAirInWB_nominal(displayUnit = "degC") = 300.15, TApp_nominal = 6, dp_nominal = 14930 + 14930 + 74650, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial) "CT-3, 500 TR";
  Buildings.Fluid.Movers.FlowControlled_m_flow pumCW3(redeclare package Medium = MediumW, m_flow_nominal = mCW3_flow_nominal, dp_nominal = dpCW_nominal, nominalValuesDefineDefaultPressureCurve = true, use_inputFilter = false, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial) "CWP-3";
  Buildings.Fluid.Sensors.TemperatureTwoPort TCWLeaTow3(redeclare package Medium = MediumW, m_flow_nominal = mCW3_flow_nominal);

  // ================= Shared CHW header (merges the 3 branches) =================
  Buildings.Fluid.Storage.ExpansionVessel expVesCHW(redeclare package Medium = MediumW, V_start = 1, p_start = 1500000) "One expansion vessel for the shared CHW header";
  Buildings.Fluid.FixedResistances.Junction junCHWSupA(redeclare package Medium = MediumW, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = {mCHW1_flow_nominal + mCHW2_flow_nominal, -mCHW1_flow_nominal, -mCHW2_flow_nominal}) "Merges branch 1 + 2 supply";
  Buildings.Fluid.FixedResistances.Junction junCHWSupB(redeclare package Medium = MediumW, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = {mCHW1_flow_nominal + mCHW2_flow_nominal + mCHW3_flow_nominal, -(mCHW1_flow_nominal + mCHW2_flow_nominal), -mCHW3_flow_nominal}) "Merges + branch 3 supply, feeds coil";
  Buildings.Fluid.FixedResistances.Junction junCHWRetA(redeclare package Medium = MediumW, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = {mCHW1_flow_nominal + mCHW2_flow_nominal + mCHW3_flow_nominal, -(mCHW1_flow_nominal + mCHW2_flow_nominal), -mCHW3_flow_nominal}) "Splits return from coil toward branch 3 / A-B";
  Buildings.Fluid.FixedResistances.Junction junCHWRetB(redeclare package Medium = MediumW, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, dp_nominal = {0, 0, 0}, m_flow_nominal = {mCHW1_flow_nominal + mCHW2_flow_nominal, -mCHW1_flow_nominal, -mCHW2_flow_nominal}) "Splits return toward branch 1 / branch 2";

  // ================= Staging control (feedforward on the plant load signal) =================
  Modelica.Blocks.Logical.Hysteresis stage2(uLow = stage2_uLow, uHigh = stage2_uHigh, pre_y_start = false) "Enables CH-2 / CWP-2 / CHWP-2 / CT-2";
  Modelica.Blocks.Logical.Hysteresis stage3(uLow = stage3_uLow, uHigh = stage3_uHigh, pre_y_start = false) "Enables CH-3 / CWP-3 / CHWP-3 / CT-3 (backup)";
  Modelica.Blocks.Sources.Constant chiTSet(k = 273.15 + 5) "Shared CHW supply setpoint, all chillers";

equation
  // ---- Staging inputs: feedforward on the ramped plant load signal ----
  stage2.u = ramp.y;
  stage3.u = ramp.y;

  // ---- Branch 1 (always on: lead chiller) ----
  chi1.on = true;
  chi1.TSet = chiTSet.y;
  pumCHW1.m_flow_in = mCHW1_flow_nominal;
  pumCW1.m_flow_in = mCW1_flow_nominal;
  cooTow1.y = 1;
  cooTow1.TAir = weaBus.TWetBul;

  // ---- Branch 2 (staged on/off) ----
  chi2.on = stage2.y;
  chi2.TSet = chiTSet.y;
  pumCHW2.m_flow_in = if stage2.y then mCHW2_flow_nominal else 0;
  pumCW2.m_flow_in = if stage2.y then mCW2_flow_nominal else 0;
  cooTow2.y = if stage2.y then 1 else 0;
  cooTow2.TAir = weaBus.TWetBul;

  // ---- Branch 3 (staged on/off, backup/last stage) ----
  chi3.on = stage3.y;
  chi3.TSet = chiTSet.y;
  pumCHW3.m_flow_in = if stage3.y then mCHW3_flow_nominal else 0;
  pumCW3.m_flow_in = if stage3.y then mCW3_flow_nominal else 0;
  cooTow3.y = if stage3.y then 1 else 0;
  cooTow3.TAir = weaBus.TWetBul;

  // ---- Branch 1 fluid connections ----
  connect(cooTow1.port_b, pumCW1.port_a);
  connect(pumCW1.port_b, TCWLeaTow1.port_a);
  connect(TCWLeaTow1.port_b, chi1.port_a1);
  connect(chi1.port_b1, expVesCW1.port_a);
  connect(chi1.port_b1, valCW1.port_a);
  connect(valCW1.port_b, cooTow1.port_a);
  connect(chi1.port_a2, pumCHW1.port_b);
  connect(chi1.port_b2, valCHW1.port_a);

  // ---- Branch 2 fluid connections ----
  connect(cooTow2.port_b, pumCW2.port_a);
  connect(pumCW2.port_b, TCWLeaTow2.port_a);
  connect(TCWLeaTow2.port_b, chi2.port_a1);
  connect(chi2.port_b1, expVesCW2.port_a);
  connect(chi2.port_b1, valCW2.port_a);
  connect(valCW2.port_b, cooTow2.port_a);
  connect(chi2.port_a2, pumCHW2.port_b);
  connect(chi2.port_b2, valCHW2.port_a);

  // ---- Branch 3 fluid connections ----
  connect(cooTow3.port_b, pumCW3.port_a);
  connect(pumCW3.port_b, TCWLeaTow3.port_a);
  connect(TCWLeaTow3.port_b, chi3.port_a1);
  connect(chi3.port_b1, expVesCW3.port_a);
  connect(chi3.port_b1, valCW3.port_a);
  connect(valCW3.port_b, cooTow3.port_a);
  connect(chi3.port_a2, pumCHW3.port_b);
  connect(chi3.port_b2, valCHW3.port_a);

  // ---- Shared CHW header: merge supply, split return ----
  connect(valCHW1.port_b, junCHWSupA.port_1);
  connect(valCHW2.port_b, junCHWSupA.port_2);
  connect(junCHWSupA.port_3, junCHWSupB.port_1);
  connect(valCHW3.port_b, junCHWSupB.port_2);
  connect(junCHWSupB.port_3, cooCoi.port_a1);
  connect(expVesCHW.port_a, cooCoi.port_a1);

  connect(cooCoi.port_b1, junCHWRetA.port_1);
  connect(junCHWRetA.port_2, junCHWRetB.port_1);
  connect(junCHWRetB.port_2, pumCHW1.port_a);
  connect(junCHWRetB.port_3, pumCHW2.port_a);
  connect(junCHWRetA.port_3, pumCHW3.port_a);

  // ---- Air side / room (unchanged from original AHU, minus the coil bypass loop) ----
  connect(cooCoi.port_b2, fanSup.port_a);
  connect(mFanFlo.y, fanSup.m_flow_in);
  connect(TAirSup.port_a, fanSup.port_b);
  connect(weaData.weaBus, weaBus);
  connect(TAirSup.port_b, vol.ports[1]);
  connect(TRooAir.port, vol.heatPort);
  connect(QSou.port, vol.heatPort);
  connect(ramp.y, QSou.Q_flow);
  connect(theCon.port_a, TOut.port);
  connect(theCon.port_b, vol.heatPort);
  connect(TOut.T, weaBus.TDryBul);
  connect(fanRet.port_a, vol.ports[2]);
  connect(damCon.y, damOA.y);
  connect(damEA.y, damCon.y);
  connect(kMinusU.u, damCon.y);
  connect(kMinusU.y, damRet.y);
  connect(junRet.port_2, damEA.port_a);
  connect(junRet.port_3, damRet.port_a);
  connect(junRet.port_1, fanRet.port_b);
  connect(damOA.port_a, out.ports[1]);
  connect(damEA.port_b, out.ports[2]);
  connect(out.weaBus, weaBus);
  connect(damOA.port_b, junOut.port_1);
  connect(junOut.port_2, cooCoi.port_a2);
  connect(junOut.port_3, damRet.port_b);
  connect(fanRet.m_flow_in, mFanFlo.y);

  annotation(
    Documentation(info = "<html>
<p>
Restructured from WaterCooledChillerExample7 to match a real plant: 3 chillers
(400 / 400 / 500 TR), 3 cooling towers (600 / 1000 / 500 TR), and staged
operation driven by cooling load rather than constant parallel operation.
See the assumptions block at the top of this model - several placeholder
values (weather file, fan power, pump head) still need your real system data.
</p>
</html>"),
    experiment(StartTime = 0, Tolerance = 1e-6, StopTime = 36000),
  Diagram());
end ChillerPlant3Chiller_Staged;
