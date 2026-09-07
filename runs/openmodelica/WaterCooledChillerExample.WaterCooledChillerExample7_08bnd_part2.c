#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 9477
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9477};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[657]] /* pumCHW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[666]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9477;
}

/*
equation index: 9478
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.P[1] = pumCHW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* pumCHW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2138]] /* pumCHW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 9478;
}

/*
equation index: 9479
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.V_flow[1] = pumCHW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2104]] /* pumCHW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2139]] /* pumCHW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9479;
}

/*
equation index: 9480
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.eta[1] = pumCHW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2102]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2137]] /* pumCHW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9480;
}

/*
equation index: 9481
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.V_flow[1] = pumCHW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2101]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2136]] /* pumCHW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9481;
}

/*
equation index: 9482
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.eta[1] = pumCHW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2100]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2135]] /* pumCHW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9482;
}

/*
equation index: 9483
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2134]] /* pumCHW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9483;
}

/*
equation index: 9497
type: SIMPLE_ASSIGN
pumCHW.heaDis.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9497};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[663]] /* pumCHW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[666]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9497;
}

/*
equation index: 9503
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* pumCHW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9503;
}

/*
equation index: 9504
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_start = pumCHW.m_flow_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2152]] /* pumCHW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2129]] /* pumCHW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 9504;
}

/*
equation index: 9507
type: SIMPLE_ASSIGN
pumCHW.vol.tau = pumCHW.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2187]] /* pumCHW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2160]] /* pumCHW.tau PARAM */);
  threadData->lastEquationSolved = 9507;
}

/*
equation index: 9508
type: SIMPLE_ASSIGN
pumCHW.vol.V_nominal = 4.761904761904762 * pumCHW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* pumCHW.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2187]] /* pumCHW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 9508;
}

/*
equation index: 9511
type: SIMPLE_ASSIGN
pumCHW.vol.T_start = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* pumCHW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 9511;
}

/*
equation index: 9512
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.T = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9512;
}

/*
equation index: 9513
type: SIMPLE_ASSIGN
pumCHW.vol.p_start = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* pumCHW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 9513;
}

/*
equation index: 9514
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.p = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2186]] /* pumCHW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9514;
}

/*
equation index: 9518
type: SIMPLE_ASSIGN
pumCHW.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.Medium.density(pumCHW.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9518};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_Medium_ThermodynamicState tmp171;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp171, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2186]] /* pumCHW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2182]] /* pumCHW.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_Medium_density(threadData, tmp171);
  threadData->lastEquationSolved = 9518;
}

/*
equation index: 9519
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.p_start = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9519;
}

/*
equation index: 9520
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.T_start = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9520;
}

/*
equation index: 9521
type: SIMPLE_ASSIGN
pumCHW.vol.X_start[1] = pumCHW.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* pumCHW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2065]] /* pumCHW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9521;
}

/*
equation index: 9522
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.X_start[1] = pumCHW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2167]] /* pumCHW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* pumCHW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9522;
}

/*
equation index: 9523
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, pumCHW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9523};
  real_array tmp172;
  real_array_create(&tmp172, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2167]] /* pumCHW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2170]] /* pumCHW.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */), tmp172);
  threadData->lastEquationSolved = 9523;
}

/*
equation index: 9528
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.dynBal.Medium.setState_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2174]] /* pumCHW.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9528;
}

/*
equation index: 9531
type: SIMPLE_ASSIGN
pumCHW.vol.V = pumCHW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* pumCHW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 9531;
}

/*
equation index: 9532
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.fluidVolume = pumCHW.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2169]] /* pumCHW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.vol.V PARAM */);
  threadData->lastEquationSolved = 9532;
}

/*
equation index: 9545
type: SIMPLE_ASSIGN
pumCHW.vol.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2179]] /* pumCHW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9545;
}

/*
equation index: 9554
type: SIMPLE_ASSIGN
pumCHW.sta_start.p = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2158]] /* pumCHW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 9554;
}

/*
equation index: 9555
type: SIMPLE_ASSIGN
pumCHW.sta_start.T = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* pumCHW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 9555;
}

/*
equation index: 9556
type: SIMPLE_ASSIGN
pumCHW.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.Medium.specificEnthalpy(pumCHW.sta_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9556};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_Medium_ThermodynamicState tmp173;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp173, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2158]] /* pumCHW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* pumCHW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* pumCHW.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_Medium_specificEnthalpy(threadData, tmp173);
  threadData->lastEquationSolved = 9556;
}

/*
equation index: 9568
type: SIMPLE_ASSIGN
pumCHW.stageInputs[1] = pumCHW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2159]] /* pumCHW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* pumCHW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 9568;
}

/*
equation index: 9572
type: SIMPLE_ASSIGN
pumCHW.per.speeds_rpm[1] = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2147]] /* pumCHW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9572;
}

/*
equation index: 9573
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed_rpm = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2133]] /* pumCHW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9573;
}

/*
equation index: 9574
type: SIMPLE_ASSIGN
pumCHW.per.speeds[1] = pumCHW.per.speeds_rpm[1] / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2146]] /* pumCHW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2147]] /* pumCHW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9574;
}

/*
equation index: 9575
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed = pumCHW.per.constantSpeed_rpm / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* pumCHW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2133]] /* pumCHW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9575;
}

/*
equation index: 9592
type: SIMPLE_ASSIGN
cooCoi.GDif = 0.0033333333333333335 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */) = (0.0033333333333333335) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9592;
}

/*
equation index: 9593
type: SIMPLE_ASSIGN
cooCoi.theCon2[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* cooCoi.theCon2[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9593;
}

/*
equation index: 9594
type: SIMPLE_ASSIGN
cooCoi.theCon2[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[940]] /* cooCoi.theCon2[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9594;
}

/*
equation index: 9595
type: SIMPLE_ASSIGN
cooCoi.theCon2[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[939]] /* cooCoi.theCon2[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9595;
}

/*
equation index: 9596
type: SIMPLE_ASSIGN
cooCoi.theCon1[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[938]] /* cooCoi.theCon1[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9596;
}

/*
equation index: 9597
type: SIMPLE_ASSIGN
cooCoi.theCon1[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[937]] /* cooCoi.theCon1[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9597;
}

/*
equation index: 9598
type: SIMPLE_ASSIGN
cooCoi.theCon1[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9598};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[936]] /* cooCoi.theCon1[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9598;
}

/*
equation index: 9601
type: SIMPLE_ASSIGN
cooCoi.ele[4].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* cooCoi.ele[4].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9601;
}

/*
equation index: 9602
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* cooCoi.ele[4].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 9602;
}

/*
equation index: 9603
type: SIMPLE_ASSIGN
cooCoi.ele[4].C = 2.0 * cooCoi.ele[4].UA_nominal * cooCoi.ele[4].tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* cooCoi.ele[4].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* cooCoi.ele[4].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* cooCoi.ele[4].tau_m PARAM */)));
  threadData->lastEquationSolved = 9603;
}

/*
equation index: 9604
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.C = cooCoi.ele[4].C
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9604};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[460]] /* cooCoi.ele[4].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* cooCoi.ele[4].C PARAM */);
  threadData->lastEquationSolved = 9604;
}

/*
equation index: 9608
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[4].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* cooCoi.ele[4].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* cooCoi.ele[4].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 9608;
}

/*
equation index: 9614
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[4].sta1_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9614};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp174;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp174, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[4].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* cooCoi.ele[4].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* cooCoi.ele[4].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp174);
  threadData->lastEquationSolved = 9614;
}

/*
equation index: 9622
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[4].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* cooCoi.ele[4].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* cooCoi.ele[4].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 9622;
}

/*
equation index: 9645
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[4].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9645};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp175;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp175, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* cooCoi.ele[4].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* cooCoi.ele[4].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[4].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp175);
  threadData->lastEquationSolved = 9645;
}

/*
equation index: 9679
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* cooCoi.ele[4].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 9679;
}

/*
equation index: 9680
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.V = 13.266998341625207 * cooCoi.ele[4].tau2 / cooCoi.ele[4].rho2_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[4].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* cooCoi.ele[4].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* cooCoi.ele[4].rho2_nominal PARAM */),"cooCoi.ele[4].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 9680;
}

/*
equation index: 9681
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.fluidVolume = cooCoi.ele[4].vol2.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[4].vol2.V PARAM */);
  threadData->lastEquationSolved = 9681;
}

/*
equation index: 9713
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.T_start = cooCoi.ele[4].T1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* cooCoi.ele[4].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 9713;
}

/*
equation index: 9714
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.T = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9714;
}

/*
equation index: 9716
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.p_start = cooCoi.ele[4].p1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 9716;
}

/*
equation index: 9717
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.p = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[4].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9717;
}

/*
equation index: 9721
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[4].vol1.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9721};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp176;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp176, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[4].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* cooCoi.ele[4].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp176);
  threadData->lastEquationSolved = 9721;
}

/*
equation index: 9722
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.p_start = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9722;
}

/*
equation index: 9723
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.T_start = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9723;
}

/*
equation index: 9725
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.X_start[1] = cooCoi.ele[4].X1_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* cooCoi.ele[4].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 9725;
}

/*
equation index: 9726
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.X_start[1] = cooCoi.ele[4].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9726;
}

/*
equation index: 9727
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, cooCoi.ele[4].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9727};
  real_array tmp177;
  real_array_create(&tmp177, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* cooCoi.ele[4].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), tmp177);
  threadData->lastEquationSolved = 9727;
}

/*
equation index: 9732
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[4].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9732;
}

/*
equation index: 9735
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* cooCoi.ele[4].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 9735;
}

/*
equation index: 9736
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.V = 4.761904761904762 * cooCoi.ele[4].tau1 / cooCoi.ele[4].rho1_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* cooCoi.ele[4].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* cooCoi.ele[4].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* cooCoi.ele[4].rho1_nominal PARAM */),"cooCoi.ele[4].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 9736;
}

/*
equation index: 9737
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.fluidVolume = cooCoi.ele[4].vol1.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* cooCoi.ele[4].vol1.V PARAM */);
  threadData->lastEquationSolved = 9737;
}

/*
equation index: 9783
type: SIMPLE_ASSIGN
cooCoi.ele[3].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9783};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* cooCoi.ele[3].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9783;
}

/*
equation index: 9784
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* cooCoi.ele[3].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 9784;
}

/*
equation index: 9785
type: SIMPLE_ASSIGN
cooCoi.ele[3].C = 2.0 * cooCoi.ele[3].UA_nominal * cooCoi.ele[3].tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* cooCoi.ele[3].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* cooCoi.ele[3].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* cooCoi.ele[3].tau_m PARAM */)));
  threadData->lastEquationSolved = 9785;
}

/*
equation index: 9786
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.C = cooCoi.ele[3].C
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* cooCoi.ele[3].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* cooCoi.ele[3].C PARAM */);
  threadData->lastEquationSolved = 9786;
}

/*
equation index: 9790
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[3].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* cooCoi.ele[3].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* cooCoi.ele[3].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 9790;
}

/*
equation index: 9796
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[3].sta1_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9796};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp178;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp178, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[3].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* cooCoi.ele[3].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* cooCoi.ele[3].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp178);
  threadData->lastEquationSolved = 9796;
}

/*
equation index: 9804
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[3].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[3].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* cooCoi.ele[3].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 9804;
}

/*
equation index: 9827
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[3].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9827};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp179;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp179, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* cooCoi.ele[3].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* cooCoi.ele[3].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* cooCoi.ele[3].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp179);
  threadData->lastEquationSolved = 9827;
}

/*
equation index: 9861
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* cooCoi.ele[3].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 9861;
}

/*
equation index: 9862
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.V = 13.266998341625207 * cooCoi.ele[3].tau2 / cooCoi.ele[3].rho2_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[3].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* cooCoi.ele[3].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* cooCoi.ele[3].rho2_nominal PARAM */),"cooCoi.ele[3].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 9862;
}

/*
equation index: 9863
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.fluidVolume = cooCoi.ele[3].vol2.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[3].vol2.V PARAM */);
  threadData->lastEquationSolved = 9863;
}

/*
equation index: 9895
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.T_start = cooCoi.ele[3].T1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[3].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 9895;
}

/*
equation index: 9896
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.T = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9896;
}

/*
equation index: 9898
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.p_start = cooCoi.ele[3].p1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 9898;
}

/*
equation index: 9899
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.p = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[3].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9899;
}

/*
equation index: 9903
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[3].vol1.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9903};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp180;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp180, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[3].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[3].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp180);
  threadData->lastEquationSolved = 9903;
}

/*
equation index: 9904
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.p_start = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9904};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9904;
}

/*
equation index: 9905
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.T_start = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9905};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9905;
}

/*
equation index: 9907
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.X_start[1] = cooCoi.ele[3].X1_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9907};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* cooCoi.ele[3].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 9907;
}

/*
equation index: 9908
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.X_start[1] = cooCoi.ele[3].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9908};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[679]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9908;
}

/*
equation index: 9909
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, cooCoi.ele[3].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9909};
  real_array tmp181;
  real_array_create(&tmp181, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[679]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* cooCoi.ele[3].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), tmp181);
  threadData->lastEquationSolved = 9909;
}

/*
equation index: 9914
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9914};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[3].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9914;
}

/*
equation index: 9917
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9917};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* cooCoi.ele[3].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 9917;
}

/*
equation index: 9918
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.V = 4.761904761904762 * cooCoi.ele[3].tau1 / cooCoi.ele[3].rho1_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* cooCoi.ele[3].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* cooCoi.ele[3].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* cooCoi.ele[3].rho1_nominal PARAM */),"cooCoi.ele[3].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 9918;
}

/*
equation index: 9919
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.fluidVolume = cooCoi.ele[3].vol1.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* cooCoi.ele[3].vol1.V PARAM */);
  threadData->lastEquationSolved = 9919;
}

/*
equation index: 9965
type: SIMPLE_ASSIGN
cooCoi.ele[2].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* cooCoi.ele[2].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9965;
}

/*
equation index: 9966
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* cooCoi.ele[2].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 9966;
}

/*
equation index: 9967
type: SIMPLE_ASSIGN
cooCoi.ele[2].C = 2.0 * cooCoi.ele[2].UA_nominal * cooCoi.ele[2].tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* cooCoi.ele[2].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* cooCoi.ele[2].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* cooCoi.ele[2].tau_m PARAM */)));
  threadData->lastEquationSolved = 9967;
}

/*
equation index: 9968
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.C = cooCoi.ele[2].C
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* cooCoi.ele[2].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* cooCoi.ele[2].C PARAM */);
  threadData->lastEquationSolved = 9968;
}

/*
equation index: 9972
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[2].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[2].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* cooCoi.ele[2].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 9972;
}

/*
equation index: 9978
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[2].sta1_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9978};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp182;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp182, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[2].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* cooCoi.ele[2].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* cooCoi.ele[2].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp182);
  threadData->lastEquationSolved = 9978;
}

/*
equation index: 9986
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[2].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[2].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* cooCoi.ele[2].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 9986;
}

/*
equation index: 10009
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[2].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10009};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp183;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp183, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* cooCoi.ele[2].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* cooCoi.ele[2].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* cooCoi.ele[2].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp183);
  threadData->lastEquationSolved = 10009;
}

/*
equation index: 10043
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* cooCoi.ele[2].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 10043;
}

/*
equation index: 10044
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.V = 13.266998341625207 * cooCoi.ele[2].tau2 / cooCoi.ele[2].rho2_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10044};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[2].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* cooCoi.ele[2].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[2].rho2_nominal PARAM */),"cooCoi.ele[2].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 10044;
}

/*
equation index: 10045
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.fluidVolume = cooCoi.ele[2].vol2.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[2].vol2.V PARAM */);
  threadData->lastEquationSolved = 10045;
}

/*
equation index: 10077
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.T_start = cooCoi.ele[2].T1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[2].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 10077;
}

/*
equation index: 10078
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.T = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10078;
}

/*
equation index: 10080
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.p_start = cooCoi.ele[2].p1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 10080;
}

/*
equation index: 10081
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.p = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[2].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10081;
}

/*
equation index: 10085
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[2].vol1.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10085};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp184;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp184, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[2].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* cooCoi.ele[2].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp184);
  threadData->lastEquationSolved = 10085;
}

/*
equation index: 10086
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.p_start = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10086;
}

/*
equation index: 10087
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.T_start = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10087;
}

/*
equation index: 10089
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.X_start[1] = cooCoi.ele[2].X1_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* cooCoi.ele[2].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 10089;
}

/*
equation index: 10090
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.X_start[1] = cooCoi.ele[2].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10090;
}

/*
equation index: 10091
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, cooCoi.ele[2].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10091};
  real_array tmp185;
  real_array_create(&tmp185, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* cooCoi.ele[2].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), tmp185);
  threadData->lastEquationSolved = 10091;
}

/*
equation index: 10096
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[2].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 10096;
}

/*
equation index: 10099
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* cooCoi.ele[2].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 10099;
}

/*
equation index: 10100
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.V = 4.761904761904762 * cooCoi.ele[2].tau1 / cooCoi.ele[2].rho1_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[662]] /* cooCoi.ele[2].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* cooCoi.ele[2].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* cooCoi.ele[2].rho1_nominal PARAM */),"cooCoi.ele[2].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 10100;
}

/*
equation index: 10101
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.fluidVolume = cooCoi.ele[2].vol1.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[662]] /* cooCoi.ele[2].vol1.V PARAM */);
  threadData->lastEquationSolved = 10101;
}

/*
equation index: 10147
type: SIMPLE_ASSIGN
cooCoi.ele[1].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* cooCoi.ele[1].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 10147;
}

/*
equation index: 10148
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* cooCoi.ele[1].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 10148;
}

/*
equation index: 10149
type: SIMPLE_ASSIGN
cooCoi.ele[1].C = 2.0 * cooCoi.ele[1].UA_nominal * cooCoi.ele[1].tau_m
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* cooCoi.ele[1].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* cooCoi.ele[1].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* cooCoi.ele[1].tau_m PARAM */)));
  threadData->lastEquationSolved = 10149;
}

/*
equation index: 10150
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.C = cooCoi.ele[1].C
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* cooCoi.ele[1].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* cooCoi.ele[1].C PARAM */);
  threadData->lastEquationSolved = 10150;
}

/*
equation index: 10154
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[1].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* cooCoi.ele[1].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* cooCoi.ele[1].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 10154;
}

/*
equation index: 10160
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[1].sta1_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10160};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp186;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp186, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[1].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* cooCoi.ele[1].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* cooCoi.ele[1].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp186);
  threadData->lastEquationSolved = 10160;
}

/*
equation index: 10168
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[1].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[1].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* cooCoi.ele[1].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 10168;
}

/*
equation index: 10191
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[1].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10191};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp187;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp187, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* cooCoi.ele[1].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* cooCoi.ele[1].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* cooCoi.ele[1].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp187);
  threadData->lastEquationSolved = 10191;
}

/*
equation index: 10215
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.T_start = cooCoi.ele[1].T2_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 10215;
}

/*
equation index: 10216
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.T_start = cooCoi.ele[1].vol2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol2.T_start PARAM */);
  threadData->lastEquationSolved = 10216;
}

/*
equation index: 10218
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[1] = cooCoi.ele[1].X2_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* cooCoi.ele[1].X2_start[1] PARAM */);
  threadData->lastEquationSolved = 10218;
}

/*
equation index: 10219
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[1] = cooCoi.ele[1].vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10219;
}

/*
equation index: 10220
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.hStart = 1006.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start) * (1.0 - cooCoi.ele[1].vol2.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start)) * cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[1].vol2.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 10220;
}

/*
equation index: 10229
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.p_start = cooCoi.ele[1].p2_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[1].vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* cooCoi.ele[1].p2_start PARAM */);
  threadData->lastEquationSolved = 10229;
}

/*
equation index: 10230
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.p_start = cooCoi.ele[1].vol2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[1].vol2.p_start PARAM */);
  threadData->lastEquationSolved = 10230;
}

/*
equation index: 10231
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.rho_start = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* cooCoi.ele[1].vol2.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 10231;
}

/*
equation index: 10234
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* cooCoi.ele[1].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 10234;
}

/*
equation index: 10235
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.V = 13.266998341625207 * cooCoi.ele[1].tau2 / cooCoi.ele[1].rho2_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[1].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* cooCoi.ele[1].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* cooCoi.ele[1].rho2_nominal PARAM */),"cooCoi.ele[1].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 10235;
}

/*
equation index: 10236
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.fluidVolume = cooCoi.ele[1].vol2.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[1].vol2.V PARAM */);
  threadData->lastEquationSolved = 10236;
}

/*
equation index: 10245
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[2] = cooCoi.ele[1].X2_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* cooCoi.ele[1].X2_start[2] PARAM */);
  threadData->lastEquationSolved = 10245;
}

/*
equation index: 10246
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[2] = cooCoi.ele[1].vol2.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[1].vol2.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */);
  threadData->lastEquationSolved = 10246;
}

/*
equation index: 10263
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.T_start = cooCoi.ele[1].T1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[1].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 10263;
}

/*
equation index: 10264
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.T = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10264;
}

/*
equation index: 10266
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.p_start = cooCoi.ele[1].p1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 10266;
}

/*
equation index: 10267
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.p = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[1].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10267;
}

/*
equation index: 10271
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[1].vol1.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10271};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp188;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp188, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[1].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[1].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp188);
  threadData->lastEquationSolved = 10271;
}

/*
equation index: 10272
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.p_start = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10272;
}

/*
equation index: 10273
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.T_start = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10273;
}

/*
equation index: 10275
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.X_start[1] = cooCoi.ele[1].X1_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* cooCoi.ele[1].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 10275;
}

/*
equation index: 10276
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.X_start[1] = cooCoi.ele[1].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10276;
}

/*
equation index: 10277
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, cooCoi.ele[1].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10277};
  real_array tmp189;
  real_array_create(&tmp189, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* cooCoi.ele[1].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), tmp189);
  threadData->lastEquationSolved = 10277;
}

/*
equation index: 10282
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[1].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 10282;
}

/*
equation index: 10285
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* cooCoi.ele[1].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 10285;
}

/*
equation index: 10286
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.V = 4.761904761904762 * cooCoi.ele[1].tau1 / cooCoi.ele[1].rho1_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* cooCoi.ele[1].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* cooCoi.ele[1].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* cooCoi.ele[1].rho1_nominal PARAM */),"cooCoi.ele[1].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 10286;
}

/*
equation index: 10287
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.fluidVolume = cooCoi.ele[1].vol1.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* cooCoi.ele[1].vol1.V PARAM */);
  threadData->lastEquationSolved = 10287;
}

/*
equation index: 10336
type: SIMPLE_ASSIGN
cooCoi.temSen_2.tauHeaTraInv = if cooCoi.temSen_2.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_2.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10336};
  modelica_boolean tmp190;
  tmp190 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* cooCoi.temSen_2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[934]] /* cooCoi.temSen_2.tauHeaTraInv PARAM */) = (tmp190?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* cooCoi.temSen_2.tauHeaTra PARAM */),"cooCoi.temSen_2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 10336;
}

/*
equation index: 10352
type: SIMPLE_ASSIGN
cooCoi.temSen_1.tauHeaTraInv = if cooCoi.temSen_1.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_1.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10352};
  modelica_boolean tmp191;
  tmp191 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* cooCoi.temSen_1.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* cooCoi.temSen_1.tauHeaTraInv PARAM */) = (tmp191?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* cooCoi.temSen_1.tauHeaTra PARAM */),"cooCoi.temSen_1.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 10352;
}

/*
equation index: 10369
type: SIMPLE_ASSIGN
cooCoi.hA.r_nominal = cooCoi.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[914]] /* cooCoi.r_nominal PARAM */);
  threadData->lastEquationSolved = 10369;
}

/*
equation index: 10370
type: SIMPLE_ASSIGN
cooCoi.hA.UA_nominal = cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* cooCoi.hA.UA_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */);
  threadData->lastEquationSolved = 10370;
}

/*
equation index: 10371
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_w = cooCoi.hA.UA_nominal * (1.0 + cooCoi.hA.r_nominal) / cooCoi.hA.r_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* cooCoi.hA.hA_nominal_w PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* cooCoi.hA.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */),"cooCoi.hA.r_nominal",equationIndexes));
  threadData->lastEquationSolved = 10371;
}

/*
equation index: 10372
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_a = cooCoi.hA.r_nominal * cooCoi.hA.hA_nominal_w
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* cooCoi.hA.hA_nominal_a PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* cooCoi.hA.hA_nominal_w PARAM */));
  threadData->lastEquationSolved = 10372;
}

/*
equation index: 10436
type: SIMPLE_ASSIGN
fanSup.eff.per.speeds_rpm[1] = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* fanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10436;
}

/*
equation index: 10437
type: SIMPLE_ASSIGN
fanSup.eff.per.constantSpeed_rpm = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1423]] /* fanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10437;
}

/*
equation index: 10441
type: SIMPLE_ASSIGN
fanSup.eff.per.motorCooledByFluid = fanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10441};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[416]] /* fanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[423]] /* fanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 10441;
}

/*
equation index: 10442
type: SIMPLE_ASSIGN
fanSup.eff.per.power.P[1] = fanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* fanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 10442;
}

/*
equation index: 10443
type: SIMPLE_ASSIGN
fanSup.eff.per.power.V_flow[1] = fanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* fanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* fanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 10443;
}

/*
equation index: 10444
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.eta[1] = fanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* fanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 10444;
}

/*
equation index: 10445
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.V_flow[1] = fanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1460]] /* fanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 10445;
}

/*
equation index: 10446
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.eta[1] = fanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1459]] /* fanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 10446;
}

/*
equation index: 10447
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.V_flow[1] = fanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1458]] /* fanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 10447;
}

/*
equation index: 10460
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1452]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 10460;
}

/*
equation index: 10461
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_start = fanSup.m_flow_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1474]] /* fanSup.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1453]] /* fanSup.m_flow_start PARAM */);
  threadData->lastEquationSolved = 10461;
}

/*
equation index: 10464
type: SIMPLE_ASSIGN
fanSup.vol.tau = fanSup.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* fanSup.tau PARAM */);
  threadData->lastEquationSolved = 10464;
}

/*
equation index: 10465
type: SIMPLE_ASSIGN
fanSup.vol.V_nominal = 13.266998341625207 * fanSup.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* fanSup.vol.V_nominal PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 10465;
}

/*
equation index: 10483
type: SIMPLE_ASSIGN
fanSup.vol.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* fanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1452]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 10483;
}

/*
equation index: 10484
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flow_small = fanSup.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* fanSup.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* fanSup.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 10484;
}

/*
equation index: 10485
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaReg = 0.001 * fanSup.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* fanSup.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 10485;
}

/*
equation index: 10486
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaInvReg = 1.0 / fanSup.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */),"fanSup.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 10486;
}

/*
equation index: 10487
type: SIMPLE_ASSIGN
fanSup.vol.steBal.fReg = 104.0 * fanSup.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1514]] /* fanSup.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 10487;
}

/*
equation index: 10488
type: SIMPLE_ASSIGN
fanSup.vol.steBal.eReg = (-380.0) * fanSup.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1513]] /* fanSup.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 10488;
}

/*
equation index: 10489
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dReg = 534.0 * fanSup.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10489};
  modelica_real tmp192;
  tmp192 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  tmp192 *= tmp192;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1510]] /* fanSup.vol.steBal.dReg PARAM */) = (534.0) * ((tmp192 * tmp192));
  threadData->lastEquationSolved = 10489;
}

/*
equation index: 10490
type: SIMPLE_ASSIGN
fanSup.vol.steBal.cReg = (-361.0) * fanSup.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10490};
  modelica_real tmp193;
  tmp193 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1508]] /* fanSup.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp193 * tmp193 * tmp193));
  threadData->lastEquationSolved = 10490;
}

/*
equation index: 10491
type: SIMPLE_ASSIGN
fanSup.vol.steBal.bReg = 119.0 * fanSup.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10491};
  modelica_real tmp194;
  tmp194 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* fanSup.vol.steBal.bReg PARAM */) = (119.0) * ((tmp194 * tmp194));
  threadData->lastEquationSolved = 10491;
}

/*
equation index: 10492
type: SIMPLE_ASSIGN
fanSup.vol.steBal.aReg = (-15.0) * fanSup.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* fanSup.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 10492;
}

/*
equation index: 10502
type: SIMPLE_ASSIGN
fanSup.vol.V = fanSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* fanSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* fanSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 10502;
}

/*
equation index: 10508
type: SIMPLE_ASSIGN
fanSup.vol.X_start[2] = fanSup.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* fanSup.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1390]] /* fanSup.X_start[2] PARAM */);
  threadData->lastEquationSolved = 10508;
}

/*
equation index: 10509
type: SIMPLE_ASSIGN
fanSup.vol.X_start[1] = fanSup.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1488]] /* fanSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* fanSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10509;
}

/*
equation index: 10510
type: SIMPLE_ASSIGN
fanSup.vol.T_start = fanSup.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* fanSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* fanSup.T_start PARAM */);
  threadData->lastEquationSolved = 10510;
}

/*
equation index: 10511
type: SIMPLE_ASSIGN
fanSup.vol.p_start = fanSup.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1493]] /* fanSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1455]] /* fanSup.p_start PARAM */);
  threadData->lastEquationSolved = 10511;
}

/*
equation index: 10532
type: SIMPLE_ASSIGN
fanSup.stageInputs[1] = fanSup.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* fanSup.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1454]] /* fanSup.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 10532;
}

/*
equation index: 10536
type: SIMPLE_ASSIGN
fanSup.per.speeds_rpm[1] = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanSup.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10536;
}

/*
equation index: 10537
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed_rpm = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1457]] /* fanSup.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10537;
}

/*
equation index: 10538
type: SIMPLE_ASSIGN
fanSup.per.speeds[1] = fanSup.per.speeds_rpm[1] / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanSup.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanSup.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 10538;
}

/*
equation index: 10539
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed = fanSup.per.constantSpeed_rpm / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1456]] /* fanSup.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1457]] /* fanSup.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 10539;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1864(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1863(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1862(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1861(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1860(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1859(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1858(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1857(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1856(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1855(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1854(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1853(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1852(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1851(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1850(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1849(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1848(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1847(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1846(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1845(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1844(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1843(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1842(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1841(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1840(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1839(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1838(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1837(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1836(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1835(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1834(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1833(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1832(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1831(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1830(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1829(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1828(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1827(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1826(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1825(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1824(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1823(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1822(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1821(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1820(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1819(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1818(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1817(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1816(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1815(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1814(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1813(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1812(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1811(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1810(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1809(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1808(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1807(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1806(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1805(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1804(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1803(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1802(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1801(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1800(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1799(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1798(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1797(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1796(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1795(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1794(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1793(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1792(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1791(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1790(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1789(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1788(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1787(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1786(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1785(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1784(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1783(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1782(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1781(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1780(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1779(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1778(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1777(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1776(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1775(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1774(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1773(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1772(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1771(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1770(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1769(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1768(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1767(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1766(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1765(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1764(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1763(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1762(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1761(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1760(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1759(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1758(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1757(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1756(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1755(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1754(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1753(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1752(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1751(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1750(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1749(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1748(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1747(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1746(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1745(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1744(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1743(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1742(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1741(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1740(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1739(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1738(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1737(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1736(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1735(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1734(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1733(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1732(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1731(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1730(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1729(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1728(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1727(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1726(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1725(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1724(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1723(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1722(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1721(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1720(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1719(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1718(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1717(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1716(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1715(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1714(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1713(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1712(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1711(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1710(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1709(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1708(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1707(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1706(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1705(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1704(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1703(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1702(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1701(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1700(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1699(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1698(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1697(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1696(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1695(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1694(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1693(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1692(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1691(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1690(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1689(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_322(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_321(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_320(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_319(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_318(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_317(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_316(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_315(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_314(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_313(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_312(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_310(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1688(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_309(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_308(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_307(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_306(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_305(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_304(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_303(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_302(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_301(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_300(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_299(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1687(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1686(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_295(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_291(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_287(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_283(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_279(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_275(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_274(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_273(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_272(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_271(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_266(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1685(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1684(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_265(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1683(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_264(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1682(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1681(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_263(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_262(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1680(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1679(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_261(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_267(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_268(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_269(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_270(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1678(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1677(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1676(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1675(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1674(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1673(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1672(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1671(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1670(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1669(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1668(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1667(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1666(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1665(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1664(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1663(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1662(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1661(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1660(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1659(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1658(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1657(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1656(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1655(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1654(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1653(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1652(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1651(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1650(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1649(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1648(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1647(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1646(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1645(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1644(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_311(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_207(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_206(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_205(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_204(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_203(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_202(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_201(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_200(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_199(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_198(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_197(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_196(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_195(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_194(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_193(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_192(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_191(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_190(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_189(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_188(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_187(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_186(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_185(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9477,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9478,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9479,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9480,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9481,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9482,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9483,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9497,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9503,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9504,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9507,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9512,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9513,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9514,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9518,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9519,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9520,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9521,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9522,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9523,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9528,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9531,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9532,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9545,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9554,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9555,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9556,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9568,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9572,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9573,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9574,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9575,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9592,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9593,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9594,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9595,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9596,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9597,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9598,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9601,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9602,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9603,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9604,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9608,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9614,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9622,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9645,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9679,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9680,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9681,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9713,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9714,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9716,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9717,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9721,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9722,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9723,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9725,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9727,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9732,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9735,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9736,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9737,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9783,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9784,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9785,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9786,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9790,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9796,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9804,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9827,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9861,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9862,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9863,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9895,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9896,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9898,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9899,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9903,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9904,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9905,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9907,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9908,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9909,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9914,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9917,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9918,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9919,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9965,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9966,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9967,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9968,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9972,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9978,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9986,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10009,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10043,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10044,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10045,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10077,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10078,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10080,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10081,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10085,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10086,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10087,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10089,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10090,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10091,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10096,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10099,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10100,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10101,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10147,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10148,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10149,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10150,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10154,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10160,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10168,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10191,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10215,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10216,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10218,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10219,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10220,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10229,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10230,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10231,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10234,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10235,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10236,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10245,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10246,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10263,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10264,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10266,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10267,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10271,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10273,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10275,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10276,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10277,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10282,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10285,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10286,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10287,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10352,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10369,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10370,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10371,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10372,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10436,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10437,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10441,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10442,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10443,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10444,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10445,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10446,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10447,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10460,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10461,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10464,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10465,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10483,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10484,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10485,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10486,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10487,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10488,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10489,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10490,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10491,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10492,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10502,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10509,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10510,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10532,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10536,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10537,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10538,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10539,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1864,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1863,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1862,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1861,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1860,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1859,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1858,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1857,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1856,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1855,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1854,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1853,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1852,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1851,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1850,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1849,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1848,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1847,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1846,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1845,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1844,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1843,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1842,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1841,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1840,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1839,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1838,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1837,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1836,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1835,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1834,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1833,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1832,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1831,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1830,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1829,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1828,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1827,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1826,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1825,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1824,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1823,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1822,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1821,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1820,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1819,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1818,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1817,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1816,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1815,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1814,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1813,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1812,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1811,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1810,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1809,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1808,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1807,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1806,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1805,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1804,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1803,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1802,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1801,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1800,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1799,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1798,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1797,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1796,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1795,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1794,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1793,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1792,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1791,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1790,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1789,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1788,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1787,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1786,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1785,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1784,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1783,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1782,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1781,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1780,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1779,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1778,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1777,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1776,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1775,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1774,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1773,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1772,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1771,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1770,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1769,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1768,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1767,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1766,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1765,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1764,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1763,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1762,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1761,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1760,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1759,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1758,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1757,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1756,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1755,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1754,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1753,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1752,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1751,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1750,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1749,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1748,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1747,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1746,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1745,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1744,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1743,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1742,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1741,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1740,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1739,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1738,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1737,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1736,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1735,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1734,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1733,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1732,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1731,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1730,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1729,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1728,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1727,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1725,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1724,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1723,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1722,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1721,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1720,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1719,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1718,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1717,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1716,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1715,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1714,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1713,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1712,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1711,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1710,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1709,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1708,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1707,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1706,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1705,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1704,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1703,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1702,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1701,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1700,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1699,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1698,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1697,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1696,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1695,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1694,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1693,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1692,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1691,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1690,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1689,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_320,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_319,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_318,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_317,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_316,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_315,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_314,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_313,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_312,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_310,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1688,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_309,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_308,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_307,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_306,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_305,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_304,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_303,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_302,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_301,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_300,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_299,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1687,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1686,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_295,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_291,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_287,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_283,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_279,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_275,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_274,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_273,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_271,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_266,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1685,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1684,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_265,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1683,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_264,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1682,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1681,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_263,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_262,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1680,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1679,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_261,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_267,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_268,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_269,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_270,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1678,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1677,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1676,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1675,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1674,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1673,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1672,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1671,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1670,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1669,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1668,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1667,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1666,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1665,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1664,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1663,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1662,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1661,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1660,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1659,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1658,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1657,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1656,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1655,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1654,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1653,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1652,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1651,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1650,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1649,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1647,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1646,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1645,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1644,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_311,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_207,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_206,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_205,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_204,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_203,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_202,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_201,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_200,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_199,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_198,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_197,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_196,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_195,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_194,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_193,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_192,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_191,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_190,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_189,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_188,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_187,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_186,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_185
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif