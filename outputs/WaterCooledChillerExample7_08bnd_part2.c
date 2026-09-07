#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 9476
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.V_flow[1] = pumCHW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2101]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2136]] /* pumCHW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9476;
}

/*
equation index: 9477
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.eta[1] = pumCHW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2100]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2135]] /* pumCHW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9477;
}

/*
equation index: 9478
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2134]] /* pumCHW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9478;
}

/*
equation index: 9492
type: SIMPLE_ASSIGN
pumCHW.heaDis.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9492};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[663]] /* pumCHW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[666]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9492;
}

/*
equation index: 9498
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* pumCHW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9498;
}

/*
equation index: 9499
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_start = pumCHW.m_flow_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2152]] /* pumCHW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2129]] /* pumCHW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 9499;
}

/*
equation index: 9502
type: SIMPLE_ASSIGN
pumCHW.vol.tau = pumCHW.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2187]] /* pumCHW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2160]] /* pumCHW.tau PARAM */);
  threadData->lastEquationSolved = 9502;
}

/*
equation index: 9503
type: SIMPLE_ASSIGN
pumCHW.vol.V_nominal = 4.761904761904762 * pumCHW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* pumCHW.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2187]] /* pumCHW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 9503;
}

/*
equation index: 9506
type: SIMPLE_ASSIGN
pumCHW.vol.T_start = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* pumCHW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 9506;
}

/*
equation index: 9507
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.T = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9507;
}

/*
equation index: 9508
type: SIMPLE_ASSIGN
pumCHW.vol.p_start = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* pumCHW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 9508;
}

/*
equation index: 9509
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.p = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2186]] /* pumCHW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9509;
}

/*
equation index: 9513
type: SIMPLE_ASSIGN
pumCHW.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.Medium.density(pumCHW.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9513};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_Medium_ThermodynamicState tmp171;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp171, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2186]] /* pumCHW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2182]] /* pumCHW.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_Medium_density(threadData, tmp171);
  threadData->lastEquationSolved = 9513;
}

/*
equation index: 9514
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.p_start = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2180]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9514;
}

/*
equation index: 9515
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.T_start = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9515;
}

/*
equation index: 9516
type: SIMPLE_ASSIGN
pumCHW.vol.X_start[1] = pumCHW.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* pumCHW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2065]] /* pumCHW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9516;
}

/*
equation index: 9517
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.X_start[1] = pumCHW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2167]] /* pumCHW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* pumCHW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9517;
}

/*
equation index: 9518
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, pumCHW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9518};
  real_array tmp172;
  real_array_create(&tmp172, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2167]] /* pumCHW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2170]] /* pumCHW.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */), tmp172);
  threadData->lastEquationSolved = 9518;
}

/*
equation index: 9523
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.vol.dynBal.Medium.setState_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9523};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2174]] /* pumCHW.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9523;
}

/*
equation index: 9526
type: SIMPLE_ASSIGN
pumCHW.vol.V = pumCHW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2163]] /* pumCHW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 9526;
}

/*
equation index: 9527
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.fluidVolume = pumCHW.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2169]] /* pumCHW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.vol.V PARAM */);
  threadData->lastEquationSolved = 9527;
}

/*
equation index: 9540
type: SIMPLE_ASSIGN
pumCHW.vol.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2179]] /* pumCHW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9540;
}

/*
equation index: 9549
type: SIMPLE_ASSIGN
pumCHW.sta_start.p = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2158]] /* pumCHW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 9549;
}

/*
equation index: 9550
type: SIMPLE_ASSIGN
pumCHW.sta_start.T = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* pumCHW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 9550;
}

/*
equation index: 9551
type: SIMPLE_ASSIGN
pumCHW.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW.Medium.specificEnthalpy(pumCHW.sta_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9551};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_Medium_ThermodynamicState tmp173;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp173, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2158]] /* pumCHW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* pumCHW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* pumCHW.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW_Medium_specificEnthalpy(threadData, tmp173);
  threadData->lastEquationSolved = 9551;
}

/*
equation index: 9563
type: SIMPLE_ASSIGN
pumCHW.stageInputs[1] = pumCHW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2159]] /* pumCHW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* pumCHW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 9563;
}

/*
equation index: 9567
type: SIMPLE_ASSIGN
pumCHW.per.speeds_rpm[1] = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2147]] /* pumCHW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9567;
}

/*
equation index: 9568
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed_rpm = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2133]] /* pumCHW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9568;
}

/*
equation index: 9569
type: SIMPLE_ASSIGN
pumCHW.per.speeds[1] = pumCHW.per.speeds_rpm[1] / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9569};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2146]] /* pumCHW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2147]] /* pumCHW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9569;
}

/*
equation index: 9570
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed = pumCHW.per.constantSpeed_rpm / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* pumCHW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2133]] /* pumCHW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2145]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9570;
}

/*
equation index: 9587
type: SIMPLE_ASSIGN
cooCoi.GDif = 0.0033333333333333335 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */) = (0.0033333333333333335) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9587;
}

/*
equation index: 9588
type: SIMPLE_ASSIGN
cooCoi.theCon2[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[941]] /* cooCoi.theCon2[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9588;
}

/*
equation index: 9589
type: SIMPLE_ASSIGN
cooCoi.theCon2[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[940]] /* cooCoi.theCon2[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9589;
}

/*
equation index: 9590
type: SIMPLE_ASSIGN
cooCoi.theCon2[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[939]] /* cooCoi.theCon2[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9590;
}

/*
equation index: 9591
type: SIMPLE_ASSIGN
cooCoi.theCon1[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[938]] /* cooCoi.theCon1[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9591;
}

/*
equation index: 9592
type: SIMPLE_ASSIGN
cooCoi.theCon1[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[937]] /* cooCoi.theCon1[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9592;
}

/*
equation index: 9593
type: SIMPLE_ASSIGN
cooCoi.theCon1[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[936]] /* cooCoi.theCon1[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[383]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 9593;
}

/*
equation index: 9596
type: SIMPLE_ASSIGN
cooCoi.ele[4].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* cooCoi.ele[4].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9596;
}

/*
equation index: 9597
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* cooCoi.ele[4].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 9597;
}

/*
equation index: 9598
type: SIMPLE_ASSIGN
cooCoi.ele[4].C = 2.0 * cooCoi.ele[4].UA_nominal * cooCoi.ele[4].tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9598};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* cooCoi.ele[4].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* cooCoi.ele[4].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* cooCoi.ele[4].tau_m PARAM */)));
  threadData->lastEquationSolved = 9598;
}

/*
equation index: 9599
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.C = cooCoi.ele[4].C
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9599};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[460]] /* cooCoi.ele[4].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* cooCoi.ele[4].C PARAM */);
  threadData->lastEquationSolved = 9599;
}

/*
equation index: 9603
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[4].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* cooCoi.ele[4].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* cooCoi.ele[4].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 9603;
}

/*
equation index: 9609
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[4].sta1_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9609};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp174;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp174, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[4].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* cooCoi.ele[4].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* cooCoi.ele[4].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp174);
  threadData->lastEquationSolved = 9609;
}

/*
equation index: 9617
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[4].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* cooCoi.ele[4].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* cooCoi.ele[4].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 9617;
}

/*
equation index: 9640
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[4].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9640};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp175;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp175, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[524]] /* cooCoi.ele[4].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* cooCoi.ele[4].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[4].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp175);
  threadData->lastEquationSolved = 9640;
}

/*
equation index: 9674
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* cooCoi.ele[4].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 9674;
}

/*
equation index: 9675
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.V = 13.266998341625207 * cooCoi.ele[4].tau2 / cooCoi.ele[4].rho2_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[4].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* cooCoi.ele[4].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* cooCoi.ele[4].rho2_nominal PARAM */),"cooCoi.ele[4].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 9675;
}

/*
equation index: 9676
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.fluidVolume = cooCoi.ele[4].vol2.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[4].vol2.V PARAM */);
  threadData->lastEquationSolved = 9676;
}

/*
equation index: 9708
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.T_start = cooCoi.ele[4].T1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* cooCoi.ele[4].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 9708;
}

/*
equation index: 9709
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.T = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9709;
}

/*
equation index: 9711
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.p_start = cooCoi.ele[4].p1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 9711;
}

/*
equation index: 9712
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.p = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[4].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9712;
}

/*
equation index: 9716
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[4].vol1.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9716};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp176;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp176, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[4].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* cooCoi.ele[4].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp176);
  threadData->lastEquationSolved = 9716;
}

/*
equation index: 9717
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.p_start = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9717;
}

/*
equation index: 9718
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.T_start = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[660]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9718;
}

/*
equation index: 9720
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.X_start[1] = cooCoi.ele[4].X1_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* cooCoi.ele[4].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 9720;
}

/*
equation index: 9721
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.X_start[1] = cooCoi.ele[4].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9721;
}

/*
equation index: 9722
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, cooCoi.ele[4].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9722};
  real_array tmp177;
  real_array_create(&tmp177, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* cooCoi.ele[4].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), tmp177);
  threadData->lastEquationSolved = 9722;
}

/*
equation index: 9727
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[4].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9727;
}

/*
equation index: 9730
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* cooCoi.ele[4].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 9730;
}

/*
equation index: 9731
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.V = 4.761904761904762 * cooCoi.ele[4].tau1 / cooCoi.ele[4].rho1_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* cooCoi.ele[4].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* cooCoi.ele[4].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* cooCoi.ele[4].rho1_nominal PARAM */),"cooCoi.ele[4].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 9731;
}

/*
equation index: 9732
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.fluidVolume = cooCoi.ele[4].vol1.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* cooCoi.ele[4].vol1.V PARAM */);
  threadData->lastEquationSolved = 9732;
}

/*
equation index: 9778
type: SIMPLE_ASSIGN
cooCoi.ele[3].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* cooCoi.ele[3].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9778;
}

/*
equation index: 9779
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* cooCoi.ele[3].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 9779;
}

/*
equation index: 9780
type: SIMPLE_ASSIGN
cooCoi.ele[3].C = 2.0 * cooCoi.ele[3].UA_nominal * cooCoi.ele[3].tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* cooCoi.ele[3].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* cooCoi.ele[3].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[655]] /* cooCoi.ele[3].tau_m PARAM */)));
  threadData->lastEquationSolved = 9780;
}

/*
equation index: 9781
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.C = cooCoi.ele[3].C
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* cooCoi.ele[3].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[391]] /* cooCoi.ele[3].C PARAM */);
  threadData->lastEquationSolved = 9781;
}

/*
equation index: 9785
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[3].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* cooCoi.ele[3].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* cooCoi.ele[3].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 9785;
}

/*
equation index: 9791
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[3].sta1_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9791};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp178;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp178, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[3].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* cooCoi.ele[3].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* cooCoi.ele[3].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp178);
  threadData->lastEquationSolved = 9791;
}

/*
equation index: 9799
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[3].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9799};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[3].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* cooCoi.ele[3].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 9799;
}

/*
equation index: 9822
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[3].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9822};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp179;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp179, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[523]] /* cooCoi.ele[3].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[519]] /* cooCoi.ele[3].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* cooCoi.ele[3].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp179);
  threadData->lastEquationSolved = 9822;
}

/*
equation index: 9856
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* cooCoi.ele[3].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 9856;
}

/*
equation index: 9857
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.V = 13.266998341625207 * cooCoi.ele[3].tau2 / cooCoi.ele[3].rho2_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[3].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* cooCoi.ele[3].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* cooCoi.ele[3].rho2_nominal PARAM */),"cooCoi.ele[3].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 9857;
}

/*
equation index: 9858
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.fluidVolume = cooCoi.ele[3].vol2.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9858};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[3].vol2.V PARAM */);
  threadData->lastEquationSolved = 9858;
}

/*
equation index: 9890
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.T_start = cooCoi.ele[3].T1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9890};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[3].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 9890;
}

/*
equation index: 9891
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.T = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9891;
}

/*
equation index: 9893
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.p_start = cooCoi.ele[3].p1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 9893;
}

/*
equation index: 9894
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.p = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[3].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9894;
}

/*
equation index: 9898
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[3].vol1.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9898};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp180;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp180, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[3].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[3].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp180);
  threadData->lastEquationSolved = 9898;
}

/*
equation index: 9899
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.p_start = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9899;
}

/*
equation index: 9900
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.T_start = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9900;
}

/*
equation index: 9902
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.X_start[1] = cooCoi.ele[3].X1_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9902};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* cooCoi.ele[3].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 9902;
}

/*
equation index: 9903
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.X_start[1] = cooCoi.ele[3].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9903};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[679]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9903;
}

/*
equation index: 9904
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, cooCoi.ele[3].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9904};
  real_array tmp181;
  real_array_create(&tmp181, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[679]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* cooCoi.ele[3].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), tmp181);
  threadData->lastEquationSolved = 9904;
}

/*
equation index: 9909
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[3].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9909;
}

/*
equation index: 9912
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* cooCoi.ele[3].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 9912;
}

/*
equation index: 9913
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.V = 4.761904761904762 * cooCoi.ele[3].tau1 / cooCoi.ele[3].rho1_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* cooCoi.ele[3].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* cooCoi.ele[3].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* cooCoi.ele[3].rho1_nominal PARAM */),"cooCoi.ele[3].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 9913;
}

/*
equation index: 9914
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.fluidVolume = cooCoi.ele[3].vol1.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9914};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* cooCoi.ele[3].vol1.V PARAM */);
  threadData->lastEquationSolved = 9914;
}

/*
equation index: 9960
type: SIMPLE_ASSIGN
cooCoi.ele[2].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9960};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* cooCoi.ele[2].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 9960;
}

/*
equation index: 9961
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9961};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* cooCoi.ele[2].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 9961;
}

/*
equation index: 9962
type: SIMPLE_ASSIGN
cooCoi.ele[2].C = 2.0 * cooCoi.ele[2].UA_nominal * cooCoi.ele[2].tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* cooCoi.ele[2].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[402]] /* cooCoi.ele[2].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* cooCoi.ele[2].tau_m PARAM */)));
  threadData->lastEquationSolved = 9962;
}

/*
equation index: 9963
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.C = cooCoi.ele[2].C
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* cooCoi.ele[2].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* cooCoi.ele[2].C PARAM */);
  threadData->lastEquationSolved = 9963;
}

/*
equation index: 9967
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[2].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[2].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* cooCoi.ele[2].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 9967;
}

/*
equation index: 9973
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[2].sta1_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9973};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp182;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp182, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[2].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* cooCoi.ele[2].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* cooCoi.ele[2].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp182);
  threadData->lastEquationSolved = 9973;
}

/*
equation index: 9981
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[2].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[2].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[574]] /* cooCoi.ele[2].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 9981;
}

/*
equation index: 10004
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[2].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10004};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp183;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp183, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* cooCoi.ele[2].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* cooCoi.ele[2].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* cooCoi.ele[2].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp183);
  threadData->lastEquationSolved = 10004;
}

/*
equation index: 10038
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* cooCoi.ele[2].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 10038;
}

/*
equation index: 10039
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.V = 13.266998341625207 * cooCoi.ele[2].tau2 / cooCoi.ele[2].rho2_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[2].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* cooCoi.ele[2].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[2].rho2_nominal PARAM */),"cooCoi.ele[2].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 10039;
}

/*
equation index: 10040
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.fluidVolume = cooCoi.ele[2].vol2.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[2].vol2.V PARAM */);
  threadData->lastEquationSolved = 10040;
}

/*
equation index: 10072
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.T_start = cooCoi.ele[2].T1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[2].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 10072;
}

/*
equation index: 10073
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.T = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10073;
}

/*
equation index: 10075
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.p_start = cooCoi.ele[2].p1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 10075;
}

/*
equation index: 10076
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.p = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[2].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10076;
}

/*
equation index: 10080
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[2].vol1.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10080};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp184;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp184, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[2].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* cooCoi.ele[2].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp184);
  threadData->lastEquationSolved = 10080;
}

/*
equation index: 10081
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.p_start = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10081;
}

/*
equation index: 10082
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.T_start = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10082;
}

/*
equation index: 10084
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.X_start[1] = cooCoi.ele[2].X1_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* cooCoi.ele[2].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 10084;
}

/*
equation index: 10085
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.X_start[1] = cooCoi.ele[2].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10085;
}

/*
equation index: 10086
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, cooCoi.ele[2].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10086};
  real_array tmp185;
  real_array_create(&tmp185, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* cooCoi.ele[2].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), tmp185);
  threadData->lastEquationSolved = 10086;
}

/*
equation index: 10091
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[2].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 10091;
}

/*
equation index: 10094
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* cooCoi.ele[2].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 10094;
}

/*
equation index: 10095
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.V = 4.761904761904762 * cooCoi.ele[2].tau1 / cooCoi.ele[2].rho1_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[662]] /* cooCoi.ele[2].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* cooCoi.ele[2].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* cooCoi.ele[2].rho1_nominal PARAM */),"cooCoi.ele[2].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 10095;
}

/*
equation index: 10096
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.fluidVolume = cooCoi.ele[2].vol1.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[662]] /* cooCoi.ele[2].vol1.V PARAM */);
  threadData->lastEquationSolved = 10096;
}

/*
equation index: 10142
type: SIMPLE_ASSIGN
cooCoi.ele[1].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* cooCoi.ele[1].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 10142;
}

/*
equation index: 10143
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* cooCoi.ele[1].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[917]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 10143;
}

/*
equation index: 10144
type: SIMPLE_ASSIGN
cooCoi.ele[1].C = 2.0 * cooCoi.ele[1].UA_nominal * cooCoi.ele[1].tau_m
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* cooCoi.ele[1].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* cooCoi.ele[1].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* cooCoi.ele[1].tau_m PARAM */)));
  threadData->lastEquationSolved = 10144;
}

/*
equation index: 10145
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.C = cooCoi.ele[1].C
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* cooCoi.ele[1].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* cooCoi.ele[1].C PARAM */);
  threadData->lastEquationSolved = 10145;
}

/*
equation index: 10149
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[1].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* cooCoi.ele[1].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* cooCoi.ele[1].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 10149;
}

/*
equation index: 10155
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.density(cooCoi.ele[1].sta1_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10155};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp186;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp186, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[1].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* cooCoi.ele[1].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* cooCoi.ele[1].rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_density(threadData, tmp186);
  threadData->lastEquationSolved = 10155;
}

/*
equation index: 10163
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[1].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[1].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[573]] /* cooCoi.ele[1].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 10163;
}

/*
equation index: 10186
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[1].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10186};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp187;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp187, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[521]] /* cooCoi.ele[1].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* cooCoi.ele[1].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* cooCoi.ele[1].preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp187);
  threadData->lastEquationSolved = 10186;
}

/*
equation index: 10210
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.T_start = cooCoi.ele[1].T2_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10210};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 10210;
}

/*
equation index: 10211
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.T_start = cooCoi.ele[1].vol2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol2.T_start PARAM */);
  threadData->lastEquationSolved = 10211;
}

/*
equation index: 10213
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[1] = cooCoi.ele[1].X2_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* cooCoi.ele[1].X2_start[1] PARAM */);
  threadData->lastEquationSolved = 10213;
}

/*
equation index: 10214
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[1] = cooCoi.ele[1].vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10214;
}

/*
equation index: 10215
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.hStart = 1006.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start) * (1.0 - cooCoi.ele[1].vol2.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start)) * cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[1].vol2.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 10215;
}

/*
equation index: 10224
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.p_start = cooCoi.ele[1].p2_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[1].vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* cooCoi.ele[1].p2_start PARAM */);
  threadData->lastEquationSolved = 10224;
}

/*
equation index: 10225
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.p_start = cooCoi.ele[1].vol2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[1].vol2.p_start PARAM */);
  threadData->lastEquationSolved = 10225;
}

/*
equation index: 10226
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.rho_start = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* cooCoi.ele[1].vol2.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 10226;
}

/*
equation index: 10229
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* cooCoi.ele[1].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[916]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 10229;
}

/*
equation index: 10230
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.V = 13.266998341625207 * cooCoi.ele[1].tau2 / cooCoi.ele[1].rho2_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[1].vol2.V PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* cooCoi.ele[1].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* cooCoi.ele[1].rho2_nominal PARAM */),"cooCoi.ele[1].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 10230;
}

/*
equation index: 10231
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.fluidVolume = cooCoi.ele[1].vol2.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[1].vol2.V PARAM */);
  threadData->lastEquationSolved = 10231;
}

/*
equation index: 10240
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[2] = cooCoi.ele[1].X2_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* cooCoi.ele[1].X2_start[2] PARAM */);
  threadData->lastEquationSolved = 10240;
}

/*
equation index: 10241
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[2] = cooCoi.ele[1].vol2.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[1].vol2.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */);
  threadData->lastEquationSolved = 10241;
}

/*
equation index: 10258
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.T_start = cooCoi.ele[1].T1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[1].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 10258;
}

/*
equation index: 10259
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.T = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10259;
}

/*
equation index: 10261
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.p_start = cooCoi.ele[1].p1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 10261;
}

/*
equation index: 10262
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.p = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[1].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10262;
}

/*
equation index: 10266
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.Medium.density(cooCoi.ele[1].vol1.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10266};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState tmp188;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp188, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[1].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[1].vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_Medium_density(threadData, tmp188);
  threadData->lastEquationSolved = 10266;
}

/*
equation index: 10267
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.p_start = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 10267;
}

/*
equation index: 10268
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.T_start = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 10268;
}

/*
equation index: 10270
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.X_start[1] = cooCoi.ele[1].X1_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* cooCoi.ele[1].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 10270;
}

/*
equation index: 10271
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.X_start[1] = cooCoi.ele[1].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10271;
}

/*
equation index: 10272
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, cooCoi.ele[1].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10272};
  real_array tmp189;
  real_array_create(&tmp189, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* cooCoi.ele[1].vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), tmp189);
  threadData->lastEquationSolved = 10272;
}

/*
equation index: 10277
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[1].vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 10277;
}

/*
equation index: 10280
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* cooCoi.ele[1].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[915]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 10280;
}

/*
equation index: 10281
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.V = 4.761904761904762 * cooCoi.ele[1].tau1 / cooCoi.ele[1].rho1_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* cooCoi.ele[1].vol1.V PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* cooCoi.ele[1].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[589]] /* cooCoi.ele[1].rho1_nominal PARAM */),"cooCoi.ele[1].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 10281;
}

/*
equation index: 10282
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.fluidVolume = cooCoi.ele[1].vol1.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* cooCoi.ele[1].vol1.V PARAM */);
  threadData->lastEquationSolved = 10282;
}

/*
equation index: 10331
type: SIMPLE_ASSIGN
cooCoi.temSen_2.tauHeaTraInv = if cooCoi.temSen_2.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_2.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10331};
  modelica_boolean tmp190;
  tmp190 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* cooCoi.temSen_2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[934]] /* cooCoi.temSen_2.tauHeaTraInv PARAM */) = (tmp190?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[933]] /* cooCoi.temSen_2.tauHeaTra PARAM */),"cooCoi.temSen_2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 10331;
}

/*
equation index: 10347
type: SIMPLE_ASSIGN
cooCoi.temSen_1.tauHeaTraInv = if cooCoi.temSen_1.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_1.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10347};
  modelica_boolean tmp191;
  tmp191 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* cooCoi.temSen_1.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* cooCoi.temSen_1.tauHeaTraInv PARAM */) = (tmp191?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[924]] /* cooCoi.temSen_1.tauHeaTra PARAM */),"cooCoi.temSen_1.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 10347;
}

/*
equation index: 10364
type: SIMPLE_ASSIGN
cooCoi.hA.r_nominal = cooCoi.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[914]] /* cooCoi.r_nominal PARAM */);
  threadData->lastEquationSolved = 10364;
}

/*
equation index: 10365
type: SIMPLE_ASSIGN
cooCoi.hA.UA_nominal = cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* cooCoi.hA.UA_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* cooCoi.UA_nominal PARAM */);
  threadData->lastEquationSolved = 10365;
}

/*
equation index: 10366
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_w = cooCoi.hA.UA_nominal * (1.0 + cooCoi.hA.r_nominal) / cooCoi.hA.r_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* cooCoi.hA.hA_nominal_w PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* cooCoi.hA.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */),"cooCoi.hA.r_nominal",equationIndexes));
  threadData->lastEquationSolved = 10366;
}

/*
equation index: 10367
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_a = cooCoi.hA.r_nominal * cooCoi.hA.hA_nominal_w
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* cooCoi.hA.hA_nominal_a PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.hA.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[899]] /* cooCoi.hA.hA_nominal_w PARAM */));
  threadData->lastEquationSolved = 10367;
}

/*
equation index: 10431
type: SIMPLE_ASSIGN
fanSup.eff.per.speeds_rpm[1] = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1437]] /* fanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10431;
}

/*
equation index: 10432
type: SIMPLE_ASSIGN
fanSup.eff.per.constantSpeed_rpm = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1423]] /* fanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10432;
}

/*
equation index: 10436
type: SIMPLE_ASSIGN
fanSup.eff.per.motorCooledByFluid = fanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10436};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[416]] /* fanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[423]] /* fanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 10436;
}

/*
equation index: 10437
type: SIMPLE_ASSIGN
fanSup.eff.per.power.P[1] = fanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* fanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 10437;
}

/*
equation index: 10438
type: SIMPLE_ASSIGN
fanSup.eff.per.power.V_flow[1] = fanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* fanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1463]] /* fanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 10438;
}

/*
equation index: 10439
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.eta[1] = fanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* fanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 10439;
}

/*
equation index: 10440
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.V_flow[1] = fanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1460]] /* fanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 10440;
}

/*
equation index: 10441
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.eta[1] = fanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1459]] /* fanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 10441;
}

/*
equation index: 10442
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.V_flow[1] = fanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1458]] /* fanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 10442;
}

/*
equation index: 10455
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1452]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 10455;
}

/*
equation index: 10456
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_start = fanSup.m_flow_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1474]] /* fanSup.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1453]] /* fanSup.m_flow_start PARAM */);
  threadData->lastEquationSolved = 10456;
}

/*
equation index: 10459
type: SIMPLE_ASSIGN
fanSup.vol.tau = fanSup.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* fanSup.tau PARAM */);
  threadData->lastEquationSolved = 10459;
}

/*
equation index: 10460
type: SIMPLE_ASSIGN
fanSup.vol.V_nominal = 13.266998341625207 * fanSup.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* fanSup.vol.V_nominal PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 10460;
}

/*
equation index: 10478
type: SIMPLE_ASSIGN
fanSup.vol.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* fanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1452]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 10478;
}

/*
equation index: 10479
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flow_small = fanSup.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* fanSup.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1492]] /* fanSup.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 10479;
}

/*
equation index: 10480
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaReg = 0.001 * fanSup.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1516]] /* fanSup.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 10480;
}

/*
equation index: 10481
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaInvReg = 1.0 / fanSup.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */),"fanSup.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 10481;
}

/*
equation index: 10482
type: SIMPLE_ASSIGN
fanSup.vol.steBal.fReg = 104.0 * fanSup.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1514]] /* fanSup.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 10482;
}

/*
equation index: 10483
type: SIMPLE_ASSIGN
fanSup.vol.steBal.eReg = (-380.0) * fanSup.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1513]] /* fanSup.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 10483;
}

/*
equation index: 10484
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dReg = 534.0 * fanSup.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10484};
  modelica_real tmp192;
  tmp192 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  tmp192 *= tmp192;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1510]] /* fanSup.vol.steBal.dReg PARAM */) = (534.0) * ((tmp192 * tmp192));
  threadData->lastEquationSolved = 10484;
}

/*
equation index: 10485
type: SIMPLE_ASSIGN
fanSup.vol.steBal.cReg = (-361.0) * fanSup.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10485};
  modelica_real tmp193;
  tmp193 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1508]] /* fanSup.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp193 * tmp193 * tmp193));
  threadData->lastEquationSolved = 10485;
}

/*
equation index: 10486
type: SIMPLE_ASSIGN
fanSup.vol.steBal.bReg = 119.0 * fanSup.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10486};
  modelica_real tmp194;
  tmp194 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* fanSup.vol.steBal.bReg PARAM */) = (119.0) * ((tmp194 * tmp194));
  threadData->lastEquationSolved = 10486;
}

/*
equation index: 10487
type: SIMPLE_ASSIGN
fanSup.vol.steBal.aReg = (-15.0) * fanSup.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10487};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* fanSup.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 10487;
}

/*
equation index: 10497
type: SIMPLE_ASSIGN
fanSup.vol.V = fanSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1486]] /* fanSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1487]] /* fanSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 10497;
}

/*
equation index: 10503
type: SIMPLE_ASSIGN
fanSup.vol.X_start[2] = fanSup.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1489]] /* fanSup.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1390]] /* fanSup.X_start[2] PARAM */);
  threadData->lastEquationSolved = 10503;
}

/*
equation index: 10504
type: SIMPLE_ASSIGN
fanSup.vol.X_start[1] = fanSup.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1488]] /* fanSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* fanSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 10504;
}

/*
equation index: 10505
type: SIMPLE_ASSIGN
fanSup.vol.T_start = fanSup.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* fanSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* fanSup.T_start PARAM */);
  threadData->lastEquationSolved = 10505;
}

/*
equation index: 10506
type: SIMPLE_ASSIGN
fanSup.vol.p_start = fanSup.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1493]] /* fanSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1455]] /* fanSup.p_start PARAM */);
  threadData->lastEquationSolved = 10506;
}

/*
equation index: 10527
type: SIMPLE_ASSIGN
fanSup.stageInputs[1] = fanSup.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* fanSup.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1454]] /* fanSup.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 10527;
}

/*
equation index: 10531
type: SIMPLE_ASSIGN
fanSup.per.speeds_rpm[1] = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanSup.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10531;
}

/*
equation index: 10532
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed_rpm = fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1457]] /* fanSup.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 10532;
}

/*
equation index: 10533
type: SIMPLE_ASSIGN
fanSup.per.speeds[1] = fanSup.per.speeds_rpm[1] / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanSup.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanSup.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 10533;
}

/*
equation index: 10534
type: SIMPLE_ASSIGN
fanSup.per.constantSpeed = fanSup.per.constantSpeed_rpm / fanSup.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_10534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1456]] /* fanSup.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1457]] /* fanSup.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanSup.per.speed_rpm_nominal PARAM */),"fanSup.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 10534;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_1866(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1865(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1864(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1863(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1862(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1861(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1860(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1859(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1858(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1857(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1856(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1855(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1854(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1853(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1852(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1851(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1850(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1849(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1848(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1847(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1846(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1845(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1844(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1843(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1842(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1841(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1840(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1839(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1838(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1837(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1836(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1835(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1834(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1833(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1832(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1831(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1830(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1829(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1828(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1827(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1826(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1825(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1824(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1823(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1822(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1821(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1820(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1819(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1818(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1817(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1816(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1815(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1814(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1813(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1812(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1811(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1810(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1809(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1808(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1807(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1806(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1805(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1804(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1803(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1802(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1801(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1800(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1799(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1798(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1797(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1796(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1795(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1794(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1793(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1792(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1791(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1790(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1789(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1788(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1787(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1786(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1785(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1784(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1783(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1782(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1781(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1780(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1779(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1778(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1777(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1776(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1775(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1774(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1773(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1772(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1771(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1770(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1769(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1768(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1767(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1766(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1765(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1764(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1763(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1762(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1761(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1760(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1759(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1758(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1757(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1756(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1755(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1754(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1753(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1752(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1751(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1750(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1749(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1748(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1747(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1746(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1745(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1744(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1743(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1742(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1741(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1740(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1739(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1738(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1737(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1736(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1735(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1734(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1733(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1732(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1731(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1730(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1729(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1728(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1727(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1726(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1725(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1724(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1723(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1722(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1721(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1720(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1719(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1718(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1717(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1716(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1715(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1714(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1713(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1712(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1711(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1710(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1709(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1708(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1707(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1706(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1705(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1704(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1703(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1702(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1701(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1700(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1699(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1698(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1697(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1696(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1695(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1694(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1693(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1692(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1691(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_322(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_321(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_320(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_319(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_318(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_317(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_316(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_315(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_314(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_313(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_312(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_310(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1690(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_309(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_308(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_307(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_306(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_305(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_304(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_303(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_302(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_301(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_300(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_299(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1689(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1688(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_295(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_291(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_287(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_283(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_279(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_275(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_274(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_273(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_272(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_271(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_266(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1687(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1686(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_265(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1685(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_264(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1684(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1683(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_263(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_262(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1682(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1681(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_261(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_267(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_268(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_269(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_270(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1680(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1679(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1678(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1677(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1676(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1675(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1674(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1673(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1672(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1671(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1670(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1669(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1668(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1667(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1666(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1665(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1664(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1663(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1662(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1661(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1660(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1659(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1658(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1657(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1656(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1655(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1654(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1653(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1652(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1651(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1650(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1649(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1648(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1647(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_1646(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_311(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_207(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_206(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_205(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_204(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_203(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_202(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_201(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_200(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_199(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_198(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_197(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_196(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_195(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_194(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_193(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_192(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_191(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_190(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_189(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_188(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_187(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_186(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_185(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_184(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_183(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_182(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_181(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_9476,
    outputs_WaterCooledChillerExample7_eqFunction_9477,
    outputs_WaterCooledChillerExample7_eqFunction_9478,
    outputs_WaterCooledChillerExample7_eqFunction_9492,
    outputs_WaterCooledChillerExample7_eqFunction_9498,
    outputs_WaterCooledChillerExample7_eqFunction_9499,
    outputs_WaterCooledChillerExample7_eqFunction_9502,
    outputs_WaterCooledChillerExample7_eqFunction_9503,
    outputs_WaterCooledChillerExample7_eqFunction_9506,
    outputs_WaterCooledChillerExample7_eqFunction_9507,
    outputs_WaterCooledChillerExample7_eqFunction_9508,
    outputs_WaterCooledChillerExample7_eqFunction_9509,
    outputs_WaterCooledChillerExample7_eqFunction_9513,
    outputs_WaterCooledChillerExample7_eqFunction_9514,
    outputs_WaterCooledChillerExample7_eqFunction_9515,
    outputs_WaterCooledChillerExample7_eqFunction_9516,
    outputs_WaterCooledChillerExample7_eqFunction_9517,
    outputs_WaterCooledChillerExample7_eqFunction_9518,
    outputs_WaterCooledChillerExample7_eqFunction_9523,
    outputs_WaterCooledChillerExample7_eqFunction_9526,
    outputs_WaterCooledChillerExample7_eqFunction_9527,
    outputs_WaterCooledChillerExample7_eqFunction_9540,
    outputs_WaterCooledChillerExample7_eqFunction_9549,
    outputs_WaterCooledChillerExample7_eqFunction_9550,
    outputs_WaterCooledChillerExample7_eqFunction_9551,
    outputs_WaterCooledChillerExample7_eqFunction_9563,
    outputs_WaterCooledChillerExample7_eqFunction_9567,
    outputs_WaterCooledChillerExample7_eqFunction_9568,
    outputs_WaterCooledChillerExample7_eqFunction_9569,
    outputs_WaterCooledChillerExample7_eqFunction_9570,
    outputs_WaterCooledChillerExample7_eqFunction_9587,
    outputs_WaterCooledChillerExample7_eqFunction_9588,
    outputs_WaterCooledChillerExample7_eqFunction_9589,
    outputs_WaterCooledChillerExample7_eqFunction_9590,
    outputs_WaterCooledChillerExample7_eqFunction_9591,
    outputs_WaterCooledChillerExample7_eqFunction_9592,
    outputs_WaterCooledChillerExample7_eqFunction_9593,
    outputs_WaterCooledChillerExample7_eqFunction_9596,
    outputs_WaterCooledChillerExample7_eqFunction_9597,
    outputs_WaterCooledChillerExample7_eqFunction_9598,
    outputs_WaterCooledChillerExample7_eqFunction_9599,
    outputs_WaterCooledChillerExample7_eqFunction_9603,
    outputs_WaterCooledChillerExample7_eqFunction_9609,
    outputs_WaterCooledChillerExample7_eqFunction_9617,
    outputs_WaterCooledChillerExample7_eqFunction_9640,
    outputs_WaterCooledChillerExample7_eqFunction_9674,
    outputs_WaterCooledChillerExample7_eqFunction_9675,
    outputs_WaterCooledChillerExample7_eqFunction_9676,
    outputs_WaterCooledChillerExample7_eqFunction_9708,
    outputs_WaterCooledChillerExample7_eqFunction_9709,
    outputs_WaterCooledChillerExample7_eqFunction_9711,
    outputs_WaterCooledChillerExample7_eqFunction_9712,
    outputs_WaterCooledChillerExample7_eqFunction_9716,
    outputs_WaterCooledChillerExample7_eqFunction_9717,
    outputs_WaterCooledChillerExample7_eqFunction_9718,
    outputs_WaterCooledChillerExample7_eqFunction_9720,
    outputs_WaterCooledChillerExample7_eqFunction_9721,
    outputs_WaterCooledChillerExample7_eqFunction_9722,
    outputs_WaterCooledChillerExample7_eqFunction_9727,
    outputs_WaterCooledChillerExample7_eqFunction_9730,
    outputs_WaterCooledChillerExample7_eqFunction_9731,
    outputs_WaterCooledChillerExample7_eqFunction_9732,
    outputs_WaterCooledChillerExample7_eqFunction_9778,
    outputs_WaterCooledChillerExample7_eqFunction_9779,
    outputs_WaterCooledChillerExample7_eqFunction_9780,
    outputs_WaterCooledChillerExample7_eqFunction_9781,
    outputs_WaterCooledChillerExample7_eqFunction_9785,
    outputs_WaterCooledChillerExample7_eqFunction_9791,
    outputs_WaterCooledChillerExample7_eqFunction_9799,
    outputs_WaterCooledChillerExample7_eqFunction_9822,
    outputs_WaterCooledChillerExample7_eqFunction_9856,
    outputs_WaterCooledChillerExample7_eqFunction_9857,
    outputs_WaterCooledChillerExample7_eqFunction_9858,
    outputs_WaterCooledChillerExample7_eqFunction_9890,
    outputs_WaterCooledChillerExample7_eqFunction_9891,
    outputs_WaterCooledChillerExample7_eqFunction_9893,
    outputs_WaterCooledChillerExample7_eqFunction_9894,
    outputs_WaterCooledChillerExample7_eqFunction_9898,
    outputs_WaterCooledChillerExample7_eqFunction_9899,
    outputs_WaterCooledChillerExample7_eqFunction_9900,
    outputs_WaterCooledChillerExample7_eqFunction_9902,
    outputs_WaterCooledChillerExample7_eqFunction_9903,
    outputs_WaterCooledChillerExample7_eqFunction_9904,
    outputs_WaterCooledChillerExample7_eqFunction_9909,
    outputs_WaterCooledChillerExample7_eqFunction_9912,
    outputs_WaterCooledChillerExample7_eqFunction_9913,
    outputs_WaterCooledChillerExample7_eqFunction_9914,
    outputs_WaterCooledChillerExample7_eqFunction_9960,
    outputs_WaterCooledChillerExample7_eqFunction_9961,
    outputs_WaterCooledChillerExample7_eqFunction_9962,
    outputs_WaterCooledChillerExample7_eqFunction_9963,
    outputs_WaterCooledChillerExample7_eqFunction_9967,
    outputs_WaterCooledChillerExample7_eqFunction_9973,
    outputs_WaterCooledChillerExample7_eqFunction_9981,
    outputs_WaterCooledChillerExample7_eqFunction_10004,
    outputs_WaterCooledChillerExample7_eqFunction_10038,
    outputs_WaterCooledChillerExample7_eqFunction_10039,
    outputs_WaterCooledChillerExample7_eqFunction_10040,
    outputs_WaterCooledChillerExample7_eqFunction_10072,
    outputs_WaterCooledChillerExample7_eqFunction_10073,
    outputs_WaterCooledChillerExample7_eqFunction_10075,
    outputs_WaterCooledChillerExample7_eqFunction_10076,
    outputs_WaterCooledChillerExample7_eqFunction_10080,
    outputs_WaterCooledChillerExample7_eqFunction_10081,
    outputs_WaterCooledChillerExample7_eqFunction_10082,
    outputs_WaterCooledChillerExample7_eqFunction_10084,
    outputs_WaterCooledChillerExample7_eqFunction_10085,
    outputs_WaterCooledChillerExample7_eqFunction_10086,
    outputs_WaterCooledChillerExample7_eqFunction_10091,
    outputs_WaterCooledChillerExample7_eqFunction_10094,
    outputs_WaterCooledChillerExample7_eqFunction_10095,
    outputs_WaterCooledChillerExample7_eqFunction_10096,
    outputs_WaterCooledChillerExample7_eqFunction_10142,
    outputs_WaterCooledChillerExample7_eqFunction_10143,
    outputs_WaterCooledChillerExample7_eqFunction_10144,
    outputs_WaterCooledChillerExample7_eqFunction_10145,
    outputs_WaterCooledChillerExample7_eqFunction_10149,
    outputs_WaterCooledChillerExample7_eqFunction_10155,
    outputs_WaterCooledChillerExample7_eqFunction_10163,
    outputs_WaterCooledChillerExample7_eqFunction_10186,
    outputs_WaterCooledChillerExample7_eqFunction_10210,
    outputs_WaterCooledChillerExample7_eqFunction_10211,
    outputs_WaterCooledChillerExample7_eqFunction_10213,
    outputs_WaterCooledChillerExample7_eqFunction_10214,
    outputs_WaterCooledChillerExample7_eqFunction_10215,
    outputs_WaterCooledChillerExample7_eqFunction_10224,
    outputs_WaterCooledChillerExample7_eqFunction_10225,
    outputs_WaterCooledChillerExample7_eqFunction_10226,
    outputs_WaterCooledChillerExample7_eqFunction_10229,
    outputs_WaterCooledChillerExample7_eqFunction_10230,
    outputs_WaterCooledChillerExample7_eqFunction_10231,
    outputs_WaterCooledChillerExample7_eqFunction_10240,
    outputs_WaterCooledChillerExample7_eqFunction_10241,
    outputs_WaterCooledChillerExample7_eqFunction_10258,
    outputs_WaterCooledChillerExample7_eqFunction_10259,
    outputs_WaterCooledChillerExample7_eqFunction_10261,
    outputs_WaterCooledChillerExample7_eqFunction_10262,
    outputs_WaterCooledChillerExample7_eqFunction_10266,
    outputs_WaterCooledChillerExample7_eqFunction_10267,
    outputs_WaterCooledChillerExample7_eqFunction_10268,
    outputs_WaterCooledChillerExample7_eqFunction_10270,
    outputs_WaterCooledChillerExample7_eqFunction_10271,
    outputs_WaterCooledChillerExample7_eqFunction_10272,
    outputs_WaterCooledChillerExample7_eqFunction_10277,
    outputs_WaterCooledChillerExample7_eqFunction_10280,
    outputs_WaterCooledChillerExample7_eqFunction_10281,
    outputs_WaterCooledChillerExample7_eqFunction_10282,
    outputs_WaterCooledChillerExample7_eqFunction_10331,
    outputs_WaterCooledChillerExample7_eqFunction_10347,
    outputs_WaterCooledChillerExample7_eqFunction_10364,
    outputs_WaterCooledChillerExample7_eqFunction_10365,
    outputs_WaterCooledChillerExample7_eqFunction_10366,
    outputs_WaterCooledChillerExample7_eqFunction_10367,
    outputs_WaterCooledChillerExample7_eqFunction_10431,
    outputs_WaterCooledChillerExample7_eqFunction_10432,
    outputs_WaterCooledChillerExample7_eqFunction_10436,
    outputs_WaterCooledChillerExample7_eqFunction_10437,
    outputs_WaterCooledChillerExample7_eqFunction_10438,
    outputs_WaterCooledChillerExample7_eqFunction_10439,
    outputs_WaterCooledChillerExample7_eqFunction_10440,
    outputs_WaterCooledChillerExample7_eqFunction_10441,
    outputs_WaterCooledChillerExample7_eqFunction_10442,
    outputs_WaterCooledChillerExample7_eqFunction_10455,
    outputs_WaterCooledChillerExample7_eqFunction_10456,
    outputs_WaterCooledChillerExample7_eqFunction_10459,
    outputs_WaterCooledChillerExample7_eqFunction_10460,
    outputs_WaterCooledChillerExample7_eqFunction_10478,
    outputs_WaterCooledChillerExample7_eqFunction_10479,
    outputs_WaterCooledChillerExample7_eqFunction_10480,
    outputs_WaterCooledChillerExample7_eqFunction_10481,
    outputs_WaterCooledChillerExample7_eqFunction_10482,
    outputs_WaterCooledChillerExample7_eqFunction_10483,
    outputs_WaterCooledChillerExample7_eqFunction_10484,
    outputs_WaterCooledChillerExample7_eqFunction_10485,
    outputs_WaterCooledChillerExample7_eqFunction_10486,
    outputs_WaterCooledChillerExample7_eqFunction_10487,
    outputs_WaterCooledChillerExample7_eqFunction_10497,
    outputs_WaterCooledChillerExample7_eqFunction_10503,
    outputs_WaterCooledChillerExample7_eqFunction_10504,
    outputs_WaterCooledChillerExample7_eqFunction_10505,
    outputs_WaterCooledChillerExample7_eqFunction_10506,
    outputs_WaterCooledChillerExample7_eqFunction_10527,
    outputs_WaterCooledChillerExample7_eqFunction_10531,
    outputs_WaterCooledChillerExample7_eqFunction_10532,
    outputs_WaterCooledChillerExample7_eqFunction_10533,
    outputs_WaterCooledChillerExample7_eqFunction_10534,
    outputs_WaterCooledChillerExample7_eqFunction_1866,
    outputs_WaterCooledChillerExample7_eqFunction_1865,
    outputs_WaterCooledChillerExample7_eqFunction_1864,
    outputs_WaterCooledChillerExample7_eqFunction_1863,
    outputs_WaterCooledChillerExample7_eqFunction_1862,
    outputs_WaterCooledChillerExample7_eqFunction_1861,
    outputs_WaterCooledChillerExample7_eqFunction_1860,
    outputs_WaterCooledChillerExample7_eqFunction_1859,
    outputs_WaterCooledChillerExample7_eqFunction_1858,
    outputs_WaterCooledChillerExample7_eqFunction_1857,
    outputs_WaterCooledChillerExample7_eqFunction_1856,
    outputs_WaterCooledChillerExample7_eqFunction_1855,
    outputs_WaterCooledChillerExample7_eqFunction_1854,
    outputs_WaterCooledChillerExample7_eqFunction_1853,
    outputs_WaterCooledChillerExample7_eqFunction_1852,
    outputs_WaterCooledChillerExample7_eqFunction_1851,
    outputs_WaterCooledChillerExample7_eqFunction_1850,
    outputs_WaterCooledChillerExample7_eqFunction_1849,
    outputs_WaterCooledChillerExample7_eqFunction_1848,
    outputs_WaterCooledChillerExample7_eqFunction_1847,
    outputs_WaterCooledChillerExample7_eqFunction_1846,
    outputs_WaterCooledChillerExample7_eqFunction_1845,
    outputs_WaterCooledChillerExample7_eqFunction_1844,
    outputs_WaterCooledChillerExample7_eqFunction_1843,
    outputs_WaterCooledChillerExample7_eqFunction_1842,
    outputs_WaterCooledChillerExample7_eqFunction_1841,
    outputs_WaterCooledChillerExample7_eqFunction_1840,
    outputs_WaterCooledChillerExample7_eqFunction_1839,
    outputs_WaterCooledChillerExample7_eqFunction_1838,
    outputs_WaterCooledChillerExample7_eqFunction_1837,
    outputs_WaterCooledChillerExample7_eqFunction_1836,
    outputs_WaterCooledChillerExample7_eqFunction_1835,
    outputs_WaterCooledChillerExample7_eqFunction_1834,
    outputs_WaterCooledChillerExample7_eqFunction_1833,
    outputs_WaterCooledChillerExample7_eqFunction_1832,
    outputs_WaterCooledChillerExample7_eqFunction_1831,
    outputs_WaterCooledChillerExample7_eqFunction_1830,
    outputs_WaterCooledChillerExample7_eqFunction_1829,
    outputs_WaterCooledChillerExample7_eqFunction_1828,
    outputs_WaterCooledChillerExample7_eqFunction_1827,
    outputs_WaterCooledChillerExample7_eqFunction_1826,
    outputs_WaterCooledChillerExample7_eqFunction_1825,
    outputs_WaterCooledChillerExample7_eqFunction_1824,
    outputs_WaterCooledChillerExample7_eqFunction_1823,
    outputs_WaterCooledChillerExample7_eqFunction_1822,
    outputs_WaterCooledChillerExample7_eqFunction_1821,
    outputs_WaterCooledChillerExample7_eqFunction_1820,
    outputs_WaterCooledChillerExample7_eqFunction_1819,
    outputs_WaterCooledChillerExample7_eqFunction_1818,
    outputs_WaterCooledChillerExample7_eqFunction_1817,
    outputs_WaterCooledChillerExample7_eqFunction_1816,
    outputs_WaterCooledChillerExample7_eqFunction_1815,
    outputs_WaterCooledChillerExample7_eqFunction_1814,
    outputs_WaterCooledChillerExample7_eqFunction_1813,
    outputs_WaterCooledChillerExample7_eqFunction_1812,
    outputs_WaterCooledChillerExample7_eqFunction_1811,
    outputs_WaterCooledChillerExample7_eqFunction_1810,
    outputs_WaterCooledChillerExample7_eqFunction_1809,
    outputs_WaterCooledChillerExample7_eqFunction_1808,
    outputs_WaterCooledChillerExample7_eqFunction_1807,
    outputs_WaterCooledChillerExample7_eqFunction_1806,
    outputs_WaterCooledChillerExample7_eqFunction_1805,
    outputs_WaterCooledChillerExample7_eqFunction_1804,
    outputs_WaterCooledChillerExample7_eqFunction_1803,
    outputs_WaterCooledChillerExample7_eqFunction_1802,
    outputs_WaterCooledChillerExample7_eqFunction_1801,
    outputs_WaterCooledChillerExample7_eqFunction_1800,
    outputs_WaterCooledChillerExample7_eqFunction_1799,
    outputs_WaterCooledChillerExample7_eqFunction_1798,
    outputs_WaterCooledChillerExample7_eqFunction_1797,
    outputs_WaterCooledChillerExample7_eqFunction_1796,
    outputs_WaterCooledChillerExample7_eqFunction_1795,
    outputs_WaterCooledChillerExample7_eqFunction_1794,
    outputs_WaterCooledChillerExample7_eqFunction_1793,
    outputs_WaterCooledChillerExample7_eqFunction_1792,
    outputs_WaterCooledChillerExample7_eqFunction_1791,
    outputs_WaterCooledChillerExample7_eqFunction_1790,
    outputs_WaterCooledChillerExample7_eqFunction_1789,
    outputs_WaterCooledChillerExample7_eqFunction_1788,
    outputs_WaterCooledChillerExample7_eqFunction_1787,
    outputs_WaterCooledChillerExample7_eqFunction_1786,
    outputs_WaterCooledChillerExample7_eqFunction_1785,
    outputs_WaterCooledChillerExample7_eqFunction_1784,
    outputs_WaterCooledChillerExample7_eqFunction_1783,
    outputs_WaterCooledChillerExample7_eqFunction_1782,
    outputs_WaterCooledChillerExample7_eqFunction_1781,
    outputs_WaterCooledChillerExample7_eqFunction_1780,
    outputs_WaterCooledChillerExample7_eqFunction_1779,
    outputs_WaterCooledChillerExample7_eqFunction_1778,
    outputs_WaterCooledChillerExample7_eqFunction_1777,
    outputs_WaterCooledChillerExample7_eqFunction_1776,
    outputs_WaterCooledChillerExample7_eqFunction_1775,
    outputs_WaterCooledChillerExample7_eqFunction_1774,
    outputs_WaterCooledChillerExample7_eqFunction_1773,
    outputs_WaterCooledChillerExample7_eqFunction_1772,
    outputs_WaterCooledChillerExample7_eqFunction_1771,
    outputs_WaterCooledChillerExample7_eqFunction_1770,
    outputs_WaterCooledChillerExample7_eqFunction_1769,
    outputs_WaterCooledChillerExample7_eqFunction_1768,
    outputs_WaterCooledChillerExample7_eqFunction_1767,
    outputs_WaterCooledChillerExample7_eqFunction_1766,
    outputs_WaterCooledChillerExample7_eqFunction_1765,
    outputs_WaterCooledChillerExample7_eqFunction_1764,
    outputs_WaterCooledChillerExample7_eqFunction_1763,
    outputs_WaterCooledChillerExample7_eqFunction_1762,
    outputs_WaterCooledChillerExample7_eqFunction_1761,
    outputs_WaterCooledChillerExample7_eqFunction_1760,
    outputs_WaterCooledChillerExample7_eqFunction_1759,
    outputs_WaterCooledChillerExample7_eqFunction_1758,
    outputs_WaterCooledChillerExample7_eqFunction_1757,
    outputs_WaterCooledChillerExample7_eqFunction_1756,
    outputs_WaterCooledChillerExample7_eqFunction_1755,
    outputs_WaterCooledChillerExample7_eqFunction_1754,
    outputs_WaterCooledChillerExample7_eqFunction_1753,
    outputs_WaterCooledChillerExample7_eqFunction_1752,
    outputs_WaterCooledChillerExample7_eqFunction_1751,
    outputs_WaterCooledChillerExample7_eqFunction_1750,
    outputs_WaterCooledChillerExample7_eqFunction_1749,
    outputs_WaterCooledChillerExample7_eqFunction_1748,
    outputs_WaterCooledChillerExample7_eqFunction_1747,
    outputs_WaterCooledChillerExample7_eqFunction_1746,
    outputs_WaterCooledChillerExample7_eqFunction_1745,
    outputs_WaterCooledChillerExample7_eqFunction_1744,
    outputs_WaterCooledChillerExample7_eqFunction_1743,
    outputs_WaterCooledChillerExample7_eqFunction_1742,
    outputs_WaterCooledChillerExample7_eqFunction_1741,
    outputs_WaterCooledChillerExample7_eqFunction_1740,
    outputs_WaterCooledChillerExample7_eqFunction_1739,
    outputs_WaterCooledChillerExample7_eqFunction_1738,
    outputs_WaterCooledChillerExample7_eqFunction_1737,
    outputs_WaterCooledChillerExample7_eqFunction_1736,
    outputs_WaterCooledChillerExample7_eqFunction_1735,
    outputs_WaterCooledChillerExample7_eqFunction_1734,
    outputs_WaterCooledChillerExample7_eqFunction_1733,
    outputs_WaterCooledChillerExample7_eqFunction_1732,
    outputs_WaterCooledChillerExample7_eqFunction_1731,
    outputs_WaterCooledChillerExample7_eqFunction_1730,
    outputs_WaterCooledChillerExample7_eqFunction_1729,
    outputs_WaterCooledChillerExample7_eqFunction_1728,
    outputs_WaterCooledChillerExample7_eqFunction_1727,
    outputs_WaterCooledChillerExample7_eqFunction_1726,
    outputs_WaterCooledChillerExample7_eqFunction_1725,
    outputs_WaterCooledChillerExample7_eqFunction_1724,
    outputs_WaterCooledChillerExample7_eqFunction_1723,
    outputs_WaterCooledChillerExample7_eqFunction_1722,
    outputs_WaterCooledChillerExample7_eqFunction_1721,
    outputs_WaterCooledChillerExample7_eqFunction_1720,
    outputs_WaterCooledChillerExample7_eqFunction_1719,
    outputs_WaterCooledChillerExample7_eqFunction_1718,
    outputs_WaterCooledChillerExample7_eqFunction_1717,
    outputs_WaterCooledChillerExample7_eqFunction_1716,
    outputs_WaterCooledChillerExample7_eqFunction_1715,
    outputs_WaterCooledChillerExample7_eqFunction_1714,
    outputs_WaterCooledChillerExample7_eqFunction_1713,
    outputs_WaterCooledChillerExample7_eqFunction_1712,
    outputs_WaterCooledChillerExample7_eqFunction_1711,
    outputs_WaterCooledChillerExample7_eqFunction_1710,
    outputs_WaterCooledChillerExample7_eqFunction_1709,
    outputs_WaterCooledChillerExample7_eqFunction_1708,
    outputs_WaterCooledChillerExample7_eqFunction_1707,
    outputs_WaterCooledChillerExample7_eqFunction_1706,
    outputs_WaterCooledChillerExample7_eqFunction_1705,
    outputs_WaterCooledChillerExample7_eqFunction_1704,
    outputs_WaterCooledChillerExample7_eqFunction_1703,
    outputs_WaterCooledChillerExample7_eqFunction_1702,
    outputs_WaterCooledChillerExample7_eqFunction_1701,
    outputs_WaterCooledChillerExample7_eqFunction_1700,
    outputs_WaterCooledChillerExample7_eqFunction_1699,
    outputs_WaterCooledChillerExample7_eqFunction_1698,
    outputs_WaterCooledChillerExample7_eqFunction_1697,
    outputs_WaterCooledChillerExample7_eqFunction_1696,
    outputs_WaterCooledChillerExample7_eqFunction_1695,
    outputs_WaterCooledChillerExample7_eqFunction_1694,
    outputs_WaterCooledChillerExample7_eqFunction_1693,
    outputs_WaterCooledChillerExample7_eqFunction_1692,
    outputs_WaterCooledChillerExample7_eqFunction_1691,
    outputs_WaterCooledChillerExample7_eqFunction_322,
    outputs_WaterCooledChillerExample7_eqFunction_321,
    outputs_WaterCooledChillerExample7_eqFunction_320,
    outputs_WaterCooledChillerExample7_eqFunction_319,
    outputs_WaterCooledChillerExample7_eqFunction_318,
    outputs_WaterCooledChillerExample7_eqFunction_317,
    outputs_WaterCooledChillerExample7_eqFunction_316,
    outputs_WaterCooledChillerExample7_eqFunction_315,
    outputs_WaterCooledChillerExample7_eqFunction_314,
    outputs_WaterCooledChillerExample7_eqFunction_313,
    outputs_WaterCooledChillerExample7_eqFunction_312,
    outputs_WaterCooledChillerExample7_eqFunction_310,
    outputs_WaterCooledChillerExample7_eqFunction_1690,
    outputs_WaterCooledChillerExample7_eqFunction_309,
    outputs_WaterCooledChillerExample7_eqFunction_308,
    outputs_WaterCooledChillerExample7_eqFunction_307,
    outputs_WaterCooledChillerExample7_eqFunction_306,
    outputs_WaterCooledChillerExample7_eqFunction_305,
    outputs_WaterCooledChillerExample7_eqFunction_304,
    outputs_WaterCooledChillerExample7_eqFunction_303,
    outputs_WaterCooledChillerExample7_eqFunction_302,
    outputs_WaterCooledChillerExample7_eqFunction_301,
    outputs_WaterCooledChillerExample7_eqFunction_300,
    outputs_WaterCooledChillerExample7_eqFunction_299,
    outputs_WaterCooledChillerExample7_eqFunction_1689,
    outputs_WaterCooledChillerExample7_eqFunction_1688,
    outputs_WaterCooledChillerExample7_eqFunction_295,
    outputs_WaterCooledChillerExample7_eqFunction_291,
    outputs_WaterCooledChillerExample7_eqFunction_287,
    outputs_WaterCooledChillerExample7_eqFunction_283,
    outputs_WaterCooledChillerExample7_eqFunction_279,
    outputs_WaterCooledChillerExample7_eqFunction_275,
    outputs_WaterCooledChillerExample7_eqFunction_274,
    outputs_WaterCooledChillerExample7_eqFunction_273,
    outputs_WaterCooledChillerExample7_eqFunction_272,
    outputs_WaterCooledChillerExample7_eqFunction_271,
    outputs_WaterCooledChillerExample7_eqFunction_266,
    outputs_WaterCooledChillerExample7_eqFunction_1687,
    outputs_WaterCooledChillerExample7_eqFunction_1686,
    outputs_WaterCooledChillerExample7_eqFunction_265,
    outputs_WaterCooledChillerExample7_eqFunction_1685,
    outputs_WaterCooledChillerExample7_eqFunction_264,
    outputs_WaterCooledChillerExample7_eqFunction_1684,
    outputs_WaterCooledChillerExample7_eqFunction_1683,
    outputs_WaterCooledChillerExample7_eqFunction_263,
    outputs_WaterCooledChillerExample7_eqFunction_262,
    outputs_WaterCooledChillerExample7_eqFunction_1682,
    outputs_WaterCooledChillerExample7_eqFunction_1681,
    outputs_WaterCooledChillerExample7_eqFunction_261,
    outputs_WaterCooledChillerExample7_eqFunction_267,
    outputs_WaterCooledChillerExample7_eqFunction_268,
    outputs_WaterCooledChillerExample7_eqFunction_269,
    outputs_WaterCooledChillerExample7_eqFunction_270,
    outputs_WaterCooledChillerExample7_eqFunction_1680,
    outputs_WaterCooledChillerExample7_eqFunction_1679,
    outputs_WaterCooledChillerExample7_eqFunction_1678,
    outputs_WaterCooledChillerExample7_eqFunction_1677,
    outputs_WaterCooledChillerExample7_eqFunction_1676,
    outputs_WaterCooledChillerExample7_eqFunction_1675,
    outputs_WaterCooledChillerExample7_eqFunction_1674,
    outputs_WaterCooledChillerExample7_eqFunction_1673,
    outputs_WaterCooledChillerExample7_eqFunction_1672,
    outputs_WaterCooledChillerExample7_eqFunction_1671,
    outputs_WaterCooledChillerExample7_eqFunction_1670,
    outputs_WaterCooledChillerExample7_eqFunction_1669,
    outputs_WaterCooledChillerExample7_eqFunction_1668,
    outputs_WaterCooledChillerExample7_eqFunction_1667,
    outputs_WaterCooledChillerExample7_eqFunction_1666,
    outputs_WaterCooledChillerExample7_eqFunction_1665,
    outputs_WaterCooledChillerExample7_eqFunction_1664,
    outputs_WaterCooledChillerExample7_eqFunction_1663,
    outputs_WaterCooledChillerExample7_eqFunction_1662,
    outputs_WaterCooledChillerExample7_eqFunction_1661,
    outputs_WaterCooledChillerExample7_eqFunction_1660,
    outputs_WaterCooledChillerExample7_eqFunction_1659,
    outputs_WaterCooledChillerExample7_eqFunction_1658,
    outputs_WaterCooledChillerExample7_eqFunction_1657,
    outputs_WaterCooledChillerExample7_eqFunction_1656,
    outputs_WaterCooledChillerExample7_eqFunction_1655,
    outputs_WaterCooledChillerExample7_eqFunction_1654,
    outputs_WaterCooledChillerExample7_eqFunction_1653,
    outputs_WaterCooledChillerExample7_eqFunction_1652,
    outputs_WaterCooledChillerExample7_eqFunction_1651,
    outputs_WaterCooledChillerExample7_eqFunction_1650,
    outputs_WaterCooledChillerExample7_eqFunction_1649,
    outputs_WaterCooledChillerExample7_eqFunction_1648,
    outputs_WaterCooledChillerExample7_eqFunction_1647,
    outputs_WaterCooledChillerExample7_eqFunction_1646,
    outputs_WaterCooledChillerExample7_eqFunction_311,
    outputs_WaterCooledChillerExample7_eqFunction_207,
    outputs_WaterCooledChillerExample7_eqFunction_206,
    outputs_WaterCooledChillerExample7_eqFunction_205,
    outputs_WaterCooledChillerExample7_eqFunction_204,
    outputs_WaterCooledChillerExample7_eqFunction_203,
    outputs_WaterCooledChillerExample7_eqFunction_202,
    outputs_WaterCooledChillerExample7_eqFunction_201,
    outputs_WaterCooledChillerExample7_eqFunction_200,
    outputs_WaterCooledChillerExample7_eqFunction_199,
    outputs_WaterCooledChillerExample7_eqFunction_198,
    outputs_WaterCooledChillerExample7_eqFunction_197,
    outputs_WaterCooledChillerExample7_eqFunction_196,
    outputs_WaterCooledChillerExample7_eqFunction_195,
    outputs_WaterCooledChillerExample7_eqFunction_194,
    outputs_WaterCooledChillerExample7_eqFunction_193,
    outputs_WaterCooledChillerExample7_eqFunction_192,
    outputs_WaterCooledChillerExample7_eqFunction_191,
    outputs_WaterCooledChillerExample7_eqFunction_190,
    outputs_WaterCooledChillerExample7_eqFunction_189,
    outputs_WaterCooledChillerExample7_eqFunction_188,
    outputs_WaterCooledChillerExample7_eqFunction_187,
    outputs_WaterCooledChillerExample7_eqFunction_186,
    outputs_WaterCooledChillerExample7_eqFunction_185,
    outputs_WaterCooledChillerExample7_eqFunction_184,
    outputs_WaterCooledChillerExample7_eqFunction_183,
    outputs_WaterCooledChillerExample7_eqFunction_182,
    outputs_WaterCooledChillerExample7_eqFunction_181
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif