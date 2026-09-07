#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 7337
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal = junCHWRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* junCHWRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* junCHWRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 7337;
}

/*
equation index: 7338
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal_pos = abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1574]] /* junCHWRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* junCHWRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7338;
}

/*
equation index: 7341
type: SIMPLE_ASSIGN
junCHWRet.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.res3.Medium.dynamicViscosity(junCHWRet.res3.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7341};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res3_Medium_ThermodynamicState tmp55;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp55, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1578]] /* junCHWRet.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1577]] /* junCHWRet.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1571]] /* junCHWRet.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res3_Medium_dynamicViscosity(threadData, tmp55);
  threadData->lastEquationSolved = 7341;
}

/*
equation index: 7350
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_small = 1e-4 * abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1575]] /* junCHWRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* junCHWRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7350;
}

/*
equation index: 7357
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal = junCHWRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* junCHWRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* junCHWRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 7357;
}

/*
equation index: 7358
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal_pos = abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7358};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1560]] /* junCHWRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* junCHWRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7358;
}

/*
equation index: 7361
type: SIMPLE_ASSIGN
junCHWRet.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.res2.Medium.dynamicViscosity(junCHWRet.res2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7361};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res2_Medium_ThermodynamicState tmp56;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp56, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1564]] /* junCHWRet.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1563]] /* junCHWRet.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1557]] /* junCHWRet.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res2_Medium_dynamicViscosity(threadData, tmp56);
  threadData->lastEquationSolved = 7361;
}

/*
equation index: 7370
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_small = 1e-4 * abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1561]] /* junCHWRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* junCHWRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7370;
}

/*
equation index: 7377
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal = junCHWRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* junCHWRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* junCHWRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 7377;
}

/*
equation index: 7378
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal_pos = abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1546]] /* junCHWRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* junCHWRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7378;
}

/*
equation index: 7381
type: SIMPLE_ASSIGN
junCHWRet.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWRet.res1.Medium.dynamicViscosity(junCHWRet.res1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7381};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res1_Medium_ThermodynamicState tmp57;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp57, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1550]] /* junCHWRet.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1549]] /* junCHWRet.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1543]] /* junCHWRet.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWRet_res1_Medium_dynamicViscosity(threadData, tmp57);
  threadData->lastEquationSolved = 7381;
}

/*
equation index: 7390
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_small = 1e-4 * abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1547]] /* junCHWRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* junCHWRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7390;
}

/*
equation index: 7392
type: SIMPLE_ASSIGN
junCHWRet.m_flow_small = 1e-4 * junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1535]] /* junCHWRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* junCHWRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7392;
}

/*
equation index: 7410
type: SIMPLE_ASSIGN
junCHWSup.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup.m_flow_nominal[1]) + abs(junCHWSup.m_flow_nominal[2]) + abs(junCHWSup.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWSup.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWSup.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWSup.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWSup.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 7410;
}

/*
equation index: 7411
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_nominal = junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWSup.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWSup.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7411;
}

/*
equation index: 7412
type: SIMPLE_ASSIGN
junCHWSup.vol.tau = junCHWSup.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* junCHWSup.tau PARAM */);
  threadData->lastEquationSolved = 7412;
}

/*
equation index: 7413
type: SIMPLE_ASSIGN
junCHWSup.vol.V_nominal = 0.0010044335697769957 * junCHWSup.vol.m_flow_nominal * junCHWSup.vol.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWSup.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWSup.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWSup.vol.tau PARAM */)));
  threadData->lastEquationSolved = 7413;
}

/*
equation index: 7416
type: SIMPLE_ASSIGN
junCHWSup.vol.T_start = junCHWSup.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWSup.T_start PARAM */);
  threadData->lastEquationSolved = 7416;
}

/*
equation index: 7417
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.T = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7417;
}

/*
equation index: 7418
type: SIMPLE_ASSIGN
junCHWSup.vol.p_start = junCHWSup.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWSup.p_start PARAM */);
  threadData->lastEquationSolved = 7418;
}

/*
equation index: 7419
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.p = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7419;
}

/*
equation index: 7423
type: SIMPLE_ASSIGN
junCHWSup.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.Medium.density(junCHWSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7423};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_Medium_ThermodynamicState tmp58;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp58, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWSup.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_Medium_density(threadData, tmp58);
  threadData->lastEquationSolved = 7423;
}

/*
equation index: 7424
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.p_start = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7424;
}

/*
equation index: 7425
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.T_start = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7425;
}

/*
equation index: 7426
type: SIMPLE_ASSIGN
junCHWSup.vol.X_start[1] = junCHWSup.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1749]] /* junCHWSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7426;
}

/*
equation index: 7427
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.X_start[1] = junCHWSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1749]] /* junCHWSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7427;
}

/*
equation index: 7428
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, junCHWSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7428};
  real_array tmp59;
  real_array_create(&tmp59, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWSup.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */), tmp59);
  threadData->lastEquationSolved = 7428;
}

/*
equation index: 7433
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.vol.dynBal.Medium.setState_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWSup.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7433;
}

/*
equation index: 7436
type: SIMPLE_ASSIGN
junCHWSup.vol.V = junCHWSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* junCHWSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7436;
}

/*
equation index: 7437
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.fluidVolume = junCHWSup.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1747]] /* junCHWSup.vol.V PARAM */);
  threadData->lastEquationSolved = 7437;
}

/*
equation index: 7450
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_small = 1e-4 * abs(junCHWSup.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWSup.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWSup.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7450;
}

/*
equation index: 7463
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal = junCHWSup.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWSup.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWSup.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 7463;
}

/*
equation index: 7464
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal_pos = abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1740]] /* junCHWSup.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWSup.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7464;
}

/*
equation index: 7467
type: SIMPLE_ASSIGN
junCHWSup.res3.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.res3.Medium.dynamicViscosity(junCHWSup.res3.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7467};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res3_Medium_ThermodynamicState tmp60;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp60, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1744]] /* junCHWSup.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWSup.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1737]] /* junCHWSup.res3.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res3_Medium_dynamicViscosity(threadData, tmp60);
  threadData->lastEquationSolved = 7467;
}

/*
equation index: 7476
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_small = 1e-4 * abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWSup.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWSup.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7476;
}

/*
equation index: 7483
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal = junCHWSup.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWSup.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWSup.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 7483;
}

/*
equation index: 7484
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal_pos = abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1726]] /* junCHWSup.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWSup.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7484;
}

/*
equation index: 7487
type: SIMPLE_ASSIGN
junCHWSup.res2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.res2.Medium.dynamicViscosity(junCHWSup.res2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7487};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res2_Medium_ThermodynamicState tmp61;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp61, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1730]] /* junCHWSup.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWSup.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1723]] /* junCHWSup.res2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res2_Medium_dynamicViscosity(threadData, tmp61);
  threadData->lastEquationSolved = 7487;
}

/*
equation index: 7496
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_small = 1e-4 * abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWSup.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWSup.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7496;
}

/*
equation index: 7503
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal = junCHWSup.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWSup.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWSup.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 7503;
}

/*
equation index: 7504
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal_pos = abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWSup.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWSup.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7504;
}

/*
equation index: 7507
type: SIMPLE_ASSIGN
junCHWSup.res1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.junCHWSup.res1.Medium.dynamicViscosity(junCHWSup.res1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7507};
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res1_Medium_ThermodynamicState tmp62;
  WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp62, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* junCHWSup.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWSup.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1709]] /* junCHWSup.res1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_junCHWSup_res1_Medium_dynamicViscosity(threadData, tmp62);
  threadData->lastEquationSolved = 7507;
}

/*
equation index: 7516
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_small = 1e-4 * abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWSup.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWSup.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7516;
}

/*
equation index: 7518
type: SIMPLE_ASSIGN
junCHWSup.m_flow_small = 1e-4 * junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWSup.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWSup.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7518;
}

/*
equation index: 7529
type: SIMPLE_ASSIGN
chi2.TConEnt_nominal_degC = -273.15 + chi2.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi2.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* chi2.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 7529;
}

/*
equation index: 7530
type: SIMPLE_ASSIGN
chi2.QEva_flow_nominal = chi2.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi2.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* chi2.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7530;
}

/*
equation index: 7531
type: SIMPLE_ASSIGN
chi2.Q_flow_small = 1e-9 * chi2.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* chi2.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi2.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7531;
}

/*
equation index: 7532
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal = chi2.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi2.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* chi2.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 7532;
}

/*
equation index: 7533
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal_degC = -273.15 + chi2.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* chi2.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi2.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 7533;
}

/*
equation index: 7534
type: SIMPLE_ASSIGN
chi2.mCon_flow_nominal = chi2.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* chi2.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi2.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7534;
}

/*
equation index: 7535
type: SIMPLE_ASSIGN
chi2.mEva_flow_nominal = chi2.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi2.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi2.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7535;
}

/*
equation index: 7536
type: SIMPLE_ASSIGN
chi2.etaMotor = chi2.per.etaMotor
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi2.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* chi2.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 7536;
}

/*
equation index: 7537
type: SIMPLE_ASSIGN
chi2.PLRMin = chi2.per.PLRMin
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* chi2.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi2.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 7537;
}

/*
equation index: 7538
type: SIMPLE_ASSIGN
chi2.PLRMinUnl = chi2.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* chi2.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* chi2.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 7538;
}

/*
equation index: 7539
type: SIMPLE_ASSIGN
chi2.PLRMax = chi2.per.PLRMax
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* chi2.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[239]] /* chi2.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 7539;
}

/*
equation index: 7540
type: SIMPLE_ASSIGN
chi2.COP_nominal = chi2.per.COP_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi2.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[229]] /* chi2.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 7540;
}

/*
equation index: 7543
type: SIMPLE_ASSIGN
chi2.rho2_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.density(chi2.sta2_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7543};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_ThermodynamicState tmp63;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp63, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* chi2.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[292]] /* chi2.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* chi2.rho2_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_density(threadData, tmp63);
  threadData->lastEquationSolved = 7543;
}

/*
equation index: 7546
type: SIMPLE_ASSIGN
chi2.rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.density(chi2.sta1_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7546};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_ThermodynamicState tmp64;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp64, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[289]] /* chi2.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[288]] /* chi2.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* chi2.rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_density(threadData, tmp64);
  threadData->lastEquationSolved = 7546;
}

/*
equation index: 7555
type: SIMPLE_ASSIGN
chi2.preDro2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.preDro2.Medium.dynamicViscosity(chi2.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7555};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro2_Medium_ThermodynamicState tmp65;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp65, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* chi2.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* chi2.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.preDro2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro2_Medium_dynamicViscosity(threadData, tmp65);
  threadData->lastEquationSolved = 7555;
}

/*
equation index: 7575
type: SIMPLE_ASSIGN
chi2.preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.preDro1.Medium.dynamicViscosity(chi2.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7575};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro1_Medium_ThermodynamicState tmp66;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp66, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[271]] /* chi2.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* chi2.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_preDro1_Medium_dynamicViscosity(threadData, tmp66);
  threadData->lastEquationSolved = 7575;
}

/*
equation index: 7589
type: SIMPLE_ASSIGN
chi2.vol2.T_start = chi2.T2_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 7589;
}

/*
equation index: 7590
type: SIMPLE_ASSIGN
chi2.vol2.state_start.T = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7590;
}

/*
equation index: 7591
type: SIMPLE_ASSIGN
chi2.vol2.p_start = chi2.p2_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 7591;
}

/*
equation index: 7592
type: SIMPLE_ASSIGN
chi2.vol2.state_start.p = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7592;
}

/*
equation index: 7596
type: SIMPLE_ASSIGN
chi2.vol2.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.Medium.density(chi2.vol2.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7596};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_Medium_ThermodynamicState tmp67;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp67, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.vol2.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_Medium_density(threadData, tmp67);
  threadData->lastEquationSolved = 7596;
}

/*
equation index: 7597
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.p_start = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* chi2.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7597;
}

/*
equation index: 7598
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.T_start = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7598};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7598;
}

/*
equation index: 7599
type: SIMPLE_ASSIGN
chi2.vol2.X_start[1] = chi2.X2_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7599};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi2.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 7599;
}

/*
equation index: 7600
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.X_start[1] = chi2.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7600};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* chi2.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7600;
}

/*
equation index: 7601
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.dynBal.Medium.specificEnthalpy_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, chi2.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7601};
  real_array tmp68;
  real_array_create(&tmp68, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* chi2.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[331]] /* chi2.vol2.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */), tmp68);
  threadData->lastEquationSolved = 7601;
}

/*
equation index: 7606
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol2.dynBal.Medium.setState_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* chi2.vol2.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[333]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7606;
}

/*
equation index: 7609
type: SIMPLE_ASSIGN
chi2.vol2.V = 142.85714285714286 / chi2.rho2_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.vol2.V PARAM */) = DIVISION_SIM(142.85714285714286,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* chi2.rho2_nominal PARAM */),"chi2.rho2_nominal",equationIndexes);
  threadData->lastEquationSolved = 7609;
}

/*
equation index: 7610
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.fluidVolume = chi2.vol2.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* chi2.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.vol2.V PARAM */);
  threadData->lastEquationSolved = 7610;
}

/*
equation index: 7633
type: SIMPLE_ASSIGN
chi2.vol1.T_start = chi2.T1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 7633;
}

/*
equation index: 7634
type: SIMPLE_ASSIGN
chi2.vol1.state_start.T = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7634};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7634;
}

/*
equation index: 7635
type: SIMPLE_ASSIGN
chi2.vol1.p_start = chi2.p1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* chi2.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[227]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 7635;
}

/*
equation index: 7636
type: SIMPLE_ASSIGN
chi2.vol1.state_start.p = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* chi2.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7636;
}

/*
equation index: 7640
type: SIMPLE_ASSIGN
chi2.vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.Medium.density(chi2.vol1.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7640};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_Medium_ThermodynamicState tmp69;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp69, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* chi2.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* chi2.vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_Medium_density(threadData, tmp69);
  threadData->lastEquationSolved = 7640;
}

/*
equation index: 7641
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.p_start = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* chi2.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7641;
}

/*
equation index: 7642
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.T_start = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7642};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7642;
}

/*
equation index: 7643
type: SIMPLE_ASSIGN
chi2.vol1.X_start[1] = chi2.X1_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* chi2.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi2.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7643;
}

/*
equation index: 7644
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.X_start[1] = chi2.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* chi2.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[300]] /* chi2.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7644;
}

/*
equation index: 7645
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.dynBal.Medium.specificEnthalpy_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, chi2.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7645};
  real_array tmp70;
  real_array_create(&tmp70, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* chi2.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* chi2.vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */), tmp70);
  threadData->lastEquationSolved = 7645;
}

/*
equation index: 7650
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.vol1.dynBal.Medium.setState_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* chi2.vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7650;
}

/*
equation index: 7653
type: SIMPLE_ASSIGN
chi2.vol1.V = 476.1904761904762 / chi2.rho1_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.vol1.V PARAM */) = DIVISION_SIM(476.1904761904762,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* chi2.rho1_nominal PARAM */),"chi2.rho1_nominal",equationIndexes);
  threadData->lastEquationSolved = 7653;
}

/*
equation index: 7654
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.fluidVolume = chi2.vol1.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* chi2.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.vol1.V PARAM */);
  threadData->lastEquationSolved = 7654;
}

/*
equation index: 7696
type: SIMPLE_ASSIGN
TWCLeaTow2.ratTau = TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* TWCLeaTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TWCLeaTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 7696;
}

/*
equation index: 7697
type: SIMPLE_ASSIGN
TWCLeaTow2.tauHeaTraInv = if TWCLeaTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7697};
  modelica_boolean tmp71;
  tmp71 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TWCLeaTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* TWCLeaTow2.tauHeaTraInv PARAM */) = (tmp71?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TWCLeaTow2.tauHeaTra PARAM */),"TWCLeaTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7697;
}

/*
equation index: 7710
type: SIMPLE_ASSIGN
val7.dp_nominal = 89580.0 + val7.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3422]] /* val7.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3421]] /* val7.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 7710;
}

/*
equation index: 7711
type: SIMPLE_ASSIGN
val7.dp_nominal_pos = abs(val7.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3423]] /* val7.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3422]] /* val7.dp_nominal PARAM */));
  threadData->lastEquationSolved = 7711;
}

/*
equation index: 7715
type: SIMPLE_ASSIGN
val7.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val7.Medium.dynamicViscosity(val7.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7715};
  WaterCooledChillerExample_WaterCooledChillerExample7_val7_Medium_ThermodynamicState tmp72;
  WaterCooledChillerExample_WaterCooledChillerExample7_val7_Medium_ThermodynamicState_wrap_vars(threadData,tmp72, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3434]] /* val7.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3433]] /* val7.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3424]] /* val7.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val7_Medium_dynamicViscosity(threadData, tmp72);
  threadData->lastEquationSolved = 7715;
}

/*
equation index: 7716
type: SIMPLE_ASSIGN
val7.m_flow_turbulent = 15.873015873015873 * val7.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3430]] /* val7.m_flow_turbulent PARAM */) = (15.873015873015873) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3419]] /* val7.deltaM PARAM */));
  threadData->lastEquationSolved = 7716;
}

/*
equation index: 7726
type: SIMPLE_ASSIGN
expVesChi2.state_start.p = expVesChi2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* expVesChi2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */);
  threadData->lastEquationSolved = 7726;
}

/*
equation index: 7727
type: SIMPLE_ASSIGN
expVesChi2.state_start.T = expVesChi2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* expVesChi2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* expVesChi2.T_start PARAM */);
  threadData->lastEquationSolved = 7727;
}

/*
equation index: 7728
type: SIMPLE_ASSIGN
expVesChi2.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi2.Medium.density(expVesChi2.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7728};
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_ThermodynamicState tmp73;
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_ThermodynamicState_wrap_vars(threadData,tmp73, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* expVesChi2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* expVesChi2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* expVesChi2.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_density(threadData, tmp73);
  threadData->lastEquationSolved = 7728;
}

/*
equation index: 7776
type: SIMPLE_ASSIGN
pumCW2.eff.per.speeds_rpm[1] = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7776;
}

/*
equation index: 7777
type: SIMPLE_ASSIGN
pumCW2.eff.per.constantSpeed_rpm = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* pumCW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7777;
}

/*
equation index: 7781
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7781};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[774]] /* pumCW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[783]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7781;
}

/*
equation index: 7782
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.P[1] = pumCW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2489]] /* pumCW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* pumCW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 7782;
}

/*
equation index: 7783
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.V_flow[1] = pumCW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7783};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2490]] /* pumCW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7783;
}

/*
equation index: 7784
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.eta[1] = pumCW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2523]] /* pumCW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7784;
}

/*
equation index: 7785
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.V_flow[1] = pumCW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7785};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7785;
}

/*
equation index: 7786
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.eta[1] = pumCW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7786;
}

/*
equation index: 7787
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* pumCW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7787;
}

/*
equation index: 7801
type: SIMPLE_ASSIGN
pumCW2.heaDis.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7801};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[780]] /* pumCW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[783]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7801;
}

/*
equation index: 7807
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* pumCW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7807;
}

/*
equation index: 7808
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_start = pumCW2.m_flow_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* pumCW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* pumCW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 7808;
}

/*
equation index: 7811
type: SIMPLE_ASSIGN
pumCW2.vol.tau = pumCW2.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2573]] /* pumCW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* pumCW2.tau PARAM */);
  threadData->lastEquationSolved = 7811;
}

/*
equation index: 7812
type: SIMPLE_ASSIGN
pumCW2.vol.V_nominal = 15.873015873015873 * pumCW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* pumCW2.vol.V_nominal PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2573]] /* pumCW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 7812;
}

/*
equation index: 7815
type: SIMPLE_ASSIGN
pumCW2.vol.T_start = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* pumCW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 7815;
}

/*
equation index: 7816
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.T = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* pumCW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7816;
}

/*
equation index: 7817
type: SIMPLE_ASSIGN
pumCW2.vol.p_start = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* pumCW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 7817;
}

/*
equation index: 7818
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.p = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* pumCW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7818;
}

/*
equation index: 7822
type: SIMPLE_ASSIGN
pumCW2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.Medium.density(pumCW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7822};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_Medium_ThermodynamicState tmp74;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp74, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2572]] /* pumCW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2571]] /* pumCW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2568]] /* pumCW2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_Medium_density(threadData, tmp74);
  threadData->lastEquationSolved = 7822;
}

/*
equation index: 7823
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.p_start = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* pumCW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2566]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7823;
}

/*
equation index: 7824
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.T_start = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2547]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7824;
}

/*
equation index: 7825
type: SIMPLE_ASSIGN
pumCW2.vol.X_start[1] = pumCW2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2451]] /* pumCW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7825;
}

/*
equation index: 7826
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.X_start[1] = pumCW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* pumCW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7826;
}

/*
equation index: 7827
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, pumCW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7827};
  real_array tmp75;
  real_array_create(&tmp75, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* pumCW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2556]] /* pumCW2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */), tmp75);
  threadData->lastEquationSolved = 7827;
}

/*
equation index: 7832
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.vol.dynBal.Medium.setState_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2560]] /* pumCW2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2558]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7832;
}

/*
equation index: 7835
type: SIMPLE_ASSIGN
pumCW2.vol.V = pumCW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* pumCW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 7835;
}

/*
equation index: 7836
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.fluidVolume = pumCW2.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2555]] /* pumCW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW2.vol.V PARAM */);
  threadData->lastEquationSolved = 7836;
}

/*
equation index: 7849
type: SIMPLE_ASSIGN
pumCW2.vol.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2565]] /* pumCW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7849;
}

/*
equation index: 7858
type: SIMPLE_ASSIGN
pumCW2.sta_start.p = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7858};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* pumCW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 7858;
}

/*
equation index: 7859
type: SIMPLE_ASSIGN
pumCW2.sta_start.T = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7859};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2449]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 7859;
}

/*
equation index: 7860
type: SIMPLE_ASSIGN
pumCW2.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.Medium.specificEnthalpy(pumCW2.sta_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7860};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_Medium_ThermodynamicState tmp76;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp76, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* pumCW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* pumCW2.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_Medium_specificEnthalpy(threadData, tmp76);
  threadData->lastEquationSolved = 7860;
}

/*
equation index: 7872
type: SIMPLE_ASSIGN
pumCW2.stageInputs[1] = pumCW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* pumCW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 7872;
}

/*
equation index: 7876
type: SIMPLE_ASSIGN
pumCW2.per.speeds_rpm[1] = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7876;
}

/*
equation index: 7877
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed_rpm = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7877;
}

/*
equation index: 7878
type: SIMPLE_ASSIGN
pumCW2.per.speeds[1] = pumCW2.per.speeds_rpm[1] / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7878};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* pumCW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7878;
}

/*
equation index: 7879
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed = pumCW2.per.constantSpeed_rpm / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7879};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2518]] /* pumCW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2531]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 7879;
}

/*
equation index: 7899
type: SIMPLE_ASSIGN
cooTow2.rho_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.density(cooTow2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7899};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_ThermodynamicState tmp77;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp77, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* cooTow2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1078]] /* cooTow2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow2.rho_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_density(threadData, tmp77);
  threadData->lastEquationSolved = 7899;
}

/*
equation index: 7908
type: SIMPLE_ASSIGN
cooTow2.preDro.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.preDro.Medium.dynamicViscosity(cooTow2.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7908};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_preDro_Medium_ThermodynamicState tmp78;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow2.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* cooTow2.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow2.preDro.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_preDro_Medium_dynamicViscosity(threadData, tmp78);
  threadData->lastEquationSolved = 7908;
}

/*
equation index: 7922
type: SIMPLE_ASSIGN
cooTow2.vol.T_start = cooTow2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7922};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 7922;
}

/*
equation index: 7923
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.T = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7923;
}

/*
equation index: 7924
type: SIMPLE_ASSIGN
cooTow2.vol.p_start = cooTow2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7924};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 7924;
}

/*
equation index: 7925
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.p = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7925;
}

/*
equation index: 7929
type: SIMPLE_ASSIGN
cooTow2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.Medium.density(cooTow2.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7929};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_ThermodynamicState tmp79;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp79, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_density(threadData, tmp79);
  threadData->lastEquationSolved = 7929;
}

/*
equation index: 7930
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.p_start = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 7930;
}

/*
equation index: 7931
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.T_start = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 7931;
}

/*
equation index: 7932
type: SIMPLE_ASSIGN
cooTow2.vol.X_start[1] = cooTow2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* cooTow2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7932;
}

/*
equation index: 7933
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.X_start[1] = cooTow2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7933;
}

/*
equation index: 7934
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, cooTow2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7934};
  real_array tmp80;
  real_array_create(&tmp80, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* cooTow2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow2.vol.dynBal.T_start PARAM */), tmp80);
  threadData->lastEquationSolved = 7934;
}

/*
equation index: 7939
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.dynBal.Medium.setState_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* cooTow2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 7939;
}

/*
equation index: 7942
type: SIMPLE_ASSIGN
cooTow2.vol.V = 15.873015873015873 * cooTow2.tau / cooTow2.rho_default
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* cooTow2.vol.V PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* cooTow2.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow2.rho_default PARAM */),"cooTow2.rho_default",equationIndexes));
  threadData->lastEquationSolved = 7942;
}

/*
equation index: 7943
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.fluidVolume = cooTow2.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7943};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* cooTow2.vol.V PARAM */);
  threadData->lastEquationSolved = 7943;
}

/*
equation index: 7983
type: SIMPLE_ASSIGN
val8.dp_nominal = 104510.0 + val8.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3446]] /* val8.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3445]] /* val8.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 7983;
}

/*
equation index: 7984
type: SIMPLE_ASSIGN
val8.dp_nominal_pos = abs(val8.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7984};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3446]] /* val8.dp_nominal PARAM */));
  threadData->lastEquationSolved = 7984;
}

/*
equation index: 7988
type: SIMPLE_ASSIGN
val8.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val8.Medium.dynamicViscosity(val8.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7988};
  WaterCooledChillerExample_WaterCooledChillerExample7_val8_Medium_ThermodynamicState tmp81;
  WaterCooledChillerExample_WaterCooledChillerExample7_val8_Medium_ThermodynamicState_wrap_vars(threadData,tmp81, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3458]] /* val8.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3457]] /* val8.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3448]] /* val8.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val8_Medium_dynamicViscosity(threadData, tmp81);
  threadData->lastEquationSolved = 7988;
}

/*
equation index: 7989
type: SIMPLE_ASSIGN
val8.m_flow_turbulent = 4.761904761904762 * val8.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_7989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* val8.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3443]] /* val8.deltaM PARAM */));
  threadData->lastEquationSolved = 7989;
}

/*
equation index: 8042
type: SIMPLE_ASSIGN
pumCHW2.eff.per.speeds_rpm[1] = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2240]] /* pumCHW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8042;
}

/*
equation index: 8043
type: SIMPLE_ASSIGN
pumCHW2.eff.per.constantSpeed_rpm = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2226]] /* pumCHW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8043;
}

/*
equation index: 8047
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8047};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[696]] /* pumCHW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[705]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 8047;
}

/*
equation index: 8048
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.P[1] = pumCHW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8048};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2231]] /* pumCHW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 8048;
}

/*
equation index: 8049
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.V_flow[1] = pumCHW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8049};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2232]] /* pumCHW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* pumCHW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8049;
}

/*
equation index: 8050
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.eta[1] = pumCHW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8050;
}

/*
equation index: 8051
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.V_flow[1] = pumCHW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8051};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2229]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* pumCHW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8051;
}

/*
equation index: 8052
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.eta[1] = pumCHW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2228]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8052;
}

/*
equation index: 8053
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2227]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* pumCHW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8053;
}

/*
equation index: 8067
type: SIMPLE_ASSIGN
pumCHW2.heaDis.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8067};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[702]] /* pumCHW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[705]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 8067;
}

/*
equation index: 8073
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8073;
}

/*
equation index: 8074
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_start = pumCHW2.m_flow_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2280]] /* pumCHW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* pumCHW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 8074;
}

/*
equation index: 8077
type: SIMPLE_ASSIGN
pumCHW2.vol.tau = pumCHW2.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* pumCHW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* pumCHW2.tau PARAM */);
  threadData->lastEquationSolved = 8077;
}

/*
equation index: 8078
type: SIMPLE_ASSIGN
pumCHW2.vol.V_nominal = 4.761904761904762 * pumCHW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2291]] /* pumCHW2.vol.V_nominal PARAM */) = (4.761904761904762) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2315]] /* pumCHW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 8078;
}

/*
equation index: 8081
type: SIMPLE_ASSIGN
pumCHW2.vol.T_start = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2191]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 8081;
}

/*
equation index: 8082
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.T = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2313]] /* pumCHW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8082;
}

/*
equation index: 8083
type: SIMPLE_ASSIGN
pumCHW2.vol.p_start = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* pumCHW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 8083;
}

/*
equation index: 8084
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.p = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* pumCHW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8084;
}

/*
equation index: 8088
type: SIMPLE_ASSIGN
pumCHW2.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.Medium.density(pumCHW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8088};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_Medium_ThermodynamicState tmp82;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp82, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2314]] /* pumCHW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2313]] /* pumCHW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2310]] /* pumCHW2.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_Medium_density(threadData, tmp82);
  threadData->lastEquationSolved = 8088;
}

/*
equation index: 8089
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.p_start = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8089};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2308]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8089;
}

/*
equation index: 8090
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.T_start = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8090};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8090;
}

/*
equation index: 8091
type: SIMPLE_ASSIGN
pumCHW2.vol.X_start[1] = pumCHW2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2193]] /* pumCHW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8091;
}

/*
equation index: 8092
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.X_start[1] = pumCHW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8092};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8092;
}

/*
equation index: 8093
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, pumCHW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8093};
  real_array tmp83;
  real_array_create(&tmp83, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* pumCHW2.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */), tmp83);
  threadData->lastEquationSolved = 8093;
}

/*
equation index: 8098
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.vol.dynBal.Medium.setState_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8098};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2302]] /* pumCHW2.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 8098;
}

/*
equation index: 8101
type: SIMPLE_ASSIGN
pumCHW2.vol.V = pumCHW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8101};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2291]] /* pumCHW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8101;
}

/*
equation index: 8102
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.fluidVolume = pumCHW2.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2297]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.vol.V PARAM */);
  threadData->lastEquationSolved = 8102;
}

/*
equation index: 8115
type: SIMPLE_ASSIGN
pumCHW2.vol.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2307]] /* pumCHW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8115;
}

/*
equation index: 8124
type: SIMPLE_ASSIGN
pumCHW2.sta_start.p = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 8124;
}

/*
equation index: 8125
type: SIMPLE_ASSIGN
pumCHW2.sta_start.T = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* pumCHW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2191]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 8125;
}

/*
equation index: 8126
type: SIMPLE_ASSIGN
pumCHW2.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCHW2.Medium.specificEnthalpy(pumCHW2.sta_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8126};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_Medium_ThermodynamicState tmp84;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp84, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* pumCHW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2252]] /* pumCHW2.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCHW2_Medium_specificEnthalpy(threadData, tmp84);
  threadData->lastEquationSolved = 8126;
}

/*
equation index: 8138
type: SIMPLE_ASSIGN
pumCHW2.stageInputs[1] = pumCHW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* pumCHW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 8138;
}

/*
equation index: 8142
type: SIMPLE_ASSIGN
pumCHW2.per.speeds_rpm[1] = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* pumCHW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8142;
}

/*
equation index: 8143
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed_rpm = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8143;
}

/*
equation index: 8144
type: SIMPLE_ASSIGN
pumCHW2.per.speeds[1] = pumCHW2.per.speeds_rpm[1] / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2274]] /* pumCHW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2275]] /* pumCHW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8144;
}

/*
equation index: 8145
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed = pumCHW2.per.constantSpeed_rpm / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8145;
}

/*
equation index: 8168
type: SIMPLE_ASSIGN
junOut.mDyn_flow_nominal = 0.3333333333333333 * (abs(junOut.m_flow_nominal[1]) + abs(junOut.m_flow_nominal[2]) + abs(junOut.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junOut.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1865]] /* junOut.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junOut.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1867]] /* junOut.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 8168;
}

/*
equation index: 8169
type: SIMPLE_ASSIGN
junOut.vol.m_flow_nominal = junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junOut.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junOut.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8169;
}

/*
equation index: 8170
type: SIMPLE_ASSIGN
junOut.vol.tau = junOut.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junOut.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1918]] /* junOut.tau PARAM */);
  threadData->lastEquationSolved = 8170;
}

/*
equation index: 8171
type: SIMPLE_ASSIGN
junOut.vol.V_nominal = 0.8333333333333334 * junOut.vol.m_flow_nominal * junOut.vol.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junOut.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junOut.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junOut.vol.tau PARAM */)));
  threadData->lastEquationSolved = 8171;
}

/*
equation index: 8184
type: SIMPLE_ASSIGN
junOut.vol.T_start = junOut.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junOut.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* junOut.T_start PARAM */);
  threadData->lastEquationSolved = 8184;
}

/*
equation index: 8185
type: SIMPLE_ASSIGN
junOut.vol.dynBal.T_start = junOut.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junOut.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8185;
}

/*
equation index: 8186
type: SIMPLE_ASSIGN
junOut.vol.X_start[1] = junOut.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junOut.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1857]] /* junOut.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8186;
}

/*
equation index: 8187
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[1] = junOut.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junOut.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8187;
}

/*
equation index: 8188
type: SIMPLE_ASSIGN
junOut.vol.dynBal.hStart = 1006.0 * (-273.15 + junOut.vol.dynBal.T_start) * (1.0 - junOut.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junOut.vol.dynBal.T_start)) * junOut.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junOut.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 8188;
}

/*
equation index: 8196
type: SIMPLE_ASSIGN
junOut.vol.p_start = junOut.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junOut.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junOut.p_start PARAM */);
  threadData->lastEquationSolved = 8196;
}

/*
equation index: 8197
type: SIMPLE_ASSIGN
junOut.vol.dynBal.p_start = junOut.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junOut.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junOut.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8197;
}

/*
equation index: 8198
type: SIMPLE_ASSIGN
junOut.vol.dynBal.rho_start = 1.1843079200592153e-5 * junOut.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junOut.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junOut.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 8198;
}

/*
equation index: 8201
type: SIMPLE_ASSIGN
junOut.vol.V = junOut.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junOut.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junOut.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8201;
}

/*
equation index: 8202
type: SIMPLE_ASSIGN
junOut.vol.dynBal.fluidVolume = junOut.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junOut.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junOut.vol.V PARAM */);
  threadData->lastEquationSolved = 8202;
}

/*
equation index: 8210
type: SIMPLE_ASSIGN
junOut.vol.X_start[2] = junOut.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8210};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junOut.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1858]] /* junOut.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8210;
}

/*
equation index: 8211
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[2] = junOut.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1927]] /* junOut.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junOut.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8211;
}

/*
equation index: 8217
type: SIMPLE_ASSIGN
junOut.vol.m_flow_small = 1e-4 * abs(junOut.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junOut.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junOut.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8217;
}

/*
equation index: 8230
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal = junOut.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junOut.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1867]] /* junOut.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 8230;
}

/*
equation index: 8231
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal_pos = abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1911]] /* junOut.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junOut.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8231;
}

/*
equation index: 8233
type: SIMPLE_ASSIGN
junOut.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junOut.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1914]] /* junOut.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8233;
}

/*
equation index: 8245
type: SIMPLE_ASSIGN
junOut.res3.m_flow_small = 1e-4 * abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junOut.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1910]] /* junOut.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8245;
}

/*
equation index: 8252
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal = junOut.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junOut.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junOut.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 8252;
}

/*
equation index: 8253
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal_pos = abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junOut.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junOut.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8253;
}

/*
equation index: 8255
type: SIMPLE_ASSIGN
junOut.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1892]] /* junOut.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junOut.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8255;
}

/*
equation index: 8267
type: SIMPLE_ASSIGN
junOut.res2.m_flow_small = 1e-4 * abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8267};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1896]] /* junOut.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junOut.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8267;
}

/*
equation index: 8274
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal = junOut.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junOut.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1865]] /* junOut.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 8274;
}

/*
equation index: 8275
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal_pos = abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junOut.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junOut.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8275;
}

/*
equation index: 8277
type: SIMPLE_ASSIGN
junOut.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1876]] /* junOut.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* junOut.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8277;
}

/*
equation index: 8289
type: SIMPLE_ASSIGN
junOut.res1.m_flow_small = 1e-4 * abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junOut.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junOut.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8289;
}

/*
equation index: 8291
type: SIMPLE_ASSIGN
junOut.m_flow_small = 1e-4 * junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1868]] /* junOut.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junOut.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8291;
}

/*
equation index: 8321
type: SIMPLE_ASSIGN
junRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junRet.m_flow_nominal[1]) + abs(junRet.m_flow_nominal[2]) + abs(junRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1966]] /* junRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 8321;
}

/*
equation index: 8322
type: SIMPLE_ASSIGN
junRet.vol.m_flow_nominal = junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8322;
}

/*
equation index: 8323
type: SIMPLE_ASSIGN
junRet.vol.tau = junRet.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8323};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2017]] /* junRet.tau PARAM */);
  threadData->lastEquationSolved = 8323;
}

/*
equation index: 8324
type: SIMPLE_ASSIGN
junRet.vol.V_nominal = 0.8333333333333334 * junRet.vol.m_flow_nominal * junRet.vol.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junRet.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 8324;
}

/*
equation index: 8337
type: SIMPLE_ASSIGN
junRet.vol.T_start = junRet.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1955]] /* junRet.T_start PARAM */);
  threadData->lastEquationSolved = 8337;
}

/*
equation index: 8338
type: SIMPLE_ASSIGN
junRet.vol.dynBal.T_start = junRet.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 8338;
}

/*
equation index: 8339
type: SIMPLE_ASSIGN
junRet.vol.X_start[1] = junRet.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1956]] /* junRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8339;
}

/*
equation index: 8340
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[1] = junRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8340};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8340;
}

/*
equation index: 8341
type: SIMPLE_ASSIGN
junRet.vol.dynBal.hStart = 1006.0 * (-273.15 + junRet.vol.dynBal.T_start) * (1.0 - junRet.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junRet.vol.dynBal.T_start)) * junRet.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* junRet.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 8341;
}

/*
equation index: 8349
type: SIMPLE_ASSIGN
junRet.vol.p_start = junRet.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2042]] /* junRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1968]] /* junRet.p_start PARAM */);
  threadData->lastEquationSolved = 8349;
}

/*
equation index: 8350
type: SIMPLE_ASSIGN
junRet.vol.dynBal.p_start = junRet.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2042]] /* junRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 8350;
}

/*
equation index: 8351
type: SIMPLE_ASSIGN
junRet.vol.dynBal.rho_start = 1.1843079200592153e-5 * junRet.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2033]] /* junRet.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junRet.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 8351;
}

/*
equation index: 8354
type: SIMPLE_ASSIGN
junRet.vol.V = junRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8354;
}

/*
equation index: 8355
type: SIMPLE_ASSIGN
junRet.vol.dynBal.fluidVolume = junRet.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junRet.vol.V PARAM */);
  threadData->lastEquationSolved = 8355;
}

/*
equation index: 8363
type: SIMPLE_ASSIGN
junRet.vol.X_start[2] = junRet.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1957]] /* junRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8363;
}

/*
equation index: 8364
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[2] = junRet.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* junRet.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junRet.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8364;
}

/*
equation index: 8370
type: SIMPLE_ASSIGN
junRet.vol.m_flow_small = 1e-4 * abs(junRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2041]] /* junRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8370;
}

/*
equation index: 8383
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal = junRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1966]] /* junRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 8383;
}

/*
equation index: 8384
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal_pos = abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2010]] /* junRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8384;
}

/*
equation index: 8386
type: SIMPLE_ASSIGN
junRet.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2007]] /* junRet.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2013]] /* junRet.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8386;
}

/*
equation index: 8398
type: SIMPLE_ASSIGN
junRet.res3.m_flow_small = 1e-4 * abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2011]] /* junRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8398;
}

/*
equation index: 8405
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal = junRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 8405;
}

/*
equation index: 8406
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal_pos = abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1994]] /* junRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8406;
}

/*
equation index: 8408
type: SIMPLE_ASSIGN
junRet.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1991]] /* junRet.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1997]] /* junRet.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8408;
}

/*
equation index: 8420
type: SIMPLE_ASSIGN
junRet.res2.m_flow_small = 1e-4 * abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8420};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1995]] /* junRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8420;
}

/*
equation index: 8427
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal = junRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 8427;
}

/*
equation index: 8428
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal_pos = abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1978]] /* junRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8428;
}

/*
equation index: 8430
type: SIMPLE_ASSIGN
junRet.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* junRet.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1981]] /* junRet.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8430;
}

/*
equation index: 8442
type: SIMPLE_ASSIGN
junRet.res1.m_flow_small = 1e-4 * abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1979]] /* junRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 8442;
}

/*
equation index: 8444
type: SIMPLE_ASSIGN
junRet.m_flow_small = 1e-4 * junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1967]] /* junRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8444;
}

/*
equation index: 8455
type: SIMPLE_ASSIGN
damOA.cL[1] = (log(damOA.k0) + (-damOA.b) - damOA.a) / damOA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8455};
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
  threadData->lastEquationSolved = 8455;
}

/*
equation index: 8456
type: SIMPLE_ASSIGN
damOA.cL[2] = (2.0 * damOA.b + (-2.0) * log(damOA.k0) + 2.0 * damOA.a - damOA.b * damOA.yL) / damOA.yL
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8456};
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
  threadData->lastEquationSolved = 8456;
}

/*
equation index: 8457
type: SIMPLE_ASSIGN
damOA.cL[3] = log(damOA.k0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8457};
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
  threadData->lastEquationSolved = 8457;
}

/*
equation index: 8458
type: SIMPLE_ASSIGN
damOA.cU[1] = (log(damOA.k1) - damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8458};
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
  threadData->lastEquationSolved = 8458;
}

/*
equation index: 8459
type: SIMPLE_ASSIGN
damOA.cU[2] = (damOA.b * damOA.yU ^ 2.0 + 2.0 * log(damOA.k1) * damOA.yU + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b) / (-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8459};
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
  threadData->lastEquationSolved = 8459;
}

/*
equation index: 8460
type: SIMPLE_ASSIGN
damOA.cU[3] = (damOA.yU ^ 2.0 * (log(damOA.k1) + damOA.b) + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b + damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8460};
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
  threadData->lastEquationSolved = 8460;
}

/*
equation index: 8461
type: SIMPLE_ASSIGN
damOA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8461};
  real_array tmp97;
  real_array tmp98;
  real_array_create(&tmp97, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp98, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* damOA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */), tmp97, tmp98, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */));
  threadData->lastEquationSolved = 8461;
}

/*
equation index: 8463
type: SIMPLE_ASSIGN
damOA.rho_default = 1.1843079200592153e-5 * damOA.sta_default.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* damOA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* damOA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 8463;
}

/*
equation index: 8464
type: SIMPLE_ASSIGN
damOA.A = 13.266998341625207 / (damOA.v_nominal * damOA.rho_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* damOA.A PARAM */) = DIVISION_SIM(13.266998341625207,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* damOA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* damOA.rho_default PARAM */)),"damOA.v_nominal * damOA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 8464;
}

/*
equation index: 8465
type: SIMPLE_ASSIGN
damOA.kDam_default = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / damOA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8465};
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
  threadData->lastEquationSolved = 8465;
}

/*
equation index: 8466
type: SIMPLE_ASSIGN
damOA.facRouDuc = if damOA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* damOA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[357]] /* damOA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 8466;
}

/*
equation index: 8472
type: SIMPLE_ASSIGN
damOA.dp_nominal = (13.266998341625207 / damOA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8472};
  modelica_real tmp100;
  tmp100 = DIVISION_SIM(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* damOA.kDam_default PARAM */),"damOA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* damOA.dp_nominal PARAM */) = (tmp100 * tmp100);
  threadData->lastEquationSolved = 8472;
}

/*
equation index: 8473
type: SIMPLE_ASSIGN
damOA.dp_nominal_pos = abs(damOA.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* damOA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* damOA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8473;
}

/*
equation index: 8476
type: SIMPLE_ASSIGN
damOA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damOA.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* damOA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* damOA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8476;
}

/*
equation index: 8479
type: SIMPLE_ASSIGN
damOA.m_flow_turbulent = if damOA.use_deltaM then damOA.deltaM * 13.266998341625207 else damOA.eta_default * damOA.ReC * sqrt(damOA.A) * damOA.facRouDuc
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8479};
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
  threadData->lastEquationSolved = 8479;
}

/*
equation index: 8489
type: SIMPLE_ASSIGN
damEA.cL[1] = (log(damEA.k0) + (-damEA.b) - damEA.a) / damEA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8489};
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
  threadData->lastEquationSolved = 8489;
}

/*
equation index: 8490
type: SIMPLE_ASSIGN
damEA.cL[2] = (2.0 * damEA.b + (-2.0) * log(damEA.k0) + 2.0 * damEA.a - damEA.b * damEA.yL) / damEA.yL
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8490};
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
  threadData->lastEquationSolved = 8490;
}

/*
equation index: 8491
type: SIMPLE_ASSIGN
damEA.cL[3] = log(damEA.k0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8491};
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
  threadData->lastEquationSolved = 8491;
}

/*
equation index: 8492
type: SIMPLE_ASSIGN
damEA.cU[1] = (log(damEA.k1) - damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8492};
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
  threadData->lastEquationSolved = 8492;
}

/*
equation index: 8493
type: SIMPLE_ASSIGN
damEA.cU[2] = (damEA.b * damEA.yU ^ 2.0 + 2.0 * log(damEA.k1) * damEA.yU + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b) / (-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8493};
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
  threadData->lastEquationSolved = 8493;
}

/*
equation index: 8494
type: SIMPLE_ASSIGN
damEA.cU[3] = (damEA.yU ^ 2.0 * (log(damEA.k1) + damEA.b) + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b + damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8494};
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
  threadData->lastEquationSolved = 8494;
}

/*
equation index: 8495
type: SIMPLE_ASSIGN
damEA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8495};
  real_array tmp116;
  real_array tmp117;
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp117, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* damEA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */), tmp116, tmp117, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */));
  threadData->lastEquationSolved = 8495;
}

/*
equation index: 8497
type: SIMPLE_ASSIGN
damEA.rho_default = 1.1843079200592153e-5 * damEA.sta_default.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* damEA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* damEA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 8497;
}

/*
equation index: 8498
type: SIMPLE_ASSIGN
damEA.A = 13.266998341625207 / (damEA.v_nominal * damEA.rho_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* damEA.A PARAM */) = DIVISION_SIM(13.266998341625207,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1146]] /* damEA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* damEA.rho_default PARAM */)),"damEA.v_nominal * damEA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 8498;
}

/*
equation index: 8499
type: SIMPLE_ASSIGN
damEA.kDam_default = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / damEA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8499};
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
  threadData->lastEquationSolved = 8499;
}

/*
equation index: 8500
type: SIMPLE_ASSIGN
damEA.facRouDuc = if damEA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* damEA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[348]] /* damEA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 8500;
}

/*
equation index: 8506
type: SIMPLE_ASSIGN
damEA.dp_nominal = (13.266998341625207 / damEA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8506};
  modelica_real tmp119;
  tmp119 = DIVISION_SIM(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* damEA.kDam_default PARAM */),"damEA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* damEA.dp_nominal PARAM */) = (tmp119 * tmp119);
  threadData->lastEquationSolved = 8506;
}

/*
equation index: 8507
type: SIMPLE_ASSIGN
damEA.dp_nominal_pos = abs(damEA.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* damEA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* damEA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8507;
}

/*
equation index: 8510
type: SIMPLE_ASSIGN
damEA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damEA.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* damEA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1142]] /* damEA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8510;
}

/*
equation index: 8513
type: SIMPLE_ASSIGN
damEA.m_flow_turbulent = if damEA.use_deltaM then damEA.deltaM * 13.266998341625207 else damEA.eta_default * damEA.ReC * sqrt(damEA.A) * damEA.facRouDuc
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8513};
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
  threadData->lastEquationSolved = 8513;
}

/*
equation index: 8523
type: SIMPLE_ASSIGN
damRet.cL[1] = (log(damRet.k0) + (-damRet.b) - damRet.a) / damRet.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8523};
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
  threadData->lastEquationSolved = 8523;
}

/*
equation index: 8524
type: SIMPLE_ASSIGN
damRet.cL[2] = (2.0 * damRet.b + (-2.0) * log(damRet.k0) + 2.0 * damRet.a - damRet.b * damRet.yL) / damRet.yL
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8524};
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
  threadData->lastEquationSolved = 8524;
}

/*
equation index: 8525
type: SIMPLE_ASSIGN
damRet.cL[3] = log(damRet.k0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8525};
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
  threadData->lastEquationSolved = 8525;
}

/*
equation index: 8526
type: SIMPLE_ASSIGN
damRet.cU[1] = (log(damRet.k1) - damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8526};
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
  threadData->lastEquationSolved = 8526;
}

/*
equation index: 8527
type: SIMPLE_ASSIGN
damRet.cU[2] = (damRet.b * damRet.yU ^ 2.0 + 2.0 * log(damRet.k1) * damRet.yU + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b) / (-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8527};
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
  threadData->lastEquationSolved = 8527;
}

/*
equation index: 8528
type: SIMPLE_ASSIGN
damRet.cU[3] = (damRet.yU ^ 2.0 * (log(damRet.k1) + damRet.b) + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b + damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8528};
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
  threadData->lastEquationSolved = 8528;
}

/*
equation index: 8529
type: SIMPLE_ASSIGN
damRet.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8529};
  real_array tmp135;
  real_array tmp136;
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* damRet.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */), tmp135, tmp136, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */));
  threadData->lastEquationSolved = 8529;
}

/*
equation index: 8531
type: SIMPLE_ASSIGN
damRet.rho_default = 1.1843079200592153e-5 * damRet.sta_default.p
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damRet.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damRet.sta_default.p PARAM */));
  threadData->lastEquationSolved = 8531;
}

/*
equation index: 8532
type: SIMPLE_ASSIGN
damRet.A = 13.266998341625207 / (damRet.v_nominal * damRet.rho_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* damRet.A PARAM */) = DIVISION_SIM(13.266998341625207,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damRet.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damRet.rho_default PARAM */)),"damRet.v_nominal * damRet.rho_default",equationIndexes);
  threadData->lastEquationSolved = 8532;
}

/*
equation index: 8533
type: SIMPLE_ASSIGN
damRet.kDam_default = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / damRet.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8533};
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
  threadData->lastEquationSolved = 8533;
}

/*
equation index: 8534
type: SIMPLE_ASSIGN
damRet.facRouDuc = if damRet.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* damRet.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[366]] /* damRet.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 8534;
}

/*
equation index: 8540
type: SIMPLE_ASSIGN
damRet.dp_nominal = (13.266998341625207 / damRet.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8540};
  modelica_real tmp138;
  tmp138 = DIVISION_SIM(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* damRet.kDam_default PARAM */),"damRet.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* damRet.dp_nominal PARAM */) = (tmp138 * tmp138);
  threadData->lastEquationSolved = 8540;
}

/*
equation index: 8541
type: SIMPLE_ASSIGN
damRet.dp_nominal_pos = abs(damRet.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* damRet.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* damRet.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8541;
}

/*
equation index: 8544
type: SIMPLE_ASSIGN
damRet.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damRet.sta_default.T
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* damRet.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* damRet.sta_default.T PARAM */));
  threadData->lastEquationSolved = 8544;
}

/*
equation index: 8547
type: SIMPLE_ASSIGN
damRet.m_flow_turbulent = if damRet.use_deltaM then damRet.deltaM * 13.266998341625207 else damRet.eta_default * damRet.ReC * sqrt(damRet.A) * damRet.facRouDuc
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8547};
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
  threadData->lastEquationSolved = 8547;
}

/*
equation index: 8599
type: SIMPLE_ASSIGN
fanRet.eff.per.speeds_rpm[1] = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8599};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* fanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8599;
}

/*
equation index: 8600
type: SIMPLE_ASSIGN
fanRet.eff.per.constantSpeed_rpm = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8600};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* fanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8600;
}

/*
equation index: 8604
type: SIMPLE_ASSIGN
fanRet.eff.per.motorCooledByFluid = fanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8604};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[380]] /* fanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[387]] /* fanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 8604;
}

/*
equation index: 8605
type: SIMPLE_ASSIGN
fanRet.eff.per.power.P[1] = fanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* fanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* fanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 8605;
}

/*
equation index: 8606
type: SIMPLE_ASSIGN
fanRet.eff.per.power.V_flow[1] = fanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* fanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* fanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8606;
}

/*
equation index: 8607
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.eta[1] = fanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* fanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8607;
}

/*
equation index: 8608
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.V_flow[1] = fanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* fanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8608;
}

/*
equation index: 8609
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.eta[1] = fanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* fanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 8609;
}

/*
equation index: 8610
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.V_flow[1] = fanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* fanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 8610;
}

/*
equation index: 8623
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* fanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8623;
}

/*
equation index: 8624
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_start = fanRet.m_flow_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* fanRet.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* fanRet.m_flow_start PARAM */);
  threadData->lastEquationSolved = 8624;
}

/*
equation index: 8627
type: SIMPLE_ASSIGN
fanRet.vol.tau = fanRet.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* fanRet.tau PARAM */);
  threadData->lastEquationSolved = 8627;
}

/*
equation index: 8628
type: SIMPLE_ASSIGN
fanRet.vol.V_nominal = 13.266998341625207 * fanRet.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1350]] /* fanRet.vol.V_nominal PARAM */) = (13.266998341625207) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 8628;
}

/*
equation index: 8646
type: SIMPLE_ASSIGN
fanRet.vol.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* fanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8646;
}

/*
equation index: 8647
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flow_small = fanRet.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* fanRet.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* fanRet.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 8647;
}

/*
equation index: 8648
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaReg = 0.001 * fanRet.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1379]] /* fanRet.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 8648;
}

/*
equation index: 8649
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaInvReg = 1.0 / fanRet.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */),"fanRet.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 8649;
}

/*
equation index: 8650
type: SIMPLE_ASSIGN
fanRet.vol.steBal.fReg = 104.0 * fanRet.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1377]] /* fanRet.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 8650;
}

/*
equation index: 8651
type: SIMPLE_ASSIGN
fanRet.vol.steBal.eReg = (-380.0) * fanRet.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8651};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* fanRet.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 8651;
}

/*
equation index: 8652
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dReg = 534.0 * fanRet.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8652};
  modelica_real tmp142;
  tmp142 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  tmp142 *= tmp142;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1373]] /* fanRet.vol.steBal.dReg PARAM */) = (534.0) * ((tmp142 * tmp142));
  threadData->lastEquationSolved = 8652;
}

/*
equation index: 8653
type: SIMPLE_ASSIGN
fanRet.vol.steBal.cReg = (-361.0) * fanRet.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8653};
  modelica_real tmp143;
  tmp143 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* fanRet.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp143 * tmp143 * tmp143));
  threadData->lastEquationSolved = 8653;
}

/*
equation index: 8654
type: SIMPLE_ASSIGN
fanRet.vol.steBal.bReg = 119.0 * fanRet.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8654};
  modelica_real tmp144;
  tmp144 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* fanRet.vol.steBal.bReg PARAM */) = (119.0) * ((tmp144 * tmp144));
  threadData->lastEquationSolved = 8654;
}

/*
equation index: 8655
type: SIMPLE_ASSIGN
fanRet.vol.steBal.aReg = (-15.0) * fanRet.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1369]] /* fanRet.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 8655;
}

/*
equation index: 8665
type: SIMPLE_ASSIGN
fanRet.vol.V = fanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8665};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* fanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1350]] /* fanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 8665;
}

/*
equation index: 8671
type: SIMPLE_ASSIGN
fanRet.vol.X_start[2] = fanRet.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8671};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1352]] /* fanRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* fanRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8671;
}

/*
equation index: 8672
type: SIMPLE_ASSIGN
fanRet.vol.X_start[1] = fanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1351]] /* fanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* fanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8672;
}

/*
equation index: 8673
type: SIMPLE_ASSIGN
fanRet.vol.T_start = fanRet.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* fanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* fanRet.T_start PARAM */);
  threadData->lastEquationSolved = 8673;
}

/*
equation index: 8674
type: SIMPLE_ASSIGN
fanRet.vol.p_start = fanRet.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1356]] /* fanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* fanRet.p_start PARAM */);
  threadData->lastEquationSolved = 8674;
}

/*
equation index: 8695
type: SIMPLE_ASSIGN
fanRet.stageInputs[1] = fanRet.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* fanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* fanRet.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 8695;
}

/*
equation index: 8699
type: SIMPLE_ASSIGN
fanRet.per.speeds_rpm[1] = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* fanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8699;
}

/*
equation index: 8700
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed_rpm = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* fanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 8700;
}

/*
equation index: 8701
type: SIMPLE_ASSIGN
fanRet.per.speeds[1] = fanRet.per.speeds_rpm[1] / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8701};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* fanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* fanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8701;
}

/*
equation index: 8702
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed = fanRet.per.constantSpeed_rpm / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8702};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* fanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* fanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 8702;
}

/*
equation index: 8722
type: SIMPLE_ASSIGN
conPIDTAirSup.gainTrack.k = 1.0 / (conPIDTAirSup.Ni * conPIDTAirSup.k)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* conPIDTAirSup.gainTrack.k PARAM */) = DIVISION_SIM(1.0,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* conPIDTAirSup.Ni PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* conPIDTAirSup.k PARAM */)),"conPIDTAirSup.Ni * conPIDTAirSup.k",equationIndexes);
  threadData->lastEquationSolved = 8722;
}

/*
equation index: 8723
type: SIMPLE_ASSIGN
conPIDTAirSup.gainPID.k = conPIDTAirSup.k
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* conPIDTAirSup.gainPID.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* conPIDTAirSup.k PARAM */);
  threadData->lastEquationSolved = 8723;
}

/*
equation index: 8727
type: SIMPLE_ASSIGN
conPIDTAirSup.revAct = if conPIDTAirSup.reverseAction then -1.0 else 1.0
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[101]] /* conPIDTAirSup.reverseAction PARAM */)?-1.0:1.0);
  threadData->lastEquationSolved = 8727;
}

/*
equation index: 8728
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* conPIDTAirSup.addI.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 8728;
}

/*
equation index: 8729
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k1 = conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* conPIDTAirSup.addI.k1 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */);
  threadData->lastEquationSolved = 8729;
}

/*
equation index: 8740
type: SIMPLE_ASSIGN
conPIDTAirSup.I.k = 1.0 / conPIDTAirSup.Ti
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* conPIDTAirSup.I.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[358]] /* conPIDTAirSup.Ti PARAM */),"conPIDTAirSup.Ti",equationIndexes);
  threadData->lastEquationSolved = 8740;
}

/*
equation index: 8741
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* conPIDTAirSup.addP.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 8741;
}

/*
equation index: 8742
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k1 = conPIDTAirSup.revAct * conPIDTAirSup.wp
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* conPIDTAirSup.addP.k1 PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* conPIDTAirSup.revAct PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* conPIDTAirSup.wp PARAM */));
  threadData->lastEquationSolved = 8742;
}

/*
equation index: 8765
type: SIMPLE_ASSIGN
vol.dynBal.X_start[1] = vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3603]] /* vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 8765;
}

/*
equation index: 8766
type: SIMPLE_ASSIGN
vol.dynBal.hStart = 20120.0 * (1.0 - vol.dynBal.X_start[1]) + 2.5382145e6 * vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3611]] /* vol.dynBal.hStart PARAM */) = (20120.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */)) + (2.5382145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 8766;
}

/*
equation index: 8774
type: SIMPLE_ASSIGN
vol.dynBal.p_start = vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3613]] /* vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3624]] /* vol.p_start PARAM */);
  threadData->lastEquationSolved = 8774;
}

/*
equation index: 8775
type: SIMPLE_ASSIGN
vol.dynBal.rho_start = 1.1843079200592153e-5 * vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3615]] /* vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3613]] /* vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 8775;
}

/*
equation index: 8778
type: SIMPLE_ASSIGN
vol.V = rooLen * rooWid * rooHei
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3602]] /* vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2841]] /* rooLen PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2842]] /* rooWid PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* rooHei PARAM */)));
  threadData->lastEquationSolved = 8778;
}

/*
equation index: 8779
type: SIMPLE_ASSIGN
vol.dynBal.fluidVolume = vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3610]] /* vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3602]] /* vol.V PARAM */);
  threadData->lastEquationSolved = 8779;
}

/*
equation index: 8787
type: SIMPLE_ASSIGN
vol.dynBal.X_start[2] = vol.X_start[2]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3608]] /* vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3604]] /* vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 8787;
}

/*
equation index: 8810
type: SIMPLE_ASSIGN
weaData.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3664]] /* weaData.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 8810;
}

/*
equation index: 8811
type: SIMPLE_ASSIGN
weaData.longitude.longitude = weaData.lon
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3665]] /* weaData.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3664]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 8811;
}

/*
equation index: 8812
type: SIMPLE_ASSIGN
weaData.latitude.latitude = weaData.lat
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8812};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3660]] /* weaData.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3659]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 8812;
}

/*
equation index: 8818
type: SIMPLE_ASSIGN
weaData.datRea1.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8818};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* weaData.datRea1.tableName PARAM */) = _OMC_LIT95;
  threadData->lastEquationSolved = 8818;
}

/*
equation index: 8821
type: SIMPLE_ASSIGN
weaData.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 8821;
}

/*
equation index: 8822
type: SIMPLE_ASSIGN
weaData.locTim.timZon = weaData.timZon
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3663]] /* weaData.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.timZon PARAM */);
  threadData->lastEquationSolved = 8822;
}

/*
equation index: 8823
type: SIMPLE_ASSIGN
weaData.locTim.lon = weaData.lon
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3662]] /* weaData.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3664]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 8823;
}

/*
equation index: 8824
type: SIMPLE_ASSIGN
weaData.locTim.diff = 13750.987083139758 * weaData.locTim.lon - weaData.locTim.timZon
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3661]] /* weaData.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3662]] /* weaData.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3663]] /* weaData.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 8824;
}

/*
equation index: 8861
type: SIMPLE_ASSIGN
weaData.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8861};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* weaData.datRea.tableName PARAM */) = _OMC_LIT95;
  threadData->lastEquationSolved = 8861;
}

/*
equation index: 8864
type: ARRAY_CALL_ASSIGN

weaData.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaData.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8864};
  real_array tmp145;
  real_array_create(&tmp145, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3670]] /* weaData.timeSpan[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */), _OMC_LIT95), tmp145);
  threadData->lastEquationSolved = 8864;
}

/*
equation index: 8879
type: SIMPLE_ASSIGN
TCHWLeaCoi.ratTau = TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8879};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* TCHWLeaCoi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWLeaCoi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8879;
}

/*
equation index: 8880
type: SIMPLE_ASSIGN
TCHWLeaCoi.tauHeaTraInv = if TCHWLeaCoi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8880};
  modelica_boolean tmp146;
  tmp146 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWLeaCoi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* TCHWLeaCoi.tauHeaTraInv PARAM */) = (tmp146?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWLeaCoi.tauHeaTra PARAM */),"TCHWLeaCoi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8880;
}

/*
equation index: 8893
type: SIMPLE_ASSIGN
valByp.dp_nominal = 14930.0 + valByp.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3587]] /* valByp.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3586]] /* valByp.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 8893;
}

/*
equation index: 8894
type: SIMPLE_ASSIGN
valByp.dp_nominal_pos = abs(valByp.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3587]] /* valByp.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8894;
}

/*
equation index: 8898
type: SIMPLE_ASSIGN
valByp.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.valByp.Medium.dynamicViscosity(valByp.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8898};
  WaterCooledChillerExample_WaterCooledChillerExample7_valByp_Medium_ThermodynamicState tmp147;
  WaterCooledChillerExample_WaterCooledChillerExample7_valByp_Medium_ThermodynamicState_wrap_vars(threadData,tmp147, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3599]] /* valByp.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3598]] /* valByp.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3589]] /* valByp.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_valByp_Medium_dynamicViscosity(threadData, tmp147);
  threadData->lastEquationSolved = 8898;
}

/*
equation index: 8899
type: SIMPLE_ASSIGN
valByp.m_flow_turbulent = 4.761904761904762 * valByp.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3595]] /* valByp.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3584]] /* valByp.deltaM PARAM */));
  threadData->lastEquationSolved = 8899;
}

/*
equation index: 8909
type: SIMPLE_ASSIGN
TCWLeaTow.ratTau = TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* TCWLeaTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCWLeaTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8909;
}

/*
equation index: 8910
type: SIMPLE_ASSIGN
TCWLeaTow.tauHeaTraInv = if TCWLeaTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8910};
  modelica_boolean tmp148;
  tmp148 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCWLeaTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* TCWLeaTow.tauHeaTraInv PARAM */) = (tmp148?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCWLeaTow.tauHeaTra PARAM */),"TCWLeaTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8910;
}

/*
equation index: 8918
type: SIMPLE_ASSIGN
TCHWEntChi.ratTau = TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* TCHWEntChi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWEntChi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8918;
}

/*
equation index: 8919
type: SIMPLE_ASSIGN
TCHWEntChi.tauHeaTraInv = if TCHWEntChi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8919};
  modelica_boolean tmp149;
  tmp149 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWEntChi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* TCHWEntChi.tauHeaTraInv PARAM */) = (tmp149?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWEntChi.tauHeaTra PARAM */),"TCHWEntChi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8919;
}

/*
equation index: 8927
type: SIMPLE_ASSIGN
TAirSup.ratTau = TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TAirSup.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 8927;
}

/*
equation index: 8928
type: SIMPLE_ASSIGN
TAirSup.tauHeaTraInv = if TAirSup.tauHeaTra < 1e-10 then 0.0 else 1.0 / TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8928};
  modelica_boolean tmp150;
  tmp150 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* TAirSup.tauHeaTraInv PARAM */) = (tmp150?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),"TAirSup.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 8928;
}

/*
equation index: 8941
type: SIMPLE_ASSIGN
val6.dp_nominal = 104510.0 + val6.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3398]] /* val6.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3397]] /* val6.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 8941;
}

/*
equation index: 8942
type: SIMPLE_ASSIGN
val6.dp_nominal_pos = abs(val6.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3399]] /* val6.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3398]] /* val6.dp_nominal PARAM */));
  threadData->lastEquationSolved = 8942;
}

/*
equation index: 8946
type: SIMPLE_ASSIGN
val6.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val6.Medium.dynamicViscosity(val6.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8946};
  WaterCooledChillerExample_WaterCooledChillerExample7_val6_Medium_ThermodynamicState tmp151;
  WaterCooledChillerExample_WaterCooledChillerExample7_val6_Medium_ThermodynamicState_wrap_vars(threadData,tmp151, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3410]] /* val6.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3409]] /* val6.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3400]] /* val6.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val6_Medium_dynamicViscosity(threadData, tmp151);
  threadData->lastEquationSolved = 8946;
}

/*
equation index: 8947
type: SIMPLE_ASSIGN
val6.m_flow_turbulent = 4.761904761904762 * val6.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* val6.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3395]] /* val6.deltaM PARAM */));
  threadData->lastEquationSolved = 8947;
}

/*
equation index: 8957
type: SIMPLE_ASSIGN
chi.TConEnt_nominal_degC = -273.15 + chi.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* chi.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* chi.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 8957;
}

/*
equation index: 8958
type: SIMPLE_ASSIGN
chi.QEva_flow_nominal = chi.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8958};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* chi.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* chi.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8958;
}

/*
equation index: 8959
type: SIMPLE_ASSIGN
chi.Q_flow_small = 1e-9 * chi.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8959};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* chi.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* chi.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 8959;
}

/*
equation index: 8960
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal = chi.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8960};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* chi.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* chi.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 8960;
}

/*
equation index: 8961
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal_degC = -273.15 + chi.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8961};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* chi.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* chi.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 8961;
}

/*
equation index: 8962
type: SIMPLE_ASSIGN
chi.mCon_flow_nominal = chi.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8962};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* chi.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* chi.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8962;
}

/*
equation index: 8963
type: SIMPLE_ASSIGN
chi.mEva_flow_nominal = chi.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8963};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* chi.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* chi.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 8963;
}

/*
equation index: 8964
type: SIMPLE_ASSIGN
chi.etaMotor = chi.per.etaMotor
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* chi.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* chi.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 8964;
}

/*
equation index: 8965
type: SIMPLE_ASSIGN
chi.PLRMin = chi.per.PLRMin
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* chi.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* chi.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 8965;
}

/*
equation index: 8966
type: SIMPLE_ASSIGN
chi.PLRMinUnl = chi.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8966};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* chi.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* chi.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 8966;
}

/*
equation index: 8967
type: SIMPLE_ASSIGN
chi.PLRMax = chi.per.PLRMax
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* chi.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* chi.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 8967;
}

/*
equation index: 8968
type: SIMPLE_ASSIGN
chi.COP_nominal = chi.per.COP_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* chi.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* chi.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 8968;
}

/*
equation index: 8971
type: SIMPLE_ASSIGN
chi.rho2_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.density(chi.sta2_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8971};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_ThermodynamicState tmp152;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp152, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* chi.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[145]] /* chi.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* chi.rho2_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_density(threadData, tmp152);
  threadData->lastEquationSolved = 8971;
}

/*
equation index: 8974
type: SIMPLE_ASSIGN
chi.rho1_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.density(chi.sta1_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8974};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_ThermodynamicState tmp153;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp153, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[142]] /* chi.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[141]] /* chi.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* chi.rho1_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_density(threadData, tmp153);
  threadData->lastEquationSolved = 8974;
}

/*
equation index: 8983
type: SIMPLE_ASSIGN
chi.preDro2.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi.preDro2.Medium.dynamicViscosity(chi.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_8983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8983};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro2_Medium_ThermodynamicState tmp154;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp154, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* chi.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* chi.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.preDro2.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro2_Medium_dynamicViscosity(threadData, tmp154);
  threadData->lastEquationSolved = 8983;
}

/*
equation index: 9003
type: SIMPLE_ASSIGN
chi.preDro1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.chi.preDro1.Medium.dynamicViscosity(chi.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9003};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro1_Medium_ThermodynamicState tmp155;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp155, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* chi.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* chi.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.preDro1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_preDro1_Medium_dynamicViscosity(threadData, tmp155);
  threadData->lastEquationSolved = 9003;
}

/*
equation index: 9017
type: SIMPLE_ASSIGN
chi.vol2.T_start = chi.T2_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9017};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 9017;
}

/*
equation index: 9018
type: SIMPLE_ASSIGN
chi.vol2.state_start.T = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 9018;
}

/*
equation index: 9019
type: SIMPLE_ASSIGN
chi.vol2.p_start = chi.p2_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 9019;
}

/*
equation index: 9020
type: SIMPLE_ASSIGN
chi.vol2.state_start.p = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9020};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 9020;
}

/*
equation index: 9024
type: SIMPLE_ASSIGN
chi.vol2.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.Medium.density(chi.vol2.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9024};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_Medium_ThermodynamicState tmp156;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp156, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.vol2.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_Medium_density(threadData, tmp156);
  threadData->lastEquationSolved = 9024;
}

/*
equation index: 9025
type: SIMPLE_ASSIGN
chi.vol2.dynBal.p_start = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* chi.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 9025;
}

/*
equation index: 9026
type: SIMPLE_ASSIGN
chi.vol2.dynBal.T_start = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9026};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 9026;
}

/*
equation index: 9027
type: SIMPLE_ASSIGN
chi.vol2.X_start[1] = chi.X2_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9027};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* chi.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 9027;
}

/*
equation index: 9028
type: SIMPLE_ASSIGN
chi.vol2.dynBal.X_start[1] = chi.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* chi.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9028;
}

/*
equation index: 9029
type: SIMPLE_ASSIGN
chi.vol2.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.dynBal.Medium.specificEnthalpy_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, chi.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9029};
  real_array tmp157;
  real_array_create(&tmp157, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* chi.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* chi.vol2.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */), tmp157);
  threadData->lastEquationSolved = 9029;
}

/*
equation index: 9034
type: SIMPLE_ASSIGN
chi.vol2.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol2.dynBal.Medium.setState_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9034};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* chi.vol2.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[186]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9034;
}

/*
equation index: 9037
type: SIMPLE_ASSIGN
chi.vol2.V = 142.85714285714286 / chi.rho2_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.vol2.V PARAM */) = DIVISION_SIM(142.85714285714286,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[140]] /* chi.rho2_nominal PARAM */),"chi.rho2_nominal",equationIndexes);
  threadData->lastEquationSolved = 9037;
}

/*
equation index: 9038
type: SIMPLE_ASSIGN
chi.vol2.dynBal.fluidVolume = chi.vol2.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* chi.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.vol2.V PARAM */);
  threadData->lastEquationSolved = 9038;
}

/*
equation index: 9061
type: SIMPLE_ASSIGN
chi.vol1.T_start = chi.T1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 9061;
}

/*
equation index: 9062
type: SIMPLE_ASSIGN
chi.vol1.state_start.T = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9062;
}

/*
equation index: 9063
type: SIMPLE_ASSIGN
chi.vol1.p_start = chi.p1_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* chi.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 9063;
}

/*
equation index: 9064
type: SIMPLE_ASSIGN
chi.vol1.state_start.p = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9064};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* chi.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9064;
}

/*
equation index: 9068
type: SIMPLE_ASSIGN
chi.vol1.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.Medium.density(chi.vol1.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9068};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_Medium_ThermodynamicState tmp158;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp158, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* chi.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* chi.vol1.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_Medium_density(threadData, tmp158);
  threadData->lastEquationSolved = 9068;
}

/*
equation index: 9069
type: SIMPLE_ASSIGN
chi.vol1.dynBal.p_start = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9069};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* chi.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[169]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 9069;
}

/*
equation index: 9070
type: SIMPLE_ASSIGN
chi.vol1.dynBal.T_start = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 9070;
}

/*
equation index: 9071
type: SIMPLE_ASSIGN
chi.vol1.X_start[1] = chi.X1_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9071};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* chi.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* chi.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 9071;
}

/*
equation index: 9072
type: SIMPLE_ASSIGN
chi.vol1.dynBal.X_start[1] = chi.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* chi.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* chi.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9072;
}

/*
equation index: 9073
type: SIMPLE_ASSIGN
chi.vol1.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.dynBal.Medium.specificEnthalpy_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, chi.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9073};
  real_array tmp159;
  real_array_create(&tmp159, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* chi.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[159]] /* chi.vol1.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */), tmp159);
  threadData->lastEquationSolved = 9073;
}

/*
equation index: 9078
type: SIMPLE_ASSIGN
chi.vol1.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.chi.vol1.dynBal.Medium.setState_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* chi.vol1.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9078;
}

/*
equation index: 9081
type: SIMPLE_ASSIGN
chi.vol1.V = 476.1904761904762 / chi.rho1_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9081};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.vol1.V PARAM */) = DIVISION_SIM(476.1904761904762,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* chi.rho1_nominal PARAM */),"chi.rho1_nominal",equationIndexes);
  threadData->lastEquationSolved = 9081;
}

/*
equation index: 9082
type: SIMPLE_ASSIGN
chi.vol1.dynBal.fluidVolume = chi.vol1.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9082};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* chi.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.vol1.V PARAM */);
  threadData->lastEquationSolved = 9082;
}

/*
equation index: 9123
type: SIMPLE_ASSIGN
expVesChi.state_start.p = expVesChi.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* expVesChi.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */);
  threadData->lastEquationSolved = 9123;
}

/*
equation index: 9124
type: SIMPLE_ASSIGN
expVesChi.state_start.T = expVesChi.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* expVesChi.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* expVesChi.T_start PARAM */);
  threadData->lastEquationSolved = 9124;
}

/*
equation index: 9125
type: SIMPLE_ASSIGN
expVesChi.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi.Medium.density(expVesChi.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9125};
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_ThermodynamicState tmp160;
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_ThermodynamicState_wrap_vars(threadData,tmp160, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* expVesChi.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* expVesChi.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* expVesChi.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_density(threadData, tmp160);
  threadData->lastEquationSolved = 9125;
}

/*
equation index: 9136
type: SIMPLE_ASSIGN
val1.dp_nominal = 14930.0 + val1.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3351]] /* val1.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3350]] /* val1.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 9136;
}

/*
equation index: 9137
type: SIMPLE_ASSIGN
val1.dp_nominal_pos = abs(val1.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3351]] /* val1.dp_nominal PARAM */));
  threadData->lastEquationSolved = 9137;
}

/*
equation index: 9141
type: SIMPLE_ASSIGN
val1.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val1.Medium.dynamicViscosity(val1.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9141};
  WaterCooledChillerExample_WaterCooledChillerExample7_val1_Medium_ThermodynamicState tmp161;
  WaterCooledChillerExample_WaterCooledChillerExample7_val1_Medium_ThermodynamicState_wrap_vars(threadData,tmp161, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3363]] /* val1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3362]] /* val1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3353]] /* val1.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val1_Medium_dynamicViscosity(threadData, tmp161);
  threadData->lastEquationSolved = 9141;
}

/*
equation index: 9142
type: SIMPLE_ASSIGN
val1.m_flow_turbulent = 4.761904761904762 * val1.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3359]] /* val1.m_flow_turbulent PARAM */) = (4.761904761904762) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3348]] /* val1.deltaM PARAM */));
  threadData->lastEquationSolved = 9142;
}

/*
equation index: 9157
type: SIMPLE_ASSIGN
val5.dp_nominal = 89580.0 + val5.dpValve_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3374]] /* val5.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3373]] /* val5.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 9157;
}

/*
equation index: 9158
type: SIMPLE_ASSIGN
val5.dp_nominal_pos = abs(val5.dp_nominal)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3375]] /* val5.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3374]] /* val5.dp_nominal PARAM */));
  threadData->lastEquationSolved = 9158;
}

/*
equation index: 9162
type: SIMPLE_ASSIGN
val5.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.val5.Medium.dynamicViscosity(val5.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9162};
  WaterCooledChillerExample_WaterCooledChillerExample7_val5_Medium_ThermodynamicState tmp162;
  WaterCooledChillerExample_WaterCooledChillerExample7_val5_Medium_ThermodynamicState_wrap_vars(threadData,tmp162, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3386]] /* val5.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3385]] /* val5.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3376]] /* val5.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_val5_Medium_dynamicViscosity(threadData, tmp162);
  threadData->lastEquationSolved = 9162;
}

/*
equation index: 9163
type: SIMPLE_ASSIGN
val5.m_flow_turbulent = 15.873015873015873 * val5.deltaM
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3382]] /* val5.m_flow_turbulent PARAM */) = (15.873015873015873) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3371]] /* val5.deltaM PARAM */));
  threadData->lastEquationSolved = 9163;
}

/*
equation index: 9215
type: SIMPLE_ASSIGN
pumCW.eff.per.speeds_rpm[1] = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9215;
}

/*
equation index: 9216
type: SIMPLE_ASSIGN
pumCW.eff.per.constantSpeed_rpm = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* pumCW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9216;
}

/*
equation index: 9220
type: SIMPLE_ASSIGN
pumCW.eff.per.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9220};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[735]] /* pumCW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[744]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9220;
}

/*
equation index: 9221
type: SIMPLE_ASSIGN
pumCW.eff.per.power.P[1] = pumCW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2361]] /* pumCW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* pumCW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 9221;
}

/*
equation index: 9222
type: SIMPLE_ASSIGN
pumCW.eff.per.power.V_flow[1] = pumCW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2362]] /* pumCW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9222;
}

/*
equation index: 9223
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.eta[1] = pumCW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2395]] /* pumCW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9223;
}

/*
equation index: 9224
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.V_flow[1] = pumCW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9224;
}

/*
equation index: 9225
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.eta[1] = pumCW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9225;
}

/*
equation index: 9226
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.V_flow[1] = pumCW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2357]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* pumCW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9226;
}

/*
equation index: 9240
type: SIMPLE_ASSIGN
pumCW.heaDis.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9240};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[741]] /* pumCW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[744]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9240;
}

/*
equation index: 9246
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* pumCW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9246;
}

/*
equation index: 9247
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_start = pumCW.m_flow_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2410]] /* pumCW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* pumCW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 9247;
}

/*
equation index: 9250
type: SIMPLE_ASSIGN
pumCW.vol.tau = pumCW.tau
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2445]] /* pumCW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* pumCW.tau PARAM */);
  threadData->lastEquationSolved = 9250;
}

/*
equation index: 9251
type: SIMPLE_ASSIGN
pumCW.vol.V_nominal = 15.873015873015873 * pumCW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* pumCW.vol.V_nominal PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2445]] /* pumCW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 9251;
}

/*
equation index: 9254
type: SIMPLE_ASSIGN
pumCW.vol.T_start = pumCW.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* pumCW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2321]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 9254;
}

/*
equation index: 9255
type: SIMPLE_ASSIGN
pumCW.vol.state_start.T = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2443]] /* pumCW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9255;
}

/*
equation index: 9256
type: SIMPLE_ASSIGN
pumCW.vol.p_start = pumCW.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* pumCW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 9256;
}

/*
equation index: 9257
type: SIMPLE_ASSIGN
pumCW.vol.state_start.p = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2444]] /* pumCW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9257;
}

/*
equation index: 9261
type: SIMPLE_ASSIGN
pumCW.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.Medium.density(pumCW.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9261};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_Medium_ThermodynamicState tmp163;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp163, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2444]] /* pumCW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2443]] /* pumCW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2440]] /* pumCW.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_Medium_density(threadData, tmp163);
  threadData->lastEquationSolved = 9261;
}

/*
equation index: 9262
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.p_start = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* pumCW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2438]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9262;
}

/*
equation index: 9263
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.T_start = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2419]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9263;
}

/*
equation index: 9264
type: SIMPLE_ASSIGN
pumCW.vol.X_start[1] = pumCW.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2323]] /* pumCW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9264;
}

/*
equation index: 9265
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.X_start[1] = pumCW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9265};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* pumCW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9265;
}

/*
equation index: 9266
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, pumCW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9266};
  real_array tmp164;
  real_array_create(&tmp164, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* pumCW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* pumCW.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */), tmp164);
  threadData->lastEquationSolved = 9266;
}

/*
equation index: 9271
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.vol.dynBal.Medium.setState_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2432]] /* pumCW.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2430]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9271;
}

/*
equation index: 9274
type: SIMPLE_ASSIGN
pumCW.vol.V = pumCW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* pumCW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 9274;
}

/*
equation index: 9275
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.fluidVolume = pumCW.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* pumCW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCW.vol.V PARAM */);
  threadData->lastEquationSolved = 9275;
}

/*
equation index: 9288
type: SIMPLE_ASSIGN
pumCW.vol.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2437]] /* pumCW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 9288;
}

/*
equation index: 9297
type: SIMPLE_ASSIGN
pumCW.sta_start.p = pumCW.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* pumCW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 9297;
}

/*
equation index: 9298
type: SIMPLE_ASSIGN
pumCW.sta_start.T = pumCW.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2321]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 9298;
}

/*
equation index: 9299
type: SIMPLE_ASSIGN
pumCW.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.pumCW.Medium.specificEnthalpy(pumCW.sta_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9299};
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_Medium_ThermodynamicState tmp165;
  WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_Medium_ThermodynamicState_wrap_vars(threadData,tmp165, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* pumCW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* pumCW.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW_Medium_specificEnthalpy(threadData, tmp165);
  threadData->lastEquationSolved = 9299;
}

/*
equation index: 9311
type: SIMPLE_ASSIGN
pumCW.stageInputs[1] = pumCW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2417]] /* pumCW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 9311;
}

/*
equation index: 9315
type: SIMPLE_ASSIGN
pumCW.per.speeds_rpm[1] = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9315;
}

/*
equation index: 9316
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed_rpm = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9316;
}

/*
equation index: 9317
type: SIMPLE_ASSIGN
pumCW.per.speeds[1] = pumCW.per.speeds_rpm[1] / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2404]] /* pumCW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9317;
}

/*
equation index: 9318
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed = pumCW.per.constantSpeed_rpm / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2390]] /* pumCW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2403]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 9318;
}

/*
equation index: 9338
type: SIMPLE_ASSIGN
cooTow.rho_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.density(cooTow.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9338};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_ThermodynamicState tmp166;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp166, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* cooTow.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* cooTow.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooTow.rho_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_density(threadData, tmp166);
  threadData->lastEquationSolved = 9338;
}

/*
equation index: 9347
type: SIMPLE_ASSIGN
cooTow.preDro.eta_default = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.preDro.Medium.dynamicViscosity(cooTow.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9347};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_preDro_Medium_ThermodynamicState tmp167;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp167, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* cooTow.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* cooTow.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* cooTow.preDro.eta_default PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_preDro_Medium_dynamicViscosity(threadData, tmp167);
  threadData->lastEquationSolved = 9347;
}

/*
equation index: 9361
type: SIMPLE_ASSIGN
cooTow.vol.T_start = cooTow.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooTow.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[949]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 9361;
}

/*
equation index: 9362
type: SIMPLE_ASSIGN
cooTow.vol.state_start.T = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooTow.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9362;
}

/*
equation index: 9363
type: SIMPLE_ASSIGN
cooTow.vol.p_start = cooTow.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooTow.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 9363;
}

/*
equation index: 9364
type: SIMPLE_ASSIGN
cooTow.vol.state_start.p = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooTow.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9364;
}

/*
equation index: 9368
type: SIMPLE_ASSIGN
cooTow.vol.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.Medium.density(cooTow.vol.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9368};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_ThermodynamicState tmp168;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp168, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooTow.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooTow.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1019]] /* cooTow.vol.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_density(threadData, tmp168);
  threadData->lastEquationSolved = 9368;
}

/*
equation index: 9369
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.p_start = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooTow.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 9369;
}

/*
equation index: 9370
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.T_start = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooTow.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 9370;
}

/*
equation index: 9371
type: SIMPLE_ASSIGN
cooTow.vol.X_start[1] = cooTow.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooTow.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[950]] /* cooTow.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9371;
}

/*
equation index: 9372
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.X_start[1] = cooTow.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooTow.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooTow.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 9372;
}

/*
equation index: 9373
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.hStart = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, cooTow.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9373};
  real_array tmp169;
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooTow.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* cooTow.vol.dynBal.hStart PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooTow.vol.dynBal.T_start PARAM */), tmp169);
  threadData->lastEquationSolved = 9373;
}

/*
equation index: 9378
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.dynBal.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.dynBal.Medium.setState_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooTow.vol.dynBal.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_dynBal_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooTow.vol.dynBal.T_start PARAM */), _OMC_LIT88));
  threadData->lastEquationSolved = 9378;
}

/*
equation index: 9381
type: SIMPLE_ASSIGN
cooTow.vol.V = 15.873015873015873 * cooTow.tau / cooTow.rho_default
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooTow.vol.V PARAM */) = (15.873015873015873) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooTow.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooTow.rho_default PARAM */),"cooTow.rho_default",equationIndexes));
  threadData->lastEquationSolved = 9381;
}

/*
equation index: 9382
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.fluidVolume = cooTow.vol.V
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooTow.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooTow.vol.V PARAM */);
  threadData->lastEquationSolved = 9382;
}

/*
equation index: 9417
type: SIMPLE_ASSIGN
expVesCHW.state_start.p = expVesCHW.p_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* expVesCHW.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */);
  threadData->lastEquationSolved = 9417;
}

/*
equation index: 9418
type: SIMPLE_ASSIGN
expVesCHW.state_start.T = expVesCHW.T_start
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* expVesCHW.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* expVesCHW.T_start PARAM */);
  threadData->lastEquationSolved = 9418;
}

/*
equation index: 9419
type: SIMPLE_ASSIGN
expVesCHW.rho_start = WaterCooledChillerExample.WaterCooledChillerExample7.expVesCHW.Medium.density(expVesCHW.state_start)
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9419};
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_ThermodynamicState tmp170;
  WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp170, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* expVesCHW.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* expVesCHW.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* expVesCHW.rho_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesCHW_Medium_density(threadData, tmp170);
  threadData->lastEquationSolved = 9419;
}

/*
equation index: 9467
type: SIMPLE_ASSIGN
pumCHW.eff.per.speeds_rpm[1] = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2112]] /* pumCHW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2110]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9467;
}

/*
equation index: 9468
type: SIMPLE_ASSIGN
pumCHW.eff.per.constantSpeed_rpm = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9468};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2098]] /* pumCHW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2110]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 9468;
}

/*
equation index: 9472
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9472};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[657]] /* pumCHW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[666]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 9472;
}

/*
equation index: 9473
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.P[1] = pumCHW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* pumCHW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2138]] /* pumCHW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 9473;
}

/*
equation index: 9474
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.V_flow[1] = pumCHW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2104]] /* pumCHW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2139]] /* pumCHW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 9474;
}

/*
equation index: 9475
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.eta[1] = pumCHW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void outputs_WaterCooledChillerExample7_eqFunction_9475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2102]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2137]] /* pumCHW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 9475;
}
OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_7337,
    outputs_WaterCooledChillerExample7_eqFunction_7338,
    outputs_WaterCooledChillerExample7_eqFunction_7341,
    outputs_WaterCooledChillerExample7_eqFunction_7350,
    outputs_WaterCooledChillerExample7_eqFunction_7357,
    outputs_WaterCooledChillerExample7_eqFunction_7358,
    outputs_WaterCooledChillerExample7_eqFunction_7361,
    outputs_WaterCooledChillerExample7_eqFunction_7370,
    outputs_WaterCooledChillerExample7_eqFunction_7377,
    outputs_WaterCooledChillerExample7_eqFunction_7378,
    outputs_WaterCooledChillerExample7_eqFunction_7381,
    outputs_WaterCooledChillerExample7_eqFunction_7390,
    outputs_WaterCooledChillerExample7_eqFunction_7392,
    outputs_WaterCooledChillerExample7_eqFunction_7410,
    outputs_WaterCooledChillerExample7_eqFunction_7411,
    outputs_WaterCooledChillerExample7_eqFunction_7412,
    outputs_WaterCooledChillerExample7_eqFunction_7413,
    outputs_WaterCooledChillerExample7_eqFunction_7416,
    outputs_WaterCooledChillerExample7_eqFunction_7417,
    outputs_WaterCooledChillerExample7_eqFunction_7418,
    outputs_WaterCooledChillerExample7_eqFunction_7419,
    outputs_WaterCooledChillerExample7_eqFunction_7423,
    outputs_WaterCooledChillerExample7_eqFunction_7424,
    outputs_WaterCooledChillerExample7_eqFunction_7425,
    outputs_WaterCooledChillerExample7_eqFunction_7426,
    outputs_WaterCooledChillerExample7_eqFunction_7427,
    outputs_WaterCooledChillerExample7_eqFunction_7428,
    outputs_WaterCooledChillerExample7_eqFunction_7433,
    outputs_WaterCooledChillerExample7_eqFunction_7436,
    outputs_WaterCooledChillerExample7_eqFunction_7437,
    outputs_WaterCooledChillerExample7_eqFunction_7450,
    outputs_WaterCooledChillerExample7_eqFunction_7463,
    outputs_WaterCooledChillerExample7_eqFunction_7464,
    outputs_WaterCooledChillerExample7_eqFunction_7467,
    outputs_WaterCooledChillerExample7_eqFunction_7476,
    outputs_WaterCooledChillerExample7_eqFunction_7483,
    outputs_WaterCooledChillerExample7_eqFunction_7484,
    outputs_WaterCooledChillerExample7_eqFunction_7487,
    outputs_WaterCooledChillerExample7_eqFunction_7496,
    outputs_WaterCooledChillerExample7_eqFunction_7503,
    outputs_WaterCooledChillerExample7_eqFunction_7504,
    outputs_WaterCooledChillerExample7_eqFunction_7507,
    outputs_WaterCooledChillerExample7_eqFunction_7516,
    outputs_WaterCooledChillerExample7_eqFunction_7518,
    outputs_WaterCooledChillerExample7_eqFunction_7529,
    outputs_WaterCooledChillerExample7_eqFunction_7530,
    outputs_WaterCooledChillerExample7_eqFunction_7531,
    outputs_WaterCooledChillerExample7_eqFunction_7532,
    outputs_WaterCooledChillerExample7_eqFunction_7533,
    outputs_WaterCooledChillerExample7_eqFunction_7534,
    outputs_WaterCooledChillerExample7_eqFunction_7535,
    outputs_WaterCooledChillerExample7_eqFunction_7536,
    outputs_WaterCooledChillerExample7_eqFunction_7537,
    outputs_WaterCooledChillerExample7_eqFunction_7538,
    outputs_WaterCooledChillerExample7_eqFunction_7539,
    outputs_WaterCooledChillerExample7_eqFunction_7540,
    outputs_WaterCooledChillerExample7_eqFunction_7543,
    outputs_WaterCooledChillerExample7_eqFunction_7546,
    outputs_WaterCooledChillerExample7_eqFunction_7555,
    outputs_WaterCooledChillerExample7_eqFunction_7575,
    outputs_WaterCooledChillerExample7_eqFunction_7589,
    outputs_WaterCooledChillerExample7_eqFunction_7590,
    outputs_WaterCooledChillerExample7_eqFunction_7591,
    outputs_WaterCooledChillerExample7_eqFunction_7592,
    outputs_WaterCooledChillerExample7_eqFunction_7596,
    outputs_WaterCooledChillerExample7_eqFunction_7597,
    outputs_WaterCooledChillerExample7_eqFunction_7598,
    outputs_WaterCooledChillerExample7_eqFunction_7599,
    outputs_WaterCooledChillerExample7_eqFunction_7600,
    outputs_WaterCooledChillerExample7_eqFunction_7601,
    outputs_WaterCooledChillerExample7_eqFunction_7606,
    outputs_WaterCooledChillerExample7_eqFunction_7609,
    outputs_WaterCooledChillerExample7_eqFunction_7610,
    outputs_WaterCooledChillerExample7_eqFunction_7633,
    outputs_WaterCooledChillerExample7_eqFunction_7634,
    outputs_WaterCooledChillerExample7_eqFunction_7635,
    outputs_WaterCooledChillerExample7_eqFunction_7636,
    outputs_WaterCooledChillerExample7_eqFunction_7640,
    outputs_WaterCooledChillerExample7_eqFunction_7641,
    outputs_WaterCooledChillerExample7_eqFunction_7642,
    outputs_WaterCooledChillerExample7_eqFunction_7643,
    outputs_WaterCooledChillerExample7_eqFunction_7644,
    outputs_WaterCooledChillerExample7_eqFunction_7645,
    outputs_WaterCooledChillerExample7_eqFunction_7650,
    outputs_WaterCooledChillerExample7_eqFunction_7653,
    outputs_WaterCooledChillerExample7_eqFunction_7654,
    outputs_WaterCooledChillerExample7_eqFunction_7696,
    outputs_WaterCooledChillerExample7_eqFunction_7697,
    outputs_WaterCooledChillerExample7_eqFunction_7710,
    outputs_WaterCooledChillerExample7_eqFunction_7711,
    outputs_WaterCooledChillerExample7_eqFunction_7715,
    outputs_WaterCooledChillerExample7_eqFunction_7716,
    outputs_WaterCooledChillerExample7_eqFunction_7726,
    outputs_WaterCooledChillerExample7_eqFunction_7727,
    outputs_WaterCooledChillerExample7_eqFunction_7728,
    outputs_WaterCooledChillerExample7_eqFunction_7776,
    outputs_WaterCooledChillerExample7_eqFunction_7777,
    outputs_WaterCooledChillerExample7_eqFunction_7781,
    outputs_WaterCooledChillerExample7_eqFunction_7782,
    outputs_WaterCooledChillerExample7_eqFunction_7783,
    outputs_WaterCooledChillerExample7_eqFunction_7784,
    outputs_WaterCooledChillerExample7_eqFunction_7785,
    outputs_WaterCooledChillerExample7_eqFunction_7786,
    outputs_WaterCooledChillerExample7_eqFunction_7787,
    outputs_WaterCooledChillerExample7_eqFunction_7801,
    outputs_WaterCooledChillerExample7_eqFunction_7807,
    outputs_WaterCooledChillerExample7_eqFunction_7808,
    outputs_WaterCooledChillerExample7_eqFunction_7811,
    outputs_WaterCooledChillerExample7_eqFunction_7812,
    outputs_WaterCooledChillerExample7_eqFunction_7815,
    outputs_WaterCooledChillerExample7_eqFunction_7816,
    outputs_WaterCooledChillerExample7_eqFunction_7817,
    outputs_WaterCooledChillerExample7_eqFunction_7818,
    outputs_WaterCooledChillerExample7_eqFunction_7822,
    outputs_WaterCooledChillerExample7_eqFunction_7823,
    outputs_WaterCooledChillerExample7_eqFunction_7824,
    outputs_WaterCooledChillerExample7_eqFunction_7825,
    outputs_WaterCooledChillerExample7_eqFunction_7826,
    outputs_WaterCooledChillerExample7_eqFunction_7827,
    outputs_WaterCooledChillerExample7_eqFunction_7832,
    outputs_WaterCooledChillerExample7_eqFunction_7835,
    outputs_WaterCooledChillerExample7_eqFunction_7836,
    outputs_WaterCooledChillerExample7_eqFunction_7849,
    outputs_WaterCooledChillerExample7_eqFunction_7858,
    outputs_WaterCooledChillerExample7_eqFunction_7859,
    outputs_WaterCooledChillerExample7_eqFunction_7860,
    outputs_WaterCooledChillerExample7_eqFunction_7872,
    outputs_WaterCooledChillerExample7_eqFunction_7876,
    outputs_WaterCooledChillerExample7_eqFunction_7877,
    outputs_WaterCooledChillerExample7_eqFunction_7878,
    outputs_WaterCooledChillerExample7_eqFunction_7879,
    outputs_WaterCooledChillerExample7_eqFunction_7899,
    outputs_WaterCooledChillerExample7_eqFunction_7908,
    outputs_WaterCooledChillerExample7_eqFunction_7922,
    outputs_WaterCooledChillerExample7_eqFunction_7923,
    outputs_WaterCooledChillerExample7_eqFunction_7924,
    outputs_WaterCooledChillerExample7_eqFunction_7925,
    outputs_WaterCooledChillerExample7_eqFunction_7929,
    outputs_WaterCooledChillerExample7_eqFunction_7930,
    outputs_WaterCooledChillerExample7_eqFunction_7931,
    outputs_WaterCooledChillerExample7_eqFunction_7932,
    outputs_WaterCooledChillerExample7_eqFunction_7933,
    outputs_WaterCooledChillerExample7_eqFunction_7934,
    outputs_WaterCooledChillerExample7_eqFunction_7939,
    outputs_WaterCooledChillerExample7_eqFunction_7942,
    outputs_WaterCooledChillerExample7_eqFunction_7943,
    outputs_WaterCooledChillerExample7_eqFunction_7983,
    outputs_WaterCooledChillerExample7_eqFunction_7984,
    outputs_WaterCooledChillerExample7_eqFunction_7988,
    outputs_WaterCooledChillerExample7_eqFunction_7989,
    outputs_WaterCooledChillerExample7_eqFunction_8042,
    outputs_WaterCooledChillerExample7_eqFunction_8043,
    outputs_WaterCooledChillerExample7_eqFunction_8047,
    outputs_WaterCooledChillerExample7_eqFunction_8048,
    outputs_WaterCooledChillerExample7_eqFunction_8049,
    outputs_WaterCooledChillerExample7_eqFunction_8050,
    outputs_WaterCooledChillerExample7_eqFunction_8051,
    outputs_WaterCooledChillerExample7_eqFunction_8052,
    outputs_WaterCooledChillerExample7_eqFunction_8053,
    outputs_WaterCooledChillerExample7_eqFunction_8067,
    outputs_WaterCooledChillerExample7_eqFunction_8073,
    outputs_WaterCooledChillerExample7_eqFunction_8074,
    outputs_WaterCooledChillerExample7_eqFunction_8077,
    outputs_WaterCooledChillerExample7_eqFunction_8078,
    outputs_WaterCooledChillerExample7_eqFunction_8081,
    outputs_WaterCooledChillerExample7_eqFunction_8082,
    outputs_WaterCooledChillerExample7_eqFunction_8083,
    outputs_WaterCooledChillerExample7_eqFunction_8084,
    outputs_WaterCooledChillerExample7_eqFunction_8088,
    outputs_WaterCooledChillerExample7_eqFunction_8089,
    outputs_WaterCooledChillerExample7_eqFunction_8090,
    outputs_WaterCooledChillerExample7_eqFunction_8091,
    outputs_WaterCooledChillerExample7_eqFunction_8092,
    outputs_WaterCooledChillerExample7_eqFunction_8093,
    outputs_WaterCooledChillerExample7_eqFunction_8098,
    outputs_WaterCooledChillerExample7_eqFunction_8101,
    outputs_WaterCooledChillerExample7_eqFunction_8102,
    outputs_WaterCooledChillerExample7_eqFunction_8115,
    outputs_WaterCooledChillerExample7_eqFunction_8124,
    outputs_WaterCooledChillerExample7_eqFunction_8125,
    outputs_WaterCooledChillerExample7_eqFunction_8126,
    outputs_WaterCooledChillerExample7_eqFunction_8138,
    outputs_WaterCooledChillerExample7_eqFunction_8142,
    outputs_WaterCooledChillerExample7_eqFunction_8143,
    outputs_WaterCooledChillerExample7_eqFunction_8144,
    outputs_WaterCooledChillerExample7_eqFunction_8145,
    outputs_WaterCooledChillerExample7_eqFunction_8168,
    outputs_WaterCooledChillerExample7_eqFunction_8169,
    outputs_WaterCooledChillerExample7_eqFunction_8170,
    outputs_WaterCooledChillerExample7_eqFunction_8171,
    outputs_WaterCooledChillerExample7_eqFunction_8184,
    outputs_WaterCooledChillerExample7_eqFunction_8185,
    outputs_WaterCooledChillerExample7_eqFunction_8186,
    outputs_WaterCooledChillerExample7_eqFunction_8187,
    outputs_WaterCooledChillerExample7_eqFunction_8188,
    outputs_WaterCooledChillerExample7_eqFunction_8196,
    outputs_WaterCooledChillerExample7_eqFunction_8197,
    outputs_WaterCooledChillerExample7_eqFunction_8198,
    outputs_WaterCooledChillerExample7_eqFunction_8201,
    outputs_WaterCooledChillerExample7_eqFunction_8202,
    outputs_WaterCooledChillerExample7_eqFunction_8210,
    outputs_WaterCooledChillerExample7_eqFunction_8211,
    outputs_WaterCooledChillerExample7_eqFunction_8217,
    outputs_WaterCooledChillerExample7_eqFunction_8230,
    outputs_WaterCooledChillerExample7_eqFunction_8231,
    outputs_WaterCooledChillerExample7_eqFunction_8233,
    outputs_WaterCooledChillerExample7_eqFunction_8245,
    outputs_WaterCooledChillerExample7_eqFunction_8252,
    outputs_WaterCooledChillerExample7_eqFunction_8253,
    outputs_WaterCooledChillerExample7_eqFunction_8255,
    outputs_WaterCooledChillerExample7_eqFunction_8267,
    outputs_WaterCooledChillerExample7_eqFunction_8274,
    outputs_WaterCooledChillerExample7_eqFunction_8275,
    outputs_WaterCooledChillerExample7_eqFunction_8277,
    outputs_WaterCooledChillerExample7_eqFunction_8289,
    outputs_WaterCooledChillerExample7_eqFunction_8291,
    outputs_WaterCooledChillerExample7_eqFunction_8321,
    outputs_WaterCooledChillerExample7_eqFunction_8322,
    outputs_WaterCooledChillerExample7_eqFunction_8323,
    outputs_WaterCooledChillerExample7_eqFunction_8324,
    outputs_WaterCooledChillerExample7_eqFunction_8337,
    outputs_WaterCooledChillerExample7_eqFunction_8338,
    outputs_WaterCooledChillerExample7_eqFunction_8339,
    outputs_WaterCooledChillerExample7_eqFunction_8340,
    outputs_WaterCooledChillerExample7_eqFunction_8341,
    outputs_WaterCooledChillerExample7_eqFunction_8349,
    outputs_WaterCooledChillerExample7_eqFunction_8350,
    outputs_WaterCooledChillerExample7_eqFunction_8351,
    outputs_WaterCooledChillerExample7_eqFunction_8354,
    outputs_WaterCooledChillerExample7_eqFunction_8355,
    outputs_WaterCooledChillerExample7_eqFunction_8363,
    outputs_WaterCooledChillerExample7_eqFunction_8364,
    outputs_WaterCooledChillerExample7_eqFunction_8370,
    outputs_WaterCooledChillerExample7_eqFunction_8383,
    outputs_WaterCooledChillerExample7_eqFunction_8384,
    outputs_WaterCooledChillerExample7_eqFunction_8386,
    outputs_WaterCooledChillerExample7_eqFunction_8398,
    outputs_WaterCooledChillerExample7_eqFunction_8405,
    outputs_WaterCooledChillerExample7_eqFunction_8406,
    outputs_WaterCooledChillerExample7_eqFunction_8408,
    outputs_WaterCooledChillerExample7_eqFunction_8420,
    outputs_WaterCooledChillerExample7_eqFunction_8427,
    outputs_WaterCooledChillerExample7_eqFunction_8428,
    outputs_WaterCooledChillerExample7_eqFunction_8430,
    outputs_WaterCooledChillerExample7_eqFunction_8442,
    outputs_WaterCooledChillerExample7_eqFunction_8444,
    outputs_WaterCooledChillerExample7_eqFunction_8455,
    outputs_WaterCooledChillerExample7_eqFunction_8456,
    outputs_WaterCooledChillerExample7_eqFunction_8457,
    outputs_WaterCooledChillerExample7_eqFunction_8458,
    outputs_WaterCooledChillerExample7_eqFunction_8459,
    outputs_WaterCooledChillerExample7_eqFunction_8460,
    outputs_WaterCooledChillerExample7_eqFunction_8461,
    outputs_WaterCooledChillerExample7_eqFunction_8463,
    outputs_WaterCooledChillerExample7_eqFunction_8464,
    outputs_WaterCooledChillerExample7_eqFunction_8465,
    outputs_WaterCooledChillerExample7_eqFunction_8466,
    outputs_WaterCooledChillerExample7_eqFunction_8472,
    outputs_WaterCooledChillerExample7_eqFunction_8473,
    outputs_WaterCooledChillerExample7_eqFunction_8476,
    outputs_WaterCooledChillerExample7_eqFunction_8479,
    outputs_WaterCooledChillerExample7_eqFunction_8489,
    outputs_WaterCooledChillerExample7_eqFunction_8490,
    outputs_WaterCooledChillerExample7_eqFunction_8491,
    outputs_WaterCooledChillerExample7_eqFunction_8492,
    outputs_WaterCooledChillerExample7_eqFunction_8493,
    outputs_WaterCooledChillerExample7_eqFunction_8494,
    outputs_WaterCooledChillerExample7_eqFunction_8495,
    outputs_WaterCooledChillerExample7_eqFunction_8497,
    outputs_WaterCooledChillerExample7_eqFunction_8498,
    outputs_WaterCooledChillerExample7_eqFunction_8499,
    outputs_WaterCooledChillerExample7_eqFunction_8500,
    outputs_WaterCooledChillerExample7_eqFunction_8506,
    outputs_WaterCooledChillerExample7_eqFunction_8507,
    outputs_WaterCooledChillerExample7_eqFunction_8510,
    outputs_WaterCooledChillerExample7_eqFunction_8513,
    outputs_WaterCooledChillerExample7_eqFunction_8523,
    outputs_WaterCooledChillerExample7_eqFunction_8524,
    outputs_WaterCooledChillerExample7_eqFunction_8525,
    outputs_WaterCooledChillerExample7_eqFunction_8526,
    outputs_WaterCooledChillerExample7_eqFunction_8527,
    outputs_WaterCooledChillerExample7_eqFunction_8528,
    outputs_WaterCooledChillerExample7_eqFunction_8529,
    outputs_WaterCooledChillerExample7_eqFunction_8531,
    outputs_WaterCooledChillerExample7_eqFunction_8532,
    outputs_WaterCooledChillerExample7_eqFunction_8533,
    outputs_WaterCooledChillerExample7_eqFunction_8534,
    outputs_WaterCooledChillerExample7_eqFunction_8540,
    outputs_WaterCooledChillerExample7_eqFunction_8541,
    outputs_WaterCooledChillerExample7_eqFunction_8544,
    outputs_WaterCooledChillerExample7_eqFunction_8547,
    outputs_WaterCooledChillerExample7_eqFunction_8599,
    outputs_WaterCooledChillerExample7_eqFunction_8600,
    outputs_WaterCooledChillerExample7_eqFunction_8604,
    outputs_WaterCooledChillerExample7_eqFunction_8605,
    outputs_WaterCooledChillerExample7_eqFunction_8606,
    outputs_WaterCooledChillerExample7_eqFunction_8607,
    outputs_WaterCooledChillerExample7_eqFunction_8608,
    outputs_WaterCooledChillerExample7_eqFunction_8609,
    outputs_WaterCooledChillerExample7_eqFunction_8610,
    outputs_WaterCooledChillerExample7_eqFunction_8623,
    outputs_WaterCooledChillerExample7_eqFunction_8624,
    outputs_WaterCooledChillerExample7_eqFunction_8627,
    outputs_WaterCooledChillerExample7_eqFunction_8628,
    outputs_WaterCooledChillerExample7_eqFunction_8646,
    outputs_WaterCooledChillerExample7_eqFunction_8647,
    outputs_WaterCooledChillerExample7_eqFunction_8648,
    outputs_WaterCooledChillerExample7_eqFunction_8649,
    outputs_WaterCooledChillerExample7_eqFunction_8650,
    outputs_WaterCooledChillerExample7_eqFunction_8651,
    outputs_WaterCooledChillerExample7_eqFunction_8652,
    outputs_WaterCooledChillerExample7_eqFunction_8653,
    outputs_WaterCooledChillerExample7_eqFunction_8654,
    outputs_WaterCooledChillerExample7_eqFunction_8655,
    outputs_WaterCooledChillerExample7_eqFunction_8665,
    outputs_WaterCooledChillerExample7_eqFunction_8671,
    outputs_WaterCooledChillerExample7_eqFunction_8672,
    outputs_WaterCooledChillerExample7_eqFunction_8673,
    outputs_WaterCooledChillerExample7_eqFunction_8674,
    outputs_WaterCooledChillerExample7_eqFunction_8695,
    outputs_WaterCooledChillerExample7_eqFunction_8699,
    outputs_WaterCooledChillerExample7_eqFunction_8700,
    outputs_WaterCooledChillerExample7_eqFunction_8701,
    outputs_WaterCooledChillerExample7_eqFunction_8702,
    outputs_WaterCooledChillerExample7_eqFunction_8722,
    outputs_WaterCooledChillerExample7_eqFunction_8723,
    outputs_WaterCooledChillerExample7_eqFunction_8727,
    outputs_WaterCooledChillerExample7_eqFunction_8728,
    outputs_WaterCooledChillerExample7_eqFunction_8729,
    outputs_WaterCooledChillerExample7_eqFunction_8740,
    outputs_WaterCooledChillerExample7_eqFunction_8741,
    outputs_WaterCooledChillerExample7_eqFunction_8742,
    outputs_WaterCooledChillerExample7_eqFunction_8765,
    outputs_WaterCooledChillerExample7_eqFunction_8766,
    outputs_WaterCooledChillerExample7_eqFunction_8774,
    outputs_WaterCooledChillerExample7_eqFunction_8775,
    outputs_WaterCooledChillerExample7_eqFunction_8778,
    outputs_WaterCooledChillerExample7_eqFunction_8779,
    outputs_WaterCooledChillerExample7_eqFunction_8787,
    outputs_WaterCooledChillerExample7_eqFunction_8810,
    outputs_WaterCooledChillerExample7_eqFunction_8811,
    outputs_WaterCooledChillerExample7_eqFunction_8812,
    outputs_WaterCooledChillerExample7_eqFunction_8818,
    outputs_WaterCooledChillerExample7_eqFunction_8821,
    outputs_WaterCooledChillerExample7_eqFunction_8822,
    outputs_WaterCooledChillerExample7_eqFunction_8823,
    outputs_WaterCooledChillerExample7_eqFunction_8824,
    outputs_WaterCooledChillerExample7_eqFunction_8861,
    outputs_WaterCooledChillerExample7_eqFunction_8864,
    outputs_WaterCooledChillerExample7_eqFunction_8879,
    outputs_WaterCooledChillerExample7_eqFunction_8880,
    outputs_WaterCooledChillerExample7_eqFunction_8893,
    outputs_WaterCooledChillerExample7_eqFunction_8894,
    outputs_WaterCooledChillerExample7_eqFunction_8898,
    outputs_WaterCooledChillerExample7_eqFunction_8899,
    outputs_WaterCooledChillerExample7_eqFunction_8909,
    outputs_WaterCooledChillerExample7_eqFunction_8910,
    outputs_WaterCooledChillerExample7_eqFunction_8918,
    outputs_WaterCooledChillerExample7_eqFunction_8919,
    outputs_WaterCooledChillerExample7_eqFunction_8927,
    outputs_WaterCooledChillerExample7_eqFunction_8928,
    outputs_WaterCooledChillerExample7_eqFunction_8941,
    outputs_WaterCooledChillerExample7_eqFunction_8942,
    outputs_WaterCooledChillerExample7_eqFunction_8946,
    outputs_WaterCooledChillerExample7_eqFunction_8947,
    outputs_WaterCooledChillerExample7_eqFunction_8957,
    outputs_WaterCooledChillerExample7_eqFunction_8958,
    outputs_WaterCooledChillerExample7_eqFunction_8959,
    outputs_WaterCooledChillerExample7_eqFunction_8960,
    outputs_WaterCooledChillerExample7_eqFunction_8961,
    outputs_WaterCooledChillerExample7_eqFunction_8962,
    outputs_WaterCooledChillerExample7_eqFunction_8963,
    outputs_WaterCooledChillerExample7_eqFunction_8964,
    outputs_WaterCooledChillerExample7_eqFunction_8965,
    outputs_WaterCooledChillerExample7_eqFunction_8966,
    outputs_WaterCooledChillerExample7_eqFunction_8967,
    outputs_WaterCooledChillerExample7_eqFunction_8968,
    outputs_WaterCooledChillerExample7_eqFunction_8971,
    outputs_WaterCooledChillerExample7_eqFunction_8974,
    outputs_WaterCooledChillerExample7_eqFunction_8983,
    outputs_WaterCooledChillerExample7_eqFunction_9003,
    outputs_WaterCooledChillerExample7_eqFunction_9017,
    outputs_WaterCooledChillerExample7_eqFunction_9018,
    outputs_WaterCooledChillerExample7_eqFunction_9019,
    outputs_WaterCooledChillerExample7_eqFunction_9020,
    outputs_WaterCooledChillerExample7_eqFunction_9024,
    outputs_WaterCooledChillerExample7_eqFunction_9025,
    outputs_WaterCooledChillerExample7_eqFunction_9026,
    outputs_WaterCooledChillerExample7_eqFunction_9027,
    outputs_WaterCooledChillerExample7_eqFunction_9028,
    outputs_WaterCooledChillerExample7_eqFunction_9029,
    outputs_WaterCooledChillerExample7_eqFunction_9034,
    outputs_WaterCooledChillerExample7_eqFunction_9037,
    outputs_WaterCooledChillerExample7_eqFunction_9038,
    outputs_WaterCooledChillerExample7_eqFunction_9061,
    outputs_WaterCooledChillerExample7_eqFunction_9062,
    outputs_WaterCooledChillerExample7_eqFunction_9063,
    outputs_WaterCooledChillerExample7_eqFunction_9064,
    outputs_WaterCooledChillerExample7_eqFunction_9068,
    outputs_WaterCooledChillerExample7_eqFunction_9069,
    outputs_WaterCooledChillerExample7_eqFunction_9070,
    outputs_WaterCooledChillerExample7_eqFunction_9071,
    outputs_WaterCooledChillerExample7_eqFunction_9072,
    outputs_WaterCooledChillerExample7_eqFunction_9073,
    outputs_WaterCooledChillerExample7_eqFunction_9078,
    outputs_WaterCooledChillerExample7_eqFunction_9081,
    outputs_WaterCooledChillerExample7_eqFunction_9082,
    outputs_WaterCooledChillerExample7_eqFunction_9123,
    outputs_WaterCooledChillerExample7_eqFunction_9124,
    outputs_WaterCooledChillerExample7_eqFunction_9125,
    outputs_WaterCooledChillerExample7_eqFunction_9136,
    outputs_WaterCooledChillerExample7_eqFunction_9137,
    outputs_WaterCooledChillerExample7_eqFunction_9141,
    outputs_WaterCooledChillerExample7_eqFunction_9142,
    outputs_WaterCooledChillerExample7_eqFunction_9157,
    outputs_WaterCooledChillerExample7_eqFunction_9158,
    outputs_WaterCooledChillerExample7_eqFunction_9162,
    outputs_WaterCooledChillerExample7_eqFunction_9163,
    outputs_WaterCooledChillerExample7_eqFunction_9215,
    outputs_WaterCooledChillerExample7_eqFunction_9216,
    outputs_WaterCooledChillerExample7_eqFunction_9220,
    outputs_WaterCooledChillerExample7_eqFunction_9221,
    outputs_WaterCooledChillerExample7_eqFunction_9222,
    outputs_WaterCooledChillerExample7_eqFunction_9223,
    outputs_WaterCooledChillerExample7_eqFunction_9224,
    outputs_WaterCooledChillerExample7_eqFunction_9225,
    outputs_WaterCooledChillerExample7_eqFunction_9226,
    outputs_WaterCooledChillerExample7_eqFunction_9240,
    outputs_WaterCooledChillerExample7_eqFunction_9246,
    outputs_WaterCooledChillerExample7_eqFunction_9247,
    outputs_WaterCooledChillerExample7_eqFunction_9250,
    outputs_WaterCooledChillerExample7_eqFunction_9251,
    outputs_WaterCooledChillerExample7_eqFunction_9254,
    outputs_WaterCooledChillerExample7_eqFunction_9255,
    outputs_WaterCooledChillerExample7_eqFunction_9256,
    outputs_WaterCooledChillerExample7_eqFunction_9257,
    outputs_WaterCooledChillerExample7_eqFunction_9261,
    outputs_WaterCooledChillerExample7_eqFunction_9262,
    outputs_WaterCooledChillerExample7_eqFunction_9263,
    outputs_WaterCooledChillerExample7_eqFunction_9264,
    outputs_WaterCooledChillerExample7_eqFunction_9265,
    outputs_WaterCooledChillerExample7_eqFunction_9266,
    outputs_WaterCooledChillerExample7_eqFunction_9271,
    outputs_WaterCooledChillerExample7_eqFunction_9274,
    outputs_WaterCooledChillerExample7_eqFunction_9275,
    outputs_WaterCooledChillerExample7_eqFunction_9288,
    outputs_WaterCooledChillerExample7_eqFunction_9297,
    outputs_WaterCooledChillerExample7_eqFunction_9298,
    outputs_WaterCooledChillerExample7_eqFunction_9299,
    outputs_WaterCooledChillerExample7_eqFunction_9311,
    outputs_WaterCooledChillerExample7_eqFunction_9315,
    outputs_WaterCooledChillerExample7_eqFunction_9316,
    outputs_WaterCooledChillerExample7_eqFunction_9317,
    outputs_WaterCooledChillerExample7_eqFunction_9318,
    outputs_WaterCooledChillerExample7_eqFunction_9338,
    outputs_WaterCooledChillerExample7_eqFunction_9347,
    outputs_WaterCooledChillerExample7_eqFunction_9361,
    outputs_WaterCooledChillerExample7_eqFunction_9362,
    outputs_WaterCooledChillerExample7_eqFunction_9363,
    outputs_WaterCooledChillerExample7_eqFunction_9364,
    outputs_WaterCooledChillerExample7_eqFunction_9368,
    outputs_WaterCooledChillerExample7_eqFunction_9369,
    outputs_WaterCooledChillerExample7_eqFunction_9370,
    outputs_WaterCooledChillerExample7_eqFunction_9371,
    outputs_WaterCooledChillerExample7_eqFunction_9372,
    outputs_WaterCooledChillerExample7_eqFunction_9373,
    outputs_WaterCooledChillerExample7_eqFunction_9378,
    outputs_WaterCooledChillerExample7_eqFunction_9381,
    outputs_WaterCooledChillerExample7_eqFunction_9382,
    outputs_WaterCooledChillerExample7_eqFunction_9417,
    outputs_WaterCooledChillerExample7_eqFunction_9418,
    outputs_WaterCooledChillerExample7_eqFunction_9419,
    outputs_WaterCooledChillerExample7_eqFunction_9467,
    outputs_WaterCooledChillerExample7_eqFunction_9468,
    outputs_WaterCooledChillerExample7_eqFunction_9472,
    outputs_WaterCooledChillerExample7_eqFunction_9473,
    outputs_WaterCooledChillerExample7_eqFunction_9474,
    outputs_WaterCooledChillerExample7_eqFunction_9475
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif