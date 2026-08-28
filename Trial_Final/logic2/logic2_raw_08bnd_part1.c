#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5724
type: SIMPLE_ASSIGN
damEA.m_flow_turbulent = if damEA.use_deltaM then damEA.deltaM * 55.989691542288554 else damEA.eta_default * damEA.ReC * sqrt(damEA.A) * damEA.facRouDuc
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5724};
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  tmp82 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[367]] /* damEA.use_deltaM PARAM */);
  if(tmp82)
  {
    tmp83 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damEA.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp81 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* damEA.A PARAM */);
    if(!(tmp81 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damEA.A) was %g should be >= 0", tmp81);
      }
    }
    tmp83 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* damEA.ReC PARAM */))) * (sqrt(tmp81))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* damEA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* damEA.m_flow_turbulent PARAM */) = tmp83;
  threadData->lastEquationSolved = 5724;
}

/*
equation index: 5734
type: SIMPLE_ASSIGN
damRet.cL[1] = (log(damRet.k0) + (-damRet.b) - damRet.a) / damRet.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5734};
  modelica_real tmp84;
  modelica_real tmp85;
  tmp84 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.k0 PARAM */);
  if(!(tmp84 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k0) was %g should be > 0", tmp84);
    }
  }tmp85 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* damRet.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* damRet.cL[1] PARAM */) = DIVISION_SIM(log(tmp84) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */),(tmp85 * tmp85),"damRet.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5734;
}

/*
equation index: 5735
type: SIMPLE_ASSIGN
damRet.cL[2] = (2.0 * damRet.b + (-2.0) * log(damRet.k0) + 2.0 * damRet.a - damRet.b * damRet.yL) / damRet.yL
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5735};
  modelica_real tmp86;
  tmp86 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.k0 PARAM */);
  if(!(tmp86 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k0) was %g should be > 0", tmp86);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */)) + (-2.0) * (log(tmp86)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* damRet.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* damRet.yL PARAM */),"damRet.yL",equationIndexes);
  threadData->lastEquationSolved = 5735;
}

/*
equation index: 5736
type: SIMPLE_ASSIGN
damRet.cL[3] = log(damRet.k0)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5736};
  modelica_real tmp87;
  tmp87 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.k0 PARAM */);
  if(!(tmp87 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k0) was %g should be > 0", tmp87);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.cL[3] PARAM */) = log(tmp87);
  threadData->lastEquationSolved = 5736;
}

/*
equation index: 5737
type: SIMPLE_ASSIGN
damRet.cU[1] = (log(damRet.k1) - damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5737};
  modelica_real tmp88;
  modelica_real tmp89;
  tmp88 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* damRet.k1 PARAM */);
  if(!(tmp88 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k1) was %g should be > 0", tmp88);
    }
  }tmp89 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* damRet.cU[1] PARAM */) = DIVISION_SIM(log(tmp88) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */),1.0 + (tmp89 * tmp89) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 5737;
}

/*
equation index: 5738
type: SIMPLE_ASSIGN
damRet.cU[2] = (damRet.b * damRet.yU ^ 2.0 + 2.0 * log(damRet.k1) * damRet.yU + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b) / (-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5738};
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  tmp90 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */);
  tmp91 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* damRet.k1 PARAM */);
  if(!(tmp91 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k1) was %g should be > 0", tmp91);
    }
  }tmp92 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* damRet.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */)) * ((tmp90 * tmp90)) + (2.0) * ((log(tmp91)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */)) - ((tmp92 * tmp92)),"-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5738;
}

/*
equation index: 5739
type: SIMPLE_ASSIGN
damRet.cU[3] = (damRet.yU ^ 2.0 * (log(damRet.k1) + damRet.b) + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b + damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5739};
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  tmp93 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */);
  tmp94 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* damRet.k1 PARAM */);
  if(!(tmp94 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damRet.k1) was %g should be > 0", tmp94);
    }
  }tmp95 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* damRet.cU[3] PARAM */) = DIVISION_SIM(((tmp93 * tmp93)) * (log(tmp94) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */),1.0 + (tmp95 * tmp95) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 5739;
}

/*
equation index: 5740
type: SIMPLE_ASSIGN
damRet.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5740};
  real_array tmp96;
  real_array tmp97;
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp97, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */), tmp96, tmp97, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */));
  threadData->lastEquationSolved = 5740;
}

/*
equation index: 5742
type: SIMPLE_ASSIGN
damRet.rho_default = 1.1843079200592153e-5 * damRet.sta_default.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* damRet.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* damRet.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5742;
}

/*
equation index: 5743
type: SIMPLE_ASSIGN
damRet.A = 55.989691542288554 / (damRet.v_nominal * damRet.rho_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damRet.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1312]] /* damRet.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* damRet.rho_default PARAM */)),"damRet.v_nominal * damRet.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5743;
}

/*
equation index: 5744
type: SIMPLE_ASSIGN
damRet.kDam_default = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / damRet.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5744};
  modelica_real tmp98;
  tmp98 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* damRet.rho_default PARAM */);
  if(!(tmp98 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damRet.rho_default) was %g should be >= 0", tmp98);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* damRet.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp98)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damRet.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.kThetaSqRt_default PARAM */),"damRet.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5744;
}

/*
equation index: 5745
type: SIMPLE_ASSIGN
damRet.facRouDuc = if damRet.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* damRet.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[382]] /* damRet.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5745;
}

/*
equation index: 5751
type: SIMPLE_ASSIGN
damRet.dp_nominal = (55.989691542288554 / damRet.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5751};
  modelica_real tmp99;
  tmp99 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* damRet.kDam_default PARAM */),"damRet.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* damRet.dp_nominal PARAM */) = (tmp99 * tmp99);
  threadData->lastEquationSolved = 5751;
}

/*
equation index: 5752
type: SIMPLE_ASSIGN
damRet.dp_nominal_pos = abs(damRet.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* damRet.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5752;
}

/*
equation index: 5755
type: SIMPLE_ASSIGN
damRet.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damRet.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5755};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5755;
}

/*
equation index: 5758
type: SIMPLE_ASSIGN
damRet.m_flow_turbulent = if damRet.use_deltaM then damRet.deltaM * 55.989691542288554 else damRet.eta_default * damRet.ReC * sqrt(damRet.A) * damRet.facRouDuc
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5758};
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  tmp101 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[385]] /* damRet.use_deltaM PARAM */);
  if(tmp101)
  {
    tmp102 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* damRet.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp100 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damRet.A PARAM */);
    if(!(tmp100 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damRet.A) was %g should be >= 0", tmp100);
      }
    }
    tmp102 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damRet.ReC PARAM */))) * (sqrt(tmp100))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* damRet.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* damRet.m_flow_turbulent PARAM */) = tmp102;
  threadData->lastEquationSolved = 5758;
}

/*
equation index: 5810
type: SIMPLE_ASSIGN
fanRet.eff.per.speeds_rpm[1] = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1396]] /* fanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1394]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5810;
}

/*
equation index: 5811
type: SIMPLE_ASSIGN
fanRet.eff.per.constantSpeed_rpm = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5811};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1382]] /* fanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1394]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5811;
}

/*
equation index: 5815
type: SIMPLE_ASSIGN
fanRet.eff.per.motorCooledByFluid = fanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5815};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[396]] /* fanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[403]] /* fanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5815;
}

/*
equation index: 5816
type: SIMPLE_ASSIGN
fanRet.eff.per.power.P[1] = fanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* fanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1421]] /* fanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5816;
}

/*
equation index: 5817
type: SIMPLE_ASSIGN
fanRet.eff.per.power.V_flow[1] = fanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* fanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1422]] /* fanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5817;
}

/*
equation index: 5818
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.eta[1] = fanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5818};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1420]] /* fanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5818;
}

/*
equation index: 5819
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.V_flow[1] = fanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5819};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1419]] /* fanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5819;
}

/*
equation index: 5820
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.eta[1] = fanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1384]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1418]] /* fanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5820;
}

/*
equation index: 5821
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.V_flow[1] = fanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1417]] /* fanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5821;
}

/*
equation index: 5834
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* fanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1411]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5834;
}

/*
equation index: 5835
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_start = fanRet.m_flow_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* fanRet.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1412]] /* fanRet.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5835;
}

/*
equation index: 5838
type: SIMPLE_ASSIGN
fanRet.vol.tau = fanRet.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1481]] /* fanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* fanRet.tau PARAM */);
  threadData->lastEquationSolved = 5838;
}

/*
equation index: 5839
type: SIMPLE_ASSIGN
fanRet.vol.V_nominal = 55.989691542288554 * fanRet.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* fanRet.vol.V_nominal PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1481]] /* fanRet.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 5839;
}

/*
equation index: 5857
type: SIMPLE_ASSIGN
fanRet.vol.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1451]] /* fanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1411]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5857;
}

/*
equation index: 5858
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flow_small = fanRet.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5858};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* fanRet.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1451]] /* fanRet.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5858;
}

/*
equation index: 5859
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaReg = 0.001 * fanRet.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5859};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* fanRet.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 5859;
}

/*
equation index: 5860
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaInvReg = 1.0 / fanRet.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */),"fanRet.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 5860;
}

/*
equation index: 5861
type: SIMPLE_ASSIGN
fanRet.vol.steBal.fReg = 104.0 * fanRet.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 5861;
}

/*
equation index: 5862
type: SIMPLE_ASSIGN
fanRet.vol.steBal.eReg = (-380.0) * fanRet.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1472]] /* fanRet.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 5862;
}

/*
equation index: 5863
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dReg = 534.0 * fanRet.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5863};
  modelica_real tmp103;
  tmp103 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  tmp103 *= tmp103;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanRet.vol.steBal.dReg PARAM */) = (534.0) * ((tmp103 * tmp103));
  threadData->lastEquationSolved = 5863;
}

/*
equation index: 5864
type: SIMPLE_ASSIGN
fanRet.vol.steBal.cReg = (-361.0) * fanRet.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5864};
  modelica_real tmp104;
  tmp104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* fanRet.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp104 * tmp104 * tmp104));
  threadData->lastEquationSolved = 5864;
}

/*
equation index: 5865
type: SIMPLE_ASSIGN
fanRet.vol.steBal.bReg = 119.0 * fanRet.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5865};
  modelica_real tmp105;
  tmp105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1466]] /* fanRet.vol.steBal.bReg PARAM */) = (119.0) * ((tmp105 * tmp105));
  threadData->lastEquationSolved = 5865;
}

/*
equation index: 5866
type: SIMPLE_ASSIGN
fanRet.vol.steBal.aReg = (-15.0) * fanRet.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5866};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* fanRet.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 5866;
}

/*
equation index: 5876
type: SIMPLE_ASSIGN
fanRet.vol.V = fanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* fanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* fanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5876;
}

/*
equation index: 5882
type: SIMPLE_ASSIGN
fanRet.vol.X_start[2] = fanRet.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1448]] /* fanRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* fanRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5882;
}

/*
equation index: 5883
type: SIMPLE_ASSIGN
fanRet.vol.X_start[1] = fanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* fanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* fanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5883;
}

/*
equation index: 5884
type: SIMPLE_ASSIGN
fanRet.vol.T_start = fanRet.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1444]] /* fanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* fanRet.T_start PARAM */);
  threadData->lastEquationSolved = 5884;
}

/*
equation index: 5885
type: SIMPLE_ASSIGN
fanRet.vol.p_start = fanRet.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1452]] /* fanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1414]] /* fanRet.p_start PARAM */);
  threadData->lastEquationSolved = 5885;
}

/*
equation index: 5906
type: SIMPLE_ASSIGN
fanRet.stageInputs[1] = fanRet.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5906};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* fanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1413]] /* fanRet.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5906;
}

/*
equation index: 5910
type: SIMPLE_ASSIGN
fanRet.per.speeds_rpm[1] = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* fanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5910;
}

/*
equation index: 5911
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed_rpm = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1416]] /* fanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5911;
}

/*
equation index: 5912
type: SIMPLE_ASSIGN
fanRet.per.speeds[1] = fanRet.per.speeds_rpm[1] / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* fanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* fanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5912;
}

/*
equation index: 5913
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed = fanRet.per.constantSpeed_rpm / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* fanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1416]] /* fanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5913;
}

/*
equation index: 5934
type: SIMPLE_ASSIGN
conPIDTAirSup.gainTrack.k = 1.0 / (conPIDTAirSup.Ni * conPIDTAirSup.k)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[467]] /* conPIDTAirSup.gainTrack.k PARAM */) = DIVISION_SIM(1.0,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[452]] /* conPIDTAirSup.Ni PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[468]] /* conPIDTAirSup.k PARAM */)),"conPIDTAirSup.Ni * conPIDTAirSup.k",equationIndexes);
  threadData->lastEquationSolved = 5934;
}

/*
equation index: 5935
type: SIMPLE_ASSIGN
conPIDTAirSup.gainPID.k = conPIDTAirSup.k
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* conPIDTAirSup.gainPID.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[468]] /* conPIDTAirSup.k PARAM */);
  threadData->lastEquationSolved = 5935;
}

/*
equation index: 5939
type: SIMPLE_ASSIGN
conPIDTAirSup.revAct = if conPIDTAirSup.reverseAction then -1.0 else 1.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5939};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.revAct PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[117]] /* conPIDTAirSup.reverseAction PARAM */)?-1.0:1.0);
  threadData->lastEquationSolved = 5939;
}

/*
equation index: 5940
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* conPIDTAirSup.addI.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 5940;
}

/*
equation index: 5941
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k1 = conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* conPIDTAirSup.addI.k1 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.revAct PARAM */);
  threadData->lastEquationSolved = 5941;
}

/*
equation index: 5952
type: SIMPLE_ASSIGN
conPIDTAirSup.I.k = 1.0 / conPIDTAirSup.Ti
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5952};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* conPIDTAirSup.I.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* conPIDTAirSup.Ti PARAM */),"conPIDTAirSup.Ti",equationIndexes);
  threadData->lastEquationSolved = 5952;
}

/*
equation index: 5953
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[460]] /* conPIDTAirSup.addP.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 5953;
}

/*
equation index: 5954
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k1 = conPIDTAirSup.revAct * conPIDTAirSup.wp
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5954};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* conPIDTAirSup.addP.k1 PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.revAct PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[473]] /* conPIDTAirSup.wp PARAM */));
  threadData->lastEquationSolved = 5954;
}

/*
equation index: 5964
type: SIMPLE_ASSIGN
ramp.startTime = demandRampStartTime
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5964};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* ramp.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* demandRampStartTime PARAM */);
  threadData->lastEquationSolved = 5964;
}

/*
equation index: 5965
type: SIMPLE_ASSIGN
ramp.duration = demandRampDuration
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5965};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* ramp.duration PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* demandRampDuration PARAM */);
  threadData->lastEquationSolved = 5965;
}

/*
equation index: 5979
type: SIMPLE_ASSIGN
vol.dynBal.X_start[1] = vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2849]] /* vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5979;
}

/*
equation index: 5980
type: SIMPLE_ASSIGN
vol.dynBal.hStart = 20120.0 * (1.0 - vol.dynBal.X_start[1]) + 2.5382145e6 * vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2853]] /* vol.dynBal.hStart PARAM */) = (20120.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2849]] /* vol.dynBal.X_start[1] PARAM */)) + (2.5382145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2849]] /* vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5980;
}

/*
equation index: 5988
type: SIMPLE_ASSIGN
vol.dynBal.p_start = vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5988};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2866]] /* vol.p_start PARAM */);
  threadData->lastEquationSolved = 5988;
}

/*
equation index: 5989
type: SIMPLE_ASSIGN
vol.dynBal.rho_start = 1.1843079200592153e-5 * vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5989;
}

/*
equation index: 5992
type: SIMPLE_ASSIGN
vol.V = rooLen * rooWid * rooHei
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* rooLen PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* rooWid PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2674]] /* rooHei PARAM */)));
  threadData->lastEquationSolved = 5992;
}

/*
equation index: 5993
type: SIMPLE_ASSIGN
vol.dynBal.fluidVolume = vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2852]] /* vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* vol.V PARAM */);
  threadData->lastEquationSolved = 5993;
}

/*
equation index: 6001
type: SIMPLE_ASSIGN
vol.dynBal.X_start[2] = vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2850]] /* vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2846]] /* vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 6001;
}

/*
equation index: 6022
type: SIMPLE_ASSIGN
weaData.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* weaData.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 6022;
}

/*
equation index: 6023
type: SIMPLE_ASSIGN
weaData.longitude.longitude = weaData.lon
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* weaData.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 6023;
}

/*
equation index: 6024
type: SIMPLE_ASSIGN
weaData.latitude.latitude = weaData.lat
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2904]] /* weaData.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2903]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 6024;
}

/*
equation index: 6025
type: SIMPLE_ASSIGN
weaData.datRea1.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* weaData.datRea1.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 6025;
}

/*
equation index: 6026
type: SIMPLE_ASSIGN
weaData.datRea1.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6026};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2902]] /* weaData.datRea1.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 6026;
}

/*
equation index: 6033
type: SIMPLE_ASSIGN
weaData.datRea1.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6033};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* weaData.datRea1.tableName PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 6033;
}

/*
equation index: 6036
type: SIMPLE_ASSIGN
weaData.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 6036;
}

/*
equation index: 6037
type: SIMPLE_ASSIGN
weaData.locTim.timZon = weaData.timZon
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2907]] /* weaData.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.timZon PARAM */);
  threadData->lastEquationSolved = 6037;
}

/*
equation index: 6038
type: SIMPLE_ASSIGN
weaData.locTim.lon = weaData.lon
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* weaData.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 6038;
}

/*
equation index: 6039
type: SIMPLE_ASSIGN
weaData.locTim.diff = 13750.987083139758 * weaData.locTim.lon - weaData.locTim.timZon
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* weaData.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* weaData.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2907]] /* weaData.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 6039;
}

/*
equation index: 6048
type: SIMPLE_ASSIGN
weaData.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6048};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2899]] /* weaData.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 6048;
}

/*
equation index: 6049
type: SIMPLE_ASSIGN
weaData.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6049};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2900]] /* weaData.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 6049;
}

/*
equation index: 6079
type: SIMPLE_ASSIGN
weaData.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6079};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* weaData.datRea.tableName PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 6079;
}

/*
equation index: 6082
type: ARRAY_CALL_ASSIGN

weaData.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaData.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6082};
  real_array tmp106;
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* weaData.timeSpan[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */), _OMC_LIT90), tmp106);
  threadData->lastEquationSolved = 6082;
}

/*
equation index: 6097
type: SIMPLE_ASSIGN
TCHWLeaCoi.ratTau = TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* TCHWLeaCoi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6097;
}

/*
equation index: 6098
type: SIMPLE_ASSIGN
TCHWLeaCoi.tauHeaTraInv = if TCHWLeaCoi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6098};
  modelica_boolean tmp107;
  tmp107 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* TCHWLeaCoi.tauHeaTraInv PARAM */) = (tmp107?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */),"TCHWLeaCoi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6098;
}

/*
equation index: 6104
type: SIMPLE_ASSIGN
TCHWLeaCoi.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* TCHWLeaCoi.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6104;
}

/*
equation index: 6105
type: SIMPLE_ASSIGN
TCHWLeaCoi.m_flow_small = 1e-4 * TCHWLeaCoi.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* TCHWLeaCoi.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* TCHWLeaCoi.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6105;
}

/*
equation index: 6107
type: SIMPLE_ASSIGN
valByp.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6107;
}

/*
equation index: 6108
type: SIMPLE_ASSIGN
valByp.kFixed = 0.008184084337096277 * valByp.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* valByp.kFixed PARAM */) = (0.008184084337096277) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6108;
}

/*
equation index: 6114
type: SIMPLE_ASSIGN
valByp.dp_nominal = 14930.0 + valByp.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2829]] /* valByp.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* valByp.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6114;
}

/*
equation index: 6115
type: SIMPLE_ASSIGN
valByp.dp_nominal_pos = abs(valByp.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* valByp.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2829]] /* valByp.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6115;
}

/*
equation index: 6116
type: SIMPLE_ASSIGN
valByp.m_flow_nominal_pos = abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6116;
}

/*
equation index: 6119
type: SIMPLE_ASSIGN
valByp.eta_default = logic2.valByp.Medium.dynamicViscosity(valByp.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6119};
  logic2_valByp_Medium_ThermodynamicState tmp108;
  logic2_valByp_Medium_ThermodynamicState_wrap_vars(threadData,tmp108, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2841]] /* valByp.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.eta_default PARAM */) = omc_logic2_valByp_Medium_dynamicViscosity(threadData, tmp108);
  threadData->lastEquationSolved = 6119;
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
valByp.m_flow_turbulent = valByp.deltaM * abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* valByp.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* valByp.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6120;
}

/*
equation index: 6127
type: SIMPLE_ASSIGN
valByp.m_flow_small = 1e-4 * abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6127;
}

/*
equation index: 6129
type: SIMPLE_ASSIGN
TCWEntTow.ratTau = TCWEntTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* TCWEntTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6129;
}

/*
equation index: 6130
type: SIMPLE_ASSIGN
TCWEntTow.tauHeaTraInv = if TCWEntTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWEntTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6130};
  modelica_boolean tmp109;
  tmp109 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* TCWEntTow.tauHeaTraInv PARAM */) = (tmp109?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTra PARAM */),"TCWEntTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6130;
}

/*
equation index: 6136
type: SIMPLE_ASSIGN
TCWEntTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* TCWEntTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6136;
}

/*
equation index: 6137
type: SIMPLE_ASSIGN
TCWEntTow.m_flow_small = 1e-4 * TCWEntTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* TCWEntTow.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* TCWEntTow.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6137;
}

/*
equation index: 6139
type: SIMPLE_ASSIGN
TCWLeaTow.ratTau = TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* TCWLeaTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6139;
}

/*
equation index: 6140
type: SIMPLE_ASSIGN
TCWLeaTow.tauHeaTraInv = if TCWLeaTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6140};
  modelica_boolean tmp110;
  tmp110 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* TCWLeaTow.tauHeaTraInv PARAM */) = (tmp110?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTra PARAM */),"TCWLeaTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6140;
}

/*
equation index: 6146
type: SIMPLE_ASSIGN
TCWLeaTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* TCWLeaTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6146;
}

/*
equation index: 6147
type: SIMPLE_ASSIGN
TCWLeaTow.m_flow_small = 1e-4 * TCWLeaTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* TCWLeaTow.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* TCWLeaTow.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6147;
}

/*
equation index: 6149
type: SIMPLE_ASSIGN
TCHWEntChi.ratTau = TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* TCHWEntChi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6149;
}

/*
equation index: 6150
type: SIMPLE_ASSIGN
TCHWEntChi.tauHeaTraInv = if TCHWEntChi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6150};
  modelica_boolean tmp111;
  tmp111 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* TCHWEntChi.tauHeaTraInv PARAM */) = (tmp111?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */),"TCHWEntChi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6150;
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
TCHWEntChi.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6156};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* TCHWEntChi.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6156;
}

/*
equation index: 6157
type: SIMPLE_ASSIGN
TCHWEntChi.m_flow_small = 1e-4 * TCHWEntChi.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* TCHWEntChi.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* TCHWEntChi.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6157;
}

/*
equation index: 6159
type: SIMPLE_ASSIGN
TAirSup.ratTau = TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TAirSup.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6159;
}

/*
equation index: 6160
type: SIMPLE_ASSIGN
TAirSup.tauHeaTraInv = if TAirSup.tauHeaTra < 1e-10 then 0.0 else 1.0 / TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6160};
  modelica_boolean tmp112;
  tmp112 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* TAirSup.tauHeaTraInv PARAM */) = (tmp112?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),"TAirSup.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6160;
}

/*
equation index: 6168
type: SIMPLE_ASSIGN
TCHWChi1Out.ratTau = TCHWChi1Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* TCHWChi1Out.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6168;
}

/*
equation index: 6169
type: SIMPLE_ASSIGN
TCHWChi1Out.tauHeaTraInv = if TCHWChi1Out.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi1Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6169};
  modelica_boolean tmp113;
  tmp113 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* TCHWChi1Out.tauHeaTraInv PARAM */) = (tmp113?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */),"TCHWChi1Out.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6169;
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
TCHWChi1Out.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* TCHWChi1Out.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6175;
}

/*
equation index: 6176
type: SIMPLE_ASSIGN
TCHWChi1Out.m_flow_small = 1e-4 * TCHWChi1Out.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* TCHWChi1Out.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* TCHWChi1Out.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6176;
}

/*
equation index: 6178
type: SIMPLE_ASSIGN
TCHWChi1In.ratTau = TCHWChi1In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* TCHWChi1In.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6178;
}

/*
equation index: 6179
type: SIMPLE_ASSIGN
TCHWChi1In.tauHeaTraInv = if TCHWChi1In.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi1In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6179};
  modelica_boolean tmp114;
  tmp114 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* TCHWChi1In.tauHeaTraInv PARAM */) = (tmp114?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */),"TCHWChi1In.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6179;
}

/*
equation index: 6185
type: SIMPLE_ASSIGN
TCHWChi1In.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* TCHWChi1In.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6185;
}

/*
equation index: 6186
type: SIMPLE_ASSIGN
TCHWChi1In.m_flow_small = 1e-4 * TCHWChi1In.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* TCHWChi1In.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* TCHWChi1In.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6186;
}

/*
equation index: 6188
type: SIMPLE_ASSIGN
val6.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6188;
}

/*
equation index: 6189
type: SIMPLE_ASSIGN
val6.kFixed = 0.0030932931235336655 * val6.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* val6.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6189;
}

/*
equation index: 6195
type: SIMPLE_ASSIGN
val6.dp_nominal = 104510.0 + val6.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2735]] /* val6.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2734]] /* val6.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6195;
}

/*
equation index: 6196
type: SIMPLE_ASSIGN
val6.dp_nominal_pos = abs(val6.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* val6.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2735]] /* val6.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6196;
}

/*
equation index: 6197
type: SIMPLE_ASSIGN
val6.m_flow_nominal_pos = abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2741]] /* val6.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6197;
}

/*
equation index: 6200
type: SIMPLE_ASSIGN
val6.eta_default = logic2.val6.Medium.dynamicViscosity(val6.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6200};
  logic2_val6_Medium_ThermodynamicState tmp115;
  logic2_val6_Medium_ThermodynamicState_wrap_vars(threadData,tmp115, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* val6.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* val6.eta_default PARAM */) = omc_logic2_val6_Medium_dynamicViscosity(threadData, tmp115);
  threadData->lastEquationSolved = 6200;
}

/*
equation index: 6201
type: SIMPLE_ASSIGN
val6.m_flow_turbulent = val6.deltaM * abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* val6.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2732]] /* val6.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6201;
}

/*
equation index: 6208
type: SIMPLE_ASSIGN
val6.m_flow_small = 1e-4 * abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6208;
}

/*
equation index: 6210
type: SIMPLE_ASSIGN
chi.TConEnt_nominal_degC = -273.15 + chi.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6210};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* chi.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 6210;
}

/*
equation index: 6211
type: SIMPLE_ASSIGN
chi.per.QEva_flow_nominal = -chiller1Capacity
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.per.QEva_flow_nominal PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */));
  threadData->lastEquationSolved = 6211;
}

/*
equation index: 6212
type: SIMPLE_ASSIGN
chi.QEva_flow_nominal = chi.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* chi.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6212;
}

/*
equation index: 6213
type: SIMPLE_ASSIGN
chi.Q_flow_small = 1e-9 * chi.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* chi.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* chi.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6213;
}

/*
equation index: 6214
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal = chi.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* chi.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* chi.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 6214;
}

/*
equation index: 6215
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal_degC = -273.15 + chi.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* chi.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* chi.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 6215;
}

/*
equation index: 6216
type: SIMPLE_ASSIGN
chi.mCon_flow_nominal = chi.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* chi.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* chi.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6216;
}

/*
equation index: 6217
type: SIMPLE_ASSIGN
chi.mEva_flow_nominal = chi.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* chi.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* chi.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6217;
}

/*
equation index: 6218
type: SIMPLE_ASSIGN
chi.etaMotor = chi.per.etaMotor
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* chi.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 6218;
}

/*
equation index: 6219
type: SIMPLE_ASSIGN
chi.PLRMin = chi.per.PLRMin
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* chi.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* chi.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 6219;
}

/*
equation index: 6220
type: SIMPLE_ASSIGN
chi.PLRMinUnl = chi.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* chi.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 6220;
}

/*
equation index: 6221
type: SIMPLE_ASSIGN
chi.PLRMax = chi.per.PLRMax
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* chi.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* chi.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 6221;
}

/*
equation index: 6222
type: SIMPLE_ASSIGN
chi.COP_nominal = chi.per.COP_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* chi.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* chi.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 6222;
}

/*
equation index: 6225
type: SIMPLE_ASSIGN
chi.rho2_nominal = logic2.chi.Medium2.density(chi.sta2_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6225};
  logic2_chi_Medium2_ThermodynamicState tmp116;
  logic2_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp116, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* chi.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* chi.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* chi.rho2_nominal PARAM */) = omc_logic2_chi_Medium2_density(threadData, tmp116);
  threadData->lastEquationSolved = 6225;
}

/*
equation index: 6228
type: SIMPLE_ASSIGN
chi.rho1_nominal = logic2.chi.Medium1.density(chi.sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6228};
  logic2_chi_Medium1_ThermodynamicState tmp117;
  logic2_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp117, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* chi.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.rho1_nominal PARAM */) = omc_logic2_chi_Medium1_density(threadData, tmp117);
  threadData->lastEquationSolved = 6228;
}

/*
equation index: 6234
type: SIMPLE_ASSIGN
chi.m2_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6234;
}

/*
equation index: 6235
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_nominal = chi.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* chi.preDro2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6235;
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_nominal_pos = abs(chi.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* chi.preDro2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* chi.preDro2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6236;
}

/*
equation index: 6239
type: SIMPLE_ASSIGN
chi.preDro2.eta_default = logic2.chi.preDro2.Medium.dynamicViscosity(chi.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6239};
  logic2_chi_preDro2_Medium_ThermodynamicState tmp118;
  logic2_chi_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp118, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* chi.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* chi.preDro2.eta_default PARAM */) = omc_logic2_chi_preDro2_Medium_dynamicViscosity(threadData, tmp118);
  threadData->lastEquationSolved = 6239;
}

/*
equation index: 6248
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_small = 1e-4 * abs(chi.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* chi.preDro2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* chi.preDro2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6248;
}

/*
equation index: 6255
type: SIMPLE_ASSIGN
chi.m1_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6255;
}

/*
equation index: 6256
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_nominal = chi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6256;
}

/*
equation index: 6257
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_nominal_pos = abs(chi.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6257;
}

/*
equation index: 6260
type: SIMPLE_ASSIGN
chi.preDro1.eta_default = logic2.chi.preDro1.Medium.dynamicViscosity(chi.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6260};
  logic2_chi_preDro1_Medium_ThermodynamicState tmp119;
  logic2_chi_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp119, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* chi.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.preDro1.eta_default PARAM */) = omc_logic2_chi_preDro1_Medium_dynamicViscosity(threadData, tmp119);
  threadData->lastEquationSolved = 6260;
}

/*
equation index: 6269
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_small = 1e-4 * abs(chi.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6269;
}

/*
equation index: 6273
type: SIMPLE_ASSIGN
chi.vol2.T_start = chi.T2_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* chi.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 6273;
}

/*
equation index: 6274
type: SIMPLE_ASSIGN
chi.vol2.state_start.T = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 6274;
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
chi.vol2.p_start = chi.p2_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* chi.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 6275;
}

/*
equation index: 6276
type: SIMPLE_ASSIGN
chi.vol2.state_start.p = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 6276;
}

/*
equation index: 6280
type: SIMPLE_ASSIGN
chi.vol2.rho_start = logic2.chi.vol2.Medium.density(chi.vol2.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6280};
  logic2_chi_vol2_Medium_ThermodynamicState tmp120;
  logic2_chi_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp120, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* chi.vol2.rho_start PARAM */) = omc_logic2_chi_vol2_Medium_density(threadData, tmp120);
  threadData->lastEquationSolved = 6280;
}

/*
equation index: 6281
type: SIMPLE_ASSIGN
chi.vol2.dynBal.p_start = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6281};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* chi.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 6281;
}

/*
equation index: 6282
type: SIMPLE_ASSIGN
chi.vol2.dynBal.T_start = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 6282;
}

/*
equation index: 6283
type: SIMPLE_ASSIGN
chi.vol2.X_start[1] = chi.X2_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6283};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* chi.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* chi.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 6283;
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
chi.vol2.dynBal.X_start[1] = chi.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[238]] /* chi.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* chi.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6284;
}

/*
equation index: 6285
type: SIMPLE_ASSIGN
chi.vol2.dynBal.hStart = logic2.chi.vol2.dynBal.Medium.specificEnthalpy_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, chi.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6285};
  real_array tmp121;
  real_array_create(&tmp121, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[238]] /* chi.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* chi.vol2.dynBal.hStart PARAM */) = omc_logic2_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */), tmp121);
  threadData->lastEquationSolved = 6285;
}

/*
equation index: 6290
type: SIMPLE_ASSIGN
chi.vol2.dynBal.rho_start = logic2.chi.vol2.dynBal.Medium.density(logic2.chi.vol2.dynBal.Medium.setState_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* chi.vol2.dynBal.rho_start PARAM */) = omc_logic2_chi_vol2_dynBal_Medium_density(threadData, omc_logic2_chi_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6290;
}

/*
equation index: 6293
type: SIMPLE_ASSIGN
chi.vol2.V = 30.0 * chi.m2_flow_nominal / chi.rho2_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* chi.rho2_nominal PARAM */),"chi.rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 6293;
}

/*
equation index: 6294
type: SIMPLE_ASSIGN
chi.vol2.dynBal.fluidVolume = chi.vol2.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.V PARAM */);
  threadData->lastEquationSolved = 6294;
}

/*
equation index: 6307
type: SIMPLE_ASSIGN
chi.vol2.m_flow_nominal = chi.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6307};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* chi.vol2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6307;
}

/*
equation index: 6308
type: SIMPLE_ASSIGN
chi.vol2.m_flow_small = 1e-4 * abs(chi.vol2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* chi.vol2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* chi.vol2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6308;
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
chi.vol1.T_start = chi.T1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 6317;
}

/*
equation index: 6318
type: SIMPLE_ASSIGN
chi.vol1.state_start.T = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* chi.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6318;
}

/*
equation index: 6319
type: SIMPLE_ASSIGN
chi.vol1.p_start = chi.p1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 6319;
}

/*
equation index: 6320
type: SIMPLE_ASSIGN
chi.vol1.state_start.p = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* chi.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6320;
}

/*
equation index: 6324
type: SIMPLE_ASSIGN
chi.vol1.rho_start = logic2.chi.vol1.Medium.density(chi.vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6324};
  logic2_chi_vol1_Medium_ThermodynamicState tmp122;
  logic2_chi_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp122, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* chi.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* chi.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi.vol1.rho_start PARAM */) = omc_logic2_chi_vol1_Medium_density(threadData, tmp122);
  threadData->lastEquationSolved = 6324;
}

/*
equation index: 6325
type: SIMPLE_ASSIGN
chi.vol1.dynBal.p_start = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6325;
}

/*
equation index: 6326
type: SIMPLE_ASSIGN
chi.vol1.dynBal.T_start = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6326;
}

/*
equation index: 6327
type: SIMPLE_ASSIGN
chi.vol1.X_start[1] = chi.X1_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* chi.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 6327;
}

/*
equation index: 6328
type: SIMPLE_ASSIGN
chi.vol1.dynBal.X_start[1] = chi.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6328};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6328;
}

/*
equation index: 6329
type: SIMPLE_ASSIGN
chi.vol1.dynBal.hStart = logic2.chi.vol1.dynBal.Medium.specificEnthalpy_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, chi.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6329};
  real_array tmp123;
  real_array_create(&tmp123, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* chi.vol1.dynBal.hStart PARAM */) = omc_logic2_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */), tmp123);
  threadData->lastEquationSolved = 6329;
}

/*
equation index: 6334
type: SIMPLE_ASSIGN
chi.vol1.dynBal.rho_start = logic2.chi.vol1.dynBal.Medium.density(logic2.chi.vol1.dynBal.Medium.setState_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[220]] /* chi.vol1.dynBal.rho_start PARAM */) = omc_logic2_chi_vol1_dynBal_Medium_density(threadData, omc_logic2_chi_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6334;
}

/*
equation index: 6337
type: SIMPLE_ASSIGN
chi.vol1.V = 30.0 * chi.m1_flow_nominal / chi.rho1_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.rho1_nominal PARAM */),"chi.rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 6337;
}

/*
equation index: 6338
type: SIMPLE_ASSIGN
chi.vol1.dynBal.fluidVolume = chi.vol1.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* chi.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.V PARAM */);
  threadData->lastEquationSolved = 6338;
}

/*
equation index: 6351
type: SIMPLE_ASSIGN
chi.vol1.m_flow_nominal = chi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* chi.vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6351;
}

/*
equation index: 6352
type: SIMPLE_ASSIGN
chi.vol1.m_flow_small = 1e-4 * abs(chi.vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* chi.vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* chi.vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6352;
}

/*
equation index: 6376
type: SIMPLE_ASSIGN
chi.m2_flow_small = 1e-4 * abs(chi.m2_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* chi.m2_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6376;
}

/*
equation index: 6377
type: SIMPLE_ASSIGN
chi.m1_flow_small = 1e-4 * abs(chi.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* chi.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6377;
}

/*
equation index: 6380
type: SIMPLE_ASSIGN
expVesChi.state_start.p = expVesChi.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* expVesChi.p_start PARAM */);
  threadData->lastEquationSolved = 6380;
}

/*
equation index: 6381
type: SIMPLE_ASSIGN
expVesChi.state_start.T = expVesChi.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* expVesChi.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1328]] /* expVesChi.T_start PARAM */);
  threadData->lastEquationSolved = 6381;
}

/*
equation index: 6382
type: SIMPLE_ASSIGN
expVesChi.rho_start = logic2.expVesChi.Medium.density(expVesChi.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6382};
  logic2_expVesChi_Medium_ThermodynamicState tmp124;
  logic2_expVesChi_Medium_ThermodynamicState_wrap_vars(threadData,tmp124, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* expVesChi.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesChi.rho_start PARAM */) = omc_logic2_expVesChi_Medium_density(threadData, tmp124);
  threadData->lastEquationSolved = 6382;
}

/*
equation index: 6388
type: SIMPLE_ASSIGN
val1.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6388;
}

/*
equation index: 6389
type: SIMPLE_ASSIGN
val1.kFixed = 0.008184084337096277 * val1.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* val1.kFixed PARAM */) = (0.008184084337096277) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6389;
}

/*
equation index: 6395
type: SIMPLE_ASSIGN
val1.dp_nominal = 14930.0 + val1.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* val1.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* val1.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6395;
}

/*
equation index: 6396
type: SIMPLE_ASSIGN
val1.dp_nominal_pos = abs(val1.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* val1.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* val1.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6396;
}

/*
equation index: 6397
type: SIMPLE_ASSIGN
val1.m_flow_nominal_pos = abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6397;
}

/*
equation index: 6400
type: SIMPLE_ASSIGN
val1.eta_default = logic2.val1.Medium.dynamicViscosity(val1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6400};
  logic2_val1_Medium_ThermodynamicState tmp125;
  logic2_val1_Medium_ThermodynamicState_wrap_vars(threadData,tmp125, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2701]] /* val1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.eta_default PARAM */) = omc_logic2_val1_Medium_dynamicViscosity(threadData, tmp125);
  threadData->lastEquationSolved = 6400;
}

/*
equation index: 6401
type: SIMPLE_ASSIGN
val1.m_flow_turbulent = val1.deltaM * abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* val1.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2686]] /* val1.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6401;
}

/*
equation index: 6408
type: SIMPLE_ASSIGN
val1.m_flow_small = 1e-4 * abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6408;
}

/*
equation index: 6410
type: SIMPLE_ASSIGN
val5.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6410;
}

/*
equation index: 6411
type: SIMPLE_ASSIGN
val5.kFixed = 0.003341138439631633 * val5.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* val5.kFixed PARAM */) = (0.003341138439631633) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6411;
}

/*
equation index: 6417
type: SIMPLE_ASSIGN
val5.dp_nominal = 89580.0 + val5.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* val5.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* val5.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6417;
}

/*
equation index: 6418
type: SIMPLE_ASSIGN
val5.dp_nominal_pos = abs(val5.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* val5.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2712]] /* val5.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6418;
}

/*
equation index: 6419
type: SIMPLE_ASSIGN
val5.m_flow_nominal_pos = abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6419;
}

/*
equation index: 6422
type: SIMPLE_ASSIGN
val5.eta_default = logic2.val5.Medium.dynamicViscosity(val5.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6422};
  logic2_val5_Medium_ThermodynamicState tmp126;
  logic2_val5_Medium_ThermodynamicState_wrap_vars(threadData,tmp126, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2724]] /* val5.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2714]] /* val5.eta_default PARAM */) = omc_logic2_val5_Medium_dynamicViscosity(threadData, tmp126);
  threadData->lastEquationSolved = 6422;
}

/*
equation index: 6423
type: SIMPLE_ASSIGN
val5.m_flow_turbulent = val5.deltaM * abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2709]] /* val5.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6423;
}

/*
equation index: 6430
type: SIMPLE_ASSIGN
val5.m_flow_small = 1e-4 * abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6430};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6430;
}

/*
equation index: 6472
type: SIMPLE_ASSIGN
pumCW.eff.per.speeds_rpm[1] = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6472;
}

/*
equation index: 6473
type: SIMPLE_ASSIGN
pumCW.eff.per.constantSpeed_rpm = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2451]] /* pumCW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6473;
}

/*
equation index: 6477
type: SIMPLE_ASSIGN
pumCW.eff.per.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6477};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[751]] /* pumCW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[760]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6477;
}

/*
equation index: 6478
type: SIMPLE_ASSIGN
pumCW.eff.per.power.P[1] = pumCW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2456]] /* pumCW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* pumCW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6478;
}

/*
equation index: 6479
type: SIMPLE_ASSIGN
pumCW.eff.per.power.V_flow[1] = pumCW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2457]] /* pumCW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2492]] /* pumCW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6479;
}

/*
equation index: 6480
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.eta[1] = pumCW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2490]] /* pumCW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6480;
}

/*
equation index: 6481
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.V_flow[1] = pumCW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2489]] /* pumCW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6481;
}

/*
equation index: 6482
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.eta[1] = pumCW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* pumCW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6482;
}

/*
equation index: 6483
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.V_flow[1] = pumCW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2452]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* pumCW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6483;
}

/*
equation index: 6497
type: SIMPLE_ASSIGN
pumCW.heaDis.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6497};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[757]] /* pumCW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[760]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6497;
}

/*
equation index: 6503
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2504]] /* pumCW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2481]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6503;
}

/*
equation index: 6504
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_start = pumCW.m_flow_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2505]] /* pumCW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2482]] /* pumCW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 6504;
}

/*
equation index: 6507
type: SIMPLE_ASSIGN
pumCW.vol.tau = pumCW.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* pumCW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2513]] /* pumCW.tau PARAM */);
  threadData->lastEquationSolved = 6507;
}

/*
equation index: 6508
type: SIMPLE_ASSIGN
pumCW.vol.V_nominal = 12.5601875 * pumCW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW.vol.V_nominal PARAM */) = (12.5601875) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* pumCW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6508;
}

/*
equation index: 6511
type: SIMPLE_ASSIGN
pumCW.vol.T_start = pumCW.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 6511;
}

/*
equation index: 6512
type: SIMPLE_ASSIGN
pumCW.vol.state_start.T = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* pumCW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6512;
}

/*
equation index: 6513
type: SIMPLE_ASSIGN
pumCW.vol.p_start = pumCW.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 6513;
}

/*
equation index: 6514
type: SIMPLE_ASSIGN
pumCW.vol.state_start.p = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2539]] /* pumCW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6514;
}

/*
equation index: 6518
type: SIMPLE_ASSIGN
pumCW.vol.rho_start = logic2.pumCW.vol.Medium.density(pumCW.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6518};
  logic2_pumCW_vol_Medium_ThermodynamicState tmp127;
  logic2_pumCW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp127, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2539]] /* pumCW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2538]] /* pumCW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.rho_start PARAM */) = omc_logic2_pumCW_vol_Medium_density(threadData, tmp127);
  threadData->lastEquationSolved = 6518;
}

/*
equation index: 6519
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.p_start = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6519;
}

/*
equation index: 6520
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.T_start = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6520;
}

/*
equation index: 6521
type: SIMPLE_ASSIGN
pumCW.vol.X_start[1] = pumCW.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* pumCW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6521;
}

/*
equation index: 6522
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.X_start[1] = pumCW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* pumCW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6522;
}

/*
equation index: 6523
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.hStart = logic2.pumCW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, pumCW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6523};
  real_array tmp128;
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* pumCW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2523]] /* pumCW.vol.dynBal.hStart PARAM */) = omc_logic2_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW.vol.dynBal.T_start PARAM */), tmp128);
  threadData->lastEquationSolved = 6523;
}

/*
equation index: 6528
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.rho_start = logic2.pumCW.vol.dynBal.Medium.density(logic2.pumCW.vol.dynBal.Medium.setState_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* pumCW.vol.dynBal.rho_start PARAM */) = omc_logic2_pumCW_vol_dynBal_Medium_density(threadData, omc_logic2_pumCW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6528;
}

/*
equation index: 6531
type: SIMPLE_ASSIGN
pumCW.vol.V = pumCW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* pumCW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6531;
}

/*
equation index: 6532
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.fluidVolume = pumCW.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* pumCW.vol.V PARAM */);
  threadData->lastEquationSolved = 6532;
}

/*
equation index: 6545
type: SIMPLE_ASSIGN
pumCW.vol.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* pumCW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2481]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6545;
}

/*
equation index: 6554
type: SIMPLE_ASSIGN
pumCW.sta_start.p = pumCW.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2511]] /* pumCW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 6554;
}

/*
equation index: 6555
type: SIMPLE_ASSIGN
pumCW.sta_start.T = pumCW.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* pumCW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2416]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 6555;
}

/*
equation index: 6556
type: SIMPLE_ASSIGN
pumCW.h_outflow_start = logic2.pumCW.Medium.specificEnthalpy(pumCW.sta_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6556};
  logic2_pumCW_Medium_ThermodynamicState tmp129;
  logic2_pumCW_Medium_ThermodynamicState_wrap_vars(threadData,tmp129, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2511]] /* pumCW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* pumCW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2477]] /* pumCW.h_outflow_start PARAM */) = omc_logic2_pumCW_Medium_specificEnthalpy(threadData, tmp129);
  threadData->lastEquationSolved = 6556;
}

/*
equation index: 6568
type: SIMPLE_ASSIGN
pumCW.stageInputs[1] = pumCW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2512]] /* pumCW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2483]] /* pumCW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 6568;
}

/*
equation index: 6569
type: SIMPLE_ASSIGN
pumCW.constInput = pumCW.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6569};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCW.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2423]] /* pumCW.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 6569;
}

/*
equation index: 6572
type: SIMPLE_ASSIGN
pumCW.per.speeds_rpm[1] = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6572;
}

/*
equation index: 6573
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed_rpm = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6573};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* pumCW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6573;
}

/*
equation index: 6574
type: SIMPLE_ASSIGN
pumCW.per.speeds[1] = pumCW.per.speeds_rpm[1] / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* pumCW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6574;
}

/*
equation index: 6575
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed = pumCW.per.constantSpeed_rpm / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* pumCW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* pumCW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6575;
}

/*
equation index: 6591
type: SIMPLE_ASSIGN
cooTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6591;
}

/*
equation index: 6592
type: SIMPLE_ASSIGN
cooTow.mRef_flow = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6592};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* cooTow.mRef_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6592;
}

/*
equation index: 6597
type: SIMPLE_ASSIGN
cooTow.rho_default = logic2.cooTow.Medium.density(cooTow.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6597};
  logic2_cooTow_Medium_ThermodynamicState tmp130;
  logic2_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp130, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* cooTow.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* cooTow.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow.rho_default PARAM */) = omc_logic2_cooTow_Medium_density(threadData, tmp130);
  threadData->lastEquationSolved = 6597;
}

/*
equation index: 6600
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_nominal = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6600};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* cooTow.preDro.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6600;
}

/*
equation index: 6601
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_nominal_pos = abs(cooTow.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.preDro.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* cooTow.preDro.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6601;
}

/*
equation index: 6602
type: SIMPLE_ASSIGN
cooTow.preDro.k = 0.0030932931235336655 * cooTow.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.preDro.k PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 6602;
}

/*
equation index: 6607
type: SIMPLE_ASSIGN
cooTow.preDro.eta_default = logic2.cooTow.preDro.Medium.dynamicViscosity(cooTow.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6607};
  logic2_cooTow_preDro_Medium_ThermodynamicState tmp131;
  logic2_cooTow_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp131, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* cooTow.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* cooTow.preDro.eta_default PARAM */) = omc_logic2_cooTow_preDro_Medium_dynamicViscosity(threadData, tmp131);
  threadData->lastEquationSolved = 6607;
}

/*
equation index: 6608
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_turbulent = 0.1 * cooTow.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow.preDro.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 6608;
}

/*
equation index: 6616
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_small = 1e-4 * abs(cooTow.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6616};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* cooTow.preDro.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* cooTow.preDro.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6616;
}

/*
equation index: 6620
type: SIMPLE_ASSIGN
cooTow.vol.T_start = cooTow.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* cooTow.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 6620;
}

/*
equation index: 6621
type: SIMPLE_ASSIGN
cooTow.vol.state_start.T = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6621};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* cooTow.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6621;
}

/*
equation index: 6622
type: SIMPLE_ASSIGN
cooTow.vol.p_start = cooTow.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* cooTow.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 6622;
}

/*
equation index: 6623
type: SIMPLE_ASSIGN
cooTow.vol.state_start.p = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* cooTow.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6623;
}

/*
equation index: 6627
type: SIMPLE_ASSIGN
cooTow.vol.rho_start = logic2.cooTow.vol.Medium.density(cooTow.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6627};
  logic2_cooTow_vol_Medium_ThermodynamicState tmp132;
  logic2_cooTow_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp132, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* cooTow.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* cooTow.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* cooTow.vol.rho_start PARAM */) = omc_logic2_cooTow_vol_Medium_density(threadData, tmp132);
  threadData->lastEquationSolved = 6627;
}

/*
equation index: 6628
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.p_start = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6628;
}

/*
equation index: 6629
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.T_start = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6629;
}

/*
equation index: 6630
type: SIMPLE_ASSIGN
cooTow.vol.X_start[1] = cooTow.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* cooTow.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6630;
}

/*
equation index: 6631
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.X_start[1] = cooTow.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6631;
}

/*
equation index: 6632
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.hStart = logic2.cooTow.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, cooTow.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6632};
  real_array tmp133;
  real_array_create(&tmp133, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* cooTow.vol.dynBal.hStart PARAM */) = omc_logic2_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.vol.dynBal.T_start PARAM */), tmp133);
  threadData->lastEquationSolved = 6632;
}

/*
equation index: 6637
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.rho_start = logic2.cooTow.vol.dynBal.Medium.density(logic2.cooTow.vol.dynBal.Medium.setState_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow.vol.dynBal.rho_start PARAM */) = omc_logic2_cooTow_vol_dynBal_Medium_density(threadData, omc_logic2_cooTow_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6637;
}

/*
equation index: 6640
type: SIMPLE_ASSIGN
cooTow.vol.V = cooTow.m_flow_nominal * cooTow.tau / cooTow.rho_default
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* cooTow.vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* cooTow.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow.rho_default PARAM */),"cooTow.rho_default",equationIndexes));
  threadData->lastEquationSolved = 6640;
}

/*
equation index: 6641
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.fluidVolume = cooTow.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* cooTow.vol.V PARAM */);
  threadData->lastEquationSolved = 6641;
}

/*
equation index: 6654
type: SIMPLE_ASSIGN
cooTow.vol.m_flow_nominal = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* cooTow.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6654;
}

/*
equation index: 6655
type: SIMPLE_ASSIGN
cooTow.vol.m_flow_small = 1e-4 * abs(cooTow.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* cooTow.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1112]] /* cooTow.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6655;
}

/*
equation index: 6674
type: SIMPLE_ASSIGN
cooTow.m_flow_small = 1e-4 * abs(cooTow.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* cooTow.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6674;
}

/*
equation index: 6676
type: SIMPLE_ASSIGN
expVesCHW.state_start.p = expVesCHW.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6676;
}

/*
equation index: 6677
type: SIMPLE_ASSIGN
expVesCHW.state_start.T = expVesCHW.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* expVesCHW.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* expVesCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6677;
}

/*
equation index: 6678
type: SIMPLE_ASSIGN
expVesCHW.rho_start = logic2.expVesCHW.Medium.density(expVesCHW.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6678};
  logic2_expVesCHW_Medium_ThermodynamicState tmp134;
  logic2_expVesCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp134, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* expVesCHW.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* expVesCHW.rho_start PARAM */) = omc_logic2_expVesCHW_Medium_density(threadData, tmp134);
  threadData->lastEquationSolved = 6678;
}

/*
equation index: 6724
type: SIMPLE_ASSIGN
pumCHW.eff.per.speeds_rpm[1] = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6724;
}

/*
equation index: 6725
type: SIMPLE_ASSIGN
pumCHW.eff.per.constantSpeed_rpm = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2195]] /* pumCHW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6725;
}

/*
equation index: 6729
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6729};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[673]] /* pumCHW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[682]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6729;
}

/*
equation index: 6730
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.P[1] = pumCHW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* pumCHW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2235]] /* pumCHW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6730;
}

/*
equation index: 6731
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.V_flow[1] = pumCHW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* pumCHW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2236]] /* pumCHW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6731;
}

/*
equation index: 6732
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.eta[1] = pumCHW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2234]] /* pumCHW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6732;
}

/*
equation index: 6733
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.V_flow[1] = pumCHW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* pumCHW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6733;
}

/*
equation index: 6734
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.eta[1] = pumCHW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2232]] /* pumCHW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6734;
}

/*
equation index: 6735
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2196]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2231]] /* pumCHW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6735;
}

/*
equation index: 6749
type: SIMPLE_ASSIGN
pumCHW.heaDis.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6749};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[679]] /* pumCHW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[682]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6749;
}

/*
equation index: 6755
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6755};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2248]] /* pumCHW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2225]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6755;
}

/*
equation index: 6756
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_start = pumCHW.m_flow_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2249]] /* pumCHW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2226]] /* pumCHW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 6756;
}

/*
equation index: 6759
type: SIMPLE_ASSIGN
pumCHW.vol.tau = pumCHW.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* pumCHW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* pumCHW.tau PARAM */);
  threadData->lastEquationSolved = 6759;
}

/*
equation index: 6760
type: SIMPLE_ASSIGN
pumCHW.vol.V_nominal = 25.120375 * pumCHW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW.vol.V_nominal PARAM */) = (25.120375) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* pumCHW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6760;
}

/*
equation index: 6763
type: SIMPLE_ASSIGN
pumCHW.vol.T_start = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6763};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2160]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6763;
}

/*
equation index: 6764
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.T = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6764};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2282]] /* pumCHW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6764;
}

/*
equation index: 6765
type: SIMPLE_ASSIGN
pumCHW.vol.p_start = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6765};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2277]] /* pumCHW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2228]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6765;
}

/*
equation index: 6766
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.p = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* pumCHW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2277]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6766;
}

/*
equation index: 6770
type: SIMPLE_ASSIGN
pumCHW.vol.rho_start = logic2.pumCHW.vol.Medium.density(pumCHW.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6770};
  logic2_pumCHW_vol_Medium_ThermodynamicState tmp135;
  logic2_pumCHW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp135, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2283]] /* pumCHW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2282]] /* pumCHW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.rho_start PARAM */) = omc_logic2_pumCHW_vol_Medium_density(threadData, tmp135);
  threadData->lastEquationSolved = 6770;
}

/*
equation index: 6771
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.p_start = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* pumCHW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2277]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6771;
}

/*
equation index: 6772
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.T_start = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6772};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6772;
}

/*
equation index: 6773
type: SIMPLE_ASSIGN
pumCHW.vol.X_start[1] = pumCHW.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6773;
}

/*
equation index: 6774
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.X_start[1] = pumCHW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* pumCHW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6774;
}

/*
equation index: 6775
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.hStart = logic2.pumCHW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, pumCHW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6775};
  real_array tmp136;
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* pumCHW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* pumCHW.vol.dynBal.hStart PARAM */) = omc_logic2_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW.vol.dynBal.T_start PARAM */), tmp136);
  threadData->lastEquationSolved = 6775;
}

/*
equation index: 6780
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.rho_start = logic2.pumCHW.vol.dynBal.Medium.density(logic2.pumCHW.vol.dynBal.Medium.setState_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* pumCHW.vol.dynBal.rho_start PARAM */) = omc_logic2_pumCHW_vol_dynBal_Medium_density(threadData, omc_logic2_pumCHW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6780;
}

/*
equation index: 6783
type: SIMPLE_ASSIGN
pumCHW.vol.V = pumCHW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6783};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6783;
}

/*
equation index: 6784
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.fluidVolume = pumCHW.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6784};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW.vol.V PARAM */);
  threadData->lastEquationSolved = 6784;
}

/*
equation index: 6797
type: SIMPLE_ASSIGN
pumCHW.vol.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2276]] /* pumCHW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2225]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6797;
}

/*
equation index: 6806
type: SIMPLE_ASSIGN
pumCHW.sta_start.p = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2255]] /* pumCHW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2228]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6806;
}

/*
equation index: 6807
type: SIMPLE_ASSIGN
pumCHW.sta_start.T = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2254]] /* pumCHW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2160]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6807;
}

/*
equation index: 6808
type: SIMPLE_ASSIGN
pumCHW.h_outflow_start = logic2.pumCHW.Medium.specificEnthalpy(pumCHW.sta_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6808};
  logic2_pumCHW_Medium_ThermodynamicState tmp137;
  logic2_pumCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp137, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2255]] /* pumCHW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2254]] /* pumCHW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2221]] /* pumCHW.h_outflow_start PARAM */) = omc_logic2_pumCHW_Medium_specificEnthalpy(threadData, tmp137);
  threadData->lastEquationSolved = 6808;
}

/*
equation index: 6820
type: SIMPLE_ASSIGN
pumCHW.stageInputs[1] = pumCHW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2227]] /* pumCHW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 6820;
}

/*
equation index: 6821
type: SIMPLE_ASSIGN
pumCHW.constInput = pumCHW.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2166]] /* pumCHW.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2167]] /* pumCHW.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 6821;
}

/*
equation index: 6824
type: SIMPLE_ASSIGN
pumCHW.per.speeds_rpm[1] = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2242]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6824;
}

/*
equation index: 6825
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed_rpm = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* pumCHW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2242]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6825;
}

/*
equation index: 6826
type: SIMPLE_ASSIGN
pumCHW.per.speeds[1] = pumCHW.per.speeds_rpm[1] / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2243]] /* pumCHW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2242]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6826;
}

/*
equation index: 6827
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed = pumCHW.per.constantSpeed_rpm / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6827};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2229]] /* pumCHW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* pumCHW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2242]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6827;
}

/*
equation index: 6844
type: SIMPLE_ASSIGN
cooCoi.GDif = 0.0033333333333333335 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6844};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */) = (0.0033333333333333335) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 6844;
}

/*
equation index: 6845
type: SIMPLE_ASSIGN
cooCoi.theCon2[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6845};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1038]] /* cooCoi.theCon2[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6845;
}

/*
equation index: 6846
type: SIMPLE_ASSIGN
cooCoi.theCon2[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* cooCoi.theCon2[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6846;
}

/*
equation index: 6847
type: SIMPLE_ASSIGN
cooCoi.theCon2[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* cooCoi.theCon2[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6847;
}

/*
equation index: 6848
type: SIMPLE_ASSIGN
cooCoi.theCon1[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1035]] /* cooCoi.theCon1[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6848;
}

/*
equation index: 6849
type: SIMPLE_ASSIGN
cooCoi.theCon1[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* cooCoi.theCon1[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6849;
}

/*
equation index: 6850
type: SIMPLE_ASSIGN
cooCoi.theCon1[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* cooCoi.theCon1[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[480]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6850;
}

/*
equation index: 6853
type: SIMPLE_ASSIGN
cooCoi.ele[4].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* cooCoi.ele[4].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 6853;
}

/*
equation index: 6854
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[4].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 6854;
}

/*
equation index: 6855
type: SIMPLE_ASSIGN
cooCoi.ele[4].C = 2.0 * cooCoi.ele[4].UA_nominal * cooCoi.ele[4].tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* cooCoi.ele[4].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* cooCoi.ele[4].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[4].tau_m PARAM */)));
  threadData->lastEquationSolved = 6855;
}

/*
equation index: 6856
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.C = cooCoi.ele[4].C
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* cooCoi.ele[4].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* cooCoi.ele[4].C PARAM */);
  threadData->lastEquationSolved = 6856;
}

/*
equation index: 6860
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[4].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* cooCoi.ele[4].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* cooCoi.ele[4].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 6860;
}

/*
equation index: 6866
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho1_nominal = logic2.cooCoi.ele.Medium1.density(cooCoi.ele[4].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6866};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp138;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp138, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* cooCoi.ele[4].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[4].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* cooCoi.ele[4].rho1_nominal PARAM */) = omc_logic2_cooCoi_ele_Medium1_density(threadData, tmp138);
  threadData->lastEquationSolved = 6866;
}

/*
equation index: 6874
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[4].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* cooCoi.ele[4].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[4].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 6874;
}

/*
equation index: 6894
type: SIMPLE_ASSIGN
cooCoi.m1_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6894;
}

/*
equation index: 6895
type: SIMPLE_ASSIGN
cooCoi.ele[4].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[4].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6895;
}

/*
equation index: 6896
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_nominal = cooCoi.ele[4].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[4].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6896;
}

/*
equation index: 6897
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[4].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6897};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[4].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6897;
}

/*
equation index: 6900
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.eta_default = logic2.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[4].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6900};
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp139;
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp139, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[621]] /* cooCoi.ele[4].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* cooCoi.ele[4].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* cooCoi.ele[4].preDro1.eta_default PARAM */) = omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp139);
  threadData->lastEquationSolved = 6900;
}

/*
equation index: 6909
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[4].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[4].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6909;
}

/*
equation index: 6933
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[4].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 6933;
}

/*
equation index: 6934
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.V = 55.989691542288554 * cooCoi.ele[4].tau2 / cooCoi.ele[4].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* cooCoi.ele[4].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[4].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* cooCoi.ele[4].rho2_nominal PARAM */),"cooCoi.ele[4].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 6934;
}

/*
equation index: 6935
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.fluidVolume = cooCoi.ele[4].vol2.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* cooCoi.ele[4].vol2.V PARAM */);
  threadData->lastEquationSolved = 6935;
}

/*
equation index: 6967
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.T_start = cooCoi.ele[4].T1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[4].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 6967;
}

/*
equation index: 6968
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.T = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[4].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6968;
}

/*
equation index: 6970
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.p_start = cooCoi.ele[4].p1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[4].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 6970;
}

/*
equation index: 6971
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.p = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* cooCoi.ele[4].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6971;
}

/*
equation index: 6975
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.rho_start = logic2.cooCoi.ele.vol1.Medium.density(cooCoi.ele[4].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6975};
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState tmp140;
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp140, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* cooCoi.ele[4].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[4].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* cooCoi.ele[4].vol1.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_Medium_density(threadData, tmp140);
  threadData->lastEquationSolved = 6975;
}

/*
equation index: 6976
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.p_start = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6976;
}

/*
equation index: 6977
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.T_start = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6977;
}

/*
equation index: 6979
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.X_start[1] = cooCoi.ele[4].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6979};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* cooCoi.ele[4].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 6979;
}

/*
equation index: 6980
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.X_start[1] = cooCoi.ele[4].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6980;
}

/*
equation index: 6981
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.hStart = logic2.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, cooCoi.ele[4].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6981};
  real_array tmp141;
  real_array_create(&tmp141, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* cooCoi.ele[4].vol1.dynBal.hStart PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), tmp141);
  threadData->lastEquationSolved = 6981;
}

/*
equation index: 6986
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.rho_start = logic2.cooCoi.ele.vol1.dynBal.Medium.density(logic2.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[4].vol1.dynBal.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6986;
}

/*
equation index: 6989
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[4].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 6989;
}

/*
equation index: 6990
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.V = cooCoi.ele[4].m1_flow_nominal * cooCoi.ele[4].tau1 / cooCoi.ele[4].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[4].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[4].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[4].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* cooCoi.ele[4].rho1_nominal PARAM */),"cooCoi.ele[4].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 6990;
}

/*
equation index: 6991
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.fluidVolume = cooCoi.ele[4].vol1.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_6991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[4].vol1.V PARAM */);
  threadData->lastEquationSolved = 6991;
}

/*
equation index: 7004
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.m_flow_nominal = cooCoi.ele[4].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* cooCoi.ele[4].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[4].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7004;
}

/*
equation index: 7005
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[4].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7005};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* cooCoi.ele[4].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* cooCoi.ele[4].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7005;
}

/*
equation index: 7032
type: SIMPLE_ASSIGN
cooCoi.ele[4].m1_flow_small = 1e-4 * abs(cooCoi.ele[4].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7032};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* cooCoi.ele[4].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[4].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7032;
}

/*
equation index: 7036
type: SIMPLE_ASSIGN
cooCoi.ele[3].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7036};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* cooCoi.ele[3].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7036;
}

/*
equation index: 7037
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[3].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7037;
}

/*
equation index: 7038
type: SIMPLE_ASSIGN
cooCoi.ele[3].C = 2.0 * cooCoi.ele[3].UA_nominal * cooCoi.ele[3].tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* cooCoi.ele[3].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* cooCoi.ele[3].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[3].tau_m PARAM */)));
  threadData->lastEquationSolved = 7038;
}

/*
equation index: 7039
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.C = cooCoi.ele[3].C
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[556]] /* cooCoi.ele[3].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[488]] /* cooCoi.ele[3].C PARAM */);
  threadData->lastEquationSolved = 7039;
}

/*
equation index: 7043
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[3].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* cooCoi.ele[3].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[724]] /* cooCoi.ele[3].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7043;
}

/*
equation index: 7049
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho1_nominal = logic2.cooCoi.ele.Medium1.density(cooCoi.ele[3].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7049};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp142;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp142, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[3].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* cooCoi.ele[3].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* cooCoi.ele[3].rho1_nominal PARAM */) = omc_logic2_cooCoi_ele_Medium1_density(threadData, tmp142);
  threadData->lastEquationSolved = 7049;
}

/*
equation index: 7057
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[3].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7057};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* cooCoi.ele[3].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* cooCoi.ele[3].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7057;
}

/*
equation index: 7077
type: SIMPLE_ASSIGN
cooCoi.ele[3].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7077};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[3].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7077;
}

/*
equation index: 7078
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_nominal = cooCoi.ele[3].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7078};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[3].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7078;
}

/*
equation index: 7079
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[3].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[3].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7079;
}

/*
equation index: 7082
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.eta_default = logic2.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[3].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7082};
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp143;
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp143, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* cooCoi.ele[3].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* cooCoi.ele[3].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[592]] /* cooCoi.ele[3].preDro1.eta_default PARAM */) = omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp143);
  threadData->lastEquationSolved = 7082;
}

/*
equation index: 7091
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[3].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7091};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[3].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7091;
}

/*
equation index: 7115
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[3].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7115;
}

/*
equation index: 7116
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.V = 55.989691542288554 * cooCoi.ele[3].tau2 / cooCoi.ele[3].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* cooCoi.ele[3].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[3].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* cooCoi.ele[3].rho2_nominal PARAM */),"cooCoi.ele[3].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7116;
}

/*
equation index: 7117
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.fluidVolume = cooCoi.ele[3].vol2.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* cooCoi.ele[3].vol2.V PARAM */);
  threadData->lastEquationSolved = 7117;
}

/*
equation index: 7149
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.T_start = cooCoi.ele[3].T1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[3].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 7149;
}

/*
equation index: 7150
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.T = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* cooCoi.ele[3].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7150;
}

/*
equation index: 7152
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.p_start = cooCoi.ele[3].p1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* cooCoi.ele[3].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 7152;
}

/*
equation index: 7153
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.p = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* cooCoi.ele[3].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7153;
}

/*
equation index: 7157
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.rho_start = logic2.cooCoi.ele.vol1.Medium.density(cooCoi.ele[3].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7157};
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState tmp144;
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp144, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* cooCoi.ele[3].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[848]] /* cooCoi.ele[3].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* cooCoi.ele[3].vol1.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_Medium_density(threadData, tmp144);
  threadData->lastEquationSolved = 7157;
}

/*
equation index: 7158
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.p_start = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7158;
}

/*
equation index: 7159
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.T_start = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7159;
}

/*
equation index: 7161
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.X_start[1] = cooCoi.ele[3].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* cooCoi.ele[3].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7161;
}

/*
equation index: 7162
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.X_start[1] = cooCoi.ele[3].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7162;
}

/*
equation index: 7163
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.hStart = logic2.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, cooCoi.ele[3].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7163};
  real_array tmp145;
  real_array_create(&tmp145, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* cooCoi.ele[3].vol1.dynBal.hStart PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), tmp145);
  threadData->lastEquationSolved = 7163;
}

/*
equation index: 7168
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.rho_start = logic2.cooCoi.ele.vol1.dynBal.Medium.density(logic2.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* cooCoi.ele[3].vol1.dynBal.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7168;
}

/*
equation index: 7171
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* cooCoi.ele[3].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7171;
}

/*
equation index: 7172
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.V = cooCoi.ele[3].m1_flow_nominal * cooCoi.ele[3].tau1 / cooCoi.ele[3].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[3].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[3].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* cooCoi.ele[3].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* cooCoi.ele[3].rho1_nominal PARAM */),"cooCoi.ele[3].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7172;
}

/*
equation index: 7173
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.fluidVolume = cooCoi.ele[3].vol1.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[3].vol1.V PARAM */);
  threadData->lastEquationSolved = 7173;
}

/*
equation index: 7186
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.m_flow_nominal = cooCoi.ele[3].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* cooCoi.ele[3].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[3].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7186;
}

/*
equation index: 7187
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[3].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* cooCoi.ele[3].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* cooCoi.ele[3].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7187;
}

/*
equation index: 7214
type: SIMPLE_ASSIGN
cooCoi.ele[3].m1_flow_small = 1e-4 * abs(cooCoi.ele[3].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[3].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[3].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7214;
}

/*
equation index: 7218
type: SIMPLE_ASSIGN
cooCoi.ele[2].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* cooCoi.ele[2].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7218;
}

/*
equation index: 7219
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[2].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7219;
}

/*
equation index: 7220
type: SIMPLE_ASSIGN
cooCoi.ele[2].C = 2.0 * cooCoi.ele[2].UA_nominal * cooCoi.ele[2].tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* cooCoi.ele[2].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* cooCoi.ele[2].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[2].tau_m PARAM */)));
  threadData->lastEquationSolved = 7220;
}

/*
equation index: 7221
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.C = cooCoi.ele[2].C
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* cooCoi.ele[2].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[487]] /* cooCoi.ele[2].C PARAM */);
  threadData->lastEquationSolved = 7221;
}

/*
equation index: 7225
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[2].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* cooCoi.ele[2].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[723]] /* cooCoi.ele[2].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7225;
}

/*
equation index: 7231
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho1_nominal = logic2.cooCoi.ele.Medium1.density(cooCoi.ele[2].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7231};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp146;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp146, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[2].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* cooCoi.ele[2].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* cooCoi.ele[2].rho1_nominal PARAM */) = omc_logic2_cooCoi_ele_Medium1_density(threadData, tmp146);
  threadData->lastEquationSolved = 7231;
}

/*
equation index: 7239
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[2].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* cooCoi.ele[2].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* cooCoi.ele[2].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7239;
}

/*
equation index: 7259
type: SIMPLE_ASSIGN
cooCoi.ele[2].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[2].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7259;
}

/*
equation index: 7260
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_nominal = cooCoi.ele[2].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[2].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7260;
}

/*
equation index: 7261
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[2].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[2].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7261;
}

/*
equation index: 7264
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.eta_default = logic2.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[2].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7264};
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp147;
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp147, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[619]] /* cooCoi.ele[2].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* cooCoi.ele[2].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[591]] /* cooCoi.ele[2].preDro1.eta_default PARAM */) = omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp147);
  threadData->lastEquationSolved = 7264;
}

/*
equation index: 7273
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[2].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* cooCoi.ele[2].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[599]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7273;
}

/*
equation index: 7297
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[2].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7297;
}

/*
equation index: 7298
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.V = 55.989691542288554 * cooCoi.ele[2].tau2 / cooCoi.ele[2].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* cooCoi.ele[2].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[2].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* cooCoi.ele[2].rho2_nominal PARAM */),"cooCoi.ele[2].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7298;
}

/*
equation index: 7299
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.fluidVolume = cooCoi.ele[2].vol2.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* cooCoi.ele[2].vol2.V PARAM */);
  threadData->lastEquationSolved = 7299;
}

/*
equation index: 7331
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.T_start = cooCoi.ele[2].T1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[2].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 7331;
}

/*
equation index: 7332
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.T = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[847]] /* cooCoi.ele[2].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7332;
}

/*
equation index: 7334
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.p_start = cooCoi.ele[2].p1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* cooCoi.ele[2].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 7334;
}

/*
equation index: 7335
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.p = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* cooCoi.ele[2].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7335;
}

/*
equation index: 7339
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.rho_start = logic2.cooCoi.ele.vol1.Medium.density(cooCoi.ele[2].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7339};
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState tmp148;
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp148, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* cooCoi.ele[2].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[847]] /* cooCoi.ele[2].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* cooCoi.ele[2].vol1.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_Medium_density(threadData, tmp148);
  threadData->lastEquationSolved = 7339;
}

/*
equation index: 7340
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.p_start = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7340};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7340;
}

/*
equation index: 7341
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.T_start = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7341;
}

/*
equation index: 7343
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.X_start[1] = cooCoi.ele[2].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* cooCoi.ele[2].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7343;
}

/*
equation index: 7344
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.X_start[1] = cooCoi.ele[2].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7344;
}

/*
equation index: 7345
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.hStart = logic2.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, cooCoi.ele[2].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7345};
  real_array tmp149;
  real_array_create(&tmp149, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* cooCoi.ele[2].vol1.dynBal.hStart PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), tmp149);
  threadData->lastEquationSolved = 7345;
}

/*
equation index: 7350
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.rho_start = logic2.cooCoi.ele.vol1.dynBal.Medium.density(logic2.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* cooCoi.ele[2].vol1.dynBal.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7350;
}

/*
equation index: 7353
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* cooCoi.ele[2].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7353;
}

/*
equation index: 7354
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.V = cooCoi.ele[2].m1_flow_nominal * cooCoi.ele[2].tau1 / cooCoi.ele[2].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[2].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[2].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* cooCoi.ele[2].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* cooCoi.ele[2].rho1_nominal PARAM */),"cooCoi.ele[2].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7354;
}

/*
equation index: 7355
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.fluidVolume = cooCoi.ele[2].vol1.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[2].vol1.V PARAM */);
  threadData->lastEquationSolved = 7355;
}

/*
equation index: 7368
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.m_flow_nominal = cooCoi.ele[2].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* cooCoi.ele[2].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[2].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7368;
}

/*
equation index: 7369
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[2].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* cooCoi.ele[2].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* cooCoi.ele[2].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7369;
}

/*
equation index: 7396
type: SIMPLE_ASSIGN
cooCoi.ele[2].m1_flow_small = 1e-4 * abs(cooCoi.ele[2].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[2].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[2].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7396;
}

/*
equation index: 7400
type: SIMPLE_ASSIGN
cooCoi.ele[1].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7400};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* cooCoi.ele[1].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7400;
}

/*
equation index: 7401
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7401};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[1].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7401;
}

/*
equation index: 7402
type: SIMPLE_ASSIGN
cooCoi.ele[1].C = 2.0 * cooCoi.ele[1].UA_nominal * cooCoi.ele[1].tau_m
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7402};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* cooCoi.ele[1].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* cooCoi.ele[1].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[1].tau_m PARAM */)));
  threadData->lastEquationSolved = 7402;
}

/*
equation index: 7403
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.C = cooCoi.ele[1].C
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* cooCoi.ele[1].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* cooCoi.ele[1].C PARAM */);
  threadData->lastEquationSolved = 7403;
}

/*
equation index: 7407
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[1].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* cooCoi.ele[1].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[722]] /* cooCoi.ele[1].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7407;
}

/*
equation index: 7413
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho1_nominal = logic2.cooCoi.ele.Medium1.density(cooCoi.ele[1].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7413};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp150;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp150, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[1].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* cooCoi.ele[1].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* cooCoi.ele[1].rho1_nominal PARAM */) = omc_logic2_cooCoi_ele_Medium1_density(threadData, tmp150);
  threadData->lastEquationSolved = 7413;
}

/*
equation index: 7421
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[1].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7421};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* cooCoi.ele[1].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[670]] /* cooCoi.ele[1].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7421;
}

/*
equation index: 7438
type: SIMPLE_ASSIGN
cooCoi.ele[1].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[1].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7438;
}

/*
equation index: 7439
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_nominal = cooCoi.ele[1].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[1].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7439;
}

/*
equation index: 7440
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[1].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7440};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7440;
}

/*
equation index: 7441
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.k = 0.0033226442289407162 * cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[1].preDro1.k PARAM */) = (0.0033226442289407162) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 7441;
}

/*
equation index: 7446
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.eta_default = logic2.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[1].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7446};
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp151;
  logic2_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp151, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* cooCoi.ele[1].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* cooCoi.ele[1].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* cooCoi.ele[1].preDro1.eta_default PARAM */) = omc_logic2_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp151);
  threadData->lastEquationSolved = 7446;
}

/*
equation index: 7447
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_turbulent = 0.1 * cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 7447;
}

/*
equation index: 7455
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[1].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* cooCoi.ele[1].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[598]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7455;
}

/*
equation index: 7469
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.T_start = cooCoi.ele[1].T2_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7469};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* cooCoi.ele[1].vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 7469;
}

/*
equation index: 7470
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.T_start = cooCoi.ele[1].vol2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* cooCoi.ele[1].vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7470;
}

/*
equation index: 7472
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[1] = cooCoi.ele[1].X2_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* cooCoi.ele[1].X2_start[1] PARAM */);
  threadData->lastEquationSolved = 7472;
}

/*
equation index: 7473
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[1] = cooCoi.ele[1].vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7473;
}

/*
equation index: 7474
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.hStart = 1006.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start) * (1.0 - cooCoi.ele[1].vol2.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start)) * cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[1].vol2.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 7474;
}

/*
equation index: 7483
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.p_start = cooCoi.ele[1].p2_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* cooCoi.ele[1].vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* cooCoi.ele[1].p2_start PARAM */);
  threadData->lastEquationSolved = 7483;
}

/*
equation index: 7484
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.p_start = cooCoi.ele[1].vol2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* cooCoi.ele[1].vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7484;
}

/*
equation index: 7485
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.rho_start = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[910]] /* cooCoi.ele[1].vol2.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 7485;
}

/*
equation index: 7488
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[1].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7488;
}

/*
equation index: 7489
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.V = 55.989691542288554 * cooCoi.ele[1].tau2 / cooCoi.ele[1].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* cooCoi.ele[1].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[1].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* cooCoi.ele[1].rho2_nominal PARAM */),"cooCoi.ele[1].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7489;
}

/*
equation index: 7490
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.fluidVolume = cooCoi.ele[1].vol2.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* cooCoi.ele[1].vol2.V PARAM */);
  threadData->lastEquationSolved = 7490;
}

/*
equation index: 7499
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[2] = cooCoi.ele[1].X2_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* cooCoi.ele[1].X2_start[2] PARAM */);
  threadData->lastEquationSolved = 7499;
}

/*
equation index: 7500
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[2] = cooCoi.ele[1].vol2.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[879]] /* cooCoi.ele[1].vol2.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */);
  threadData->lastEquationSolved = 7500;
}

/*
equation index: 7517
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.T_start = cooCoi.ele[1].T1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[1].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 7517;
}

/*
equation index: 7518
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.T = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* cooCoi.ele[1].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7518;
}

/*
equation index: 7520
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.p_start = cooCoi.ele[1].p1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* cooCoi.ele[1].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 7520;
}

/*
equation index: 7521
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.p = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* cooCoi.ele[1].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7521;
}

/*
equation index: 7525
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.rho_start = logic2.cooCoi.ele.vol1.Medium.density(cooCoi.ele[1].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7525};
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState tmp152;
  logic2_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp152, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* cooCoi.ele[1].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* cooCoi.ele[1].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* cooCoi.ele[1].vol1.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_Medium_density(threadData, tmp152);
  threadData->lastEquationSolved = 7525;
}

/*
equation index: 7526
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.p_start = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7526;
}

/*
equation index: 7527
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.T_start = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7527;
}

/*
equation index: 7529
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.X_start[1] = cooCoi.ele[1].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* cooCoi.ele[1].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7529;
}

/*
equation index: 7530
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.X_start[1] = cooCoi.ele[1].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7530;
}

/*
equation index: 7531
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.hStart = logic2.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, cooCoi.ele[1].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7531};
  real_array tmp153;
  real_array_create(&tmp153, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* cooCoi.ele[1].vol1.dynBal.hStart PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), tmp153);
  threadData->lastEquationSolved = 7531;
}

/*
equation index: 7536
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.rho_start = logic2.cooCoi.ele.vol1.dynBal.Medium.density(logic2.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[802]] /* cooCoi.ele[1].vol1.dynBal.rho_start PARAM */) = omc_logic2_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic2_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7536;
}

/*
equation index: 7539
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* cooCoi.ele[1].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1012]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7539;
}

/*
equation index: 7540
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.V = cooCoi.ele[1].m1_flow_nominal * cooCoi.ele[1].tau1 / cooCoi.ele[1].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[1].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[1].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* cooCoi.ele[1].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* cooCoi.ele[1].rho1_nominal PARAM */),"cooCoi.ele[1].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7540;
}

/*
equation index: 7541
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.fluidVolume = cooCoi.ele[1].vol1.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[1].vol1.V PARAM */);
  threadData->lastEquationSolved = 7541;
}

/*
equation index: 7554
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.m_flow_nominal = cooCoi.ele[1].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* cooCoi.ele[1].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[1].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7554;
}

/*
equation index: 7555
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[1].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* cooCoi.ele[1].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* cooCoi.ele[1].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7555;
}

/*
equation index: 7578
type: SIMPLE_ASSIGN
cooCoi.ele[1].m1_flow_small = 1e-4 * abs(cooCoi.ele[1].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7578};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[1].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[1].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7578;
}

/*
equation index: 7589
type: SIMPLE_ASSIGN
cooCoi.temSen_2.tauHeaTraInv = if cooCoi.temSen_2.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7589};
  modelica_boolean tmp154;
  tmp154 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* cooCoi.temSen_2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* cooCoi.temSen_2.tauHeaTraInv PARAM */) = (tmp154?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1030]] /* cooCoi.temSen_2.tauHeaTra PARAM */),"cooCoi.temSen_2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7589;
}

/*
equation index: 7605
type: SIMPLE_ASSIGN
cooCoi.temSen_1.tauHeaTraInv = if cooCoi.temSen_1.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_1.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7605};
  modelica_boolean tmp155;
  tmp155 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* cooCoi.temSen_1.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooCoi.temSen_1.tauHeaTraInv PARAM */) = (tmp155?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* cooCoi.temSen_1.tauHeaTra PARAM */),"cooCoi.temSen_1.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7605;
}

/*
equation index: 7613
type: SIMPLE_ASSIGN
cooCoi.temSen_1.m_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7613};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooCoi.temSen_1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7613;
}

/*
equation index: 7614
type: SIMPLE_ASSIGN
cooCoi.temSen_1.m_flow_small = 1e-4 * cooCoi.temSen_1.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1018]] /* cooCoi.temSen_1.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooCoi.temSen_1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7614;
}

/*
equation index: 7622
type: SIMPLE_ASSIGN
cooCoi.hA.r_nominal = cooCoi.r_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7622};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooCoi.r_nominal PARAM */);
  threadData->lastEquationSolved = 7622;
}

/*
equation index: 7623
type: SIMPLE_ASSIGN
cooCoi.hA.UA_nominal = cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* cooCoi.hA.UA_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* cooCoi.UA_nominal PARAM */);
  threadData->lastEquationSolved = 7623;
}

/*
equation index: 7624
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_w = cooCoi.hA.UA_nominal * (1.0 + cooCoi.hA.r_nominal) / cooCoi.hA.r_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooCoi.hA.hA_nominal_w PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[994]] /* cooCoi.hA.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.r_nominal PARAM */),"cooCoi.hA.r_nominal",equationIndexes));
  threadData->lastEquationSolved = 7624;
}

/*
equation index: 7625
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_a = cooCoi.hA.r_nominal * cooCoi.hA.hA_nominal_w
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* cooCoi.hA.hA_nominal_a PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooCoi.hA.hA_nominal_w PARAM */));
  threadData->lastEquationSolved = 7625;
}

/*
equation index: 7627
type: SIMPLE_ASSIGN
cooCoi.hA.m_flow_nominal_w = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooCoi.hA.m_flow_nominal_w PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7627;
}

/*
equation index: 7643
type: SIMPLE_ASSIGN
cooCoi.m1_flow_small = 1e-4 * abs(cooCoi.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7643;
}

/*
equation index: 7689
type: SIMPLE_ASSIGN
fanSup.eff.per.speeds_rpm[1] = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* fanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1531]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7689;
}

/*
equation index: 7690
type: SIMPLE_ASSIGN
fanSup.eff.per.constantSpeed_rpm = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1519]] /* fanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1531]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7690;
}

/*
equation index: 7694
type: SIMPLE_ASSIGN
fanSup.eff.per.motorCooledByFluid = fanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7694};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[432]] /* fanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[439]] /* fanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7694;
}

/*
equation index: 7695
type: SIMPLE_ASSIGN
fanSup.eff.per.power.P[1] = fanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* fanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1558]] /* fanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 7695;
}

/*
equation index: 7696
type: SIMPLE_ASSIGN
fanSup.eff.per.power.V_flow[1] = fanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* fanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* fanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7696;
}

/*
equation index: 7697
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.eta[1] = fanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1557]] /* fanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7697;
}

/*
equation index: 7698
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.V_flow[1] = fanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7698};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1556]] /* fanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7698;
}

/*
equation index: 7699
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.eta[1] = fanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7699};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1521]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1555]] /* fanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7699;
}

/*
equation index: 7700
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.V_flow[1] = fanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1520]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1554]] /* fanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7700;
}

/*
equation index: 7713
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1569]] /* fanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1548]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7713;
}

/*
equation index: 7714
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_start = fanSup.m_flow_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1570]] /* fanSup.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1549]] /* fanSup.m_flow_start PARAM */);
  threadData->lastEquationSolved = 7714;
}

/*
equation index: 7717
type: SIMPLE_ASSIGN
fanSup.vol.tau = fanSup.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1618]] /* fanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* fanSup.tau PARAM */);
  threadData->lastEquationSolved = 7717;
}

/*
equation index: 7718
type: SIMPLE_ASSIGN
fanSup.vol.V_nominal = 55.989691542288554 * fanSup.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* fanSup.vol.V_nominal PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1618]] /* fanSup.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 7718;
}

/*
equation index: 7736
type: SIMPLE_ASSIGN
fanSup.vol.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* fanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1548]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7736;
}

/*
equation index: 7737
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flow_small = fanSup.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1612]] /* fanSup.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* fanSup.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7737;
}

/*
equation index: 7738
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaReg = 0.001 * fanSup.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7738};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1612]] /* fanSup.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 7738;
}

/*
equation index: 7739
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaInvReg = 1.0 / fanSup.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7739};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */),"fanSup.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 7739;
}

/*
equation index: 7740
type: SIMPLE_ASSIGN
fanSup.vol.steBal.fReg = 104.0 * fanSup.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 7740;
}

/*
equation index: 7741
type: SIMPLE_ASSIGN
fanSup.vol.steBal.eReg = (-380.0) * fanSup.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1609]] /* fanSup.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 7741;
}

/*
equation index: 7742
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dReg = 534.0 * fanSup.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7742};
  modelica_real tmp156;
  tmp156 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  tmp156 *= tmp156;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* fanSup.vol.steBal.dReg PARAM */) = (534.0) * ((tmp156 * tmp156));
  threadData->lastEquationSolved = 7742;
}

/*
equation index: 7743
type: SIMPLE_ASSIGN
fanSup.vol.steBal.cReg = (-361.0) * fanSup.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_7743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7743};
  modelica_real tmp157;
  tmp157 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1604]] /* fanSup.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp157 * tmp157 * tmp157));
  threadData->lastEquationSolved = 7743;
}
OMC_DISABLE_OPT
void logic2_raw_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[479])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_5724,
    logic2_raw_eqFunction_5734,
    logic2_raw_eqFunction_5735,
    logic2_raw_eqFunction_5736,
    logic2_raw_eqFunction_5737,
    logic2_raw_eqFunction_5738,
    logic2_raw_eqFunction_5739,
    logic2_raw_eqFunction_5740,
    logic2_raw_eqFunction_5742,
    logic2_raw_eqFunction_5743,
    logic2_raw_eqFunction_5744,
    logic2_raw_eqFunction_5745,
    logic2_raw_eqFunction_5751,
    logic2_raw_eqFunction_5752,
    logic2_raw_eqFunction_5755,
    logic2_raw_eqFunction_5758,
    logic2_raw_eqFunction_5810,
    logic2_raw_eqFunction_5811,
    logic2_raw_eqFunction_5815,
    logic2_raw_eqFunction_5816,
    logic2_raw_eqFunction_5817,
    logic2_raw_eqFunction_5818,
    logic2_raw_eqFunction_5819,
    logic2_raw_eqFunction_5820,
    logic2_raw_eqFunction_5821,
    logic2_raw_eqFunction_5834,
    logic2_raw_eqFunction_5835,
    logic2_raw_eqFunction_5838,
    logic2_raw_eqFunction_5839,
    logic2_raw_eqFunction_5857,
    logic2_raw_eqFunction_5858,
    logic2_raw_eqFunction_5859,
    logic2_raw_eqFunction_5860,
    logic2_raw_eqFunction_5861,
    logic2_raw_eqFunction_5862,
    logic2_raw_eqFunction_5863,
    logic2_raw_eqFunction_5864,
    logic2_raw_eqFunction_5865,
    logic2_raw_eqFunction_5866,
    logic2_raw_eqFunction_5876,
    logic2_raw_eqFunction_5882,
    logic2_raw_eqFunction_5883,
    logic2_raw_eqFunction_5884,
    logic2_raw_eqFunction_5885,
    logic2_raw_eqFunction_5906,
    logic2_raw_eqFunction_5910,
    logic2_raw_eqFunction_5911,
    logic2_raw_eqFunction_5912,
    logic2_raw_eqFunction_5913,
    logic2_raw_eqFunction_5934,
    logic2_raw_eqFunction_5935,
    logic2_raw_eqFunction_5939,
    logic2_raw_eqFunction_5940,
    logic2_raw_eqFunction_5941,
    logic2_raw_eqFunction_5952,
    logic2_raw_eqFunction_5953,
    logic2_raw_eqFunction_5954,
    logic2_raw_eqFunction_5964,
    logic2_raw_eqFunction_5965,
    logic2_raw_eqFunction_5979,
    logic2_raw_eqFunction_5980,
    logic2_raw_eqFunction_5988,
    logic2_raw_eqFunction_5989,
    logic2_raw_eqFunction_5992,
    logic2_raw_eqFunction_5993,
    logic2_raw_eqFunction_6001,
    logic2_raw_eqFunction_6022,
    logic2_raw_eqFunction_6023,
    logic2_raw_eqFunction_6024,
    logic2_raw_eqFunction_6025,
    logic2_raw_eqFunction_6026,
    logic2_raw_eqFunction_6033,
    logic2_raw_eqFunction_6036,
    logic2_raw_eqFunction_6037,
    logic2_raw_eqFunction_6038,
    logic2_raw_eqFunction_6039,
    logic2_raw_eqFunction_6048,
    logic2_raw_eqFunction_6049,
    logic2_raw_eqFunction_6079,
    logic2_raw_eqFunction_6082,
    logic2_raw_eqFunction_6097,
    logic2_raw_eqFunction_6098,
    logic2_raw_eqFunction_6104,
    logic2_raw_eqFunction_6105,
    logic2_raw_eqFunction_6107,
    logic2_raw_eqFunction_6108,
    logic2_raw_eqFunction_6114,
    logic2_raw_eqFunction_6115,
    logic2_raw_eqFunction_6116,
    logic2_raw_eqFunction_6119,
    logic2_raw_eqFunction_6120,
    logic2_raw_eqFunction_6127,
    logic2_raw_eqFunction_6129,
    logic2_raw_eqFunction_6130,
    logic2_raw_eqFunction_6136,
    logic2_raw_eqFunction_6137,
    logic2_raw_eqFunction_6139,
    logic2_raw_eqFunction_6140,
    logic2_raw_eqFunction_6146,
    logic2_raw_eqFunction_6147,
    logic2_raw_eqFunction_6149,
    logic2_raw_eqFunction_6150,
    logic2_raw_eqFunction_6156,
    logic2_raw_eqFunction_6157,
    logic2_raw_eqFunction_6159,
    logic2_raw_eqFunction_6160,
    logic2_raw_eqFunction_6168,
    logic2_raw_eqFunction_6169,
    logic2_raw_eqFunction_6175,
    logic2_raw_eqFunction_6176,
    logic2_raw_eqFunction_6178,
    logic2_raw_eqFunction_6179,
    logic2_raw_eqFunction_6185,
    logic2_raw_eqFunction_6186,
    logic2_raw_eqFunction_6188,
    logic2_raw_eqFunction_6189,
    logic2_raw_eqFunction_6195,
    logic2_raw_eqFunction_6196,
    logic2_raw_eqFunction_6197,
    logic2_raw_eqFunction_6200,
    logic2_raw_eqFunction_6201,
    logic2_raw_eqFunction_6208,
    logic2_raw_eqFunction_6210,
    logic2_raw_eqFunction_6211,
    logic2_raw_eqFunction_6212,
    logic2_raw_eqFunction_6213,
    logic2_raw_eqFunction_6214,
    logic2_raw_eqFunction_6215,
    logic2_raw_eqFunction_6216,
    logic2_raw_eqFunction_6217,
    logic2_raw_eqFunction_6218,
    logic2_raw_eqFunction_6219,
    logic2_raw_eqFunction_6220,
    logic2_raw_eqFunction_6221,
    logic2_raw_eqFunction_6222,
    logic2_raw_eqFunction_6225,
    logic2_raw_eqFunction_6228,
    logic2_raw_eqFunction_6234,
    logic2_raw_eqFunction_6235,
    logic2_raw_eqFunction_6236,
    logic2_raw_eqFunction_6239,
    logic2_raw_eqFunction_6248,
    logic2_raw_eqFunction_6255,
    logic2_raw_eqFunction_6256,
    logic2_raw_eqFunction_6257,
    logic2_raw_eqFunction_6260,
    logic2_raw_eqFunction_6269,
    logic2_raw_eqFunction_6273,
    logic2_raw_eqFunction_6274,
    logic2_raw_eqFunction_6275,
    logic2_raw_eqFunction_6276,
    logic2_raw_eqFunction_6280,
    logic2_raw_eqFunction_6281,
    logic2_raw_eqFunction_6282,
    logic2_raw_eqFunction_6283,
    logic2_raw_eqFunction_6284,
    logic2_raw_eqFunction_6285,
    logic2_raw_eqFunction_6290,
    logic2_raw_eqFunction_6293,
    logic2_raw_eqFunction_6294,
    logic2_raw_eqFunction_6307,
    logic2_raw_eqFunction_6308,
    logic2_raw_eqFunction_6317,
    logic2_raw_eqFunction_6318,
    logic2_raw_eqFunction_6319,
    logic2_raw_eqFunction_6320,
    logic2_raw_eqFunction_6324,
    logic2_raw_eqFunction_6325,
    logic2_raw_eqFunction_6326,
    logic2_raw_eqFunction_6327,
    logic2_raw_eqFunction_6328,
    logic2_raw_eqFunction_6329,
    logic2_raw_eqFunction_6334,
    logic2_raw_eqFunction_6337,
    logic2_raw_eqFunction_6338,
    logic2_raw_eqFunction_6351,
    logic2_raw_eqFunction_6352,
    logic2_raw_eqFunction_6376,
    logic2_raw_eqFunction_6377,
    logic2_raw_eqFunction_6380,
    logic2_raw_eqFunction_6381,
    logic2_raw_eqFunction_6382,
    logic2_raw_eqFunction_6388,
    logic2_raw_eqFunction_6389,
    logic2_raw_eqFunction_6395,
    logic2_raw_eqFunction_6396,
    logic2_raw_eqFunction_6397,
    logic2_raw_eqFunction_6400,
    logic2_raw_eqFunction_6401,
    logic2_raw_eqFunction_6408,
    logic2_raw_eqFunction_6410,
    logic2_raw_eqFunction_6411,
    logic2_raw_eqFunction_6417,
    logic2_raw_eqFunction_6418,
    logic2_raw_eqFunction_6419,
    logic2_raw_eqFunction_6422,
    logic2_raw_eqFunction_6423,
    logic2_raw_eqFunction_6430,
    logic2_raw_eqFunction_6472,
    logic2_raw_eqFunction_6473,
    logic2_raw_eqFunction_6477,
    logic2_raw_eqFunction_6478,
    logic2_raw_eqFunction_6479,
    logic2_raw_eqFunction_6480,
    logic2_raw_eqFunction_6481,
    logic2_raw_eqFunction_6482,
    logic2_raw_eqFunction_6483,
    logic2_raw_eqFunction_6497,
    logic2_raw_eqFunction_6503,
    logic2_raw_eqFunction_6504,
    logic2_raw_eqFunction_6507,
    logic2_raw_eqFunction_6508,
    logic2_raw_eqFunction_6511,
    logic2_raw_eqFunction_6512,
    logic2_raw_eqFunction_6513,
    logic2_raw_eqFunction_6514,
    logic2_raw_eqFunction_6518,
    logic2_raw_eqFunction_6519,
    logic2_raw_eqFunction_6520,
    logic2_raw_eqFunction_6521,
    logic2_raw_eqFunction_6522,
    logic2_raw_eqFunction_6523,
    logic2_raw_eqFunction_6528,
    logic2_raw_eqFunction_6531,
    logic2_raw_eqFunction_6532,
    logic2_raw_eqFunction_6545,
    logic2_raw_eqFunction_6554,
    logic2_raw_eqFunction_6555,
    logic2_raw_eqFunction_6556,
    logic2_raw_eqFunction_6568,
    logic2_raw_eqFunction_6569,
    logic2_raw_eqFunction_6572,
    logic2_raw_eqFunction_6573,
    logic2_raw_eqFunction_6574,
    logic2_raw_eqFunction_6575,
    logic2_raw_eqFunction_6591,
    logic2_raw_eqFunction_6592,
    logic2_raw_eqFunction_6597,
    logic2_raw_eqFunction_6600,
    logic2_raw_eqFunction_6601,
    logic2_raw_eqFunction_6602,
    logic2_raw_eqFunction_6607,
    logic2_raw_eqFunction_6608,
    logic2_raw_eqFunction_6616,
    logic2_raw_eqFunction_6620,
    logic2_raw_eqFunction_6621,
    logic2_raw_eqFunction_6622,
    logic2_raw_eqFunction_6623,
    logic2_raw_eqFunction_6627,
    logic2_raw_eqFunction_6628,
    logic2_raw_eqFunction_6629,
    logic2_raw_eqFunction_6630,
    logic2_raw_eqFunction_6631,
    logic2_raw_eqFunction_6632,
    logic2_raw_eqFunction_6637,
    logic2_raw_eqFunction_6640,
    logic2_raw_eqFunction_6641,
    logic2_raw_eqFunction_6654,
    logic2_raw_eqFunction_6655,
    logic2_raw_eqFunction_6674,
    logic2_raw_eqFunction_6676,
    logic2_raw_eqFunction_6677,
    logic2_raw_eqFunction_6678,
    logic2_raw_eqFunction_6724,
    logic2_raw_eqFunction_6725,
    logic2_raw_eqFunction_6729,
    logic2_raw_eqFunction_6730,
    logic2_raw_eqFunction_6731,
    logic2_raw_eqFunction_6732,
    logic2_raw_eqFunction_6733,
    logic2_raw_eqFunction_6734,
    logic2_raw_eqFunction_6735,
    logic2_raw_eqFunction_6749,
    logic2_raw_eqFunction_6755,
    logic2_raw_eqFunction_6756,
    logic2_raw_eqFunction_6759,
    logic2_raw_eqFunction_6760,
    logic2_raw_eqFunction_6763,
    logic2_raw_eqFunction_6764,
    logic2_raw_eqFunction_6765,
    logic2_raw_eqFunction_6766,
    logic2_raw_eqFunction_6770,
    logic2_raw_eqFunction_6771,
    logic2_raw_eqFunction_6772,
    logic2_raw_eqFunction_6773,
    logic2_raw_eqFunction_6774,
    logic2_raw_eqFunction_6775,
    logic2_raw_eqFunction_6780,
    logic2_raw_eqFunction_6783,
    logic2_raw_eqFunction_6784,
    logic2_raw_eqFunction_6797,
    logic2_raw_eqFunction_6806,
    logic2_raw_eqFunction_6807,
    logic2_raw_eqFunction_6808,
    logic2_raw_eqFunction_6820,
    logic2_raw_eqFunction_6821,
    logic2_raw_eqFunction_6824,
    logic2_raw_eqFunction_6825,
    logic2_raw_eqFunction_6826,
    logic2_raw_eqFunction_6827,
    logic2_raw_eqFunction_6844,
    logic2_raw_eqFunction_6845,
    logic2_raw_eqFunction_6846,
    logic2_raw_eqFunction_6847,
    logic2_raw_eqFunction_6848,
    logic2_raw_eqFunction_6849,
    logic2_raw_eqFunction_6850,
    logic2_raw_eqFunction_6853,
    logic2_raw_eqFunction_6854,
    logic2_raw_eqFunction_6855,
    logic2_raw_eqFunction_6856,
    logic2_raw_eqFunction_6860,
    logic2_raw_eqFunction_6866,
    logic2_raw_eqFunction_6874,
    logic2_raw_eqFunction_6894,
    logic2_raw_eqFunction_6895,
    logic2_raw_eqFunction_6896,
    logic2_raw_eqFunction_6897,
    logic2_raw_eqFunction_6900,
    logic2_raw_eqFunction_6909,
    logic2_raw_eqFunction_6933,
    logic2_raw_eqFunction_6934,
    logic2_raw_eqFunction_6935,
    logic2_raw_eqFunction_6967,
    logic2_raw_eqFunction_6968,
    logic2_raw_eqFunction_6970,
    logic2_raw_eqFunction_6971,
    logic2_raw_eqFunction_6975,
    logic2_raw_eqFunction_6976,
    logic2_raw_eqFunction_6977,
    logic2_raw_eqFunction_6979,
    logic2_raw_eqFunction_6980,
    logic2_raw_eqFunction_6981,
    logic2_raw_eqFunction_6986,
    logic2_raw_eqFunction_6989,
    logic2_raw_eqFunction_6990,
    logic2_raw_eqFunction_6991,
    logic2_raw_eqFunction_7004,
    logic2_raw_eqFunction_7005,
    logic2_raw_eqFunction_7032,
    logic2_raw_eqFunction_7036,
    logic2_raw_eqFunction_7037,
    logic2_raw_eqFunction_7038,
    logic2_raw_eqFunction_7039,
    logic2_raw_eqFunction_7043,
    logic2_raw_eqFunction_7049,
    logic2_raw_eqFunction_7057,
    logic2_raw_eqFunction_7077,
    logic2_raw_eqFunction_7078,
    logic2_raw_eqFunction_7079,
    logic2_raw_eqFunction_7082,
    logic2_raw_eqFunction_7091,
    logic2_raw_eqFunction_7115,
    logic2_raw_eqFunction_7116,
    logic2_raw_eqFunction_7117,
    logic2_raw_eqFunction_7149,
    logic2_raw_eqFunction_7150,
    logic2_raw_eqFunction_7152,
    logic2_raw_eqFunction_7153,
    logic2_raw_eqFunction_7157,
    logic2_raw_eqFunction_7158,
    logic2_raw_eqFunction_7159,
    logic2_raw_eqFunction_7161,
    logic2_raw_eqFunction_7162,
    logic2_raw_eqFunction_7163,
    logic2_raw_eqFunction_7168,
    logic2_raw_eqFunction_7171,
    logic2_raw_eqFunction_7172,
    logic2_raw_eqFunction_7173,
    logic2_raw_eqFunction_7186,
    logic2_raw_eqFunction_7187,
    logic2_raw_eqFunction_7214,
    logic2_raw_eqFunction_7218,
    logic2_raw_eqFunction_7219,
    logic2_raw_eqFunction_7220,
    logic2_raw_eqFunction_7221,
    logic2_raw_eqFunction_7225,
    logic2_raw_eqFunction_7231,
    logic2_raw_eqFunction_7239,
    logic2_raw_eqFunction_7259,
    logic2_raw_eqFunction_7260,
    logic2_raw_eqFunction_7261,
    logic2_raw_eqFunction_7264,
    logic2_raw_eqFunction_7273,
    logic2_raw_eqFunction_7297,
    logic2_raw_eqFunction_7298,
    logic2_raw_eqFunction_7299,
    logic2_raw_eqFunction_7331,
    logic2_raw_eqFunction_7332,
    logic2_raw_eqFunction_7334,
    logic2_raw_eqFunction_7335,
    logic2_raw_eqFunction_7339,
    logic2_raw_eqFunction_7340,
    logic2_raw_eqFunction_7341,
    logic2_raw_eqFunction_7343,
    logic2_raw_eqFunction_7344,
    logic2_raw_eqFunction_7345,
    logic2_raw_eqFunction_7350,
    logic2_raw_eqFunction_7353,
    logic2_raw_eqFunction_7354,
    logic2_raw_eqFunction_7355,
    logic2_raw_eqFunction_7368,
    logic2_raw_eqFunction_7369,
    logic2_raw_eqFunction_7396,
    logic2_raw_eqFunction_7400,
    logic2_raw_eqFunction_7401,
    logic2_raw_eqFunction_7402,
    logic2_raw_eqFunction_7403,
    logic2_raw_eqFunction_7407,
    logic2_raw_eqFunction_7413,
    logic2_raw_eqFunction_7421,
    logic2_raw_eqFunction_7438,
    logic2_raw_eqFunction_7439,
    logic2_raw_eqFunction_7440,
    logic2_raw_eqFunction_7441,
    logic2_raw_eqFunction_7446,
    logic2_raw_eqFunction_7447,
    logic2_raw_eqFunction_7455,
    logic2_raw_eqFunction_7469,
    logic2_raw_eqFunction_7470,
    logic2_raw_eqFunction_7472,
    logic2_raw_eqFunction_7473,
    logic2_raw_eqFunction_7474,
    logic2_raw_eqFunction_7483,
    logic2_raw_eqFunction_7484,
    logic2_raw_eqFunction_7485,
    logic2_raw_eqFunction_7488,
    logic2_raw_eqFunction_7489,
    logic2_raw_eqFunction_7490,
    logic2_raw_eqFunction_7499,
    logic2_raw_eqFunction_7500,
    logic2_raw_eqFunction_7517,
    logic2_raw_eqFunction_7518,
    logic2_raw_eqFunction_7520,
    logic2_raw_eqFunction_7521,
    logic2_raw_eqFunction_7525,
    logic2_raw_eqFunction_7526,
    logic2_raw_eqFunction_7527,
    logic2_raw_eqFunction_7529,
    logic2_raw_eqFunction_7530,
    logic2_raw_eqFunction_7531,
    logic2_raw_eqFunction_7536,
    logic2_raw_eqFunction_7539,
    logic2_raw_eqFunction_7540,
    logic2_raw_eqFunction_7541,
    logic2_raw_eqFunction_7554,
    logic2_raw_eqFunction_7555,
    logic2_raw_eqFunction_7578,
    logic2_raw_eqFunction_7589,
    logic2_raw_eqFunction_7605,
    logic2_raw_eqFunction_7613,
    logic2_raw_eqFunction_7614,
    logic2_raw_eqFunction_7622,
    logic2_raw_eqFunction_7623,
    logic2_raw_eqFunction_7624,
    logic2_raw_eqFunction_7625,
    logic2_raw_eqFunction_7627,
    logic2_raw_eqFunction_7643,
    logic2_raw_eqFunction_7689,
    logic2_raw_eqFunction_7690,
    logic2_raw_eqFunction_7694,
    logic2_raw_eqFunction_7695,
    logic2_raw_eqFunction_7696,
    logic2_raw_eqFunction_7697,
    logic2_raw_eqFunction_7698,
    logic2_raw_eqFunction_7699,
    logic2_raw_eqFunction_7700,
    logic2_raw_eqFunction_7713,
    logic2_raw_eqFunction_7714,
    logic2_raw_eqFunction_7717,
    logic2_raw_eqFunction_7718,
    logic2_raw_eqFunction_7736,
    logic2_raw_eqFunction_7737,
    logic2_raw_eqFunction_7738,
    logic2_raw_eqFunction_7739,
    logic2_raw_eqFunction_7740,
    logic2_raw_eqFunction_7741,
    logic2_raw_eqFunction_7742,
    logic2_raw_eqFunction_7743
  };
  
  for (int id = 0; id < 479; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif