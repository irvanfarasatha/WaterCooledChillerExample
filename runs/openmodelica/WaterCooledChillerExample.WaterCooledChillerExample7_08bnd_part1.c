#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 7335
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal = junCHWRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* junCHWRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* junCHWRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 7335;
}

/*
equation index: 7336
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal_pos = abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1574]] /* junCHWRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* junCHWRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7336;
}

/*
equation index: 7339
type: SIMPLE_ASSIGN
junCHWRet.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.res3.Medium.dynamicViscosity(junCHWRet.res3.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7339};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res3_Medium_ThermodynamicState tmp55;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp55, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1578]] /* junCHWRet.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1577]] /* junCHWRet.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1571]] /* junCHWRet.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res3_Medium_dynamicViscosity(threadData, tmp55);
  threadData->lastEquationSolved = 7339;
}

/*
equation index: 7348
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_small = 1e-4 * abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1575]] /* junCHWRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* junCHWRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7348;
}

/*
equation index: 7355
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal = junCHWRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* junCHWRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* junCHWRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 7355;
}

/*
equation index: 7356
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal_pos = abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1560]] /* junCHWRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* junCHWRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7356;
}

/*
equation index: 7359
type: SIMPLE_ASSIGN
junCHWRet.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.res2.Medium.dynamicViscosity(junCHWRet.res2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7359};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res2_Medium_ThermodynamicState tmp56;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp56, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1564]] /* junCHWRet.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1563]] /* junCHWRet.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1557]] /* junCHWRet.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res2_Medium_dynamicViscosity(threadData, tmp56);
  threadData->lastEquationSolved = 7359;
}

/*
equation index: 7368
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_small = 1e-4 * abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1561]] /* junCHWRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* junCHWRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7368;
}

/*
equation index: 7375
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal = junCHWRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* junCHWRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* junCHWRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 7375;
}

/*
equation index: 7376
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal_pos = abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1546]] /* junCHWRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* junCHWRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7376;
}

/*
equation index: 7379
type: SIMPLE_ASSIGN
junCHWRet.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.res1.Medium.dynamicViscosity(junCHWRet.res1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7379};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res1_Medium_ThermodynamicState tmp57;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp57, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1550]] /* junCHWRet.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1549]] /* junCHWRet.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1543]] /* junCHWRet.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res1_Medium_dynamicViscosity(threadData, tmp57);
  threadData->lastEquationSolved = 7379;
}

/*
equation index: 7388
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_small = 1e-4 * abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* junCHWRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* junCHWRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7388;
}

/*
equation index: 7390
type: SIMPLE_ASSIGN
junCHWRet.m_flow_small = 1e-4 * junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1535]] /* junCHWRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* junCHWRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7390;
}

/*
equation index: 7408
type: SIMPLE_ASSIGN
junCHWSup.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup.m_flow_nominal[1]) + abs(junCHWSup.m_flow_nominal[2]) + abs(junCHWSup.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWSup.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWSup.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWSup.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWSup.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 7408;
}

/*
equation index: 7409
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_nominal = junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWSup.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWSup.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7409;
}

/*
equation index: 7410
type: SIMPLE_ASSIGN
junCHWSup.vol.tau = junCHWSup.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* junCHWSup.tau PARAM */);
  threadData->lastEquationSolved = 7410;
}

/*
equation index: 7411
type: SIMPLE_ASSIGN
junCHWSup.vol.V_nominal = 0.0010044335697769957 * junCHWSup.vol.m_flow_nominal * junCHWSup.vol.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWSup.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWSup.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWSup.vol.tau PARAM */)));
  threadData->lastEquationSolved = 7411;
}

/*
equation index: 7414
type: SIMPLE_ASSIGN
junCHWSup.vol.T_start = junCHWSup.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7414};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWSup.T_start PARAM */);
  threadData->lastEquationSolved = 7414;
}

/*
equation index: 7415
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.T = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7415;
}

/*
equation index: 7416
type: SIMPLE_ASSIGN
junCHWSup.vol.p_start = junCHWSup.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWSup.p_start PARAM */);
  threadData->lastEquationSolved = 7416;
}

/*
equation index: 7417
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.p = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7417;
}

/*
equation index: 7421
type: SIMPLE_ASSIGN
junCHWSup.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.Medium.density(junCHWSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7421};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_Medium_ThermodynamicState tmp58;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp58, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWSup.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_Medium_density(threadData, tmp58);
  threadData->lastEquationSolved = 7421;
}

/*
equation index: 7422
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.p_start = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7422;
}

/*
equation index: 7423
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.T_start = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7423;
}

/*
equation index: 7424
type: SIMPLE_ASSIGN
junCHWSup.vol.X_start[1] = junCHWSup.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1749]] /* junCHWSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7424;
}

/*
equation index: 7425
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.X_start[1] = junCHWSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1749]] /* junCHWSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7425;
}

/*
equation index: 7426
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, junCHWSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7426};
  real_array tmp59;
  real_array_create(&tmp59, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWSup.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */), tmp59);
  threadData->lastEquationSolved = 7426;
}

/*
equation index: 7431
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.dynBal.Medium.setState_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWSup.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7431;
}

/*
equation index: 7434
type: SIMPLE_ASSIGN
junCHWSup.vol.V = junCHWSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* junCHWSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7434;
}

/*
equation index: 7435
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.fluidVolume = junCHWSup.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* junCHWSup.vol.V PARAM */);
  threadData->lastEquationSolved = 7435;
}

/*
equation index: 7448
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_small = 1e-4 * abs(junCHWSup.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWSup.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWSup.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7448;
}

/*
equation index: 7461
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal = junCHWSup.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWSup.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWSup.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 7461;
}

/*
equation index: 7462
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal_pos = abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1740]] /* junCHWSup.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWSup.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7462;
}

/*
equation index: 7465
type: SIMPLE_ASSIGN
junCHWSup.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.res3.Medium.dynamicViscosity(junCHWSup.res3.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7465};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res3_Medium_ThermodynamicState tmp60;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp60, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1744]] /* junCHWSup.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWSup.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1737]] /* junCHWSup.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res3_Medium_dynamicViscosity(threadData, tmp60);
  threadData->lastEquationSolved = 7465;
}

/*
equation index: 7474
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_small = 1e-4 * abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWSup.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWSup.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7474;
}

/*
equation index: 7481
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal = junCHWSup.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWSup.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWSup.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 7481;
}

/*
equation index: 7482
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal_pos = abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1726]] /* junCHWSup.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWSup.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7482;
}

/*
equation index: 7485
type: SIMPLE_ASSIGN
junCHWSup.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.res2.Medium.dynamicViscosity(junCHWSup.res2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7485};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res2_Medium_ThermodynamicState tmp61;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp61, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1730]] /* junCHWSup.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWSup.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1723]] /* junCHWSup.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res2_Medium_dynamicViscosity(threadData, tmp61);
  threadData->lastEquationSolved = 7485;
}

/*
equation index: 7494
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_small = 1e-4 * abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWSup.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWSup.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7494;
}

/*
equation index: 7501
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal = junCHWSup.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWSup.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWSup.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 7501;
}

/*
equation index: 7502
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal_pos = abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWSup.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWSup.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7502;
}

/*
equation index: 7505
type: SIMPLE_ASSIGN
junCHWSup.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.res1.Medium.dynamicViscosity(junCHWSup.res1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7505};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res1_Medium_ThermodynamicState tmp62;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp62, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* junCHWSup.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWSup.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1709]] /* junCHWSup.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res1_Medium_dynamicViscosity(threadData, tmp62);
  threadData->lastEquationSolved = 7505;
}

/*
equation index: 7514
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_small = 1e-4 * abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWSup.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWSup.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7514;
}

/*
equation index: 7516
type: SIMPLE_ASSIGN
junCHWSup.m_flow_small = 1e-4 * junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWSup.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWSup.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7516;
}

/*
equation index: 7527
type: SIMPLE_ASSIGN
chi2.TConEnt_nominal_degC = -273.15 + chi2.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi2.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* chi2.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 7527;
}

/*
equation index: 7528
type: SIMPLE_ASSIGN
chi2.QEva_flow_nominal = chi2.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi2.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* chi2.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7528;
}

/*
equation index: 7529
type: SIMPLE_ASSIGN
chi2.Q_flow_small = 1e-9 * chi2.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* chi2.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi2.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7529;
}

/*
equation index: 7530
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal = chi2.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi2.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* chi2.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 7530;
}

/*
equation index: 7531
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal_degC = -273.15 + chi2.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* chi2.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi2.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 7531;
}

/*
equation index: 7532
type: SIMPLE_ASSIGN
chi2.mCon_flow_nominal = chi2.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* chi2.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi2.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7532;
}

/*
equation index: 7533
type: SIMPLE_ASSIGN
chi2.mEva_flow_nominal = chi2.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi2.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi2.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7533;
}

/*
equation index: 7534
type: SIMPLE_ASSIGN
chi2.etaMotor = chi2.per.etaMotor
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi2.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* chi2.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 7534;
}

/*
equation index: 7535
type: SIMPLE_ASSIGN
chi2.PLRMin = chi2.per.PLRMin
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* chi2.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi2.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 7535;
}

/*
equation index: 7536
type: SIMPLE_ASSIGN
chi2.PLRMinUnl = chi2.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* chi2.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* chi2.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 7536;
}

/*
equation index: 7537
type: SIMPLE_ASSIGN
chi2.PLRMax = chi2.per.PLRMax
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* chi2.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[239]] /* chi2.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 7537;
}

/*
equation index: 7538
type: SIMPLE_ASSIGN
chi2.COP_nominal = chi2.per.COP_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi2.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[229]] /* chi2.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 7538;
}

/*
equation index: 7541
type: SIMPLE_ASSIGN
chi2.rho2_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.density(chi2.sta2_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7541};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_ThermodynamicState tmp63;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp63, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* chi2.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* chi2.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* chi2.rho2_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_density(threadData, tmp63);
  threadData->lastEquationSolved = 7541;
}

/*
equation index: 7544
type: SIMPLE_ASSIGN
chi2.rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.density(chi2.sta1_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7544};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_ThermodynamicState tmp64;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp64, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* chi2.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* chi2.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* chi2.rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_density(threadData, tmp64);
  threadData->lastEquationSolved = 7544;
}

/*
equation index: 7553
type: SIMPLE_ASSIGN
chi2.preDro2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.preDro2.Medium.dynamicViscosity(chi2.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7553};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro2_Medium_ThermodynamicState tmp65;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp65, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* chi2.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* chi2.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.preDro2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro2_Medium_dynamicViscosity(threadData, tmp65);
  threadData->lastEquationSolved = 7553;
}

/*
equation index: 7573
type: SIMPLE_ASSIGN
chi2.preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.preDro1.Medium.dynamicViscosity(chi2.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7573};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro1_Medium_ThermodynamicState tmp66;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp66, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* chi2.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* chi2.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro1_Medium_dynamicViscosity(threadData, tmp66);
  threadData->lastEquationSolved = 7573;
}

/*
equation index: 7587
type: SIMPLE_ASSIGN
chi2.vol2.T_start = chi2.T2_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 7587;
}

/*
equation index: 7588
type: SIMPLE_ASSIGN
chi2.vol2.state_start.T = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7588;
}

/*
equation index: 7589
type: SIMPLE_ASSIGN
chi2.vol2.p_start = chi2.p2_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 7589;
}

/*
equation index: 7590
type: SIMPLE_ASSIGN
chi2.vol2.state_start.p = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7590;
}

/*
equation index: 7594
type: SIMPLE_ASSIGN
chi2.vol2.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.Medium.density(chi2.vol2.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7594};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_Medium_ThermodynamicState tmp67;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp67, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.vol2.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_Medium_density(threadData, tmp67);
  threadData->lastEquationSolved = 7594;
}

/*
equation index: 7595
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.p_start = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* chi2.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7595;
}

/*
equation index: 7596
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.T_start = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7596;
}

/*
equation index: 7597
type: SIMPLE_ASSIGN
chi2.vol2.X_start[1] = chi2.X2_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi2.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 7597;
}

/*
equation index: 7598
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.X_start[1] = chi2.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7598};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* chi2.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7598;
}

/*
equation index: 7599
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.dynBal.Medium.specificEnthalpy_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, chi2.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7599};
  real_array tmp68;
  real_array_create(&tmp68, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* chi2.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* chi2.vol2.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */), tmp68);
  threadData->lastEquationSolved = 7599;
}

/*
equation index: 7604
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.dynBal.Medium.setState_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7604};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* chi2.vol2.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7604;
}

/*
equation index: 7607
type: SIMPLE_ASSIGN
chi2.vol2.V = 142.85714285714286 / chi2.rho2_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.vol2.V PARAM */) = DIVISION_SIM(142.85714285714286,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* chi2.rho2_nominal PARAM */),"chi2.rho2_nominal",equationIndexes);
  threadData->lastEquationSolved = 7607;
}

/*
equation index: 7608
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.fluidVolume = chi2.vol2.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* chi2.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.vol2.V PARAM */);
  threadData->lastEquationSolved = 7608;
}

/*
equation index: 7631
type: SIMPLE_ASSIGN
chi2.vol1.T_start = chi2.T1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 7631;
}

/*
equation index: 7632
type: SIMPLE_ASSIGN
chi2.vol1.state_start.T = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7632;
}

/*
equation index: 7633
type: SIMPLE_ASSIGN
chi2.vol1.p_start = chi2.p1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* chi2.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[227]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 7633;
}

/*
equation index: 7634
type: SIMPLE_ASSIGN
chi2.vol1.state_start.p = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* chi2.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7634;
}

/*
equation index: 7638
type: SIMPLE_ASSIGN
chi2.vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.Medium.density(chi2.vol1.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7638};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_Medium_ThermodynamicState tmp69;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp69, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* chi2.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* chi2.vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_Medium_density(threadData, tmp69);
  threadData->lastEquationSolved = 7638;
}

/*
equation index: 7639
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.p_start = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* chi2.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7639;
}

/*
equation index: 7640
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.T_start = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7640;
}

/*
equation index: 7641
type: SIMPLE_ASSIGN
chi2.vol1.X_start[1] = chi2.X1_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* chi2.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi2.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7641;
}

/*
equation index: 7642
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.X_start[1] = chi2.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* chi2.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* chi2.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7642;
}

/*
equation index: 7643
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.dynBal.Medium.specificEnthalpy_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, chi2.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7643};
  real_array tmp70;
  real_array_create(&tmp70, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* chi2.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* chi2.vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */), tmp70);
  threadData->lastEquationSolved = 7643;
}

/*
equation index: 7648
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.dynBal.Medium.setState_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* chi2.vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7648;
}

/*
equation index: 7651
type: SIMPLE_ASSIGN
chi2.vol1.V = 476.1904761904762 / chi2.rho1_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7651};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.vol1.V PARAM */) = DIVISION_SIM(476.1904761904762,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* chi2.rho1_nominal PARAM */),"chi2.rho1_nominal",equationIndexes);
  threadData->lastEquationSolved = 7651;
}

/*
equation index: 7652
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.fluidVolume = chi2.vol1.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7652};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* chi2.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.vol1.V PARAM */);
  threadData->lastEquationSolved = 7652;
}

/*
equation index: 7694
type: SIMPLE_ASSIGN
TWCLeaTow2.ratTau = TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7694};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* TWCLeaTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TWCLeaTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 7694;
}

/*
equation index: 7695
type: SIMPLE_ASSIGN
TWCLeaTow2.tauHeaTraInv = if TWCLeaTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7695};
  modelica_boolean tmp71;
  tmp71 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TWCLeaTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* TWCLeaTow2.tauHeaTraInv PARAM */) = (tmp71?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TWCLeaTow2.tauHeaTra PARAM */),"TWCLeaTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7695;
}

/*
equation index: 7708
type: SIMPLE_ASSIGN
val7.dp_nominal = 89580.0 + val7.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3422]] /* val7.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3421]] /* val7.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 7708;
}

/*
equation index: 7709
type: SIMPLE_ASSIGN
val7.dp_nominal_pos = abs(val7.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3423]] /* val7.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3422]] /* val7.dp_nominal PARAM */));
  threadData->lastEquationSolved = 7709;
}

/*
equation index: 7713
type: SIMPLE_ASSIGN
val7.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val7.Medium.dynamicViscosity(val7.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7713};
  WaterCooledChillerExample_WaterCooledChillerExample7_val7_Medium_ThermodynamicState tmp72;
  WaterCooledChillerExample_WaterCooledChillerExample7_val7_Medium_ThermodynamicState_wrap_vars(threadData,tmp72, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3434]] /* val7.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3433]] /* val7.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3424]] /* val7.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val7_Medium_dynamicViscosity(threadData, tmp72);
  threadData->lastEquationSolved = 7713;
}

/*
equation index: 7714
type: SIMPLE_ASSIGN
val7.m_flow_turbulent = 15.873015873015873 * val7.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3430]] /* val7.m_flow_turbulent PARAM */) = (15.873015873015873) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3419]] /* val7.deltaM PARAM */));
  threadData->lastEquationSolved = 7714;
}

/*
equation index: 7724
type: SIMPLE_ASSIGN
expVesChi2.state_start.p = expVesChi2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* expVesChi2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */);
  threadData->lastEquationSolved = 7724;
}

/*
equation index: 7725
type: SIMPLE_ASSIGN
expVesChi2.state_start.T = expVesChi2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* expVesChi2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* expVesChi2.T_start PARAM */);
  threadData->lastEquationSolved = 7725;
}

/*
equation index: 7726
type: SIMPLE_ASSIGN
expVesChi2.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi2.Medium.density(expVesChi2.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7726};
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_ThermodynamicState tmp73;
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_ThermodynamicState_wrap_vars(threadData,tmp73, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* expVesChi2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* expVesChi2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* expVesChi2.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_density(threadData, tmp73);
  threadData->lastEquationSolved = 7726;
}

/*
equation index: 7774
type: SIMPLE_ASSIGN
pumCW2.eff.per.speeds_rpm[1] = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7774;
}

/*
equation index: 7775
type: SIMPLE_ASSIGN
pumCW2.eff.per.constantSpeed_rpm = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* pumCW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7775;
}

/*
equation index: 7779
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7779};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[774]] /* pumCW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[783]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7779;
}

/*
equation index: 7780
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.P[1] = pumCW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2489]] /* pumCW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* pumCW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 7780;
}

/*
equation index: 7781
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.V_flow[1] = pumCW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2490]] /* pumCW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7781;
}

/*
equation index: 7782
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.eta[1] = pumCW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2523]] /* pumCW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7782;
}

/*
equation index: 7783
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.V_flow[1] = pumCW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7783};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7783;
}

/*
equation index: 7784
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.eta[1] = pumCW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7784;
}

/*
equation index: 7785
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* pumCW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7785;
}

/*
equation index: 7799
type: SIMPLE_ASSIGN
pumCW2.heaDis.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7799};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[780]] /* pumCW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[783]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7799;
}

/*
equation index: 7805
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* pumCW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7805;
}

/*
equation index: 7806
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_start = pumCW2.m_flow_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* pumCW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* pumCW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 7806;
}

/*
equation index: 7809
type: SIMPLE_ASSIGN
pumCW2.vol.tau = pumCW2.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2573]] /* pumCW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* pumCW2.tau PARAM */);
  threadData->lastEquationSolved = 7809;
}

/*
equation index: 7810
type: SIMPLE_ASSIGN
pumCW2.vol.V_nominal = 15.873015873015873 * pumCW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* pumCW2.vol.V_nominal PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2573]] /* pumCW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 7810;
}

/*
equation index: 7813
type: SIMPLE_ASSIGN
pumCW2.vol.T_start = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* pumCW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 7813;
}

/*
equation index: 7814
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.T = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* pumCW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7814;
}

/*
equation index: 7815
type: SIMPLE_ASSIGN
pumCW2.vol.p_start = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* pumCW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 7815;
}

/*
equation index: 7816
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.p = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* pumCW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7816;
}

/*
equation index: 7820
type: SIMPLE_ASSIGN
pumCW2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.Medium.density(pumCW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7820};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_Medium_ThermodynamicState tmp74;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp74, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* pumCW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* pumCW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* pumCW2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_Medium_density(threadData, tmp74);
  threadData->lastEquationSolved = 7820;
}

/*
equation index: 7821
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.p_start = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* pumCW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7821;
}

/*
equation index: 7822
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.T_start = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7822;
}

/*
equation index: 7823
type: SIMPLE_ASSIGN
pumCW2.vol.X_start[1] = pumCW2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2451]] /* pumCW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7823;
}

/*
equation index: 7824
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.X_start[1] = pumCW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* pumCW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7824;
}

/*
equation index: 7825
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, pumCW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7825};
  real_array tmp75;
  real_array_create(&tmp75, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* pumCW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2556]] /* pumCW2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */), tmp75);
  threadData->lastEquationSolved = 7825;
}

/*
equation index: 7830
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.dynBal.Medium.setState_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2560]] /* pumCW2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7830;
}

/*
equation index: 7833
type: SIMPLE_ASSIGN
pumCW2.vol.V = pumCW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* pumCW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7833;
}

/*
equation index: 7834
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.fluidVolume = pumCW2.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2555]] /* pumCW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW2.vol.V PARAM */);
  threadData->lastEquationSolved = 7834;
}

/*
equation index: 7847
type: SIMPLE_ASSIGN
pumCW2.vol.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2565]] /* pumCW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7847;
}

/*
equation index: 7856
type: SIMPLE_ASSIGN
pumCW2.sta_start.p = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* pumCW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 7856;
}

/*
equation index: 7857
type: SIMPLE_ASSIGN
pumCW2.sta_start.T = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 7857;
}

/*
equation index: 7858
type: SIMPLE_ASSIGN
pumCW2.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.Medium.specificEnthalpy(pumCW2.sta_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7858};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_Medium_ThermodynamicState tmp76;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp76, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* pumCW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* pumCW2.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_Medium_specificEnthalpy(threadData, tmp76);
  threadData->lastEquationSolved = 7858;
}

/*
equation index: 7870
type: SIMPLE_ASSIGN
pumCW2.stageInputs[1] = pumCW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* pumCW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 7870;
}

/*
equation index: 7874
type: SIMPLE_ASSIGN
pumCW2.per.speeds_rpm[1] = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7874;
}

/*
equation index: 7875
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed_rpm = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7875;
}

/*
equation index: 7876
type: SIMPLE_ASSIGN
pumCW2.per.speeds[1] = pumCW2.per.speeds_rpm[1] / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* pumCW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7876;
}

/*
equation index: 7877
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed = pumCW2.per.constantSpeed_rpm / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2518]] /* pumCW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7877;
}

/*
equation index: 7897
type: SIMPLE_ASSIGN
cooTow2.rho_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.density(cooTow2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7897};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_ThermodynamicState tmp77;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp77, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* cooTow2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* cooTow2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow2.rho_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_density(threadData, tmp77);
  threadData->lastEquationSolved = 7897;
}

/*
equation index: 7906
type: SIMPLE_ASSIGN
cooTow2.preDro.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.preDro.Medium.dynamicViscosity(cooTow2.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7906};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_preDro_Medium_ThermodynamicState tmp78;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow2.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* cooTow2.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow2.preDro.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_preDro_Medium_dynamicViscosity(threadData, tmp78);
  threadData->lastEquationSolved = 7906;
}

/*
equation index: 7920
type: SIMPLE_ASSIGN
cooTow2.vol.T_start = cooTow2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 7920;
}

/*
equation index: 7921
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.T = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7921;
}

/*
equation index: 7922
type: SIMPLE_ASSIGN
cooTow2.vol.p_start = cooTow2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7922};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 7922;
}

/*
equation index: 7923
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.p = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7923;
}

/*
equation index: 7927
type: SIMPLE_ASSIGN
cooTow2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.Medium.density(cooTow2.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7927};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_ThermodynamicState tmp79;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp79, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_density(threadData, tmp79);
  threadData->lastEquationSolved = 7927;
}

/*
equation index: 7928
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.p_start = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7928;
}

/*
equation index: 7929
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.T_start = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7929;
}

/*
equation index: 7930
type: SIMPLE_ASSIGN
cooTow2.vol.X_start[1] = cooTow2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* cooTow2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7930;
}

/*
equation index: 7931
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.X_start[1] = cooTow2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7931;
}

/*
equation index: 7932
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, cooTow2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7932};
  real_array tmp80;
  real_array_create(&tmp80, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* cooTow2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow2.vol.dynBal.T_start PARAM */), tmp80);
  threadData->lastEquationSolved = 7932;
}

/*
equation index: 7937
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.dynBal.Medium.setState_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7937};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* cooTow2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7937;
}

/*
equation index: 7940
type: SIMPLE_ASSIGN
cooTow2.vol.V = 15.873015873015873 * cooTow2.tau / cooTow2.rho_default
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* cooTow2.vol.V PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* cooTow2.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow2.rho_default PARAM */),"cooTow2.rho_default",equationIndexes));
  threadData->lastEquationSolved = 7940;
}

/*
equation index: 7941
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.fluidVolume = cooTow2.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* cooTow2.vol.V PARAM */);
  threadData->lastEquationSolved = 7941;
}

/*
equation index: 7981
type: SIMPLE_ASSIGN
val8.dp_nominal = 104510.0 + val8.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3446]] /* val8.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3445]] /* val8.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 7981;
}

/*
equation index: 7982
type: SIMPLE_ASSIGN
val8.dp_nominal_pos = abs(val8.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7982};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3446]] /* val8.dp_nominal PARAM */));
  threadData->lastEquationSolved = 7982;
}

/*
equation index: 7986
type: SIMPLE_ASSIGN
val8.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8.Medium.dynamicViscosity(val8.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7986};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8_Medium_ThermodynamicState tmp81;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8_Medium_ThermodynamicState_wrap_vars(threadData,tmp81, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3458]] /* val8.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3457]] /* val8.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3448]] /* val8.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8_Medium_dynamicViscosity(threadData, tmp81);
  threadData->lastEquationSolved = 7986;
}

/*
equation index: 7987
type: SIMPLE_ASSIGN
val8.m_flow_turbulent = 4.761904761904762 * val8.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7987};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* val8.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3443]] /* val8.deltaM PARAM */));
  threadData->lastEquationSolved = 7987;
}

/*
equation index: 8040
type: SIMPLE_ASSIGN
pumCHW2.eff.per.speeds_rpm[1] = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2240]] /* pumCHW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8040;
}

/*
equation index: 8041
type: SIMPLE_ASSIGN
pumCHW2.eff.per.constantSpeed_rpm = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8041};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2226]] /* pumCHW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8041;
}

/*
equation index: 8045
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8045};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[696]] /* pumCHW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[705]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 8045;
}

/*
equation index: 8046
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.P[1] = pumCHW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8046};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2231]] /* pumCHW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 8046;
}

/*
equation index: 8047
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.V_flow[1] = pumCHW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8047};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2232]] /* pumCHW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* pumCHW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8047;
}

/*
equation index: 8048
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.eta[1] = pumCHW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8048};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8048;
}

/*
equation index: 8049
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.V_flow[1] = pumCHW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8049};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2229]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* pumCHW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8049;
}

/*
equation index: 8050
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.eta[1] = pumCHW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2228]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8050;
}

/*
equation index: 8051
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8051};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2227]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* pumCHW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8051;
}

/*
equation index: 8065
type: SIMPLE_ASSIGN
pumCHW2.heaDis.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8065};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[702]] /* pumCHW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[705]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 8065;
}

/*
equation index: 8071
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8071;
}

/*
equation index: 8072
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_start = pumCHW2.m_flow_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* pumCHW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* pumCHW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 8072;
}

/*
equation index: 8075
type: SIMPLE_ASSIGN
pumCHW2.vol.tau = pumCHW2.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* pumCHW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* pumCHW2.tau PARAM */);
  threadData->lastEquationSolved = 8075;
}

/*
equation index: 8076
type: SIMPLE_ASSIGN
pumCHW2.vol.V_nominal = 4.761904761904762 * pumCHW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2291]] /* pumCHW2.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* pumCHW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 8076;
}

/*
equation index: 8079
type: SIMPLE_ASSIGN
pumCHW2.vol.T_start = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2191]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 8079;
}

/*
equation index: 8080
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.T = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2313]] /* pumCHW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8080;
}

/*
equation index: 8081
type: SIMPLE_ASSIGN
pumCHW2.vol.p_start = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* pumCHW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 8081;
}

/*
equation index: 8082
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.p = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* pumCHW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8082;
}

/*
equation index: 8086
type: SIMPLE_ASSIGN
pumCHW2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.Medium.density(pumCHW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8086};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_Medium_ThermodynamicState tmp82;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp82, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* pumCHW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2313]] /* pumCHW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2310]] /* pumCHW2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_Medium_density(threadData, tmp82);
  threadData->lastEquationSolved = 8086;
}

/*
equation index: 8087
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.p_start = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8087;
}

/*
equation index: 8088
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.T_start = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8088};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8088;
}

/*
equation index: 8089
type: SIMPLE_ASSIGN
pumCHW2.vol.X_start[1] = pumCHW2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2193]] /* pumCHW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8089;
}

/*
equation index: 8090
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.X_start[1] = pumCHW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8090;
}

/*
equation index: 8091
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, pumCHW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8091};
  real_array tmp83;
  real_array_create(&tmp83, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* pumCHW2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */), tmp83);
  threadData->lastEquationSolved = 8091;
}

/*
equation index: 8096
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.dynBal.Medium.setState_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2302]] /* pumCHW2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 8096;
}

/*
equation index: 8099
type: SIMPLE_ASSIGN
pumCHW2.vol.V = pumCHW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2291]] /* pumCHW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8099;
}

/*
equation index: 8100
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.fluidVolume = pumCHW2.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2297]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.vol.V PARAM */);
  threadData->lastEquationSolved = 8100;
}

/*
equation index: 8113
type: SIMPLE_ASSIGN
pumCHW2.vol.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2307]] /* pumCHW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8113;
}

/*
equation index: 8122
type: SIMPLE_ASSIGN
pumCHW2.sta_start.p = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 8122;
}

/*
equation index: 8123
type: SIMPLE_ASSIGN
pumCHW2.sta_start.T = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* pumCHW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2191]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 8123;
}

/*
equation index: 8124
type: SIMPLE_ASSIGN
pumCHW2.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.Medium.specificEnthalpy(pumCHW2.sta_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8124};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_Medium_ThermodynamicState tmp84;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp84, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* pumCHW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2252]] /* pumCHW2.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_Medium_specificEnthalpy(threadData, tmp84);
  threadData->lastEquationSolved = 8124;
}

/*
equation index: 8136
type: SIMPLE_ASSIGN
pumCHW2.stageInputs[1] = pumCHW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* pumCHW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 8136;
}

/*
equation index: 8140
type: SIMPLE_ASSIGN
pumCHW2.per.speeds_rpm[1] = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* pumCHW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8140;
}

/*
equation index: 8141
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed_rpm = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8141;
}

/*
equation index: 8142
type: SIMPLE_ASSIGN
pumCHW2.per.speeds[1] = pumCHW2.per.speeds_rpm[1] / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2274]] /* pumCHW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* pumCHW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8142;
}

/*
equation index: 8143
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed = pumCHW2.per.constantSpeed_rpm / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8143;
}

/*
equation index: 8166
type: SIMPLE_ASSIGN
junOut.mDyn_flow_nominal = 0.3333333333333333 * (abs(junOut.m_flow_nominal[1]) + abs(junOut.m_flow_nominal[2]) + abs(junOut.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junOut.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1865]] /* junOut.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junOut.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1867]] /* junOut.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 8166;
}

/*
equation index: 8167
type: SIMPLE_ASSIGN
junOut.vol.m_flow_nominal = junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junOut.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junOut.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8167;
}

/*
equation index: 8168
type: SIMPLE_ASSIGN
junOut.vol.tau = junOut.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junOut.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1918]] /* junOut.tau PARAM */);
  threadData->lastEquationSolved = 8168;
}

/*
equation index: 8169
type: SIMPLE_ASSIGN
junOut.vol.V_nominal = 0.8333333333333334 * junOut.vol.m_flow_nominal * junOut.vol.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junOut.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junOut.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junOut.vol.tau PARAM */)));
  threadData->lastEquationSolved = 8169;
}

/*
equation index: 8182
type: SIMPLE_ASSIGN
junOut.vol.T_start = junOut.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junOut.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* junOut.T_start PARAM */);
  threadData->lastEquationSolved = 8182;
}

/*
equation index: 8183
type: SIMPLE_ASSIGN
junOut.vol.dynBal.T_start = junOut.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junOut.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8183;
}

/*
equation index: 8184
type: SIMPLE_ASSIGN
junOut.vol.X_start[1] = junOut.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junOut.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1857]] /* junOut.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8184;
}

/*
equation index: 8185
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[1] = junOut.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junOut.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8185;
}

/*
equation index: 8186
type: SIMPLE_ASSIGN
junOut.vol.dynBal.hStart = 1006.0 * (-273.15 + junOut.vol.dynBal.T_start) * (1.0 - junOut.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junOut.vol.dynBal.T_start)) * junOut.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junOut.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 8186;
}

/*
equation index: 8194
type: SIMPLE_ASSIGN
junOut.vol.p_start = junOut.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junOut.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junOut.p_start PARAM */);
  threadData->lastEquationSolved = 8194;
}

/*
equation index: 8195
type: SIMPLE_ASSIGN
junOut.vol.dynBal.p_start = junOut.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junOut.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junOut.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8195;
}

/*
equation index: 8196
type: SIMPLE_ASSIGN
junOut.vol.dynBal.rho_start = 1.1843079200592153e-5 * junOut.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junOut.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junOut.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 8196;
}

/*
equation index: 8199
type: SIMPLE_ASSIGN
junOut.vol.V = junOut.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8199};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junOut.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junOut.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8199;
}

/*
equation index: 8200
type: SIMPLE_ASSIGN
junOut.vol.dynBal.fluidVolume = junOut.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junOut.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junOut.vol.V PARAM */);
  threadData->lastEquationSolved = 8200;
}

/*
equation index: 8208
type: SIMPLE_ASSIGN
junOut.vol.X_start[2] = junOut.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junOut.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1858]] /* junOut.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8208;
}

/*
equation index: 8209
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[2] = junOut.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8209};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1927]] /* junOut.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junOut.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8209;
}

/*
equation index: 8215
type: SIMPLE_ASSIGN
junOut.vol.m_flow_small = 1e-4 * abs(junOut.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junOut.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junOut.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8215;
}

/*
equation index: 8228
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal = junOut.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junOut.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1867]] /* junOut.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 8228;
}

/*
equation index: 8229
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal_pos = abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1911]] /* junOut.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junOut.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8229;
}

/*
equation index: 8231
type: SIMPLE_ASSIGN
junOut.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junOut.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1914]] /* junOut.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8231;
}

/*
equation index: 8243
type: SIMPLE_ASSIGN
junOut.res3.m_flow_small = 1e-4 * abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junOut.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junOut.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8243;
}

/*
equation index: 8250
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal = junOut.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junOut.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junOut.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 8250;
}

/*
equation index: 8251
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal_pos = abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junOut.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junOut.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8251;
}

/*
equation index: 8253
type: SIMPLE_ASSIGN
junOut.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1892]] /* junOut.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junOut.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8253;
}

/*
equation index: 8265
type: SIMPLE_ASSIGN
junOut.res2.m_flow_small = 1e-4 * abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1896]] /* junOut.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junOut.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8265;
}

/*
equation index: 8272
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal = junOut.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junOut.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1865]] /* junOut.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 8272;
}

/*
equation index: 8273
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal_pos = abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junOut.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junOut.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8273;
}

/*
equation index: 8275
type: SIMPLE_ASSIGN
junOut.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1876]] /* junOut.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* junOut.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8275;
}

/*
equation index: 8287
type: SIMPLE_ASSIGN
junOut.res1.m_flow_small = 1e-4 * abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8287};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junOut.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junOut.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8287;
}

/*
equation index: 8289
type: SIMPLE_ASSIGN
junOut.m_flow_small = 1e-4 * junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1868]] /* junOut.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junOut.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8289;
}

/*
equation index: 8319
type: SIMPLE_ASSIGN
junRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junRet.m_flow_nominal[1]) + abs(junRet.m_flow_nominal[2]) + abs(junRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1966]] /* junRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 8319;
}

/*
equation index: 8320
type: SIMPLE_ASSIGN
junRet.vol.m_flow_nominal = junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8320;
}

/*
equation index: 8321
type: SIMPLE_ASSIGN
junRet.vol.tau = junRet.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2017]] /* junRet.tau PARAM */);
  threadData->lastEquationSolved = 8321;
}

/*
equation index: 8322
type: SIMPLE_ASSIGN
junRet.vol.V_nominal = 0.8333333333333334 * junRet.vol.m_flow_nominal * junRet.vol.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junRet.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 8322;
}

/*
equation index: 8335
type: SIMPLE_ASSIGN
junRet.vol.T_start = junRet.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1955]] /* junRet.T_start PARAM */);
  threadData->lastEquationSolved = 8335;
}

/*
equation index: 8336
type: SIMPLE_ASSIGN
junRet.vol.dynBal.T_start = junRet.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8336;
}

/*
equation index: 8337
type: SIMPLE_ASSIGN
junRet.vol.X_start[1] = junRet.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1956]] /* junRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8337;
}

/*
equation index: 8338
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[1] = junRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8338;
}

/*
equation index: 8339
type: SIMPLE_ASSIGN
junRet.vol.dynBal.hStart = 1006.0 * (-273.15 + junRet.vol.dynBal.T_start) * (1.0 - junRet.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junRet.vol.dynBal.T_start)) * junRet.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* junRet.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 8339;
}

/*
equation index: 8347
type: SIMPLE_ASSIGN
junRet.vol.p_start = junRet.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2042]] /* junRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1968]] /* junRet.p_start PARAM */);
  threadData->lastEquationSolved = 8347;
}

/*
equation index: 8348
type: SIMPLE_ASSIGN
junRet.vol.dynBal.p_start = junRet.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2042]] /* junRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8348;
}

/*
equation index: 8349
type: SIMPLE_ASSIGN
junRet.vol.dynBal.rho_start = 1.1843079200592153e-5 * junRet.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2033]] /* junRet.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junRet.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 8349;
}

/*
equation index: 8352
type: SIMPLE_ASSIGN
junRet.vol.V = junRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8352;
}

/*
equation index: 8353
type: SIMPLE_ASSIGN
junRet.vol.dynBal.fluidVolume = junRet.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junRet.vol.V PARAM */);
  threadData->lastEquationSolved = 8353;
}

/*
equation index: 8361
type: SIMPLE_ASSIGN
junRet.vol.X_start[2] = junRet.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1957]] /* junRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8361;
}

/*
equation index: 8362
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[2] = junRet.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* junRet.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junRet.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8362;
}

/*
equation index: 8368
type: SIMPLE_ASSIGN
junRet.vol.m_flow_small = 1e-4 * abs(junRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2041]] /* junRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8368;
}

/*
equation index: 8381
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal = junRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1966]] /* junRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 8381;
}

/*
equation index: 8382
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal_pos = abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2010]] /* junRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8382;
}

/*
equation index: 8384
type: SIMPLE_ASSIGN
junRet.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2007]] /* junRet.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2013]] /* junRet.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8384;
}

/*
equation index: 8396
type: SIMPLE_ASSIGN
junRet.res3.m_flow_small = 1e-4 * abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2011]] /* junRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8396;
}

/*
equation index: 8403
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal = junRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 8403;
}

/*
equation index: 8404
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal_pos = abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1994]] /* junRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8404;
}

/*
equation index: 8406
type: SIMPLE_ASSIGN
junRet.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1991]] /* junRet.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1997]] /* junRet.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8406;
}

/*
equation index: 8418
type: SIMPLE_ASSIGN
junRet.res2.m_flow_small = 1e-4 * abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1995]] /* junRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8418;
}

/*
equation index: 8425
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal = junRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 8425;
}

/*
equation index: 8426
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal_pos = abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1978]] /* junRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8426;
}

/*
equation index: 8428
type: SIMPLE_ASSIGN
junRet.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* junRet.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1981]] /* junRet.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8428;
}

/*
equation index: 8440
type: SIMPLE_ASSIGN
junRet.res1.m_flow_small = 1e-4 * abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1979]] /* junRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8440;
}

/*
equation index: 8442
type: SIMPLE_ASSIGN
junRet.m_flow_small = 1e-4 * junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1967]] /* junRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8442;
}

/*
equation index: 8453
type: SIMPLE_ASSIGN
damOA.cL[1] = (log(damOA.k0) + (-damOA.b) - damOA.a) / damOA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8453};
  modelica_real tmp85;
  modelica_real tmp86;
  tmp85 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* damOA.k0 PARAM */);
  if(!(tmp85 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k0) was %g should be > 0", tmp85);
    }
  }tmp86 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* damOA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* damOA.cL[1] PARAM */) = DIVISION_SIM(log(tmp85) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */),(tmp86 * tmp86),"damOA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 8453;
}

/*
equation index: 8454
type: SIMPLE_ASSIGN
damOA.cL[2] = (2.0 * damOA.b + (-2.0) * log(damOA.k0) + 2.0 * damOA.a - damOA.b * damOA.yL) / damOA.yL
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8454};
  modelica_real tmp87;
  tmp87 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* damOA.k0 PARAM */);
  if(!(tmp87 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k0) was %g should be > 0", tmp87);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* damOA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */)) + (-2.0) * (log(tmp87)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* damOA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* damOA.yL PARAM */),"damOA.yL",equationIndexes);
  threadData->lastEquationSolved = 8454;
}

/*
equation index: 8455
type: SIMPLE_ASSIGN
damOA.cL[3] = log(damOA.k0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8455};
  modelica_real tmp88;
  tmp88 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* damOA.k0 PARAM */);
  if(!(tmp88 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k0) was %g should be > 0", tmp88);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* damOA.cL[3] PARAM */) = log(tmp88);
  threadData->lastEquationSolved = 8455;
}

/*
equation index: 8456
type: SIMPLE_ASSIGN
damOA.cU[1] = (log(damOA.k1) - damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8456};
  modelica_real tmp89;
  modelica_real tmp90;
  tmp89 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* damOA.k1 PARAM */);
  if(!(tmp89 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k1) was %g should be > 0", tmp89);
    }
  }tmp90 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* damOA.cU[1] PARAM */) = DIVISION_SIM(log(tmp89) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */),1.0 + (tmp90 * tmp90) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 8456;
}

/*
equation index: 8457
type: SIMPLE_ASSIGN
damOA.cU[2] = (damOA.b * damOA.yU ^ 2.0 + 2.0 * log(damOA.k1) * damOA.yU + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b) / (-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8457};
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  tmp91 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */);
  tmp92 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* damOA.k1 PARAM */);
  if(!(tmp92 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k1) was %g should be > 0", tmp92);
    }
  }tmp93 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* damOA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */)) * ((tmp91 * tmp91)) + (2.0) * ((log(tmp92)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */)) - ((tmp93 * tmp93)),"-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 8457;
}

/*
equation index: 8458
type: SIMPLE_ASSIGN
damOA.cU[3] = (damOA.yU ^ 2.0 * (log(damOA.k1) + damOA.b) + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b + damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8458};
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  tmp94 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */);
  tmp95 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* damOA.k1 PARAM */);
  if(!(tmp95 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k1) was %g should be > 0", tmp95);
    }
  }tmp96 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1161]] /* damOA.cU[3] PARAM */) = DIVISION_SIM(((tmp94 * tmp94)) * (log(tmp95) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */),1.0 + (tmp96 * tmp96) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 8458;
}

/*
equation index: 8459
type: SIMPLE_ASSIGN
damOA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8459};
  real_array tmp97;
  real_array tmp98;
  real_array_create(&tmp97, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp98, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* damOA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */), tmp97, tmp98, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */));
  threadData->lastEquationSolved = 8459;
}

/*
equation index: 8461
type: SIMPLE_ASSIGN
damOA.rho_default = 1.1843079200592153e-5 * damOA.sta_default.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* damOA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* damOA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 8461;
}

/*
equation index: 8462
type: SIMPLE_ASSIGN
damOA.A = 13.266998341625207 / (damOA.v_nominal * damOA.rho_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* damOA.A PARAM */) = DIVISION_SIM(13.266998341625207,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* damOA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* damOA.rho_default PARAM */)),"damOA.v_nominal * damOA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 8462;
}

/*
equation index: 8463
type: SIMPLE_ASSIGN
damOA.kDam_default = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / damOA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8463};
  modelica_real tmp99;
  tmp99 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* damOA.rho_default PARAM */);
  if(!(tmp99 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damOA.rho_default) was %g should be >= 0", tmp99);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* damOA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp99)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* damOA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* damOA.kThetaSqRt_default PARAM */),"damOA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 8463;
}

/*
equation index: 8464
type: SIMPLE_ASSIGN
damOA.facRouDuc = if damOA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* damOA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[357]] /* damOA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 8464;
}

/*
equation index: 8470
type: SIMPLE_ASSIGN
damOA.dp_nominal = (13.266998341625207 / damOA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8470};
  modelica_real tmp100;
  tmp100 = DIVISION_SIM(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* damOA.kDam_default PARAM */),"damOA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* damOA.dp_nominal PARAM */) = (tmp100 * tmp100);
  threadData->lastEquationSolved = 8470;
}

/*
equation index: 8471
type: SIMPLE_ASSIGN
damOA.dp_nominal_pos = abs(damOA.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* damOA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* damOA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8471;
}

/*
equation index: 8474
type: SIMPLE_ASSIGN
damOA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damOA.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* damOA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* damOA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8474;
}

/*
equation index: 8477
type: SIMPLE_ASSIGN
damOA.m_flow_turbulent = if damOA.use_deltaM then damOA.deltaM * 13.266998341625207 else damOA.eta_default * damOA.ReC * sqrt(damOA.A) * damOA.facRouDuc
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8477};
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  tmp102 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[360]] /* damOA.use_deltaM PARAM */);
  if(tmp102)
  {
    tmp103 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1162]] /* damOA.deltaM PARAM */)) * (13.266998341625207);
  }
  else
  {
    tmp101 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* damOA.A PARAM */);
    if(!(tmp101 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damOA.A) was %g should be >= 0", tmp101);
      }
    }
    tmp103 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* damOA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1151]] /* damOA.ReC PARAM */))) * (sqrt(tmp101))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* damOA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* damOA.m_flow_turbulent PARAM */) = tmp103;
  threadData->lastEquationSolved = 8477;
}

/*
equation index: 8487
type: SIMPLE_ASSIGN
damEA.cL[1] = (log(damEA.k0) + (-damEA.b) - damEA.a) / damEA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8487};
  modelica_real tmp104;
  modelica_real tmp105;
  tmp104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* damEA.k0 PARAM */);
  if(!(tmp104 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k0) was %g should be > 0", tmp104);
    }
  }tmp105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* damEA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* damEA.cL[1] PARAM */) = DIVISION_SIM(log(tmp104) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */),(tmp105 * tmp105),"damEA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 8487;
}

/*
equation index: 8488
type: SIMPLE_ASSIGN
damEA.cL[2] = (2.0 * damEA.b + (-2.0) * log(damEA.k0) + 2.0 * damEA.a - damEA.b * damEA.yL) / damEA.yL
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8488};
  modelica_real tmp106;
  tmp106 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* damEA.k0 PARAM */);
  if(!(tmp106 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k0) was %g should be > 0", tmp106);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* damEA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */)) + (-2.0) * (log(tmp106)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* damEA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* damEA.yL PARAM */),"damEA.yL",equationIndexes);
  threadData->lastEquationSolved = 8488;
}

/*
equation index: 8489
type: SIMPLE_ASSIGN
damEA.cL[3] = log(damEA.k0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8489};
  modelica_real tmp107;
  tmp107 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* damEA.k0 PARAM */);
  if(!(tmp107 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k0) was %g should be > 0", tmp107);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* damEA.cL[3] PARAM */) = log(tmp107);
  threadData->lastEquationSolved = 8489;
}

/*
equation index: 8490
type: SIMPLE_ASSIGN
damEA.cU[1] = (log(damEA.k1) - damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8490};
  modelica_real tmp108;
  modelica_real tmp109;
  tmp108 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* damEA.k1 PARAM */);
  if(!(tmp108 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k1) was %g should be > 0", tmp108);
    }
  }tmp109 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* damEA.cU[1] PARAM */) = DIVISION_SIM(log(tmp108) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */),1.0 + (tmp109 * tmp109) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 8490;
}

/*
equation index: 8491
type: SIMPLE_ASSIGN
damEA.cU[2] = (damEA.b * damEA.yU ^ 2.0 + 2.0 * log(damEA.k1) * damEA.yU + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b) / (-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8491};
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  tmp110 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */);
  tmp111 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* damEA.k1 PARAM */);
  if(!(tmp111 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k1) was %g should be > 0", tmp111);
    }
  }tmp112 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* damEA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */)) * ((tmp110 * tmp110)) + (2.0) * ((log(tmp111)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */)) - ((tmp112 * tmp112)),"-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 8491;
}

/*
equation index: 8492
type: SIMPLE_ASSIGN
damEA.cU[3] = (damEA.yU ^ 2.0 * (log(damEA.k1) + damEA.b) + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b + damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8492};
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  tmp113 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */);
  tmp114 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* damEA.k1 PARAM */);
  if(!(tmp114 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k1) was %g should be > 0", tmp114);
    }
  }tmp115 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* damEA.cU[3] PARAM */) = DIVISION_SIM(((tmp113 * tmp113)) * (log(tmp114) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */),1.0 + (tmp115 * tmp115) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 8492;
}

/*
equation index: 8493
type: SIMPLE_ASSIGN
damEA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8493};
  real_array tmp116;
  real_array tmp117;
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp117, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* damEA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */), tmp116, tmp117, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */));
  threadData->lastEquationSolved = 8493;
}

/*
equation index: 8495
type: SIMPLE_ASSIGN
damEA.rho_default = 1.1843079200592153e-5 * damEA.sta_default.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* damEA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* damEA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 8495;
}

/*
equation index: 8496
type: SIMPLE_ASSIGN
damEA.A = 13.266998341625207 / (damEA.v_nominal * damEA.rho_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* damEA.A PARAM */) = DIVISION_SIM(13.266998341625207,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1146]] /* damEA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* damEA.rho_default PARAM */)),"damEA.v_nominal * damEA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 8496;
}

/*
equation index: 8497
type: SIMPLE_ASSIGN
damEA.kDam_default = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / damEA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8497};
  modelica_real tmp118;
  tmp118 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* damEA.rho_default PARAM */);
  if(!(tmp118 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damEA.rho_default) was %g should be >= 0", tmp118);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* damEA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp118)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* damEA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* damEA.kThetaSqRt_default PARAM */),"damEA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 8497;
}

/*
equation index: 8498
type: SIMPLE_ASSIGN
damEA.facRouDuc = if damEA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* damEA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[348]] /* damEA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 8498;
}

/*
equation index: 8504
type: SIMPLE_ASSIGN
damEA.dp_nominal = (13.266998341625207 / damEA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8504};
  modelica_real tmp119;
  tmp119 = DIVISION_SIM(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* damEA.kDam_default PARAM */),"damEA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* damEA.dp_nominal PARAM */) = (tmp119 * tmp119);
  threadData->lastEquationSolved = 8504;
}

/*
equation index: 8505
type: SIMPLE_ASSIGN
damEA.dp_nominal_pos = abs(damEA.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* damEA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* damEA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8505;
}

/*
equation index: 8508
type: SIMPLE_ASSIGN
damEA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damEA.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* damEA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1142]] /* damEA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8508;
}

/*
equation index: 8511
type: SIMPLE_ASSIGN
damEA.m_flow_turbulent = if damEA.use_deltaM then damEA.deltaM * 13.266998341625207 else damEA.eta_default * damEA.ReC * sqrt(damEA.A) * damEA.facRouDuc
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8511};
  modelica_real tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  tmp121 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[351]] /* damEA.use_deltaM PARAM */);
  if(tmp121)
  {
    tmp122 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* damEA.deltaM PARAM */)) * (13.266998341625207);
  }
  else
  {
    tmp120 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* damEA.A PARAM */);
    if(!(tmp120 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damEA.A) was %g should be >= 0", tmp120);
      }
    }
    tmp122 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* damEA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* damEA.ReC PARAM */))) * (sqrt(tmp120))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* damEA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* damEA.m_flow_turbulent PARAM */) = tmp122;
  threadData->lastEquationSolved = 8511;
}

/*
equation index: 8521
type: SIMPLE_ASSIGN
damRet.cL[1] = (log(damRet.k0) + (-damRet.b) - damRet.a) / damRet.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8521};
  modelica_real tmp123;
  modelica_real tmp124;
  tmp123 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* damRet.k0 PARAM */);
  if(!(tmp123 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k0) was %g should be > 0", tmp123);
    }
  }tmp124 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damRet.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* damRet.cL[1] PARAM */) = DIVISION_SIM(log(tmp123) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */),(tmp124 * tmp124),"damRet.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 8521;
}

/*
equation index: 8522
type: SIMPLE_ASSIGN
damRet.cL[2] = (2.0 * damRet.b + (-2.0) * log(damRet.k0) + 2.0 * damRet.a - damRet.b * damRet.yL) / damRet.yL
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8522};
  modelica_real tmp125;
  tmp125 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* damRet.k0 PARAM */);
  if(!(tmp125 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k0) was %g should be > 0", tmp125);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* damRet.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */)) + (-2.0) * (log(tmp125)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damRet.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damRet.yL PARAM */),"damRet.yL",equationIndexes);
  threadData->lastEquationSolved = 8522;
}

/*
equation index: 8523
type: SIMPLE_ASSIGN
damRet.cL[3] = log(damRet.k0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8523};
  modelica_real tmp126;
  tmp126 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* damRet.k0 PARAM */);
  if(!(tmp126 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k0) was %g should be > 0", tmp126);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* damRet.cL[3] PARAM */) = log(tmp126);
  threadData->lastEquationSolved = 8523;
}

/*
equation index: 8524
type: SIMPLE_ASSIGN
damRet.cU[1] = (log(damRet.k1) - damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8524};
  modelica_real tmp127;
  modelica_real tmp128;
  tmp127 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* damRet.k1 PARAM */);
  if(!(tmp127 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k1) was %g should be > 0", tmp127);
    }
  }tmp128 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* damRet.cU[1] PARAM */) = DIVISION_SIM(log(tmp127) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */),1.0 + (tmp128 * tmp128) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 8524;
}

/*
equation index: 8525
type: SIMPLE_ASSIGN
damRet.cU[2] = (damRet.b * damRet.yU ^ 2.0 + 2.0 * log(damRet.k1) * damRet.yU + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b) / (-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8525};
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  tmp129 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */);
  tmp130 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* damRet.k1 PARAM */);
  if(!(tmp130 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k1) was %g should be > 0", tmp130);
    }
  }tmp131 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* damRet.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */)) * ((tmp129 * tmp129)) + (2.0) * ((log(tmp130)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */)) - ((tmp131 * tmp131)),"-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 8525;
}

/*
equation index: 8526
type: SIMPLE_ASSIGN
damRet.cU[3] = (damRet.yU ^ 2.0 * (log(damRet.k1) + damRet.b) + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b + damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8526};
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  tmp132 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */);
  tmp133 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* damRet.k1 PARAM */);
  if(!(tmp133 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k1) was %g should be > 0", tmp133);
    }
  }tmp134 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* damRet.cU[3] PARAM */) = DIVISION_SIM(((tmp132 * tmp132)) * (log(tmp133) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */),1.0 + (tmp134 * tmp134) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 8526;
}

/*
equation index: 8527
type: SIMPLE_ASSIGN
damRet.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8527};
  real_array tmp135;
  real_array tmp136;
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* damRet.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */), tmp135, tmp136, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */));
  threadData->lastEquationSolved = 8527;
}

/*
equation index: 8529
type: SIMPLE_ASSIGN
damRet.rho_default = 1.1843079200592153e-5 * damRet.sta_default.p
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damRet.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damRet.sta_default.p PARAM */));
  threadData->lastEquationSolved = 8529;
}

/*
equation index: 8530
type: SIMPLE_ASSIGN
damRet.A = 13.266998341625207 / (damRet.v_nominal * damRet.rho_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* damRet.A PARAM */) = DIVISION_SIM(13.266998341625207,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damRet.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damRet.rho_default PARAM */)),"damRet.v_nominal * damRet.rho_default",equationIndexes);
  threadData->lastEquationSolved = 8530;
}

/*
equation index: 8531
type: SIMPLE_ASSIGN
damRet.kDam_default = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / damRet.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8531};
  modelica_real tmp137;
  tmp137 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damRet.rho_default PARAM */);
  if(!(tmp137 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damRet.rho_default) was %g should be >= 0", tmp137);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* damRet.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp137)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* damRet.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* damRet.kThetaSqRt_default PARAM */),"damRet.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 8531;
}

/*
equation index: 8532
type: SIMPLE_ASSIGN
damRet.facRouDuc = if damRet.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* damRet.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[366]] /* damRet.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 8532;
}

/*
equation index: 8538
type: SIMPLE_ASSIGN
damRet.dp_nominal = (13.266998341625207 / damRet.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8538};
  modelica_real tmp138;
  tmp138 = DIVISION_SIM(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* damRet.kDam_default PARAM */),"damRet.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* damRet.dp_nominal PARAM */) = (tmp138 * tmp138);
  threadData->lastEquationSolved = 8538;
}

/*
equation index: 8539
type: SIMPLE_ASSIGN
damRet.dp_nominal_pos = abs(damRet.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* damRet.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* damRet.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8539;
}

/*
equation index: 8542
type: SIMPLE_ASSIGN
damRet.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damRet.sta_default.T
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8542};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* damRet.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* damRet.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8542;
}

/*
equation index: 8545
type: SIMPLE_ASSIGN
damRet.m_flow_turbulent = if damRet.use_deltaM then damRet.deltaM * 13.266998341625207 else damRet.eta_default * damRet.ReC * sqrt(damRet.A) * damRet.facRouDuc
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8545};
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  tmp140 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[369]] /* damRet.use_deltaM PARAM */);
  if(tmp140)
  {
    tmp141 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* damRet.deltaM PARAM */)) * (13.266998341625207);
  }
  else
  {
    tmp139 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* damRet.A PARAM */);
    if(!(tmp139 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damRet.A) was %g should be >= 0", tmp139);
      }
    }
    tmp141 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* damRet.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* damRet.ReC PARAM */))) * (sqrt(tmp139))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* damRet.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damRet.m_flow_turbulent PARAM */) = tmp141;
  threadData->lastEquationSolved = 8545;
}

/*
equation index: 8597
type: SIMPLE_ASSIGN
fanRet.eff.per.speeds_rpm[1] = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* fanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8597;
}

/*
equation index: 8598
type: SIMPLE_ASSIGN
fanRet.eff.per.constantSpeed_rpm = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8598};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* fanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8598;
}

/*
equation index: 8602
type: SIMPLE_ASSIGN
fanRet.eff.per.motorCooledByFluid = fanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8602};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[380]] /* fanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[387]] /* fanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 8602;
}

/*
equation index: 8603
type: SIMPLE_ASSIGN
fanRet.eff.per.power.P[1] = fanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* fanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* fanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 8603;
}

/*
equation index: 8604
type: SIMPLE_ASSIGN
fanRet.eff.per.power.V_flow[1] = fanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8604};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* fanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* fanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8604;
}

/*
equation index: 8605
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.eta[1] = fanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* fanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8605;
}

/*
equation index: 8606
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.V_flow[1] = fanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* fanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8606;
}

/*
equation index: 8607
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.eta[1] = fanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* fanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8607;
}

/*
equation index: 8608
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.V_flow[1] = fanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* fanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8608;
}

/*
equation index: 8621
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8621};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* fanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8621;
}

/*
equation index: 8622
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_start = fanRet.m_flow_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* fanRet.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* fanRet.m_flow_start PARAM */);
  threadData->lastEquationSolved = 8622;
}

/*
equation index: 8625
type: SIMPLE_ASSIGN
fanRet.vol.tau = fanRet.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* fanRet.tau PARAM */);
  threadData->lastEquationSolved = 8625;
}

/*
equation index: 8626
type: SIMPLE_ASSIGN
fanRet.vol.V_nominal = 13.266998341625207 * fanRet.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1350]] /* fanRet.vol.V_nominal PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 8626;
}

/*
equation index: 8644
type: SIMPLE_ASSIGN
fanRet.vol.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* fanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8644;
}

/*
equation index: 8645
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flow_small = fanRet.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* fanRet.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* fanRet.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8645;
}

/*
equation index: 8646
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaReg = 0.001 * fanRet.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* fanRet.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 8646;
}

/*
equation index: 8647
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaInvReg = 1.0 / fanRet.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */),"fanRet.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 8647;
}

/*
equation index: 8648
type: SIMPLE_ASSIGN
fanRet.vol.steBal.fReg = 104.0 * fanRet.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1377]] /* fanRet.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 8648;
}

/*
equation index: 8649
type: SIMPLE_ASSIGN
fanRet.vol.steBal.eReg = (-380.0) * fanRet.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* fanRet.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 8649;
}

/*
equation index: 8650
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dReg = 534.0 * fanRet.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8650};
  modelica_real tmp142;
  tmp142 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  tmp142 *= tmp142;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1373]] /* fanRet.vol.steBal.dReg PARAM */) = (534.0) * ((tmp142 * tmp142));
  threadData->lastEquationSolved = 8650;
}

/*
equation index: 8651
type: SIMPLE_ASSIGN
fanRet.vol.steBal.cReg = (-361.0) * fanRet.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8651};
  modelica_real tmp143;
  tmp143 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* fanRet.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp143 * tmp143 * tmp143));
  threadData->lastEquationSolved = 8651;
}

/*
equation index: 8652
type: SIMPLE_ASSIGN
fanRet.vol.steBal.bReg = 119.0 * fanRet.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8652};
  modelica_real tmp144;
  tmp144 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* fanRet.vol.steBal.bReg PARAM */) = (119.0) * ((tmp144 * tmp144));
  threadData->lastEquationSolved = 8652;
}

/*
equation index: 8653
type: SIMPLE_ASSIGN
fanRet.vol.steBal.aReg = (-15.0) * fanRet.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1369]] /* fanRet.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 8653;
}

/*
equation index: 8663
type: SIMPLE_ASSIGN
fanRet.vol.V = fanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8663};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* fanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1350]] /* fanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8663;
}

/*
equation index: 8669
type: SIMPLE_ASSIGN
fanRet.vol.X_start[2] = fanRet.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8669};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1352]] /* fanRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* fanRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8669;
}

/*
equation index: 8670
type: SIMPLE_ASSIGN
fanRet.vol.X_start[1] = fanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1351]] /* fanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* fanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8670;
}

/*
equation index: 8671
type: SIMPLE_ASSIGN
fanRet.vol.T_start = fanRet.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8671};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* fanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* fanRet.T_start PARAM */);
  threadData->lastEquationSolved = 8671;
}

/*
equation index: 8672
type: SIMPLE_ASSIGN
fanRet.vol.p_start = fanRet.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1356]] /* fanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* fanRet.p_start PARAM */);
  threadData->lastEquationSolved = 8672;
}

/*
equation index: 8693
type: SIMPLE_ASSIGN
fanRet.stageInputs[1] = fanRet.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* fanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* fanRet.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 8693;
}

/*
equation index: 8697
type: SIMPLE_ASSIGN
fanRet.per.speeds_rpm[1] = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* fanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8697;
}

/*
equation index: 8698
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed_rpm = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* fanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8698;
}

/*
equation index: 8699
type: SIMPLE_ASSIGN
fanRet.per.speeds[1] = fanRet.per.speeds_rpm[1] / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* fanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* fanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8699;
}

/*
equation index: 8700
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed = fanRet.per.constantSpeed_rpm / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* fanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* fanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8700;
}

/*
equation index: 8721
type: SIMPLE_ASSIGN
conPIDTAirSup.gainTrack.k = 1.0 / (conPIDTAirSup.Ni * conPIDTAirSup.k)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* conPIDTAirSup.gainTrack.k PARAM */) = DIVISION_SIM(1.0,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* conPIDTAirSup.Ni PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* conPIDTAirSup.k PARAM */)),"conPIDTAirSup.Ni * conPIDTAirSup.k",equationIndexes);
  threadData->lastEquationSolved = 8721;
}

/*
equation index: 8722
type: SIMPLE_ASSIGN
conPIDTAirSup.gainPID.k = conPIDTAirSup.k
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* conPIDTAirSup.gainPID.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* conPIDTAirSup.k PARAM */);
  threadData->lastEquationSolved = 8722;
}

/*
equation index: 8726
type: SIMPLE_ASSIGN
conPIDTAirSup.revAct = if conPIDTAirSup.reverseAction then -1.0 else 1.0
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[101]] /* conPIDTAirSup.reverseAction PARAM */)?-1.0:1.0);
  threadData->lastEquationSolved = 8726;
}

/*
equation index: 8727
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* conPIDTAirSup.addI.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 8727;
}

/*
equation index: 8728
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k1 = conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* conPIDTAirSup.addI.k1 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */);
  threadData->lastEquationSolved = 8728;
}

/*
equation index: 8739
type: SIMPLE_ASSIGN
conPIDTAirSup.I.k = 1.0 / conPIDTAirSup.Ti
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8739};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* conPIDTAirSup.I.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* conPIDTAirSup.Ti PARAM */),"conPIDTAirSup.Ti",equationIndexes);
  threadData->lastEquationSolved = 8739;
}

/*
equation index: 8740
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* conPIDTAirSup.addP.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 8740;
}

/*
equation index: 8741
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k1 = conPIDTAirSup.revAct * conPIDTAirSup.wp
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* conPIDTAirSup.addP.k1 PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* conPIDTAirSup.wp PARAM */));
  threadData->lastEquationSolved = 8741;
}

/*
equation index: 8764
type: SIMPLE_ASSIGN
vol.dynBal.X_start[1] = vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3603]] /* vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8764;
}

/*
equation index: 8765
type: SIMPLE_ASSIGN
vol.dynBal.hStart = 20120.0 * (1.0 - vol.dynBal.X_start[1]) + 2.5382145e6 * vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3611]] /* vol.dynBal.hStart PARAM */) = (20120.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */)) + (2.5382145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 8765;
}

/*
equation index: 8773
type: SIMPLE_ASSIGN
vol.dynBal.p_start = vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3613]] /* vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3624]] /* vol.p_start PARAM */);
  threadData->lastEquationSolved = 8773;
}

/*
equation index: 8774
type: SIMPLE_ASSIGN
vol.dynBal.rho_start = 1.1843079200592153e-5 * vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3615]] /* vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3613]] /* vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 8774;
}

/*
equation index: 8777
type: SIMPLE_ASSIGN
vol.V = rooLen * rooWid * rooHei
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3602]] /* vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2841]] /* rooLen PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2842]] /* rooWid PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* rooHei PARAM */)));
  threadData->lastEquationSolved = 8777;
}

/*
equation index: 8778
type: SIMPLE_ASSIGN
vol.dynBal.fluidVolume = vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3610]] /* vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3602]] /* vol.V PARAM */);
  threadData->lastEquationSolved = 8778;
}

/*
equation index: 8786
type: SIMPLE_ASSIGN
vol.dynBal.X_start[2] = vol.X_start[2]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3608]] /* vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3604]] /* vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8786;
}

/*
equation index: 8809
type: SIMPLE_ASSIGN
weaData.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3666]] /* weaData.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 8809;
}

/*
equation index: 8810
type: SIMPLE_ASSIGN
weaData.longitude.longitude = weaData.lon
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3666]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 8810;
}

/*
equation index: 8811
type: SIMPLE_ASSIGN
weaData.latitude.latitude = weaData.lat
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3662]] /* weaData.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3661]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 8811;
}

/*
equation index: 8812
type: SIMPLE_ASSIGN
weaData.datRea1.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3659]] /* weaData.datRea1.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 8812;
}

/*
equation index: 8813
type: SIMPLE_ASSIGN
weaData.datRea1.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3660]] /* weaData.datRea1.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 8813;
}

/*
equation index: 8820
type: SIMPLE_ASSIGN
weaData.datRea1.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8820};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* weaData.datRea1.tableName PARAM */) = _OMC_LIT95;
  threadData->lastEquationSolved = 8820;
}

/*
equation index: 8823
type: SIMPLE_ASSIGN
weaData.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3671]] /* weaData.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 8823;
}

/*
equation index: 8824
type: SIMPLE_ASSIGN
weaData.locTim.timZon = weaData.timZon
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3665]] /* weaData.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3671]] /* weaData.timZon PARAM */);
  threadData->lastEquationSolved = 8824;
}

/*
equation index: 8825
type: SIMPLE_ASSIGN
weaData.locTim.lon = weaData.lon
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3664]] /* weaData.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3666]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 8825;
}

/*
equation index: 8826
type: SIMPLE_ASSIGN
weaData.locTim.diff = 13750.987083139758 * weaData.locTim.lon - weaData.locTim.timZon
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3663]] /* weaData.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3664]] /* weaData.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3665]] /* weaData.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 8826;
}

/*
equation index: 8835
type: SIMPLE_ASSIGN
weaData.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3657]] /* weaData.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 8835;
}

/*
equation index: 8836
type: SIMPLE_ASSIGN
weaData.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3658]] /* weaData.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 8836;
}

/*
equation index: 8866
type: SIMPLE_ASSIGN
weaData.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8866};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* weaData.datRea.tableName PARAM */) = _OMC_LIT95;
  threadData->lastEquationSolved = 8866;
}

/*
equation index: 8869
type: ARRAY_CALL_ASSIGN

weaData.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaData.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8869};
  real_array tmp145;
  real_array_create(&tmp145, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3672]] /* weaData.timeSpan[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */), _OMC_LIT95), tmp145);
  threadData->lastEquationSolved = 8869;
}

/*
equation index: 8884
type: SIMPLE_ASSIGN
TCHWLeaCoi.ratTau = TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* TCHWLeaCoi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWLeaCoi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8884;
}

/*
equation index: 8885
type: SIMPLE_ASSIGN
TCHWLeaCoi.tauHeaTraInv = if TCHWLeaCoi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8885};
  modelica_boolean tmp146;
  tmp146 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWLeaCoi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* TCHWLeaCoi.tauHeaTraInv PARAM */) = (tmp146?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWLeaCoi.tauHeaTra PARAM */),"TCHWLeaCoi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8885;
}

/*
equation index: 8898
type: SIMPLE_ASSIGN
valByp.dp_nominal = 14930.0 + valByp.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3587]] /* valByp.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3586]] /* valByp.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 8898;
}

/*
equation index: 8899
type: SIMPLE_ASSIGN
valByp.dp_nominal_pos = abs(valByp.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3587]] /* valByp.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8899;
}

/*
equation index: 8903
type: SIMPLE_ASSIGN
valByp.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.valByp.Medium.dynamicViscosity(valByp.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8903};
  WaterCooledChillerExample_WaterCooledChillerExample7_valByp_Medium_ThermodynamicState tmp147;
  WaterCooledChillerExample_WaterCooledChillerExample7_valByp_Medium_ThermodynamicState_wrap_vars(threadData,tmp147, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3599]] /* valByp.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3598]] /* valByp.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3589]] /* valByp.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_valByp_Medium_dynamicViscosity(threadData, tmp147);
  threadData->lastEquationSolved = 8903;
}

/*
equation index: 8904
type: SIMPLE_ASSIGN
valByp.m_flow_turbulent = 4.761904761904762 * valByp.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8904};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3595]] /* valByp.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3584]] /* valByp.deltaM PARAM */));
  threadData->lastEquationSolved = 8904;
}

/*
equation index: 8914
type: SIMPLE_ASSIGN
TCWLeaTow.ratTau = TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8914};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* TCWLeaTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCWLeaTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8914;
}

/*
equation index: 8915
type: SIMPLE_ASSIGN
TCWLeaTow.tauHeaTraInv = if TCWLeaTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8915};
  modelica_boolean tmp148;
  tmp148 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCWLeaTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* TCWLeaTow.tauHeaTraInv PARAM */) = (tmp148?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCWLeaTow.tauHeaTra PARAM */),"TCWLeaTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8915;
}

/*
equation index: 8923
type: SIMPLE_ASSIGN
TCHWEntChi.ratTau = TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* TCHWEntChi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWEntChi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8923;
}

/*
equation index: 8924
type: SIMPLE_ASSIGN
TCHWEntChi.tauHeaTraInv = if TCHWEntChi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8924};
  modelica_boolean tmp149;
  tmp149 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWEntChi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* TCHWEntChi.tauHeaTraInv PARAM */) = (tmp149?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWEntChi.tauHeaTra PARAM */),"TCHWEntChi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8924;
}

/*
equation index: 8932
type: SIMPLE_ASSIGN
TAirSup.ratTau = TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TAirSup.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8932;
}

/*
equation index: 8933
type: SIMPLE_ASSIGN
TAirSup.tauHeaTraInv = if TAirSup.tauHeaTra < 1e-10 then 0.0 else 1.0 / TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8933};
  modelica_boolean tmp150;
  tmp150 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* TAirSup.tauHeaTraInv PARAM */) = (tmp150?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),"TAirSup.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8933;
}

/*
equation index: 8946
type: SIMPLE_ASSIGN
val6.dp_nominal = 104510.0 + val6.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3398]] /* val6.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3397]] /* val6.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 8946;
}

/*
equation index: 8947
type: SIMPLE_ASSIGN
val6.dp_nominal_pos = abs(val6.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3399]] /* val6.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3398]] /* val6.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8947;
}

/*
equation index: 8951
type: SIMPLE_ASSIGN
val6.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val6.Medium.dynamicViscosity(val6.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8951};
  WaterCooledChillerExample_WaterCooledChillerExample7_val6_Medium_ThermodynamicState tmp151;
  WaterCooledChillerExample_WaterCooledChillerExample7_val6_Medium_ThermodynamicState_wrap_vars(threadData,tmp151, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3410]] /* val6.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3409]] /* val6.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3400]] /* val6.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val6_Medium_dynamicViscosity(threadData, tmp151);
  threadData->lastEquationSolved = 8951;
}

/*
equation index: 8952
type: SIMPLE_ASSIGN
val6.m_flow_turbulent = 4.761904761904762 * val6.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8952};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* val6.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3395]] /* val6.deltaM PARAM */));
  threadData->lastEquationSolved = 8952;
}

/*
equation index: 8962
type: SIMPLE_ASSIGN
chi.TConEnt_nominal_degC = -273.15 + chi.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* chi.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* chi.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 8962;
}

/*
equation index: 8963
type: SIMPLE_ASSIGN
chi.QEva_flow_nominal = chi.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* chi.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* chi.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8963;
}

/*
equation index: 8964
type: SIMPLE_ASSIGN
chi.Q_flow_small = 1e-9 * chi.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* chi.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* chi.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8964;
}

/*
equation index: 8965
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal = chi.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* chi.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* chi.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 8965;
}

/*
equation index: 8966
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal_degC = -273.15 + chi.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* chi.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* chi.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 8966;
}

/*
equation index: 8967
type: SIMPLE_ASSIGN
chi.mCon_flow_nominal = chi.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* chi.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* chi.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8967;
}

/*
equation index: 8968
type: SIMPLE_ASSIGN
chi.mEva_flow_nominal = chi.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* chi.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* chi.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8968;
}

/*
equation index: 8969
type: SIMPLE_ASSIGN
chi.etaMotor = chi.per.etaMotor
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* chi.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* chi.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 8969;
}

/*
equation index: 8970
type: SIMPLE_ASSIGN
chi.PLRMin = chi.per.PLRMin
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* chi.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* chi.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 8970;
}

/*
equation index: 8971
type: SIMPLE_ASSIGN
chi.PLRMinUnl = chi.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* chi.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* chi.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 8971;
}

/*
equation index: 8972
type: SIMPLE_ASSIGN
chi.PLRMax = chi.per.PLRMax
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8972};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* chi.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* chi.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 8972;
}

/*
equation index: 8973
type: SIMPLE_ASSIGN
chi.COP_nominal = chi.per.COP_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* chi.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* chi.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 8973;
}

/*
equation index: 8976
type: SIMPLE_ASSIGN
chi.rho2_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.density(chi.sta2_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8976};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_ThermodynamicState tmp152;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp152, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* chi.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* chi.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* chi.rho2_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_density(threadData, tmp152);
  threadData->lastEquationSolved = 8976;
}

/*
equation index: 8979
type: SIMPLE_ASSIGN
chi.rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.density(chi.sta1_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8979};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_ThermodynamicState tmp153;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp153, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* chi.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* chi.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* chi.rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_density(threadData, tmp153);
  threadData->lastEquationSolved = 8979;
}

/*
equation index: 8988
type: SIMPLE_ASSIGN
chi.preDro2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi.preDro2.Medium.dynamicViscosity(chi.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8988};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro2_Medium_ThermodynamicState tmp154;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp154, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* chi.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* chi.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.preDro2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro2_Medium_dynamicViscosity(threadData, tmp154);
  threadData->lastEquationSolved = 8988;
}

/*
equation index: 9008
type: SIMPLE_ASSIGN
chi.preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi.preDro1.Medium.dynamicViscosity(chi.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9008};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro1_Medium_ThermodynamicState tmp155;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp155, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* chi.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* chi.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro1_Medium_dynamicViscosity(threadData, tmp155);
  threadData->lastEquationSolved = 9008;
}

/*
equation index: 9022
type: SIMPLE_ASSIGN
chi.vol2.T_start = chi.T2_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 9022;
}

/*
equation index: 9023
type: SIMPLE_ASSIGN
chi.vol2.state_start.T = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 9023;
}

/*
equation index: 9024
type: SIMPLE_ASSIGN
chi.vol2.p_start = chi.p2_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 9024;
}

/*
equation index: 9025
type: SIMPLE_ASSIGN
chi.vol2.state_start.p = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 9025;
}

/*
equation index: 9029
type: SIMPLE_ASSIGN
chi.vol2.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.Medium.density(chi.vol2.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9029};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_Medium_ThermodynamicState tmp156;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp156, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.vol2.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_Medium_density(threadData, tmp156);
  threadData->lastEquationSolved = 9029;
}

/*
equation index: 9030
type: SIMPLE_ASSIGN
chi.vol2.dynBal.p_start = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* chi.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 9030;
}

/*
equation index: 9031
type: SIMPLE_ASSIGN
chi.vol2.dynBal.T_start = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9031};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 9031;
}

/*
equation index: 9032
type: SIMPLE_ASSIGN
chi.vol2.X_start[1] = chi.X2_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9032};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* chi.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 9032;
}

/*
equation index: 9033
type: SIMPLE_ASSIGN
chi.vol2.dynBal.X_start[1] = chi.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9033};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* chi.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9033;
}

/*
equation index: 9034
type: SIMPLE_ASSIGN
chi.vol2.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.dynBal.Medium.specificEnthalpy_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, chi.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9034};
  real_array tmp157;
  real_array_create(&tmp157, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* chi.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* chi.vol2.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */), tmp157);
  threadData->lastEquationSolved = 9034;
}

/*
equation index: 9039
type: SIMPLE_ASSIGN
chi.vol2.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.dynBal.Medium.setState_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* chi.vol2.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9039;
}

/*
equation index: 9042
type: SIMPLE_ASSIGN
chi.vol2.V = 142.85714285714286 / chi.rho2_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.vol2.V PARAM */) = DIVISION_SIM(142.85714285714286,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* chi.rho2_nominal PARAM */),"chi.rho2_nominal",equationIndexes);
  threadData->lastEquationSolved = 9042;
}

/*
equation index: 9043
type: SIMPLE_ASSIGN
chi.vol2.dynBal.fluidVolume = chi.vol2.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* chi.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.vol2.V PARAM */);
  threadData->lastEquationSolved = 9043;
}

/*
equation index: 9066
type: SIMPLE_ASSIGN
chi.vol1.T_start = chi.T1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 9066;
}

/*
equation index: 9067
type: SIMPLE_ASSIGN
chi.vol1.state_start.T = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9067;
}

/*
equation index: 9068
type: SIMPLE_ASSIGN
chi.vol1.p_start = chi.p1_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* chi.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 9068;
}

/*
equation index: 9069
type: SIMPLE_ASSIGN
chi.vol1.state_start.p = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9069};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* chi.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9069;
}

/*
equation index: 9073
type: SIMPLE_ASSIGN
chi.vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.Medium.density(chi.vol1.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9073};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_Medium_ThermodynamicState tmp158;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp158, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* chi.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* chi.vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_Medium_density(threadData, tmp158);
  threadData->lastEquationSolved = 9073;
}

/*
equation index: 9074
type: SIMPLE_ASSIGN
chi.vol1.dynBal.p_start = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* chi.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9074;
}

/*
equation index: 9075
type: SIMPLE_ASSIGN
chi.vol1.dynBal.T_start = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9075;
}

/*
equation index: 9076
type: SIMPLE_ASSIGN
chi.vol1.X_start[1] = chi.X1_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* chi.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* chi.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 9076;
}

/*
equation index: 9077
type: SIMPLE_ASSIGN
chi.vol1.dynBal.X_start[1] = chi.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* chi.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* chi.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9077;
}

/*
equation index: 9078
type: SIMPLE_ASSIGN
chi.vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.dynBal.Medium.specificEnthalpy_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, chi.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9078};
  real_array tmp159;
  real_array_create(&tmp159, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* chi.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* chi.vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */), tmp159);
  threadData->lastEquationSolved = 9078;
}

/*
equation index: 9083
type: SIMPLE_ASSIGN
chi.vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.dynBal.Medium.setState_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* chi.vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9083;
}

/*
equation index: 9086
type: SIMPLE_ASSIGN
chi.vol1.V = 476.1904761904762 / chi.rho1_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.vol1.V PARAM */) = DIVISION_SIM(476.1904761904762,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* chi.rho1_nominal PARAM */),"chi.rho1_nominal",equationIndexes);
  threadData->lastEquationSolved = 9086;
}

/*
equation index: 9087
type: SIMPLE_ASSIGN
chi.vol1.dynBal.fluidVolume = chi.vol1.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* chi.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.vol1.V PARAM */);
  threadData->lastEquationSolved = 9087;
}

/*
equation index: 9128
type: SIMPLE_ASSIGN
expVesChi.state_start.p = expVesChi.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* expVesChi.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */);
  threadData->lastEquationSolved = 9128;
}

/*
equation index: 9129
type: SIMPLE_ASSIGN
expVesChi.state_start.T = expVesChi.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* expVesChi.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* expVesChi.T_start PARAM */);
  threadData->lastEquationSolved = 9129;
}

/*
equation index: 9130
type: SIMPLE_ASSIGN
expVesChi.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi.Medium.density(expVesChi.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9130};
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_ThermodynamicState tmp160;
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_ThermodynamicState_wrap_vars(threadData,tmp160, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* expVesChi.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* expVesChi.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* expVesChi.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_density(threadData, tmp160);
  threadData->lastEquationSolved = 9130;
}

/*
equation index: 9141
type: SIMPLE_ASSIGN
val1.dp_nominal = 14930.0 + val1.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3351]] /* val1.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3350]] /* val1.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 9141;
}

/*
equation index: 9142
type: SIMPLE_ASSIGN
val1.dp_nominal_pos = abs(val1.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3351]] /* val1.dp_nominal PARAM */));
  threadData->lastEquationSolved = 9142;
}

/*
equation index: 9146
type: SIMPLE_ASSIGN
val1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val1.Medium.dynamicViscosity(val1.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9146};
  WaterCooledChillerExample_WaterCooledChillerExample7_val1_Medium_ThermodynamicState tmp161;
  WaterCooledChillerExample_WaterCooledChillerExample7_val1_Medium_ThermodynamicState_wrap_vars(threadData,tmp161, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3363]] /* val1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* val1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3353]] /* val1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val1_Medium_dynamicViscosity(threadData, tmp161);
  threadData->lastEquationSolved = 9146;
}

/*
equation index: 9147
type: SIMPLE_ASSIGN
val1.m_flow_turbulent = 4.761904761904762 * val1.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3359]] /* val1.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3348]] /* val1.deltaM PARAM */));
  threadData->lastEquationSolved = 9147;
}

/*
equation index: 9162
type: SIMPLE_ASSIGN
val5.dp_nominal = 89580.0 + val5.dpValve_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3374]] /* val5.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3373]] /* val5.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 9162;
}

/*
equation index: 9163
type: SIMPLE_ASSIGN
val5.dp_nominal_pos = abs(val5.dp_nominal)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3375]] /* val5.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3374]] /* val5.dp_nominal PARAM */));
  threadData->lastEquationSolved = 9163;
}

/*
equation index: 9167
type: SIMPLE_ASSIGN
val5.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val5.Medium.dynamicViscosity(val5.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9167};
  WaterCooledChillerExample_WaterCooledChillerExample7_val5_Medium_ThermodynamicState tmp162;
  WaterCooledChillerExample_WaterCooledChillerExample7_val5_Medium_ThermodynamicState_wrap_vars(threadData,tmp162, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* val5.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3385]] /* val5.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3376]] /* val5.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val5_Medium_dynamicViscosity(threadData, tmp162);
  threadData->lastEquationSolved = 9167;
}

/*
equation index: 9168
type: SIMPLE_ASSIGN
val5.m_flow_turbulent = 15.873015873015873 * val5.deltaM
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3382]] /* val5.m_flow_turbulent PARAM */) = (15.873015873015873) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3371]] /* val5.deltaM PARAM */));
  threadData->lastEquationSolved = 9168;
}

/*
equation index: 9220
type: SIMPLE_ASSIGN
pumCW.eff.per.speeds_rpm[1] = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9220;
}

/*
equation index: 9221
type: SIMPLE_ASSIGN
pumCW.eff.per.constantSpeed_rpm = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* pumCW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9221;
}

/*
equation index: 9225
type: SIMPLE_ASSIGN
pumCW.eff.per.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9225};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[735]] /* pumCW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[744]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9225;
}

/*
equation index: 9226
type: SIMPLE_ASSIGN
pumCW.eff.per.power.P[1] = pumCW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2361]] /* pumCW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* pumCW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 9226;
}

/*
equation index: 9227
type: SIMPLE_ASSIGN
pumCW.eff.per.power.V_flow[1] = pumCW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2362]] /* pumCW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9227;
}

/*
equation index: 9228
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.eta[1] = pumCW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2395]] /* pumCW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9228;
}

/*
equation index: 9229
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.V_flow[1] = pumCW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9229;
}

/*
equation index: 9230
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.eta[1] = pumCW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9230;
}

/*
equation index: 9231
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.V_flow[1] = pumCW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2357]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* pumCW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9231;
}

/*
equation index: 9245
type: SIMPLE_ASSIGN
pumCW.heaDis.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9245};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[741]] /* pumCW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[744]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9245;
}

/*
equation index: 9251
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* pumCW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9251;
}

/*
equation index: 9252
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_start = pumCW.m_flow_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2410]] /* pumCW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* pumCW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 9252;
}

/*
equation index: 9255
type: SIMPLE_ASSIGN
pumCW.vol.tau = pumCW.tau
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2445]] /* pumCW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* pumCW.tau PARAM */);
  threadData->lastEquationSolved = 9255;
}

/*
equation index: 9256
type: SIMPLE_ASSIGN
pumCW.vol.V_nominal = 15.873015873015873 * pumCW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* pumCW.vol.V_nominal PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2445]] /* pumCW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 9256;
}

/*
equation index: 9259
type: SIMPLE_ASSIGN
pumCW.vol.T_start = pumCW.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* pumCW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2321]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 9259;
}

/*
equation index: 9260
type: SIMPLE_ASSIGN
pumCW.vol.state_start.T = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2443]] /* pumCW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9260;
}

/*
equation index: 9261
type: SIMPLE_ASSIGN
pumCW.vol.p_start = pumCW.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* pumCW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 9261;
}

/*
equation index: 9262
type: SIMPLE_ASSIGN
pumCW.vol.state_start.p = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2444]] /* pumCW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9262;
}

/*
equation index: 9266
type: SIMPLE_ASSIGN
pumCW.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.Medium.density(pumCW.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9266};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_Medium_ThermodynamicState tmp163;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp163, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2444]] /* pumCW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2443]] /* pumCW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2440]] /* pumCW.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_Medium_density(threadData, tmp163);
  threadData->lastEquationSolved = 9266;
}

/*
equation index: 9267
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.p_start = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* pumCW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9267;
}

/*
equation index: 9268
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.T_start = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9268};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9268;
}

/*
equation index: 9269
type: SIMPLE_ASSIGN
pumCW.vol.X_start[1] = pumCW.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2323]] /* pumCW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9269;
}

/*
equation index: 9270
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.X_start[1] = pumCW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* pumCW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9270;
}

/*
equation index: 9271
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, pumCW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9271};
  real_array tmp164;
  real_array_create(&tmp164, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* pumCW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* pumCW.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */), tmp164);
  threadData->lastEquationSolved = 9271;
}

/*
equation index: 9276
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.dynBal.Medium.setState_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2432]] /* pumCW.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9276;
}

/*
equation index: 9279
type: SIMPLE_ASSIGN
pumCW.vol.V = pumCW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* pumCW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 9279;
}

/*
equation index: 9280
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.fluidVolume = pumCW.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* pumCW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCW.vol.V PARAM */);
  threadData->lastEquationSolved = 9280;
}

/*
equation index: 9293
type: SIMPLE_ASSIGN
pumCW.vol.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* pumCW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9293;
}

/*
equation index: 9302
type: SIMPLE_ASSIGN
pumCW.sta_start.p = pumCW.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* pumCW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 9302;
}

/*
equation index: 9303
type: SIMPLE_ASSIGN
pumCW.sta_start.T = pumCW.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2321]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 9303;
}

/*
equation index: 9304
type: SIMPLE_ASSIGN
pumCW.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.Medium.specificEnthalpy(pumCW.sta_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9304};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_Medium_ThermodynamicState tmp165;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_Medium_ThermodynamicState_wrap_vars(threadData,tmp165, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* pumCW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* pumCW.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_Medium_specificEnthalpy(threadData, tmp165);
  threadData->lastEquationSolved = 9304;
}

/*
equation index: 9316
type: SIMPLE_ASSIGN
pumCW.stageInputs[1] = pumCW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2417]] /* pumCW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 9316;
}

/*
equation index: 9320
type: SIMPLE_ASSIGN
pumCW.per.speeds_rpm[1] = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9320;
}

/*
equation index: 9321
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed_rpm = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9321;
}

/*
equation index: 9322
type: SIMPLE_ASSIGN
pumCW.per.speeds[1] = pumCW.per.speeds_rpm[1] / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2404]] /* pumCW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9322;
}

/*
equation index: 9323
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed = pumCW.per.constantSpeed_rpm / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9323};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2390]] /* pumCW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9323;
}

/*
equation index: 9343
type: SIMPLE_ASSIGN
cooTow.rho_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.density(cooTow.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9343};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_ThermodynamicState tmp166;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp166, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* cooTow.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* cooTow.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooTow.rho_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_density(threadData, tmp166);
  threadData->lastEquationSolved = 9343;
}

/*
equation index: 9352
type: SIMPLE_ASSIGN
cooTow.preDro.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.preDro.Medium.dynamicViscosity(cooTow.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9352};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_preDro_Medium_ThermodynamicState tmp167;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp167, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* cooTow.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* cooTow.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* cooTow.preDro.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_preDro_Medium_dynamicViscosity(threadData, tmp167);
  threadData->lastEquationSolved = 9352;
}

/*
equation index: 9366
type: SIMPLE_ASSIGN
cooTow.vol.T_start = cooTow.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooTow.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[949]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 9366;
}

/*
equation index: 9367
type: SIMPLE_ASSIGN
cooTow.vol.state_start.T = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooTow.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9367;
}

/*
equation index: 9368
type: SIMPLE_ASSIGN
cooTow.vol.p_start = cooTow.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooTow.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 9368;
}

/*
equation index: 9369
type: SIMPLE_ASSIGN
cooTow.vol.state_start.p = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooTow.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9369;
}

/*
equation index: 9373
type: SIMPLE_ASSIGN
cooTow.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.Medium.density(cooTow.vol.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9373};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_ThermodynamicState tmp168;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp168, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooTow.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooTow.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* cooTow.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_density(threadData, tmp168);
  threadData->lastEquationSolved = 9373;
}

/*
equation index: 9374
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.p_start = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooTow.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9374;
}

/*
equation index: 9375
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.T_start = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9375};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooTow.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9375;
}

/*
equation index: 9376
type: SIMPLE_ASSIGN
cooTow.vol.X_start[1] = cooTow.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooTow.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[950]] /* cooTow.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9376;
}

/*
equation index: 9377
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.X_start[1] = cooTow.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooTow.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooTow.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9377;
}

/*
equation index: 9378
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, cooTow.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9378};
  real_array tmp169;
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooTow.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* cooTow.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooTow.vol.dynBal.T_start PARAM */), tmp169);
  threadData->lastEquationSolved = 9378;
}

/*
equation index: 9383
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.dynBal.Medium.setState_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooTow.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooTow.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9383;
}

/*
equation index: 9386
type: SIMPLE_ASSIGN
cooTow.vol.V = 15.873015873015873 * cooTow.tau / cooTow.rho_default
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooTow.vol.V PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooTow.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooTow.rho_default PARAM */),"cooTow.rho_default",equationIndexes));
  threadData->lastEquationSolved = 9386;
}

/*
equation index: 9387
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.fluidVolume = cooTow.vol.V
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooTow.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooTow.vol.V PARAM */);
  threadData->lastEquationSolved = 9387;
}

/*
equation index: 9422
type: SIMPLE_ASSIGN
expVesCHW.state_start.p = expVesCHW.p_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* expVesCHW.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */);
  threadData->lastEquationSolved = 9422;
}

/*
equation index: 9423
type: SIMPLE_ASSIGN
expVesCHW.state_start.T = expVesCHW.T_start
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* expVesCHW.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* expVesCHW.T_start PARAM */);
  threadData->lastEquationSolved = 9423;
}

/*
equation index: 9424
type: SIMPLE_ASSIGN
expVesCHW.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.expVesCHW.Medium.density(expVesCHW.state_start)
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9424};
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_ThermodynamicState tmp170;
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp170, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* expVesCHW.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* expVesCHW.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* expVesCHW.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_density(threadData, tmp170);
  threadData->lastEquationSolved = 9424;
}

/*
equation index: 9472
type: SIMPLE_ASSIGN
pumCHW.eff.per.speeds_rpm[1] = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2112]] /* pumCHW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2110]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9472;
}

/*
equation index: 9473
type: SIMPLE_ASSIGN
pumCHW.eff.per.constantSpeed_rpm = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2098]] /* pumCHW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2110]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9473;
}
OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7335,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7339,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7348,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7355,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7356,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7359,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7368,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7375,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7376,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7379,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7388,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7390,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7408,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7409,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7410,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7411,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7414,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7415,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7416,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7417,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7421,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7422,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7423,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7424,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7426,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7431,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7434,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7435,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7448,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7461,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7462,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7465,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7474,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7481,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7482,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7485,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7494,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7501,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7502,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7505,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7514,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7516,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7527,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7528,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7529,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7530,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7531,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7532,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7533,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7534,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7535,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7536,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7537,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7538,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7541,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7544,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7553,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7573,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7587,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7588,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7589,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7590,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7594,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7595,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7596,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7597,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7598,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7599,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7604,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7607,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7608,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7631,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7632,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7633,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7634,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7638,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7639,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7640,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7641,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7642,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7643,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7651,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7652,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7694,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7695,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7708,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7709,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7713,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7714,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7724,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7725,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7774,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7775,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7779,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7780,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7781,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7782,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7783,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7784,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7785,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7799,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7805,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7806,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7809,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7810,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7813,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7814,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7815,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7816,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7820,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7821,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7822,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7823,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7824,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7825,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7830,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7833,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7834,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7847,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7856,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7857,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7858,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7870,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7874,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7875,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7876,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7877,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7897,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7906,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7920,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7921,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7922,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7923,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7927,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7928,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7929,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7930,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7931,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7932,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7937,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7940,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7941,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7981,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7982,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7986,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7987,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8040,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8041,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8045,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8046,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8047,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8048,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8049,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8050,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8051,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8065,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8071,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8072,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8075,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8076,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8079,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8080,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8081,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8082,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8086,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8087,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8088,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8089,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8090,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8091,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8096,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8099,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8100,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8113,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8122,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8123,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8124,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8136,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8140,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8141,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8142,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8143,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8166,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8167,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8168,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8169,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8182,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8183,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8184,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8185,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8186,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8194,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8195,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8196,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8199,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8200,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8208,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8209,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8215,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8228,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8229,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8231,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8243,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8250,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8251,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8253,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8265,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8273,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8275,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8287,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8289,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8319,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8320,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8335,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8337,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8338,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8339,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8347,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8348,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8349,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8352,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8353,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8361,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8362,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8368,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8381,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8382,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8384,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8396,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8403,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8404,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8406,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8418,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8426,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8428,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8440,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8442,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8453,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8454,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8455,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8456,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8457,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8458,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8459,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8461,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8462,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8463,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8464,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8470,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8471,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8474,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8477,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8487,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8488,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8489,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8490,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8491,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8492,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8493,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8495,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8496,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8497,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8498,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8504,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8505,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8521,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8522,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8523,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8524,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8525,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8526,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8527,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8529,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8530,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8531,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8532,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8538,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8539,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8542,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8545,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8597,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8598,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8602,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8603,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8604,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8605,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8606,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8607,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8608,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8621,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8622,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8625,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8626,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8644,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8645,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8646,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8647,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8649,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8650,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8651,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8652,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8653,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8663,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8669,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8670,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8671,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8672,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8693,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8697,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8698,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8699,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8700,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8721,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8722,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8727,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8728,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8739,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8740,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8741,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8764,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8765,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8773,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8774,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8777,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8778,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8786,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8809,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8810,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8811,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8812,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8813,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8820,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8823,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8824,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8825,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8826,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8835,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8836,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8866,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8869,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8884,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8885,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8898,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8899,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8903,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8904,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8914,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8915,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8923,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8924,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8932,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8933,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8946,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8947,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8951,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8952,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8962,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8963,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8964,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8965,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8966,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8967,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8968,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8969,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8970,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8971,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8972,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8973,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8976,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8979,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8988,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9008,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9022,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9023,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9024,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9025,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9029,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9030,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9031,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9032,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9033,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9034,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9039,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9042,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9043,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9066,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9067,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9068,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9069,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9073,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9074,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9075,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9076,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9077,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9078,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9083,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9086,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9087,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9128,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9129,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9130,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9141,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9142,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9146,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9147,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9162,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9163,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9167,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9168,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9220,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9221,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9225,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9226,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9227,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9228,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9229,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9230,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9231,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9245,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9251,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9252,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9255,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9256,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9259,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9260,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9261,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9262,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9266,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9267,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9268,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9269,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9270,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9271,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9276,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9279,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9280,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9293,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9302,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9303,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9304,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9316,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9320,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9323,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9343,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9352,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9366,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9367,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9368,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9369,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9373,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9374,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9375,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9376,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9377,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9378,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9383,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9386,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9387,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9422,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9423,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9424,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9472,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9473
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif