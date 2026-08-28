#include "logic1_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5733
type: SIMPLE_ASSIGN
damEA.dp_nominal = (55.989691542288554 / damEA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5733};
  modelica_real tmp80;
  tmp80 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* damEA.kDam_default PARAM */),"damEA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* damEA.dp_nominal PARAM */) = (tmp80 * tmp80);
  threadData->lastEquationSolved = 5733;
}

/*
equation index: 5734
type: SIMPLE_ASSIGN
damEA.dp_nominal_pos = abs(damEA.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* damEA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5734;
}

/*
equation index: 5737
type: SIMPLE_ASSIGN
damEA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damEA.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5737};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* damEA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* damEA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5737;
}

/*
equation index: 5740
type: SIMPLE_ASSIGN
damEA.m_flow_turbulent = if damEA.use_deltaM then damEA.deltaM * 55.989691542288554 else damEA.eta_default * damEA.ReC * sqrt(damEA.A) * damEA.facRouDuc
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5740};
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  tmp82 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[367]] /* damEA.use_deltaM PARAM */);
  if(tmp82)
  {
    tmp83 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp81 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damEA.A PARAM */);
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
    tmp83 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* damEA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.ReC PARAM */))) * (sqrt(tmp81))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* damEA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.m_flow_turbulent PARAM */) = tmp83;
  threadData->lastEquationSolved = 5740;
}

/*
equation index: 5750
type: SIMPLE_ASSIGN
damRet.cL[1] = (log(damRet.k0) + (-damRet.b) - damRet.a) / damRet.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5750};
  modelica_real tmp84;
  modelica_real tmp85;
  tmp84 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* damRet.k0 PARAM */);
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
  }tmp85 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* damRet.cL[1] PARAM */) = DIVISION_SIM(log(tmp84) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */),(tmp85 * tmp85),"damRet.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5750;
}

/*
equation index: 5751
type: SIMPLE_ASSIGN
damRet.cL[2] = (2.0 * damRet.b + (-2.0) * log(damRet.k0) + 2.0 * damRet.a - damRet.b * damRet.yL) / damRet.yL
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5751};
  modelica_real tmp86;
  tmp86 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* damRet.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* damRet.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */)) + (-2.0) * (log(tmp86)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.yL PARAM */),"damRet.yL",equationIndexes);
  threadData->lastEquationSolved = 5751;
}

/*
equation index: 5752
type: SIMPLE_ASSIGN
damRet.cL[3] = log(damRet.k0)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5752};
  modelica_real tmp87;
  tmp87 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* damRet.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* damRet.cL[3] PARAM */) = log(tmp87);
  threadData->lastEquationSolved = 5752;
}

/*
equation index: 5753
type: SIMPLE_ASSIGN
damRet.cU[1] = (log(damRet.k1) - damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5753};
  modelica_real tmp88;
  modelica_real tmp89;
  tmp88 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.k1 PARAM */);
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
  }tmp89 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* damRet.cU[1] PARAM */) = DIVISION_SIM(log(tmp88) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */),1.0 + (tmp89 * tmp89) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 5753;
}

/*
equation index: 5754
type: SIMPLE_ASSIGN
damRet.cU[2] = (damRet.b * damRet.yU ^ 2.0 + 2.0 * log(damRet.k1) * damRet.yU + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b) / (-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5754};
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  tmp90 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */);
  tmp91 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.k1 PARAM */);
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
  }tmp92 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1293]] /* damRet.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */)) * ((tmp90 * tmp90)) + (2.0) * ((log(tmp91)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */)) - ((tmp92 * tmp92)),"-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5754;
}

/*
equation index: 5755
type: SIMPLE_ASSIGN
damRet.cU[3] = (damRet.yU ^ 2.0 * (log(damRet.k1) + damRet.b) + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b + damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5755};
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  tmp93 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */);
  tmp94 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.k1 PARAM */);
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
  }tmp95 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.cU[3] PARAM */) = DIVISION_SIM(((tmp93 * tmp93)) * (log(tmp94) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */),1.0 + (tmp95 * tmp95) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 5755;
}

/*
equation index: 5756
type: SIMPLE_ASSIGN
damRet.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5756};
  real_array tmp96;
  real_array tmp97;
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp97, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1292]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* damRet.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damRet.b PARAM */), tmp96, tmp97, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1317]] /* damRet.yU PARAM */));
  threadData->lastEquationSolved = 5756;
}

/*
equation index: 5758
type: SIMPLE_ASSIGN
damRet.rho_default = 1.1843079200592153e-5 * damRet.sta_default.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5758};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* damRet.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5758;
}

/*
equation index: 5759
type: SIMPLE_ASSIGN
damRet.A = 55.989691542288554 / (damRet.v_nominal * damRet.rho_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5759};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* damRet.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* damRet.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* damRet.rho_default PARAM */)),"damRet.v_nominal * damRet.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5759;
}

/*
equation index: 5760
type: SIMPLE_ASSIGN
damRet.kDam_default = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / damRet.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5760};
  modelica_real tmp98;
  tmp98 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* damRet.rho_default PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* damRet.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp98)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* damRet.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* damRet.kThetaSqRt_default PARAM */),"damRet.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5760;
}

/*
equation index: 5761
type: SIMPLE_ASSIGN
damRet.facRouDuc = if damRet.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* damRet.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[382]] /* damRet.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5761;
}

/*
equation index: 5767
type: SIMPLE_ASSIGN
damRet.dp_nominal = (55.989691542288554 / damRet.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5767};
  modelica_real tmp99;
  tmp99 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* damRet.kDam_default PARAM */),"damRet.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* damRet.dp_nominal PARAM */) = (tmp99 * tmp99);
  threadData->lastEquationSolved = 5767;
}

/*
equation index: 5768
type: SIMPLE_ASSIGN
damRet.dp_nominal_pos = abs(damRet.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* damRet.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5768;
}

/*
equation index: 5771
type: SIMPLE_ASSIGN
damRet.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damRet.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* damRet.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* damRet.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5771;
}

/*
equation index: 5774
type: SIMPLE_ASSIGN
damRet.m_flow_turbulent = if damRet.use_deltaM then damRet.deltaM * 55.989691542288554 else damRet.eta_default * damRet.ReC * sqrt(damRet.A) * damRet.facRouDuc
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5774};
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  tmp101 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[385]] /* damRet.use_deltaM PARAM */);
  if(tmp101)
  {
    tmp102 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp100 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1283]] /* damRet.A PARAM */);
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
    tmp102 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* damRet.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.ReC PARAM */))) * (sqrt(tmp100))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* damRet.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.m_flow_turbulent PARAM */) = tmp102;
  threadData->lastEquationSolved = 5774;
}

/*
equation index: 5826
type: SIMPLE_ASSIGN
fanRet.eff.per.speeds_rpm[1] = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1399]] /* fanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1397]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5826;
}

/*
equation index: 5827
type: SIMPLE_ASSIGN
fanRet.eff.per.constantSpeed_rpm = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5827};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1397]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5827;
}

/*
equation index: 5831
type: SIMPLE_ASSIGN
fanRet.eff.per.motorCooledByFluid = fanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5831};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[396]] /* fanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[403]] /* fanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5831;
}

/*
equation index: 5832
type: SIMPLE_ASSIGN
fanRet.eff.per.power.P[1] = fanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1390]] /* fanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5832;
}

/*
equation index: 5833
type: SIMPLE_ASSIGN
fanRet.eff.per.power.V_flow[1] = fanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1391]] /* fanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5833;
}

/*
equation index: 5834
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.eta[1] = fanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1389]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1423]] /* fanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5834;
}

/*
equation index: 5835
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.V_flow[1] = fanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1388]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1422]] /* fanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5835;
}

/*
equation index: 5836
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.eta[1] = fanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1387]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1421]] /* fanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5836;
}

/*
equation index: 5837
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.V_flow[1] = fanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1420]] /* fanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5837;
}

/*
equation index: 5850
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1435]] /* fanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1414]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5850;
}

/*
equation index: 5851
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_start = fanRet.m_flow_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1436]] /* fanRet.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1415]] /* fanRet.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5851;
}

/*
equation index: 5854
type: SIMPLE_ASSIGN
fanRet.vol.tau = fanRet.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* fanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1446]] /* fanRet.tau PARAM */);
  threadData->lastEquationSolved = 5854;
}

/*
equation index: 5855
type: SIMPLE_ASSIGN
fanRet.vol.V_nominal = 55.989691542288554 * fanRet.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1449]] /* fanRet.vol.V_nominal PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1484]] /* fanRet.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 5855;
}

/*
equation index: 5873
type: SIMPLE_ASSIGN
fanRet.vol.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5873};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1454]] /* fanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1414]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5873;
}

/*
equation index: 5874
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flow_small = fanRet.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1478]] /* fanRet.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1454]] /* fanRet.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5874;
}

/*
equation index: 5875
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaReg = 0.001 * fanRet.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1474]] /* fanRet.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1478]] /* fanRet.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 5875;
}

/*
equation index: 5876
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaInvReg = 1.0 / fanRet.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1474]] /* fanRet.vol.steBal.deltaReg PARAM */),"fanRet.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 5876;
}

/*
equation index: 5877
type: SIMPLE_ASSIGN
fanRet.vol.steBal.fReg = 104.0 * fanRet.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1476]] /* fanRet.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 5877;
}

/*
equation index: 5878
type: SIMPLE_ASSIGN
fanRet.vol.steBal.eReg = (-380.0) * fanRet.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5878};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* fanRet.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 5878;
}

/*
equation index: 5879
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dReg = 534.0 * fanRet.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5879};
  modelica_real tmp103;
  tmp103 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  tmp103 *= tmp103;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1472]] /* fanRet.vol.steBal.dReg PARAM */) = (534.0) * ((tmp103 * tmp103));
  threadData->lastEquationSolved = 5879;
}

/*
equation index: 5880
type: SIMPLE_ASSIGN
fanRet.vol.steBal.cReg = (-361.0) * fanRet.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5880};
  modelica_real tmp104;
  tmp104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp104 * tmp104 * tmp104));
  threadData->lastEquationSolved = 5880;
}

/*
equation index: 5881
type: SIMPLE_ASSIGN
fanRet.vol.steBal.bReg = 119.0 * fanRet.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5881};
  modelica_real tmp105;
  tmp105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanRet.vol.steBal.bReg PARAM */) = (119.0) * ((tmp105 * tmp105));
  threadData->lastEquationSolved = 5881;
}

/*
equation index: 5882
type: SIMPLE_ASSIGN
fanRet.vol.steBal.aReg = (-15.0) * fanRet.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1468]] /* fanRet.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 5882;
}

/*
equation index: 5892
type: SIMPLE_ASSIGN
fanRet.vol.V = fanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5892};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1448]] /* fanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1449]] /* fanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5892;
}

/*
equation index: 5898
type: SIMPLE_ASSIGN
fanRet.vol.X_start[2] = fanRet.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1451]] /* fanRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1352]] /* fanRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5898;
}

/*
equation index: 5899
type: SIMPLE_ASSIGN
fanRet.vol.X_start[1] = fanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5899};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1450]] /* fanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1351]] /* fanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5899;
}

/*
equation index: 5900
type: SIMPLE_ASSIGN
fanRet.vol.T_start = fanRet.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1447]] /* fanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1349]] /* fanRet.T_start PARAM */);
  threadData->lastEquationSolved = 5900;
}

/*
equation index: 5901
type: SIMPLE_ASSIGN
fanRet.vol.p_start = fanRet.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5901};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1455]] /* fanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1417]] /* fanRet.p_start PARAM */);
  threadData->lastEquationSolved = 5901;
}

/*
equation index: 5922
type: SIMPLE_ASSIGN
fanRet.stageInputs[1] = fanRet.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5922};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1445]] /* fanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1416]] /* fanRet.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5922;
}

/*
equation index: 5926
type: SIMPLE_ASSIGN
fanRet.per.speeds_rpm[1] = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* fanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5926;
}

/*
equation index: 5927
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed_rpm = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5927};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1419]] /* fanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5927;
}

/*
equation index: 5928
type: SIMPLE_ASSIGN
fanRet.per.speeds[1] = fanRet.per.speeds_rpm[1] / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5928};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* fanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1433]] /* fanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5928;
}

/*
equation index: 5929
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed = fanRet.per.constantSpeed_rpm / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5929};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1418]] /* fanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1419]] /* fanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5929;
}

/*
equation index: 5950
type: SIMPLE_ASSIGN
conPIDTAirSup.gainTrack.k = 1.0 / (conPIDTAirSup.Ni * conPIDTAirSup.k)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* conPIDTAirSup.gainTrack.k PARAM */) = DIVISION_SIM(1.0,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* conPIDTAirSup.Ni PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.k PARAM */)),"conPIDTAirSup.Ni * conPIDTAirSup.k",equationIndexes);
  threadData->lastEquationSolved = 5950;
}

/*
equation index: 5951
type: SIMPLE_ASSIGN
conPIDTAirSup.gainPID.k = conPIDTAirSup.k
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* conPIDTAirSup.gainPID.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[471]] /* conPIDTAirSup.k PARAM */);
  threadData->lastEquationSolved = 5951;
}

/*
equation index: 5955
type: SIMPLE_ASSIGN
conPIDTAirSup.revAct = if conPIDTAirSup.reverseAction then -1.0 else 1.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* conPIDTAirSup.revAct PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[117]] /* conPIDTAirSup.reverseAction PARAM */)?-1.0:1.0);
  threadData->lastEquationSolved = 5955;
}

/*
equation index: 5956
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[460]] /* conPIDTAirSup.addI.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 5956;
}

/*
equation index: 5957
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k1 = conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5957};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* conPIDTAirSup.addI.k1 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* conPIDTAirSup.revAct PARAM */);
  threadData->lastEquationSolved = 5957;
}

/*
equation index: 5968
type: SIMPLE_ASSIGN
conPIDTAirSup.I.k = 1.0 / conPIDTAirSup.Ti
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* conPIDTAirSup.I.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* conPIDTAirSup.Ti PARAM */),"conPIDTAirSup.Ti",equationIndexes);
  threadData->lastEquationSolved = 5968;
}

/*
equation index: 5969
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* conPIDTAirSup.addP.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 5969;
}

/*
equation index: 5970
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k1 = conPIDTAirSup.revAct * conPIDTAirSup.wp
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* conPIDTAirSup.addP.k1 PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[474]] /* conPIDTAirSup.revAct PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* conPIDTAirSup.wp PARAM */));
  threadData->lastEquationSolved = 5970;
}

/*
equation index: 5980
type: SIMPLE_ASSIGN
ramp.startTime = demandRampStartTime
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5980};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2675]] /* ramp.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* demandRampStartTime PARAM */);
  threadData->lastEquationSolved = 5980;
}

/*
equation index: 5981
type: SIMPLE_ASSIGN
ramp.duration = demandRampDuration
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5981};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2672]] /* ramp.duration PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* demandRampDuration PARAM */);
  threadData->lastEquationSolved = 5981;
}

/*
equation index: 5995
type: SIMPLE_ASSIGN
vol.dynBal.X_start[1] = vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2847]] /* vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5995;
}

/*
equation index: 5996
type: SIMPLE_ASSIGN
vol.dynBal.hStart = 20120.0 * (1.0 - vol.dynBal.X_start[1]) + 2.5382145e6 * vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5996};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* vol.dynBal.hStart PARAM */) = (20120.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* vol.dynBal.X_start[1] PARAM */)) + (2.5382145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5996;
}

/*
equation index: 6004
type: SIMPLE_ASSIGN
vol.dynBal.p_start = vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2868]] /* vol.p_start PARAM */);
  threadData->lastEquationSolved = 6004;
}

/*
equation index: 6005
type: SIMPLE_ASSIGN
vol.dynBal.rho_start = 1.1843079200592153e-5 * vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6005};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2857]] /* vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 6005;
}

/*
equation index: 6008
type: SIMPLE_ASSIGN
vol.V = rooLen * rooWid * rooHei
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2846]] /* vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* rooLen PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* rooWid PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* rooHei PARAM */)));
  threadData->lastEquationSolved = 6008;
}

/*
equation index: 6009
type: SIMPLE_ASSIGN
vol.dynBal.fluidVolume = vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2854]] /* vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2846]] /* vol.V PARAM */);
  threadData->lastEquationSolved = 6009;
}

/*
equation index: 6017
type: SIMPLE_ASSIGN
vol.dynBal.X_start[2] = vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6017};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2852]] /* vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 6017;
}

/*
equation index: 6038
type: SIMPLE_ASSIGN
weaData.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* weaData.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 6038;
}

/*
equation index: 6039
type: SIMPLE_ASSIGN
weaData.longitude.longitude = weaData.lon
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 6039;
}

/*
equation index: 6040
type: SIMPLE_ASSIGN
weaData.latitude.latitude = weaData.lat
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2906]] /* weaData.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 6040;
}

/*
equation index: 6041
type: SIMPLE_ASSIGN
weaData.datRea1.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6041};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2903]] /* weaData.datRea1.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 6041;
}

/*
equation index: 6042
type: SIMPLE_ASSIGN
weaData.datRea1.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2904]] /* weaData.datRea1.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 6042;
}

/*
equation index: 6049
type: SIMPLE_ASSIGN
weaData.datRea1.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6049};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* weaData.datRea1.tableName PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 6049;
}

/*
equation index: 6052
type: SIMPLE_ASSIGN
weaData.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* weaData.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 6052;
}

/*
equation index: 6053
type: SIMPLE_ASSIGN
weaData.locTim.timZon = weaData.timZon
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* weaData.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* weaData.timZon PARAM */);
  threadData->lastEquationSolved = 6053;
}

/*
equation index: 6054
type: SIMPLE_ASSIGN
weaData.locTim.lon = weaData.lon
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* weaData.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 6054;
}

/*
equation index: 6055
type: SIMPLE_ASSIGN
weaData.locTim.diff = 13750.987083139758 * weaData.locTim.lon - weaData.locTim.timZon
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2907]] /* weaData.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2908]] /* weaData.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* weaData.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 6055;
}

/*
equation index: 6064
type: SIMPLE_ASSIGN
weaData.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6064};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2901]] /* weaData.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 6064;
}

/*
equation index: 6065
type: SIMPLE_ASSIGN
weaData.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6065};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2902]] /* weaData.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 6065;
}

/*
equation index: 6095
type: SIMPLE_ASSIGN
weaData.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6095};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* weaData.datRea.tableName PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 6095;
}

/*
equation index: 6098
type: ARRAY_CALL_ASSIGN

weaData.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaData.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6098};
  real_array tmp106;
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2916]] /* weaData.timeSpan[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */), _OMC_LIT90), tmp106);
  threadData->lastEquationSolved = 6098;
}

/*
equation index: 6113
type: SIMPLE_ASSIGN
TCHWLeaCoi.ratTau = TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* TCHWLeaCoi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6113;
}

/*
equation index: 6114
type: SIMPLE_ASSIGN
TCHWLeaCoi.tauHeaTraInv = if TCHWLeaCoi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6114};
  modelica_boolean tmp107;
  tmp107 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* TCHWLeaCoi.tauHeaTraInv PARAM */) = (tmp107?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */),"TCHWLeaCoi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6114;
}

/*
equation index: 6120
type: SIMPLE_ASSIGN
TCHWLeaCoi.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* TCHWLeaCoi.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6120;
}

/*
equation index: 6121
type: SIMPLE_ASSIGN
TCHWLeaCoi.m_flow_small = 1e-4 * TCHWLeaCoi.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* TCHWLeaCoi.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* TCHWLeaCoi.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6121;
}

/*
equation index: 6123
type: SIMPLE_ASSIGN
valByp.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6123;
}

/*
equation index: 6124
type: SIMPLE_ASSIGN
valByp.kFixed = 0.008184084337096277 * valByp.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.kFixed PARAM */) = (0.008184084337096277) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6124;
}

/*
equation index: 6130
type: SIMPLE_ASSIGN
valByp.dp_nominal = 14930.0 + valByp.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* valByp.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6130;
}

/*
equation index: 6131
type: SIMPLE_ASSIGN
valByp.dp_nominal_pos = abs(valByp.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* valByp.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6131;
}

/*
equation index: 6132
type: SIMPLE_ASSIGN
valByp.m_flow_nominal_pos = abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* valByp.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6132;
}

/*
equation index: 6135
type: SIMPLE_ASSIGN
valByp.eta_default = logic1.valByp.Medium.dynamicViscosity(valByp.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6135};
  logic1_valByp_Medium_ThermodynamicState tmp108;
  logic1_valByp_Medium_ThermodynamicState_wrap_vars(threadData,tmp108, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2843]] /* valByp.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2842]] /* valByp.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* valByp.eta_default PARAM */) = omc_logic1_valByp_Medium_dynamicViscosity(threadData, tmp108);
  threadData->lastEquationSolved = 6135;
}

/*
equation index: 6136
type: SIMPLE_ASSIGN
valByp.m_flow_turbulent = valByp.deltaM * abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* valByp.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* valByp.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6136;
}

/*
equation index: 6143
type: SIMPLE_ASSIGN
valByp.m_flow_small = 1e-4 * abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* valByp.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6143;
}

/*
equation index: 6145
type: SIMPLE_ASSIGN
TCWEntTow.ratTau = TCWEntTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* TCWEntTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* TCWEntTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6145;
}

/*
equation index: 6146
type: SIMPLE_ASSIGN
TCWEntTow.tauHeaTraInv = if TCWEntTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWEntTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6146};
  modelica_boolean tmp109;
  tmp109 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* TCWEntTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTraInv PARAM */) = (tmp109?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* TCWEntTow.tauHeaTra PARAM */),"TCWEntTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6146;
}

/*
equation index: 6152
type: SIMPLE_ASSIGN
TCWEntTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* TCWEntTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6152;
}

/*
equation index: 6153
type: SIMPLE_ASSIGN
TCWEntTow.m_flow_small = 1e-4 * TCWEntTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* TCWEntTow.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* TCWEntTow.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6153;
}

/*
equation index: 6155
type: SIMPLE_ASSIGN
TCWLeaTow.ratTau = TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* TCWLeaTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* TCWLeaTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6155;
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
TCWLeaTow.tauHeaTraInv = if TCWLeaTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6156};
  modelica_boolean tmp110;
  tmp110 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* TCWLeaTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTraInv PARAM */) = (tmp110?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* TCWLeaTow.tauHeaTra PARAM */),"TCWLeaTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6156;
}

/*
equation index: 6162
type: SIMPLE_ASSIGN
TCWLeaTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* TCWLeaTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6162;
}

/*
equation index: 6163
type: SIMPLE_ASSIGN
TCWLeaTow.m_flow_small = 1e-4 * TCWLeaTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* TCWLeaTow.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* TCWLeaTow.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6163;
}

/*
equation index: 6165
type: SIMPLE_ASSIGN
TCHWEntChi.ratTau = TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* TCHWEntChi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6165;
}

/*
equation index: 6166
type: SIMPLE_ASSIGN
TCHWEntChi.tauHeaTraInv = if TCHWEntChi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6166};
  modelica_boolean tmp111;
  tmp111 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* TCHWEntChi.tauHeaTraInv PARAM */) = (tmp111?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */),"TCHWEntChi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6166;
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
TCHWEntChi.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* TCHWEntChi.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6172;
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
TCHWEntChi.m_flow_small = 1e-4 * TCHWEntChi.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* TCHWEntChi.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* TCHWEntChi.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6173;
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
TAirSup.ratTau = TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TAirSup.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6175;
}

/*
equation index: 6176
type: SIMPLE_ASSIGN
TAirSup.tauHeaTraInv = if TAirSup.tauHeaTra < 1e-10 then 0.0 else 1.0 / TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6176};
  modelica_boolean tmp112;
  tmp112 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* TAirSup.tauHeaTraInv PARAM */) = (tmp112?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),"TAirSup.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6176;
}

/*
equation index: 6184
type: SIMPLE_ASSIGN
TCHWChi1Out.ratTau = TCHWChi1Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* TCHWChi1Out.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6184;
}

/*
equation index: 6185
type: SIMPLE_ASSIGN
TCHWChi1Out.tauHeaTraInv = if TCHWChi1Out.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi1Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6185};
  modelica_boolean tmp113;
  tmp113 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* TCHWChi1Out.tauHeaTraInv PARAM */) = (tmp113?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */),"TCHWChi1Out.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6185;
}

/*
equation index: 6191
type: SIMPLE_ASSIGN
TCHWChi1Out.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* TCHWChi1Out.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6191;
}

/*
equation index: 6192
type: SIMPLE_ASSIGN
TCHWChi1Out.m_flow_small = 1e-4 * TCHWChi1Out.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* TCHWChi1Out.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* TCHWChi1Out.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6192;
}

/*
equation index: 6194
type: SIMPLE_ASSIGN
TCHWChi1In.ratTau = TCHWChi1In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* TCHWChi1In.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6194;
}

/*
equation index: 6195
type: SIMPLE_ASSIGN
TCHWChi1In.tauHeaTraInv = if TCHWChi1In.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi1In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6195};
  modelica_boolean tmp114;
  tmp114 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* TCHWChi1In.tauHeaTraInv PARAM */) = (tmp114?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */),"TCHWChi1In.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6195;
}

/*
equation index: 6201
type: SIMPLE_ASSIGN
TCHWChi1In.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* TCHWChi1In.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6201;
}

/*
equation index: 6202
type: SIMPLE_ASSIGN
TCHWChi1In.m_flow_small = 1e-4 * TCHWChi1In.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* TCHWChi1In.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* TCHWChi1In.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6202;
}

/*
equation index: 6204
type: SIMPLE_ASSIGN
val6.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6204;
}

/*
equation index: 6205
type: SIMPLE_ASSIGN
val6.kFixed = 0.0030932931235336655 * val6.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6205};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6205;
}

/*
equation index: 6211
type: SIMPLE_ASSIGN
val6.dp_nominal = 104510.0 + val6.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* val6.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* val6.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6211;
}

/*
equation index: 6212
type: SIMPLE_ASSIGN
val6.dp_nominal_pos = abs(val6.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* val6.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* val6.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6212;
}

/*
equation index: 6213
type: SIMPLE_ASSIGN
val6.m_flow_nominal_pos = abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* val6.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6213;
}

/*
equation index: 6216
type: SIMPLE_ASSIGN
val6.eta_default = logic1.val6.Medium.dynamicViscosity(val6.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6216};
  logic1_val6_Medium_ThermodynamicState tmp115;
  logic1_val6_Medium_ThermodynamicState_wrap_vars(threadData,tmp115, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* val6.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* val6.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* val6.eta_default PARAM */) = omc_logic1_val6_Medium_dynamicViscosity(threadData, tmp115);
  threadData->lastEquationSolved = 6216;
}

/*
equation index: 6217
type: SIMPLE_ASSIGN
val6.m_flow_turbulent = val6.deltaM * abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* val6.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2734]] /* val6.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6217;
}

/*
equation index: 6224
type: SIMPLE_ASSIGN
val6.m_flow_small = 1e-4 * abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* val6.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6224;
}

/*
equation index: 6226
type: SIMPLE_ASSIGN
chi.TConEnt_nominal_degC = -273.15 + chi.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* chi.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 6226;
}

/*
equation index: 6227
type: SIMPLE_ASSIGN
chi.per.QEva_flow_nominal = -chiller1Capacity
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* chi.per.QEva_flow_nominal PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chiller1Capacity PARAM */));
  threadData->lastEquationSolved = 6227;
}

/*
equation index: 6228
type: SIMPLE_ASSIGN
chi.QEva_flow_nominal = chi.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* chi.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* chi.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6228;
}

/*
equation index: 6229
type: SIMPLE_ASSIGN
chi.Q_flow_small = 1e-9 * chi.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* chi.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* chi.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6229;
}

/*
equation index: 6230
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal = chi.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 6230;
}

/*
equation index: 6231
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal_degC = -273.15 + chi.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* chi.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 6231;
}

/*
equation index: 6232
type: SIMPLE_ASSIGN
chi.mCon_flow_nominal = chi.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* chi.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* chi.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6232;
}

/*
equation index: 6233
type: SIMPLE_ASSIGN
chi.mEva_flow_nominal = chi.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* chi.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6233;
}

/*
equation index: 6234
type: SIMPLE_ASSIGN
chi.etaMotor = chi.per.etaMotor
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* chi.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* chi.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 6234;
}

/*
equation index: 6235
type: SIMPLE_ASSIGN
chi.PLRMin = chi.per.PLRMin
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* chi.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* chi.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 6235;
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
chi.PLRMinUnl = chi.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* chi.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* chi.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 6236;
}

/*
equation index: 6237
type: SIMPLE_ASSIGN
chi.PLRMax = chi.per.PLRMax
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* chi.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[146]] /* chi.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 6237;
}

/*
equation index: 6238
type: SIMPLE_ASSIGN
chi.COP_nominal = chi.per.COP_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* chi.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* chi.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 6238;
}

/*
equation index: 6241
type: SIMPLE_ASSIGN
chi.rho2_nominal = logic1.chi.Medium2.density(chi.sta2_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6241};
  logic1_chi_Medium2_ThermodynamicState tmp116;
  logic1_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp116, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.rho2_nominal PARAM */) = omc_logic1_chi_Medium2_density(threadData, tmp116);
  threadData->lastEquationSolved = 6241;
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
chi.rho1_nominal = logic1.chi.Medium1.density(chi.sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6244};
  logic1_chi_Medium1_ThermodynamicState tmp117;
  logic1_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp117, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* chi.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* chi.rho1_nominal PARAM */) = omc_logic1_chi_Medium1_density(threadData, tmp117);
  threadData->lastEquationSolved = 6244;
}

/*
equation index: 6250
type: SIMPLE_ASSIGN
chi.m2_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.m2_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6250;
}

/*
equation index: 6251
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_nominal = chi.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* chi.preDro2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6251;
}

/*
equation index: 6252
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_nominal_pos = abs(chi.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* chi.preDro2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* chi.preDro2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6252;
}

/*
equation index: 6255
type: SIMPLE_ASSIGN
chi.preDro2.eta_default = logic1.chi.preDro2.Medium.dynamicViscosity(chi.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6255};
  logic1_chi_preDro2_Medium_ThermodynamicState tmp118;
  logic1_chi_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp118, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* chi.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* chi.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* chi.preDro2.eta_default PARAM */) = omc_logic1_chi_preDro2_Medium_dynamicViscosity(threadData, tmp118);
  threadData->lastEquationSolved = 6255;
}

/*
equation index: 6264
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_small = 1e-4 * abs(chi.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* chi.preDro2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* chi.preDro2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6264;
}

/*
equation index: 6271
type: SIMPLE_ASSIGN
chi.m1_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6271;
}

/*
equation index: 6272
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_nominal = chi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* chi.preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6272;
}

/*
equation index: 6273
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_nominal_pos = abs(chi.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* chi.preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6273;
}

/*
equation index: 6276
type: SIMPLE_ASSIGN
chi.preDro1.eta_default = logic1.chi.preDro1.Medium.dynamicViscosity(chi.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6276};
  logic1_chi_preDro1_Medium_ThermodynamicState tmp119;
  logic1_chi_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp119, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[171]] /* chi.preDro1.eta_default PARAM */) = omc_logic1_chi_preDro1_Medium_dynamicViscosity(threadData, tmp119);
  threadData->lastEquationSolved = 6276;
}

/*
equation index: 6285
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_small = 1e-4 * abs(chi.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* chi.preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* chi.preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6285;
}

/*
equation index: 6289
type: SIMPLE_ASSIGN
chi.vol2.T_start = chi.T2_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* chi.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 6289;
}

/*
equation index: 6290
type: SIMPLE_ASSIGN
chi.vol2.state_start.T = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* chi.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 6290;
}

/*
equation index: 6291
type: SIMPLE_ASSIGN
chi.vol2.p_start = chi.p2_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* chi.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 6291;
}

/*
equation index: 6292
type: SIMPLE_ASSIGN
chi.vol2.state_start.p = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* chi.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 6292;
}

/*
equation index: 6296
type: SIMPLE_ASSIGN
chi.vol2.rho_start = logic1.chi.vol2.Medium.density(chi.vol2.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6296};
  logic1_chi_vol2_Medium_ThermodynamicState tmp120;
  logic1_chi_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp120, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* chi.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* chi.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* chi.vol2.rho_start PARAM */) = omc_logic1_chi_vol2_Medium_density(threadData, tmp120);
  threadData->lastEquationSolved = 6296;
}

/*
equation index: 6297
type: SIMPLE_ASSIGN
chi.vol2.dynBal.p_start = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[248]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 6297;
}

/*
equation index: 6298
type: SIMPLE_ASSIGN
chi.vol2.dynBal.T_start = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 6298;
}

/*
equation index: 6299
type: SIMPLE_ASSIGN
chi.vol2.X_start[1] = chi.X2_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* chi.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* chi.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 6299;
}

/*
equation index: 6300
type: SIMPLE_ASSIGN
chi.vol2.dynBal.X_start[1] = chi.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* chi.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* chi.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6300;
}

/*
equation index: 6301
type: SIMPLE_ASSIGN
chi.vol2.dynBal.hStart = logic1.chi.vol2.dynBal.Medium.specificEnthalpy_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, chi.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6301};
  real_array tmp121;
  real_array_create(&tmp121, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* chi.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[238]] /* chi.vol2.dynBal.hStart PARAM */) = omc_logic1_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.dynBal.T_start PARAM */), tmp121);
  threadData->lastEquationSolved = 6301;
}

/*
equation index: 6306
type: SIMPLE_ASSIGN
chi.vol2.dynBal.rho_start = logic1.chi.vol2.dynBal.Medium.density(logic1.chi.vol2.dynBal.Medium.setState_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* chi.vol2.dynBal.rho_start PARAM */) = omc_logic1_chi_vol2_dynBal_Medium_density(threadData, omc_logic1_chi_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6306;
}

/*
equation index: 6309
type: SIMPLE_ASSIGN
chi.vol2.V = 30.0 * chi.m2_flow_nominal / chi.rho2_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* chi.vol2.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.m2_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.rho2_nominal PARAM */),"chi.rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 6309;
}

/*
equation index: 6310
type: SIMPLE_ASSIGN
chi.vol2.dynBal.fluidVolume = chi.vol2.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* chi.vol2.V PARAM */);
  threadData->lastEquationSolved = 6310;
}

/*
equation index: 6323
type: SIMPLE_ASSIGN
chi.vol2.m_flow_nominal = chi.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6323};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* chi.vol2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6323;
}

/*
equation index: 6324
type: SIMPLE_ASSIGN
chi.vol2.m_flow_small = 1e-4 * abs(chi.vol2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[247]] /* chi.vol2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[246]] /* chi.vol2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6324;
}

/*
equation index: 6333
type: SIMPLE_ASSIGN
chi.vol1.T_start = chi.T1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6333};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 6333;
}

/*
equation index: 6334
type: SIMPLE_ASSIGN
chi.vol1.state_start.T = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6334;
}

/*
equation index: 6335
type: SIMPLE_ASSIGN
chi.vol1.p_start = chi.p1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* chi.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 6335;
}

/*
equation index: 6336
type: SIMPLE_ASSIGN
chi.vol1.state_start.p = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[229]] /* chi.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6336;
}

/*
equation index: 6340
type: SIMPLE_ASSIGN
chi.vol1.rho_start = logic1.chi.vol1.Medium.density(chi.vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6340};
  logic1_chi_vol1_Medium_ThermodynamicState tmp122;
  logic1_chi_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp122, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[229]] /* chi.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* chi.vol1.rho_start PARAM */) = omc_logic1_chi_vol1_Medium_density(threadData, tmp122);
  threadData->lastEquationSolved = 6340;
}

/*
equation index: 6341
type: SIMPLE_ASSIGN
chi.vol1.dynBal.p_start = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* chi.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6341;
}

/*
equation index: 6342
type: SIMPLE_ASSIGN
chi.vol1.dynBal.T_start = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6342;
}

/*
equation index: 6343
type: SIMPLE_ASSIGN
chi.vol1.X_start[1] = chi.X1_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* chi.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* chi.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 6343;
}

/*
equation index: 6344
type: SIMPLE_ASSIGN
chi.vol1.dynBal.X_start[1] = chi.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* chi.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6344;
}

/*
equation index: 6345
type: SIMPLE_ASSIGN
chi.vol1.dynBal.hStart = logic1.chi.vol1.dynBal.Medium.specificEnthalpy_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, chi.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6345};
  real_array tmp123;
  real_array_create(&tmp123, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi.vol1.dynBal.hStart PARAM */) = omc_logic1_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.dynBal.T_start PARAM */), tmp123);
  threadData->lastEquationSolved = 6345;
}

/*
equation index: 6350
type: SIMPLE_ASSIGN
chi.vol1.dynBal.rho_start = logic1.chi.vol1.dynBal.Medium.density(logic1.chi.vol1.dynBal.Medium.setState_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* chi.vol1.dynBal.rho_start PARAM */) = omc_logic1_chi_vol1_dynBal_Medium_density(threadData, omc_logic1_chi_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6350;
}

/*
equation index: 6353
type: SIMPLE_ASSIGN
chi.vol1.V = 30.0 * chi.m1_flow_nominal / chi.rho1_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* chi.vol1.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.m1_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[193]] /* chi.rho1_nominal PARAM */),"chi.rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 6353;
}

/*
equation index: 6354
type: SIMPLE_ASSIGN
chi.vol1.dynBal.fluidVolume = chi.vol1.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* chi.vol1.V PARAM */);
  threadData->lastEquationSolved = 6354;
}

/*
equation index: 6367
type: SIMPLE_ASSIGN
chi.vol1.m_flow_nominal = chi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[221]] /* chi.vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6367;
}

/*
equation index: 6368
type: SIMPLE_ASSIGN
chi.vol1.m_flow_small = 1e-4 * abs(chi.vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[222]] /* chi.vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[221]] /* chi.vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6368;
}

/*
equation index: 6392
type: SIMPLE_ASSIGN
chi.m2_flow_small = 1e-4 * abs(chi.m2_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m2_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.m2_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6392;
}

/*
equation index: 6393
type: SIMPLE_ASSIGN
chi.m1_flow_small = 1e-4 * abs(chi.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6393};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* chi.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6393;
}

/*
equation index: 6396
type: SIMPLE_ASSIGN
expVesChi.state_start.p = expVesChi.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* expVesChi.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */);
  threadData->lastEquationSolved = 6396;
}

/*
equation index: 6397
type: SIMPLE_ASSIGN
expVesChi.state_start.T = expVesChi.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* expVesChi.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1331]] /* expVesChi.T_start PARAM */);
  threadData->lastEquationSolved = 6397;
}

/*
equation index: 6398
type: SIMPLE_ASSIGN
expVesChi.rho_start = logic1.expVesChi.Medium.density(expVesChi.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6398};
  logic1_expVesChi_Medium_ThermodynamicState tmp124;
  logic1_expVesChi_Medium_ThermodynamicState_wrap_vars(threadData,tmp124, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* expVesChi.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* expVesChi.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* expVesChi.rho_start PARAM */) = omc_logic1_expVesChi_Medium_density(threadData, tmp124);
  threadData->lastEquationSolved = 6398;
}

/*
equation index: 6404
type: SIMPLE_ASSIGN
val1.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6404;
}

/*
equation index: 6405
type: SIMPLE_ASSIGN
val1.kFixed = 0.008184084337096277 * val1.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.kFixed PARAM */) = (0.008184084337096277) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6405;
}

/*
equation index: 6411
type: SIMPLE_ASSIGN
val1.dp_nominal = 14930.0 + val1.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* val1.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6411;
}

/*
equation index: 6412
type: SIMPLE_ASSIGN
val1.dp_nominal_pos = abs(val1.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* val1.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6412;
}

/*
equation index: 6413
type: SIMPLE_ASSIGN
val1.m_flow_nominal_pos = abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* val1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6413;
}

/*
equation index: 6416
type: SIMPLE_ASSIGN
val1.eta_default = logic1.val1.Medium.dynamicViscosity(val1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6416};
  logic1_val1_Medium_ThermodynamicState tmp125;
  logic1_val1_Medium_ThermodynamicState_wrap_vars(threadData,tmp125, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* val1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2702]] /* val1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* val1.eta_default PARAM */) = omc_logic1_val1_Medium_dynamicViscosity(threadData, tmp125);
  threadData->lastEquationSolved = 6416;
}

/*
equation index: 6417
type: SIMPLE_ASSIGN
val1.m_flow_turbulent = val1.deltaM * abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* val1.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* val1.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6417;
}

/*
equation index: 6424
type: SIMPLE_ASSIGN
val1.m_flow_small = 1e-4 * abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* val1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6424;
}

/*
equation index: 6426
type: SIMPLE_ASSIGN
val5.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6426};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6426;
}

/*
equation index: 6427
type: SIMPLE_ASSIGN
val5.kFixed = 0.003341138439631633 * val5.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6427};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.kFixed PARAM */) = (0.003341138439631633) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6427;
}

/*
equation index: 6433
type: SIMPLE_ASSIGN
val5.dp_nominal = 89580.0 + val5.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2714]] /* val5.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* val5.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6433;
}

/*
equation index: 6434
type: SIMPLE_ASSIGN
val5.dp_nominal_pos = abs(val5.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* val5.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2714]] /* val5.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6434;
}

/*
equation index: 6435
type: SIMPLE_ASSIGN
val5.m_flow_nominal_pos = abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6435;
}

/*
equation index: 6438
type: SIMPLE_ASSIGN
val5.eta_default = logic1.val5.Medium.dynamicViscosity(val5.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6438};
  logic1_val5_Medium_ThermodynamicState tmp126;
  logic1_val5_Medium_ThermodynamicState_wrap_vars(threadData,tmp126, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2726]] /* val5.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* val5.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* val5.eta_default PARAM */) = omc_logic1_val5_Medium_dynamicViscosity(threadData, tmp126);
  threadData->lastEquationSolved = 6438;
}

/*
equation index: 6439
type: SIMPLE_ASSIGN
val5.m_flow_turbulent = val5.deltaM * abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2722]] /* val5.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* val5.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6439;
}

/*
equation index: 6446
type: SIMPLE_ASSIGN
val5.m_flow_small = 1e-4 * abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* val5.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6446;
}

/*
equation index: 6488
type: SIMPLE_ASSIGN
pumCW.eff.per.speeds_rpm[1] = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2467]] /* pumCW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6488;
}

/*
equation index: 6489
type: SIMPLE_ASSIGN
pumCW.eff.per.constantSpeed_rpm = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* pumCW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6489;
}

/*
equation index: 6493
type: SIMPLE_ASSIGN
pumCW.eff.per.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6493};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[751]] /* pumCW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[760]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6493;
}

/*
equation index: 6494
type: SIMPLE_ASSIGN
pumCW.eff.per.power.P[1] = pumCW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2458]] /* pumCW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2493]] /* pumCW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6494;
}

/*
equation index: 6495
type: SIMPLE_ASSIGN
pumCW.eff.per.power.V_flow[1] = pumCW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2459]] /* pumCW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2494]] /* pumCW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6495;
}

/*
equation index: 6496
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.eta[1] = pumCW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2457]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2492]] /* pumCW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6496;
}

/*
equation index: 6497
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.V_flow[1] = pumCW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2456]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* pumCW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6497;
}

/*
equation index: 6498
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.eta[1] = pumCW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2490]] /* pumCW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6498;
}

/*
equation index: 6499
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.V_flow[1] = pumCW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2489]] /* pumCW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6499;
}

/*
equation index: 6513
type: SIMPLE_ASSIGN
pumCW.heaDis.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6513};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[757]] /* pumCW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[760]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6513;
}

/*
equation index: 6519
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2506]] /* pumCW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2483]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6519;
}

/*
equation index: 6520
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_start = pumCW.m_flow_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2507]] /* pumCW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2484]] /* pumCW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 6520;
}

/*
equation index: 6523
type: SIMPLE_ASSIGN
pumCW.vol.tau = pumCW.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6523};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2542]] /* pumCW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* pumCW.tau PARAM */);
  threadData->lastEquationSolved = 6523;
}

/*
equation index: 6524
type: SIMPLE_ASSIGN
pumCW.vol.V_nominal = 12.5601875 * pumCW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2518]] /* pumCW.vol.V_nominal PARAM */) = (12.5601875) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2542]] /* pumCW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6524;
}

/*
equation index: 6527
type: SIMPLE_ASSIGN
pumCW.vol.T_start = pumCW.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 6527;
}

/*
equation index: 6528
type: SIMPLE_ASSIGN
pumCW.vol.state_start.T = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* pumCW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6528;
}

/*
equation index: 6529
type: SIMPLE_ASSIGN
pumCW.vol.p_start = pumCW.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 6529;
}

/*
equation index: 6530
type: SIMPLE_ASSIGN
pumCW.vol.state_start.p = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2541]] /* pumCW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6530;
}

/*
equation index: 6534
type: SIMPLE_ASSIGN
pumCW.vol.rho_start = logic1.pumCW.vol.Medium.density(pumCW.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6534};
  logic1_pumCW_vol_Medium_ThermodynamicState tmp127;
  logic1_pumCW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp127, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2541]] /* pumCW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2540]] /* pumCW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* pumCW.vol.rho_start PARAM */) = omc_logic1_pumCW_vol_Medium_density(threadData, tmp127);
  threadData->lastEquationSolved = 6534;
}

/*
equation index: 6535
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.p_start = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* pumCW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6535;
}

/*
equation index: 6536
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.T_start = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2516]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6536;
}

/*
equation index: 6537
type: SIMPLE_ASSIGN
pumCW.vol.X_start[1] = pumCW.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6537;
}

/*
equation index: 6538
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.X_start[1] = pumCW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6538;
}

/*
equation index: 6539
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.hStart = logic1.pumCW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, pumCW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6539};
  real_array tmp128;
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW.vol.dynBal.hStart PARAM */) = omc_logic1_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW.vol.dynBal.T_start PARAM */), tmp128);
  threadData->lastEquationSolved = 6539;
}

/*
equation index: 6544
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.rho_start = logic1.pumCW.vol.dynBal.Medium.density(logic1.pumCW.vol.dynBal.Medium.setState_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2529]] /* pumCW.vol.dynBal.rho_start PARAM */) = omc_logic1_pumCW_vol_dynBal_Medium_density(threadData, omc_logic1_pumCW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6544;
}

/*
equation index: 6547
type: SIMPLE_ASSIGN
pumCW.vol.V = pumCW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2518]] /* pumCW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6547;
}

/*
equation index: 6548
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.fluidVolume = pumCW.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* pumCW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2517]] /* pumCW.vol.V PARAM */);
  threadData->lastEquationSolved = 6548;
}

/*
equation index: 6561
type: SIMPLE_ASSIGN
pumCW.vol.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2534]] /* pumCW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2483]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6561;
}

/*
equation index: 6570
type: SIMPLE_ASSIGN
pumCW.sta_start.p = pumCW.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2513]] /* pumCW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2486]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 6570;
}

/*
equation index: 6571
type: SIMPLE_ASSIGN
pumCW.sta_start.T = pumCW.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2512]] /* pumCW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2418]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 6571;
}

/*
equation index: 6572
type: SIMPLE_ASSIGN
pumCW.h_outflow_start = logic1.pumCW.Medium.specificEnthalpy(pumCW.sta_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6572};
  logic1_pumCW_Medium_ThermodynamicState tmp129;
  logic1_pumCW_Medium_ThermodynamicState_wrap_vars(threadData,tmp129, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2513]] /* pumCW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2512]] /* pumCW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2479]] /* pumCW.h_outflow_start PARAM */) = omc_logic1_pumCW_Medium_specificEnthalpy(threadData, tmp129);
  threadData->lastEquationSolved = 6572;
}

/*
equation index: 6584
type: SIMPLE_ASSIGN
pumCW.stageInputs[1] = pumCW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6584};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2485]] /* pumCW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 6584;
}

/*
equation index: 6585
type: SIMPLE_ASSIGN
pumCW.constInput = pumCW.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6585};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2424]] /* pumCW.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2425]] /* pumCW.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 6585;
}

/*
equation index: 6588
type: SIMPLE_ASSIGN
pumCW.per.speeds_rpm[1] = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2502]] /* pumCW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6588;
}

/*
equation index: 6589
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed_rpm = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* pumCW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6589;
}

/*
equation index: 6590
type: SIMPLE_ASSIGN
pumCW.per.speeds[1] = pumCW.per.speeds_rpm[1] / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2501]] /* pumCW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2502]] /* pumCW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6590;
}

/*
equation index: 6591
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed = pumCW.per.constantSpeed_rpm / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* pumCW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2488]] /* pumCW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6591;
}

/*
equation index: 6607
type: SIMPLE_ASSIGN
cooTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6607};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6607;
}

/*
equation index: 6608
type: SIMPLE_ASSIGN
cooTow.mRef_flow = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* cooTow.mRef_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6608;
}

/*
equation index: 6613
type: SIMPLE_ASSIGN
cooTow.rho_default = logic1.cooTow.Medium.density(cooTow.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6613};
  logic1_cooTow_Medium_ThermodynamicState tmp130;
  logic1_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp130, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* cooTow.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* cooTow.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.rho_default PARAM */) = omc_logic1_cooTow_Medium_density(threadData, tmp130);
  threadData->lastEquationSolved = 6613;
}

/*
equation index: 6616
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_nominal = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6616};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow.preDro.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6616;
}

/*
equation index: 6617
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_nominal_pos = abs(cooTow.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* cooTow.preDro.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow.preDro.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6617;
}

/*
equation index: 6618
type: SIMPLE_ASSIGN
cooTow.preDro.k = 0.0030932931235336655 * cooTow.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1084]] /* cooTow.preDro.k PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* cooTow.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 6618;
}

/*
equation index: 6623
type: SIMPLE_ASSIGN
cooTow.preDro.eta_default = logic1.cooTow.preDro.Medium.dynamicViscosity(cooTow.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6623};
  logic1_cooTow_preDro_Medium_ThermodynamicState tmp131;
  logic1_cooTow_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp131, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* cooTow.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.preDro.eta_default PARAM */) = omc_logic1_cooTow_preDro_Medium_dynamicViscosity(threadData, tmp131);
  threadData->lastEquationSolved = 6623;
}

/*
equation index: 6624
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_turbulent = 0.1 * cooTow.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow.preDro.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* cooTow.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 6624;
}

/*
equation index: 6632
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_small = 1e-4 * abs(cooTow.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1087]] /* cooTow.preDro.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow.preDro.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6632;
}

/*
equation index: 6636
type: SIMPLE_ASSIGN
cooTow.vol.T_start = cooTow.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* cooTow.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 6636;
}

/*
equation index: 6637
type: SIMPLE_ASSIGN
cooTow.vol.state_start.T = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6637;
}

/*
equation index: 6638
type: SIMPLE_ASSIGN
cooTow.vol.p_start = cooTow.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1117]] /* cooTow.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 6638;
}

/*
equation index: 6639
type: SIMPLE_ASSIGN
cooTow.vol.state_start.p = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* cooTow.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1117]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6639;
}

/*
equation index: 6643
type: SIMPLE_ASSIGN
cooTow.vol.rho_start = logic1.cooTow.vol.Medium.density(cooTow.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6643};
  logic1_cooTow_vol_Medium_ThermodynamicState tmp132;
  logic1_cooTow_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp132, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* cooTow.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* cooTow.vol.rho_start PARAM */) = omc_logic1_cooTow_vol_Medium_density(threadData, tmp132);
  threadData->lastEquationSolved = 6643;
}

/*
equation index: 6644
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.p_start = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTow.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1117]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6644;
}

/*
equation index: 6645
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.T_start = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6645;
}

/*
equation index: 6646
type: SIMPLE_ASSIGN
cooTow.vol.X_start[1] = cooTow.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* cooTow.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6646;
}

/*
equation index: 6647
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.X_start[1] = cooTow.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* cooTow.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6647;
}

/*
equation index: 6648
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.hStart = logic1.cooTow.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, cooTow.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6648};
  real_array tmp133;
  real_array_create(&tmp133, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* cooTow.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow.vol.dynBal.hStart PARAM */) = omc_logic1_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.vol.dynBal.T_start PARAM */), tmp133);
  threadData->lastEquationSolved = 6648;
}

/*
equation index: 6653
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.rho_start = logic1.cooTow.vol.dynBal.Medium.density(logic1.cooTow.vol.dynBal.Medium.setState_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* cooTow.vol.dynBal.rho_start PARAM */) = omc_logic1_cooTow_vol_dynBal_Medium_density(threadData, omc_logic1_cooTow_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6653;
}

/*
equation index: 6656
type: SIMPLE_ASSIGN
cooTow.vol.V = cooTow.m_flow_nominal * cooTow.tau / cooTow.rho_default
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.rho_default PARAM */),"cooTow.rho_default",equationIndexes));
  threadData->lastEquationSolved = 6656;
}

/*
equation index: 6657
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.fluidVolume = cooTow.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.vol.V PARAM */);
  threadData->lastEquationSolved = 6657;
}

/*
equation index: 6670
type: SIMPLE_ASSIGN
cooTow.vol.m_flow_nominal = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* cooTow.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6670;
}

/*
equation index: 6671
type: SIMPLE_ASSIGN
cooTow.vol.m_flow_small = 1e-4 * abs(cooTow.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6671};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* cooTow.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1115]] /* cooTow.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6671;
}

/*
equation index: 6690
type: SIMPLE_ASSIGN
cooTow.m_flow_small = 1e-4 * abs(cooTow.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* cooTow.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6690;
}

/*
equation index: 6692
type: SIMPLE_ASSIGN
expVesCHW.state_start.p = expVesCHW.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6692};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1330]] /* expVesCHW.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6692;
}

/*
equation index: 6693
type: SIMPLE_ASSIGN
expVesCHW.state_start.T = expVesCHW.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* expVesCHW.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* expVesCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6693;
}

/*
equation index: 6694
type: SIMPLE_ASSIGN
expVesCHW.rho_start = logic1.expVesCHW.Medium.density(expVesCHW.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6694};
  logic1_expVesCHW_Medium_ThermodynamicState tmp134;
  logic1_expVesCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp134, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1330]] /* expVesCHW.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* expVesCHW.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1328]] /* expVesCHW.rho_start PARAM */) = omc_logic1_expVesCHW_Medium_density(threadData, tmp134);
  threadData->lastEquationSolved = 6694;
}

/*
equation index: 6740
type: SIMPLE_ASSIGN
pumCHW.eff.per.speeds_rpm[1] = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2211]] /* pumCHW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6740;
}

/*
equation index: 6741
type: SIMPLE_ASSIGN
pumCHW.eff.per.constantSpeed_rpm = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6741};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* pumCHW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6741;
}

/*
equation index: 6745
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6745};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[673]] /* pumCHW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[682]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6745;
}

/*
equation index: 6746
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.P[1] = pumCHW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2202]] /* pumCHW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2237]] /* pumCHW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6746;
}

/*
equation index: 6747
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.V_flow[1] = pumCHW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2203]] /* pumCHW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6747;
}

/*
equation index: 6748
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.eta[1] = pumCHW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2236]] /* pumCHW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6748;
}

/*
equation index: 6749
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.V_flow[1] = pumCHW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2235]] /* pumCHW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6749;
}

/*
equation index: 6750
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.eta[1] = pumCHW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2234]] /* pumCHW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6750;
}

/*
equation index: 6751
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2233]] /* pumCHW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6751;
}

/*
equation index: 6765
type: SIMPLE_ASSIGN
pumCHW.heaDis.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6765};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[679]] /* pumCHW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[682]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6765;
}

/*
equation index: 6771
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2250]] /* pumCHW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2227]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6771;
}

/*
equation index: 6772
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_start = pumCHW.m_flow_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6772};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2251]] /* pumCHW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2228]] /* pumCHW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 6772;
}

/*
equation index: 6775
type: SIMPLE_ASSIGN
pumCHW.vol.tau = pumCHW.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW.tau PARAM */);
  threadData->lastEquationSolved = 6775;
}

/*
equation index: 6776
type: SIMPLE_ASSIGN
pumCHW.vol.V_nominal = 25.120375 * pumCHW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* pumCHW.vol.V_nominal PARAM */) = (25.120375) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6776;
}

/*
equation index: 6779
type: SIMPLE_ASSIGN
pumCHW.vol.T_start = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6779;
}

/*
equation index: 6780
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.T = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* pumCHW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6780;
}

/*
equation index: 6781
type: SIMPLE_ASSIGN
pumCHW.vol.p_start = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6781;
}

/*
equation index: 6782
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.p = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* pumCHW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6782;
}

/*
equation index: 6786
type: SIMPLE_ASSIGN
pumCHW.vol.rho_start = logic1.pumCHW.vol.Medium.density(pumCHW.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6786};
  logic1_pumCHW_vol_Medium_ThermodynamicState tmp135;
  logic1_pumCHW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp135, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2285]] /* pumCHW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2284]] /* pumCHW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* pumCHW.vol.rho_start PARAM */) = omc_logic1_pumCHW_vol_Medium_density(threadData, tmp135);
  threadData->lastEquationSolved = 6786;
}

/*
equation index: 6787
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.p_start = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* pumCHW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6787;
}

/*
equation index: 6788
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.T_start = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2260]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6788;
}

/*
equation index: 6789
type: SIMPLE_ASSIGN
pumCHW.vol.X_start[1] = pumCHW.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* pumCHW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6789;
}

/*
equation index: 6790
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.X_start[1] = pumCHW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6790;
}

/*
equation index: 6791
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.hStart = logic1.pumCHW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, pumCHW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6791};
  real_array tmp136;
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* pumCHW.vol.dynBal.hStart PARAM */) = omc_logic1_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW.vol.dynBal.T_start PARAM */), tmp136);
  threadData->lastEquationSolved = 6791;
}

/*
equation index: 6796
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.rho_start = logic1.pumCHW.vol.dynBal.Medium.density(logic1.pumCHW.vol.dynBal.Medium.setState_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW.vol.dynBal.rho_start PARAM */) = omc_logic1_pumCHW_vol_dynBal_Medium_density(threadData, omc_logic1_pumCHW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6796;
}

/*
equation index: 6799
type: SIMPLE_ASSIGN
pumCHW.vol.V = pumCHW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6799};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2262]] /* pumCHW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6799;
}

/*
equation index: 6800
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.fluidVolume = pumCHW.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6800};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* pumCHW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2261]] /* pumCHW.vol.V PARAM */);
  threadData->lastEquationSolved = 6800;
}

/*
equation index: 6813
type: SIMPLE_ASSIGN
pumCHW.vol.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6813};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2278]] /* pumCHW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2227]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6813;
}

/*
equation index: 6822
type: SIMPLE_ASSIGN
pumCHW.sta_start.p = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* pumCHW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2230]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6822;
}

/*
equation index: 6823
type: SIMPLE_ASSIGN
pumCHW.sta_start.T = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2162]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6823;
}

/*
equation index: 6824
type: SIMPLE_ASSIGN
pumCHW.h_outflow_start = logic1.pumCHW.Medium.specificEnthalpy(pumCHW.sta_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6824};
  logic1_pumCHW_Medium_ThermodynamicState tmp137;
  logic1_pumCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp137, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2257]] /* pumCHW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2256]] /* pumCHW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2223]] /* pumCHW.h_outflow_start PARAM */) = omc_logic1_pumCHW_Medium_specificEnthalpy(threadData, tmp137);
  threadData->lastEquationSolved = 6824;
}

/*
equation index: 6836
type: SIMPLE_ASSIGN
pumCHW.stageInputs[1] = pumCHW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6836};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2229]] /* pumCHW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 6836;
}

/*
equation index: 6837
type: SIMPLE_ASSIGN
pumCHW.constInput = pumCHW.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6837};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2168]] /* pumCHW.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2169]] /* pumCHW.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 6837;
}

/*
equation index: 6840
type: SIMPLE_ASSIGN
pumCHW.per.speeds_rpm[1] = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2246]] /* pumCHW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6840;
}

/*
equation index: 6841
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed_rpm = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2232]] /* pumCHW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6841;
}

/*
equation index: 6842
type: SIMPLE_ASSIGN
pumCHW.per.speeds[1] = pumCHW.per.speeds_rpm[1] / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6842};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2245]] /* pumCHW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2246]] /* pumCHW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6842;
}

/*
equation index: 6843
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed = pumCHW.per.constantSpeed_rpm / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2231]] /* pumCHW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2232]] /* pumCHW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6843;
}

/*
equation index: 6860
type: SIMPLE_ASSIGN
cooCoi.GDif = 0.0033333333333333335 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */) = (0.0033333333333333335) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 6860;
}

/*
equation index: 6861
type: SIMPLE_ASSIGN
cooCoi.theCon2[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* cooCoi.theCon2[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6861;
}

/*
equation index: 6862
type: SIMPLE_ASSIGN
cooCoi.theCon2[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* cooCoi.theCon2[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6862;
}

/*
equation index: 6863
type: SIMPLE_ASSIGN
cooCoi.theCon2[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooCoi.theCon2[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6863;
}

/*
equation index: 6864
type: SIMPLE_ASSIGN
cooCoi.theCon1[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6864};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1038]] /* cooCoi.theCon1[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6864;
}

/*
equation index: 6865
type: SIMPLE_ASSIGN
cooCoi.theCon1[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* cooCoi.theCon1[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6865;
}

/*
equation index: 6866
type: SIMPLE_ASSIGN
cooCoi.theCon1[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6866};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1036]] /* cooCoi.theCon1[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6866;
}

/*
equation index: 6869
type: SIMPLE_ASSIGN
cooCoi.ele[4].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6869};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* cooCoi.ele[4].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 6869;
}

/*
equation index: 6870
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[4].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 6870;
}

/*
equation index: 6871
type: SIMPLE_ASSIGN
cooCoi.ele[4].C = 2.0 * cooCoi.ele[4].UA_nominal * cooCoi.ele[4].tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* cooCoi.ele[4].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* cooCoi.ele[4].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[4].tau_m PARAM */)));
  threadData->lastEquationSolved = 6871;
}

/*
equation index: 6872
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.C = cooCoi.ele[4].C
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6872};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* cooCoi.ele[4].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* cooCoi.ele[4].C PARAM */);
  threadData->lastEquationSolved = 6872;
}

/*
equation index: 6876
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[4].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6876};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* cooCoi.ele[4].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* cooCoi.ele[4].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 6876;
}

/*
equation index: 6882
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho1_nominal = logic1.cooCoi.ele.Medium1.density(cooCoi.ele[4].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6882};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp138;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp138, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* cooCoi.ele[4].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[4].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* cooCoi.ele[4].rho1_nominal PARAM */) = omc_logic1_cooCoi_ele_Medium1_density(threadData, tmp138);
  threadData->lastEquationSolved = 6882;
}

/*
equation index: 6890
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[4].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6890};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* cooCoi.ele[4].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* cooCoi.ele[4].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 6890;
}

/*
equation index: 6910
type: SIMPLE_ASSIGN
cooCoi.m1_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6910;
}

/*
equation index: 6911
type: SIMPLE_ASSIGN
cooCoi.ele[4].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[4].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6911;
}

/*
equation index: 6912
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_nominal = cooCoi.ele[4].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[4].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6912;
}

/*
equation index: 6913
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[4].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[4].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6913;
}

/*
equation index: 6916
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.eta_default = logic1.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[4].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6916};
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp139;
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp139, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* cooCoi.ele[4].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* cooCoi.ele[4].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* cooCoi.ele[4].preDro1.eta_default PARAM */) = omc_logic1_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp139);
  threadData->lastEquationSolved = 6916;
}

/*
equation index: 6925
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[4].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6925};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[4].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6925;
}

/*
equation index: 6949
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 6949;
}

/*
equation index: 6950
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.V = 55.989691542288554 * cooCoi.ele[4].tau2 / cooCoi.ele[4].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6950};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* cooCoi.ele[4].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* cooCoi.ele[4].rho2_nominal PARAM */),"cooCoi.ele[4].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 6950;
}

/*
equation index: 6951
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.fluidVolume = cooCoi.ele[4].vol2.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6951};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* cooCoi.ele[4].vol2.V PARAM */);
  threadData->lastEquationSolved = 6951;
}

/*
equation index: 6983
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.T_start = cooCoi.ele[4].T1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[4].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 6983;
}

/*
equation index: 6984
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.T = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6984};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* cooCoi.ele[4].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6984;
}

/*
equation index: 6986
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.p_start = cooCoi.ele[4].p1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6986};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* cooCoi.ele[4].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 6986;
}

/*
equation index: 6987
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.p = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6987};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* cooCoi.ele[4].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6987;
}

/*
equation index: 6991
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.rho_start = logic1.cooCoi.ele.vol1.Medium.density(cooCoi.ele[4].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6991};
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState tmp140;
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp140, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* cooCoi.ele[4].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[852]] /* cooCoi.ele[4].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* cooCoi.ele[4].vol1.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_Medium_density(threadData, tmp140);
  threadData->lastEquationSolved = 6991;
}

/*
equation index: 6992
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.p_start = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6992;
}

/*
equation index: 6993
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.T_start = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6993;
}

/*
equation index: 6995
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.X_start[1] = cooCoi.ele[4].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6995};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* cooCoi.ele[4].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 6995;
}

/*
equation index: 6996
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.X_start[1] = cooCoi.ele[4].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6996};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6996;
}

/*
equation index: 6997
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.hStart = logic1.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, cooCoi.ele[4].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_6997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6997};
  real_array tmp141;
  real_array_create(&tmp141, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* cooCoi.ele[4].vol1.dynBal.hStart PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), tmp141);
  threadData->lastEquationSolved = 6997;
}

/*
equation index: 7002
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.rho_start = logic1.cooCoi.ele.vol1.dynBal.Medium.density(logic1.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7002};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* cooCoi.ele[4].vol1.dynBal.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic1_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7002;
}

/*
equation index: 7005
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7005};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[4].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7005;
}

/*
equation index: 7006
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.V = cooCoi.ele[4].m1_flow_nominal * cooCoi.ele[4].tau1 / cooCoi.ele[4].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[4].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[4].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[4].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[692]] /* cooCoi.ele[4].rho1_nominal PARAM */),"cooCoi.ele[4].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7006;
}

/*
equation index: 7007
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.fluidVolume = cooCoi.ele[4].vol1.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[4].vol1.V PARAM */);
  threadData->lastEquationSolved = 7007;
}

/*
equation index: 7020
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.m_flow_nominal = cooCoi.ele[4].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7020};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* cooCoi.ele[4].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[4].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7020;
}

/*
equation index: 7021
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[4].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7021};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* cooCoi.ele[4].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* cooCoi.ele[4].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7021;
}

/*
equation index: 7048
type: SIMPLE_ASSIGN
cooCoi.ele[4].m1_flow_small = 1e-4 * abs(cooCoi.ele[4].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7048};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* cooCoi.ele[4].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[4].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7048;
}

/*
equation index: 7052
type: SIMPLE_ASSIGN
cooCoi.ele[3].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* cooCoi.ele[3].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7052;
}

/*
equation index: 7053
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[3].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7053;
}

/*
equation index: 7054
type: SIMPLE_ASSIGN
cooCoi.ele[3].C = 2.0 * cooCoi.ele[3].UA_nominal * cooCoi.ele[3].tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7054};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.ele[3].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* cooCoi.ele[3].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[3].tau_m PARAM */)));
  threadData->lastEquationSolved = 7054;
}

/*
equation index: 7055
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.C = cooCoi.ele[3].C
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7055};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* cooCoi.ele[3].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.ele[3].C PARAM */);
  threadData->lastEquationSolved = 7055;
}

/*
equation index: 7059
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[3].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* cooCoi.ele[3].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* cooCoi.ele[3].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7059;
}

/*
equation index: 7065
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho1_nominal = logic1.cooCoi.ele.Medium1.density(cooCoi.ele[3].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7065};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp142;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp142, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* cooCoi.ele[3].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[3].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* cooCoi.ele[3].rho1_nominal PARAM */) = omc_logic1_cooCoi_ele_Medium1_density(threadData, tmp142);
  threadData->lastEquationSolved = 7065;
}

/*
equation index: 7073
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[3].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* cooCoi.ele[3].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* cooCoi.ele[3].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7073;
}

/*
equation index: 7093
type: SIMPLE_ASSIGN
cooCoi.ele[3].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[3].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7093;
}

/*
equation index: 7094
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_nominal = cooCoi.ele[3].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7094};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[3].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7094;
}

/*
equation index: 7095
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[3].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* cooCoi.ele[3].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7095;
}

/*
equation index: 7098
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.eta_default = logic1.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[3].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7098};
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp143;
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp143, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[623]] /* cooCoi.ele[3].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[619]] /* cooCoi.ele[3].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* cooCoi.ele[3].preDro1.eta_default PARAM */) = omc_logic1_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp143);
  threadData->lastEquationSolved = 7098;
}

/*
equation index: 7107
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[3].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* cooCoi.ele[3].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7107;
}

/*
equation index: 7131
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7131;
}

/*
equation index: 7132
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.V = 55.989691542288554 * cooCoi.ele[3].tau2 / cooCoi.ele[3].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* cooCoi.ele[3].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[695]] /* cooCoi.ele[3].rho2_nominal PARAM */),"cooCoi.ele[3].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7132;
}

/*
equation index: 7133
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.fluidVolume = cooCoi.ele[3].vol2.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* cooCoi.ele[3].vol2.V PARAM */);
  threadData->lastEquationSolved = 7133;
}

/*
equation index: 7165
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.T_start = cooCoi.ele[3].T1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[3].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 7165;
}

/*
equation index: 7166
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.T = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* cooCoi.ele[3].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7166;
}

/*
equation index: 7168
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.p_start = cooCoi.ele[3].p1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* cooCoi.ele[3].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 7168;
}

/*
equation index: 7169
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.p = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* cooCoi.ele[3].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7169;
}

/*
equation index: 7173
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.rho_start = logic1.cooCoi.ele.vol1.Medium.density(cooCoi.ele[3].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7173};
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState tmp144;
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp144, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* cooCoi.ele[3].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[851]] /* cooCoi.ele[3].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* cooCoi.ele[3].vol1.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_Medium_density(threadData, tmp144);
  threadData->lastEquationSolved = 7173;
}

/*
equation index: 7174
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.p_start = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7174;
}

/*
equation index: 7175
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.T_start = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7175;
}

/*
equation index: 7177
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.X_start[1] = cooCoi.ele[3].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* cooCoi.ele[3].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7177;
}

/*
equation index: 7178
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.X_start[1] = cooCoi.ele[3].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7178;
}

/*
equation index: 7179
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.hStart = logic1.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, cooCoi.ele[3].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7179};
  real_array tmp145;
  real_array_create(&tmp145, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* cooCoi.ele[3].vol1.dynBal.hStart PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), tmp145);
  threadData->lastEquationSolved = 7179;
}

/*
equation index: 7184
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.rho_start = logic1.cooCoi.ele.vol1.dynBal.Medium.density(logic1.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* cooCoi.ele[3].vol1.dynBal.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic1_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7184;
}

/*
equation index: 7187
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[3].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7187;
}

/*
equation index: 7188
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.V = cooCoi.ele[3].m1_flow_nominal * cooCoi.ele[3].tau1 / cooCoi.ele[3].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[3].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[3].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[3].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[691]] /* cooCoi.ele[3].rho1_nominal PARAM */),"cooCoi.ele[3].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7188;
}

/*
equation index: 7189
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.fluidVolume = cooCoi.ele[3].vol1.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[3].vol1.V PARAM */);
  threadData->lastEquationSolved = 7189;
}

/*
equation index: 7202
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.m_flow_nominal = cooCoi.ele[3].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* cooCoi.ele[3].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[3].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7202;
}

/*
equation index: 7203
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[3].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7203};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* cooCoi.ele[3].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* cooCoi.ele[3].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7203;
}

/*
equation index: 7230
type: SIMPLE_ASSIGN
cooCoi.ele[3].m1_flow_small = 1e-4 * abs(cooCoi.ele[3].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* cooCoi.ele[3].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[3].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7230;
}

/*
equation index: 7234
type: SIMPLE_ASSIGN
cooCoi.ele[2].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* cooCoi.ele[2].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7234;
}

/*
equation index: 7235
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[2].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7235;
}

/*
equation index: 7236
type: SIMPLE_ASSIGN
cooCoi.ele[2].C = 2.0 * cooCoi.ele[2].UA_nominal * cooCoi.ele[2].tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.ele[2].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* cooCoi.ele[2].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[2].tau_m PARAM */)));
  threadData->lastEquationSolved = 7236;
}

/*
equation index: 7237
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.C = cooCoi.ele[2].C
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* cooCoi.ele[2].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.ele[2].C PARAM */);
  threadData->lastEquationSolved = 7237;
}

/*
equation index: 7241
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[2].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* cooCoi.ele[2].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* cooCoi.ele[2].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7241;
}

/*
equation index: 7247
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho1_nominal = logic1.cooCoi.ele.Medium1.density(cooCoi.ele[2].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7247};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp146;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp146, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* cooCoi.ele[2].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[2].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* cooCoi.ele[2].rho1_nominal PARAM */) = omc_logic1_cooCoi_ele_Medium1_density(threadData, tmp146);
  threadData->lastEquationSolved = 7247;
}

/*
equation index: 7255
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[2].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* cooCoi.ele[2].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* cooCoi.ele[2].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7255;
}

/*
equation index: 7275
type: SIMPLE_ASSIGN
cooCoi.ele[2].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[2].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7275;
}

/*
equation index: 7276
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_nominal = cooCoi.ele[2].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[2].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7276;
}

/*
equation index: 7277
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[2].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* cooCoi.ele[2].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7277;
}

/*
equation index: 7280
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.eta_default = logic1.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[2].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7280};
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp147;
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp147, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* cooCoi.ele[2].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* cooCoi.ele[2].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[2].preDro1.eta_default PARAM */) = omc_logic1_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp147);
  threadData->lastEquationSolved = 7280;
}

/*
equation index: 7289
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[2].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[2].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7289;
}

/*
equation index: 7313
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7313;
}

/*
equation index: 7314
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.V = 55.989691542288554 * cooCoi.ele[2].tau2 / cooCoi.ele[2].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7314};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* cooCoi.ele[2].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[694]] /* cooCoi.ele[2].rho2_nominal PARAM */),"cooCoi.ele[2].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7314;
}

/*
equation index: 7315
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.fluidVolume = cooCoi.ele[2].vol2.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* cooCoi.ele[2].vol2.V PARAM */);
  threadData->lastEquationSolved = 7315;
}

/*
equation index: 7347
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.T_start = cooCoi.ele[2].T1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[2].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 7347;
}

/*
equation index: 7348
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.T = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* cooCoi.ele[2].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7348;
}

/*
equation index: 7350
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.p_start = cooCoi.ele[2].p1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* cooCoi.ele[2].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 7350;
}

/*
equation index: 7351
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.p = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* cooCoi.ele[2].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7351;
}

/*
equation index: 7355
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.rho_start = logic1.cooCoi.ele.vol1.Medium.density(cooCoi.ele[2].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7355};
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState tmp148;
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp148, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[854]] /* cooCoi.ele[2].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[850]] /* cooCoi.ele[2].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* cooCoi.ele[2].vol1.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_Medium_density(threadData, tmp148);
  threadData->lastEquationSolved = 7355;
}

/*
equation index: 7356
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.p_start = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7356;
}

/*
equation index: 7357
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.T_start = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7357;
}

/*
equation index: 7359
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.X_start[1] = cooCoi.ele[2].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* cooCoi.ele[2].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7359;
}

/*
equation index: 7360
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.X_start[1] = cooCoi.ele[2].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7360;
}

/*
equation index: 7361
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.hStart = logic1.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, cooCoi.ele[2].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7361};
  real_array tmp149;
  real_array_create(&tmp149, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* cooCoi.ele[2].vol1.dynBal.hStart PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), tmp149);
  threadData->lastEquationSolved = 7361;
}

/*
equation index: 7366
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.rho_start = logic1.cooCoi.ele.vol1.dynBal.Medium.density(logic1.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* cooCoi.ele[2].vol1.dynBal.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic1_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7366;
}

/*
equation index: 7369
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[2].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7369;
}

/*
equation index: 7370
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.V = cooCoi.ele[2].m1_flow_nominal * cooCoi.ele[2].tau1 / cooCoi.ele[2].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[2].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[2].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[2].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* cooCoi.ele[2].rho1_nominal PARAM */),"cooCoi.ele[2].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7370;
}

/*
equation index: 7371
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.fluidVolume = cooCoi.ele[2].vol1.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[2].vol1.V PARAM */);
  threadData->lastEquationSolved = 7371;
}

/*
equation index: 7384
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.m_flow_nominal = cooCoi.ele[2].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* cooCoi.ele[2].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[2].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7384;
}

/*
equation index: 7385
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[2].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* cooCoi.ele[2].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* cooCoi.ele[2].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7385;
}

/*
equation index: 7412
type: SIMPLE_ASSIGN
cooCoi.ele[2].m1_flow_small = 1e-4 * abs(cooCoi.ele[2].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* cooCoi.ele[2].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[2].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7412;
}

/*
equation index: 7416
type: SIMPLE_ASSIGN
cooCoi.ele[1].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* cooCoi.ele[1].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7416;
}

/*
equation index: 7417
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[1].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1017]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7417;
}

/*
equation index: 7418
type: SIMPLE_ASSIGN
cooCoi.ele[1].C = 2.0 * cooCoi.ele[1].UA_nominal * cooCoi.ele[1].tau_m
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* cooCoi.ele[1].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* cooCoi.ele[1].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[1].tau_m PARAM */)));
  threadData->lastEquationSolved = 7418;
}

/*
equation index: 7419
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.C = cooCoi.ele[1].C
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[557]] /* cooCoi.ele[1].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[489]] /* cooCoi.ele[1].C PARAM */);
  threadData->lastEquationSolved = 7419;
}

/*
equation index: 7423
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[1].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* cooCoi.ele[1].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[725]] /* cooCoi.ele[1].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7423;
}

/*
equation index: 7429
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho1_nominal = logic1.cooCoi.ele.Medium1.density(cooCoi.ele[1].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7429};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp150;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp150, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* cooCoi.ele[1].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[1].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* cooCoi.ele[1].rho1_nominal PARAM */) = omc_logic1_cooCoi_ele_Medium1_density(threadData, tmp150);
  threadData->lastEquationSolved = 7429;
}

/*
equation index: 7437
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[1].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* cooCoi.ele[1].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7437;
}

/*
equation index: 7454
type: SIMPLE_ASSIGN
cooCoi.ele[1].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[1].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7454;
}

/*
equation index: 7455
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_nominal = cooCoi.ele[1].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[1].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7455;
}

/*
equation index: 7456
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[1].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7456;
}

/*
equation index: 7457
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.k = 0.0033226442289407162 * cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* cooCoi.ele[1].preDro1.k PARAM */) = (0.0033226442289407162) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 7457;
}

/*
equation index: 7462
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.eta_default = logic1.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[1].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7462};
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp151;
  logic1_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp151, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[621]] /* cooCoi.ele[1].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* cooCoi.ele[1].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[593]] /* cooCoi.ele[1].preDro1.eta_default PARAM */) = omc_logic1_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp151);
  threadData->lastEquationSolved = 7462;
}

/*
equation index: 7463
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_turbulent = 0.1 * cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 7463;
}

/*
equation index: 7471
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[1].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[1].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7471;
}

/*
equation index: 7485
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.T_start = cooCoi.ele[1].T2_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* cooCoi.ele[1].vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 7485;
}

/*
equation index: 7486
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.T_start = cooCoi.ele[1].vol2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* cooCoi.ele[1].vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7486;
}

/*
equation index: 7488
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[1] = cooCoi.ele[1].X2_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* cooCoi.ele[1].X2_start[1] PARAM */);
  threadData->lastEquationSolved = 7488;
}

/*
equation index: 7489
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[1] = cooCoi.ele[1].vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[865]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7489;
}

/*
equation index: 7490
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.hStart = 1006.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start) * (1.0 - cooCoi.ele[1].vol2.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start)) * cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[897]] /* cooCoi.ele[1].vol2.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 7490;
}

/*
equation index: 7499
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.p_start = cooCoi.ele[1].p2_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[949]] /* cooCoi.ele[1].vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* cooCoi.ele[1].p2_start PARAM */);
  threadData->lastEquationSolved = 7499;
}

/*
equation index: 7500
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.p_start = cooCoi.ele[1].vol2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[905]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[949]] /* cooCoi.ele[1].vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7500;
}

/*
equation index: 7501
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.rho_start = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[913]] /* cooCoi.ele[1].vol2.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[905]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 7501;
}

/*
equation index: 7504
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1016]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7504;
}

/*
equation index: 7505
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.V = 55.989691542288554 * cooCoi.ele[1].tau2 / cooCoi.ele[1].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* cooCoi.ele[1].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[693]] /* cooCoi.ele[1].rho2_nominal PARAM */),"cooCoi.ele[1].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7505;
}

/*
equation index: 7506
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.fluidVolume = cooCoi.ele[1].vol2.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* cooCoi.ele[1].vol2.V PARAM */);
  threadData->lastEquationSolved = 7506;
}

/*
equation index: 7515
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[2] = cooCoi.ele[1].X2_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[866]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* cooCoi.ele[1].X2_start[2] PARAM */);
  threadData->lastEquationSolved = 7515;
}

/*
equation index: 7516
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[2] = cooCoi.ele[1].vol2.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[882]] /* cooCoi.ele[1].vol2.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[866]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */);
  threadData->lastEquationSolved = 7516;
}

/*
equation index: 7533
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.T_start = cooCoi.ele[1].T1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 7533;
}

/*
equation index: 7534
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.T = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[1].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7534;
}

/*
equation index: 7536
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.p_start = cooCoi.ele[1].p1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[1].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 7536;
}

/*
equation index: 7537
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.p = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* cooCoi.ele[1].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7537;
}

/*
equation index: 7541
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.rho_start = logic1.cooCoi.ele.vol1.Medium.density(cooCoi.ele[1].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7541};
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState tmp152;
  logic1_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp152, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[853]] /* cooCoi.ele[1].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[849]] /* cooCoi.ele[1].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* cooCoi.ele[1].vol1.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_Medium_density(threadData, tmp152);
  threadData->lastEquationSolved = 7541;
}

/*
equation index: 7542
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.p_start = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7542};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7542;
}

/*
equation index: 7543
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.T_start = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7543;
}

/*
equation index: 7545
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.X_start[1] = cooCoi.ele[1].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* cooCoi.ele[1].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7545;
}

/*
equation index: 7546
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.X_start[1] = cooCoi.ele[1].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7546;
}

/*
equation index: 7547
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.hStart = logic1.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, cooCoi.ele[1].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7547};
  real_array tmp153;
  real_array_create(&tmp153, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* cooCoi.ele[1].vol1.dynBal.hStart PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), tmp153);
  threadData->lastEquationSolved = 7547;
}

/*
equation index: 7552
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.rho_start = logic1.cooCoi.ele.vol1.dynBal.Medium.density(logic1.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol1.dynBal.rho_start PARAM */) = omc_logic1_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic1_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7552;
}

/*
equation index: 7555
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[1].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1015]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7555;
}

/*
equation index: 7556
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.V = cooCoi.ele[1].m1_flow_nominal * cooCoi.ele[1].tau1 / cooCoi.ele[1].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[1].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[1].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[1].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[689]] /* cooCoi.ele[1].rho1_nominal PARAM */),"cooCoi.ele[1].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7556;
}

/*
equation index: 7557
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.fluidVolume = cooCoi.ele[1].vol1.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[1].vol1.V PARAM */);
  threadData->lastEquationSolved = 7557;
}

/*
equation index: 7570
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.m_flow_nominal = cooCoi.ele[1].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* cooCoi.ele[1].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[1].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7570;
}

/*
equation index: 7571
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[1].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* cooCoi.ele[1].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* cooCoi.ele[1].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7571;
}

/*
equation index: 7594
type: SIMPLE_ASSIGN
cooCoi.ele[1].m1_flow_small = 1e-4 * abs(cooCoi.ele[1].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* cooCoi.ele[1].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[1].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7594;
}

/*
equation index: 7605
type: SIMPLE_ASSIGN
cooCoi.temSen_2.tauHeaTraInv = if cooCoi.temSen_2.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7605};
  modelica_boolean tmp154;
  tmp154 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* cooCoi.temSen_2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1034]] /* cooCoi.temSen_2.tauHeaTraInv PARAM */) = (tmp154?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1033]] /* cooCoi.temSen_2.tauHeaTra PARAM */),"cooCoi.temSen_2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7605;
}

/*
equation index: 7621
type: SIMPLE_ASSIGN
cooCoi.temSen_1.tauHeaTraInv = if cooCoi.temSen_1.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_1.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7621};
  modelica_boolean tmp155;
  tmp155 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooCoi.temSen_1.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooCoi.temSen_1.tauHeaTraInv PARAM */) = (tmp155?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooCoi.temSen_1.tauHeaTra PARAM */),"cooCoi.temSen_1.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7621;
}

/*
equation index: 7629
type: SIMPLE_ASSIGN
cooCoi.temSen_1.m_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* cooCoi.temSen_1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7629;
}

/*
equation index: 7630
type: SIMPLE_ASSIGN
cooCoi.temSen_1.m_flow_small = 1e-4 * cooCoi.temSen_1.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* cooCoi.temSen_1.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1020]] /* cooCoi.temSen_1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7630;
}

/*
equation index: 7638
type: SIMPLE_ASSIGN
cooCoi.hA.r_nominal = cooCoi.r_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.hA.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* cooCoi.r_nominal PARAM */);
  threadData->lastEquationSolved = 7638;
}

/*
equation index: 7639
type: SIMPLE_ASSIGN
cooCoi.hA.UA_nominal = cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* cooCoi.hA.UA_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */);
  threadData->lastEquationSolved = 7639;
}

/*
equation index: 7640
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_w = cooCoi.hA.UA_nominal * (1.0 + cooCoi.hA.r_nominal) / cooCoi.hA.r_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooCoi.hA.hA_nominal_w PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* cooCoi.hA.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.hA.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.hA.r_nominal PARAM */),"cooCoi.hA.r_nominal",equationIndexes));
  threadData->lastEquationSolved = 7640;
}

/*
equation index: 7641
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_a = cooCoi.hA.r_nominal * cooCoi.hA.hA_nominal_w
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooCoi.hA.hA_nominal_a PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.hA.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooCoi.hA.hA_nominal_w PARAM */));
  threadData->lastEquationSolved = 7641;
}

/*
equation index: 7643
type: SIMPLE_ASSIGN
cooCoi.hA.m_flow_nominal_w = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.m_flow_nominal_w PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7643;
}

/*
equation index: 7659
type: SIMPLE_ASSIGN
cooCoi.m1_flow_small = 1e-4 * abs(cooCoi.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1007]] /* cooCoi.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7659;
}

/*
equation index: 7705
type: SIMPLE_ASSIGN
fanSup.eff.per.speeds_rpm[1] = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7705};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1536]] /* fanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7705;
}

/*
equation index: 7706
type: SIMPLE_ASSIGN
fanSup.eff.per.constantSpeed_rpm = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1522]] /* fanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7706;
}

/*
equation index: 7710
type: SIMPLE_ASSIGN
fanSup.eff.per.motorCooledByFluid = fanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7710};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[432]] /* fanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[439]] /* fanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7710;
}

/*
equation index: 7711
type: SIMPLE_ASSIGN
fanSup.eff.per.power.P[1] = fanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1527]] /* fanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1561]] /* fanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 7711;
}

/*
equation index: 7712
type: SIMPLE_ASSIGN
fanSup.eff.per.power.V_flow[1] = fanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1528]] /* fanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1562]] /* fanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7712;
}

/*
equation index: 7713
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.eta[1] = fanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1526]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1560]] /* fanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7713;
}

/*
equation index: 7714
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.V_flow[1] = fanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* fanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7714;
}

/*
equation index: 7715
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.eta[1] = fanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1558]] /* fanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7715;
}

/*
equation index: 7716
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.V_flow[1] = fanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1557]] /* fanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7716;
}

/*
equation index: 7729
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1572]] /* fanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1551]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7729;
}

/*
equation index: 7730
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_start = fanSup.m_flow_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1573]] /* fanSup.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1552]] /* fanSup.m_flow_start PARAM */);
  threadData->lastEquationSolved = 7730;
}

/*
equation index: 7733
type: SIMPLE_ASSIGN
fanSup.vol.tau = fanSup.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1621]] /* fanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1583]] /* fanSup.tau PARAM */);
  threadData->lastEquationSolved = 7733;
}

/*
equation index: 7734
type: SIMPLE_ASSIGN
fanSup.vol.V_nominal = 55.989691542288554 * fanSup.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1586]] /* fanSup.vol.V_nominal PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1621]] /* fanSup.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 7734;
}

/*
equation index: 7752
type: SIMPLE_ASSIGN
fanSup.vol.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* fanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1551]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7752;
}

/*
equation index: 7753
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flow_small = fanSup.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* fanSup.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1591]] /* fanSup.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7753;
}

/*
equation index: 7754
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaReg = 0.001 * fanSup.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1611]] /* fanSup.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* fanSup.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 7754;
}

/*
equation index: 7755
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaInvReg = 1.0 / fanSup.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_7755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7755};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1611]] /* fanSup.vol.steBal.deltaReg PARAM */),"fanSup.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 7755;
}
OMC_DISABLE_OPT
void logic1_raw_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_5733,
    logic1_raw_eqFunction_5734,
    logic1_raw_eqFunction_5737,
    logic1_raw_eqFunction_5740,
    logic1_raw_eqFunction_5750,
    logic1_raw_eqFunction_5751,
    logic1_raw_eqFunction_5752,
    logic1_raw_eqFunction_5753,
    logic1_raw_eqFunction_5754,
    logic1_raw_eqFunction_5755,
    logic1_raw_eqFunction_5756,
    logic1_raw_eqFunction_5758,
    logic1_raw_eqFunction_5759,
    logic1_raw_eqFunction_5760,
    logic1_raw_eqFunction_5761,
    logic1_raw_eqFunction_5767,
    logic1_raw_eqFunction_5768,
    logic1_raw_eqFunction_5771,
    logic1_raw_eqFunction_5774,
    logic1_raw_eqFunction_5826,
    logic1_raw_eqFunction_5827,
    logic1_raw_eqFunction_5831,
    logic1_raw_eqFunction_5832,
    logic1_raw_eqFunction_5833,
    logic1_raw_eqFunction_5834,
    logic1_raw_eqFunction_5835,
    logic1_raw_eqFunction_5836,
    logic1_raw_eqFunction_5837,
    logic1_raw_eqFunction_5850,
    logic1_raw_eqFunction_5851,
    logic1_raw_eqFunction_5854,
    logic1_raw_eqFunction_5855,
    logic1_raw_eqFunction_5873,
    logic1_raw_eqFunction_5874,
    logic1_raw_eqFunction_5875,
    logic1_raw_eqFunction_5876,
    logic1_raw_eqFunction_5877,
    logic1_raw_eqFunction_5878,
    logic1_raw_eqFunction_5879,
    logic1_raw_eqFunction_5880,
    logic1_raw_eqFunction_5881,
    logic1_raw_eqFunction_5882,
    logic1_raw_eqFunction_5892,
    logic1_raw_eqFunction_5898,
    logic1_raw_eqFunction_5899,
    logic1_raw_eqFunction_5900,
    logic1_raw_eqFunction_5901,
    logic1_raw_eqFunction_5922,
    logic1_raw_eqFunction_5926,
    logic1_raw_eqFunction_5927,
    logic1_raw_eqFunction_5928,
    logic1_raw_eqFunction_5929,
    logic1_raw_eqFunction_5950,
    logic1_raw_eqFunction_5951,
    logic1_raw_eqFunction_5955,
    logic1_raw_eqFunction_5956,
    logic1_raw_eqFunction_5957,
    logic1_raw_eqFunction_5968,
    logic1_raw_eqFunction_5969,
    logic1_raw_eqFunction_5970,
    logic1_raw_eqFunction_5980,
    logic1_raw_eqFunction_5981,
    logic1_raw_eqFunction_5995,
    logic1_raw_eqFunction_5996,
    logic1_raw_eqFunction_6004,
    logic1_raw_eqFunction_6005,
    logic1_raw_eqFunction_6008,
    logic1_raw_eqFunction_6009,
    logic1_raw_eqFunction_6017,
    logic1_raw_eqFunction_6038,
    logic1_raw_eqFunction_6039,
    logic1_raw_eqFunction_6040,
    logic1_raw_eqFunction_6041,
    logic1_raw_eqFunction_6042,
    logic1_raw_eqFunction_6049,
    logic1_raw_eqFunction_6052,
    logic1_raw_eqFunction_6053,
    logic1_raw_eqFunction_6054,
    logic1_raw_eqFunction_6055,
    logic1_raw_eqFunction_6064,
    logic1_raw_eqFunction_6065,
    logic1_raw_eqFunction_6095,
    logic1_raw_eqFunction_6098,
    logic1_raw_eqFunction_6113,
    logic1_raw_eqFunction_6114,
    logic1_raw_eqFunction_6120,
    logic1_raw_eqFunction_6121,
    logic1_raw_eqFunction_6123,
    logic1_raw_eqFunction_6124,
    logic1_raw_eqFunction_6130,
    logic1_raw_eqFunction_6131,
    logic1_raw_eqFunction_6132,
    logic1_raw_eqFunction_6135,
    logic1_raw_eqFunction_6136,
    logic1_raw_eqFunction_6143,
    logic1_raw_eqFunction_6145,
    logic1_raw_eqFunction_6146,
    logic1_raw_eqFunction_6152,
    logic1_raw_eqFunction_6153,
    logic1_raw_eqFunction_6155,
    logic1_raw_eqFunction_6156,
    logic1_raw_eqFunction_6162,
    logic1_raw_eqFunction_6163,
    logic1_raw_eqFunction_6165,
    logic1_raw_eqFunction_6166,
    logic1_raw_eqFunction_6172,
    logic1_raw_eqFunction_6173,
    logic1_raw_eqFunction_6175,
    logic1_raw_eqFunction_6176,
    logic1_raw_eqFunction_6184,
    logic1_raw_eqFunction_6185,
    logic1_raw_eqFunction_6191,
    logic1_raw_eqFunction_6192,
    logic1_raw_eqFunction_6194,
    logic1_raw_eqFunction_6195,
    logic1_raw_eqFunction_6201,
    logic1_raw_eqFunction_6202,
    logic1_raw_eqFunction_6204,
    logic1_raw_eqFunction_6205,
    logic1_raw_eqFunction_6211,
    logic1_raw_eqFunction_6212,
    logic1_raw_eqFunction_6213,
    logic1_raw_eqFunction_6216,
    logic1_raw_eqFunction_6217,
    logic1_raw_eqFunction_6224,
    logic1_raw_eqFunction_6226,
    logic1_raw_eqFunction_6227,
    logic1_raw_eqFunction_6228,
    logic1_raw_eqFunction_6229,
    logic1_raw_eqFunction_6230,
    logic1_raw_eqFunction_6231,
    logic1_raw_eqFunction_6232,
    logic1_raw_eqFunction_6233,
    logic1_raw_eqFunction_6234,
    logic1_raw_eqFunction_6235,
    logic1_raw_eqFunction_6236,
    logic1_raw_eqFunction_6237,
    logic1_raw_eqFunction_6238,
    logic1_raw_eqFunction_6241,
    logic1_raw_eqFunction_6244,
    logic1_raw_eqFunction_6250,
    logic1_raw_eqFunction_6251,
    logic1_raw_eqFunction_6252,
    logic1_raw_eqFunction_6255,
    logic1_raw_eqFunction_6264,
    logic1_raw_eqFunction_6271,
    logic1_raw_eqFunction_6272,
    logic1_raw_eqFunction_6273,
    logic1_raw_eqFunction_6276,
    logic1_raw_eqFunction_6285,
    logic1_raw_eqFunction_6289,
    logic1_raw_eqFunction_6290,
    logic1_raw_eqFunction_6291,
    logic1_raw_eqFunction_6292,
    logic1_raw_eqFunction_6296,
    logic1_raw_eqFunction_6297,
    logic1_raw_eqFunction_6298,
    logic1_raw_eqFunction_6299,
    logic1_raw_eqFunction_6300,
    logic1_raw_eqFunction_6301,
    logic1_raw_eqFunction_6306,
    logic1_raw_eqFunction_6309,
    logic1_raw_eqFunction_6310,
    logic1_raw_eqFunction_6323,
    logic1_raw_eqFunction_6324,
    logic1_raw_eqFunction_6333,
    logic1_raw_eqFunction_6334,
    logic1_raw_eqFunction_6335,
    logic1_raw_eqFunction_6336,
    logic1_raw_eqFunction_6340,
    logic1_raw_eqFunction_6341,
    logic1_raw_eqFunction_6342,
    logic1_raw_eqFunction_6343,
    logic1_raw_eqFunction_6344,
    logic1_raw_eqFunction_6345,
    logic1_raw_eqFunction_6350,
    logic1_raw_eqFunction_6353,
    logic1_raw_eqFunction_6354,
    logic1_raw_eqFunction_6367,
    logic1_raw_eqFunction_6368,
    logic1_raw_eqFunction_6392,
    logic1_raw_eqFunction_6393,
    logic1_raw_eqFunction_6396,
    logic1_raw_eqFunction_6397,
    logic1_raw_eqFunction_6398,
    logic1_raw_eqFunction_6404,
    logic1_raw_eqFunction_6405,
    logic1_raw_eqFunction_6411,
    logic1_raw_eqFunction_6412,
    logic1_raw_eqFunction_6413,
    logic1_raw_eqFunction_6416,
    logic1_raw_eqFunction_6417,
    logic1_raw_eqFunction_6424,
    logic1_raw_eqFunction_6426,
    logic1_raw_eqFunction_6427,
    logic1_raw_eqFunction_6433,
    logic1_raw_eqFunction_6434,
    logic1_raw_eqFunction_6435,
    logic1_raw_eqFunction_6438,
    logic1_raw_eqFunction_6439,
    logic1_raw_eqFunction_6446,
    logic1_raw_eqFunction_6488,
    logic1_raw_eqFunction_6489,
    logic1_raw_eqFunction_6493,
    logic1_raw_eqFunction_6494,
    logic1_raw_eqFunction_6495,
    logic1_raw_eqFunction_6496,
    logic1_raw_eqFunction_6497,
    logic1_raw_eqFunction_6498,
    logic1_raw_eqFunction_6499,
    logic1_raw_eqFunction_6513,
    logic1_raw_eqFunction_6519,
    logic1_raw_eqFunction_6520,
    logic1_raw_eqFunction_6523,
    logic1_raw_eqFunction_6524,
    logic1_raw_eqFunction_6527,
    logic1_raw_eqFunction_6528,
    logic1_raw_eqFunction_6529,
    logic1_raw_eqFunction_6530,
    logic1_raw_eqFunction_6534,
    logic1_raw_eqFunction_6535,
    logic1_raw_eqFunction_6536,
    logic1_raw_eqFunction_6537,
    logic1_raw_eqFunction_6538,
    logic1_raw_eqFunction_6539,
    logic1_raw_eqFunction_6544,
    logic1_raw_eqFunction_6547,
    logic1_raw_eqFunction_6548,
    logic1_raw_eqFunction_6561,
    logic1_raw_eqFunction_6570,
    logic1_raw_eqFunction_6571,
    logic1_raw_eqFunction_6572,
    logic1_raw_eqFunction_6584,
    logic1_raw_eqFunction_6585,
    logic1_raw_eqFunction_6588,
    logic1_raw_eqFunction_6589,
    logic1_raw_eqFunction_6590,
    logic1_raw_eqFunction_6591,
    logic1_raw_eqFunction_6607,
    logic1_raw_eqFunction_6608,
    logic1_raw_eqFunction_6613,
    logic1_raw_eqFunction_6616,
    logic1_raw_eqFunction_6617,
    logic1_raw_eqFunction_6618,
    logic1_raw_eqFunction_6623,
    logic1_raw_eqFunction_6624,
    logic1_raw_eqFunction_6632,
    logic1_raw_eqFunction_6636,
    logic1_raw_eqFunction_6637,
    logic1_raw_eqFunction_6638,
    logic1_raw_eqFunction_6639,
    logic1_raw_eqFunction_6643,
    logic1_raw_eqFunction_6644,
    logic1_raw_eqFunction_6645,
    logic1_raw_eqFunction_6646,
    logic1_raw_eqFunction_6647,
    logic1_raw_eqFunction_6648,
    logic1_raw_eqFunction_6653,
    logic1_raw_eqFunction_6656,
    logic1_raw_eqFunction_6657,
    logic1_raw_eqFunction_6670,
    logic1_raw_eqFunction_6671,
    logic1_raw_eqFunction_6690,
    logic1_raw_eqFunction_6692,
    logic1_raw_eqFunction_6693,
    logic1_raw_eqFunction_6694,
    logic1_raw_eqFunction_6740,
    logic1_raw_eqFunction_6741,
    logic1_raw_eqFunction_6745,
    logic1_raw_eqFunction_6746,
    logic1_raw_eqFunction_6747,
    logic1_raw_eqFunction_6748,
    logic1_raw_eqFunction_6749,
    logic1_raw_eqFunction_6750,
    logic1_raw_eqFunction_6751,
    logic1_raw_eqFunction_6765,
    logic1_raw_eqFunction_6771,
    logic1_raw_eqFunction_6772,
    logic1_raw_eqFunction_6775,
    logic1_raw_eqFunction_6776,
    logic1_raw_eqFunction_6779,
    logic1_raw_eqFunction_6780,
    logic1_raw_eqFunction_6781,
    logic1_raw_eqFunction_6782,
    logic1_raw_eqFunction_6786,
    logic1_raw_eqFunction_6787,
    logic1_raw_eqFunction_6788,
    logic1_raw_eqFunction_6789,
    logic1_raw_eqFunction_6790,
    logic1_raw_eqFunction_6791,
    logic1_raw_eqFunction_6796,
    logic1_raw_eqFunction_6799,
    logic1_raw_eqFunction_6800,
    logic1_raw_eqFunction_6813,
    logic1_raw_eqFunction_6822,
    logic1_raw_eqFunction_6823,
    logic1_raw_eqFunction_6824,
    logic1_raw_eqFunction_6836,
    logic1_raw_eqFunction_6837,
    logic1_raw_eqFunction_6840,
    logic1_raw_eqFunction_6841,
    logic1_raw_eqFunction_6842,
    logic1_raw_eqFunction_6843,
    logic1_raw_eqFunction_6860,
    logic1_raw_eqFunction_6861,
    logic1_raw_eqFunction_6862,
    logic1_raw_eqFunction_6863,
    logic1_raw_eqFunction_6864,
    logic1_raw_eqFunction_6865,
    logic1_raw_eqFunction_6866,
    logic1_raw_eqFunction_6869,
    logic1_raw_eqFunction_6870,
    logic1_raw_eqFunction_6871,
    logic1_raw_eqFunction_6872,
    logic1_raw_eqFunction_6876,
    logic1_raw_eqFunction_6882,
    logic1_raw_eqFunction_6890,
    logic1_raw_eqFunction_6910,
    logic1_raw_eqFunction_6911,
    logic1_raw_eqFunction_6912,
    logic1_raw_eqFunction_6913,
    logic1_raw_eqFunction_6916,
    logic1_raw_eqFunction_6925,
    logic1_raw_eqFunction_6949,
    logic1_raw_eqFunction_6950,
    logic1_raw_eqFunction_6951,
    logic1_raw_eqFunction_6983,
    logic1_raw_eqFunction_6984,
    logic1_raw_eqFunction_6986,
    logic1_raw_eqFunction_6987,
    logic1_raw_eqFunction_6991,
    logic1_raw_eqFunction_6992,
    logic1_raw_eqFunction_6993,
    logic1_raw_eqFunction_6995,
    logic1_raw_eqFunction_6996,
    logic1_raw_eqFunction_6997,
    logic1_raw_eqFunction_7002,
    logic1_raw_eqFunction_7005,
    logic1_raw_eqFunction_7006,
    logic1_raw_eqFunction_7007,
    logic1_raw_eqFunction_7020,
    logic1_raw_eqFunction_7021,
    logic1_raw_eqFunction_7048,
    logic1_raw_eqFunction_7052,
    logic1_raw_eqFunction_7053,
    logic1_raw_eqFunction_7054,
    logic1_raw_eqFunction_7055,
    logic1_raw_eqFunction_7059,
    logic1_raw_eqFunction_7065,
    logic1_raw_eqFunction_7073,
    logic1_raw_eqFunction_7093,
    logic1_raw_eqFunction_7094,
    logic1_raw_eqFunction_7095,
    logic1_raw_eqFunction_7098,
    logic1_raw_eqFunction_7107,
    logic1_raw_eqFunction_7131,
    logic1_raw_eqFunction_7132,
    logic1_raw_eqFunction_7133,
    logic1_raw_eqFunction_7165,
    logic1_raw_eqFunction_7166,
    logic1_raw_eqFunction_7168,
    logic1_raw_eqFunction_7169,
    logic1_raw_eqFunction_7173,
    logic1_raw_eqFunction_7174,
    logic1_raw_eqFunction_7175,
    logic1_raw_eqFunction_7177,
    logic1_raw_eqFunction_7178,
    logic1_raw_eqFunction_7179,
    logic1_raw_eqFunction_7184,
    logic1_raw_eqFunction_7187,
    logic1_raw_eqFunction_7188,
    logic1_raw_eqFunction_7189,
    logic1_raw_eqFunction_7202,
    logic1_raw_eqFunction_7203,
    logic1_raw_eqFunction_7230,
    logic1_raw_eqFunction_7234,
    logic1_raw_eqFunction_7235,
    logic1_raw_eqFunction_7236,
    logic1_raw_eqFunction_7237,
    logic1_raw_eqFunction_7241,
    logic1_raw_eqFunction_7247,
    logic1_raw_eqFunction_7255,
    logic1_raw_eqFunction_7275,
    logic1_raw_eqFunction_7276,
    logic1_raw_eqFunction_7277,
    logic1_raw_eqFunction_7280,
    logic1_raw_eqFunction_7289,
    logic1_raw_eqFunction_7313,
    logic1_raw_eqFunction_7314,
    logic1_raw_eqFunction_7315,
    logic1_raw_eqFunction_7347,
    logic1_raw_eqFunction_7348,
    logic1_raw_eqFunction_7350,
    logic1_raw_eqFunction_7351,
    logic1_raw_eqFunction_7355,
    logic1_raw_eqFunction_7356,
    logic1_raw_eqFunction_7357,
    logic1_raw_eqFunction_7359,
    logic1_raw_eqFunction_7360,
    logic1_raw_eqFunction_7361,
    logic1_raw_eqFunction_7366,
    logic1_raw_eqFunction_7369,
    logic1_raw_eqFunction_7370,
    logic1_raw_eqFunction_7371,
    logic1_raw_eqFunction_7384,
    logic1_raw_eqFunction_7385,
    logic1_raw_eqFunction_7412,
    logic1_raw_eqFunction_7416,
    logic1_raw_eqFunction_7417,
    logic1_raw_eqFunction_7418,
    logic1_raw_eqFunction_7419,
    logic1_raw_eqFunction_7423,
    logic1_raw_eqFunction_7429,
    logic1_raw_eqFunction_7437,
    logic1_raw_eqFunction_7454,
    logic1_raw_eqFunction_7455,
    logic1_raw_eqFunction_7456,
    logic1_raw_eqFunction_7457,
    logic1_raw_eqFunction_7462,
    logic1_raw_eqFunction_7463,
    logic1_raw_eqFunction_7471,
    logic1_raw_eqFunction_7485,
    logic1_raw_eqFunction_7486,
    logic1_raw_eqFunction_7488,
    logic1_raw_eqFunction_7489,
    logic1_raw_eqFunction_7490,
    logic1_raw_eqFunction_7499,
    logic1_raw_eqFunction_7500,
    logic1_raw_eqFunction_7501,
    logic1_raw_eqFunction_7504,
    logic1_raw_eqFunction_7505,
    logic1_raw_eqFunction_7506,
    logic1_raw_eqFunction_7515,
    logic1_raw_eqFunction_7516,
    logic1_raw_eqFunction_7533,
    logic1_raw_eqFunction_7534,
    logic1_raw_eqFunction_7536,
    logic1_raw_eqFunction_7537,
    logic1_raw_eqFunction_7541,
    logic1_raw_eqFunction_7542,
    logic1_raw_eqFunction_7543,
    logic1_raw_eqFunction_7545,
    logic1_raw_eqFunction_7546,
    logic1_raw_eqFunction_7547,
    logic1_raw_eqFunction_7552,
    logic1_raw_eqFunction_7555,
    logic1_raw_eqFunction_7556,
    logic1_raw_eqFunction_7557,
    logic1_raw_eqFunction_7570,
    logic1_raw_eqFunction_7571,
    logic1_raw_eqFunction_7594,
    logic1_raw_eqFunction_7605,
    logic1_raw_eqFunction_7621,
    logic1_raw_eqFunction_7629,
    logic1_raw_eqFunction_7630,
    logic1_raw_eqFunction_7638,
    logic1_raw_eqFunction_7639,
    logic1_raw_eqFunction_7640,
    logic1_raw_eqFunction_7641,
    logic1_raw_eqFunction_7643,
    logic1_raw_eqFunction_7659,
    logic1_raw_eqFunction_7705,
    logic1_raw_eqFunction_7706,
    logic1_raw_eqFunction_7710,
    logic1_raw_eqFunction_7711,
    logic1_raw_eqFunction_7712,
    logic1_raw_eqFunction_7713,
    logic1_raw_eqFunction_7714,
    logic1_raw_eqFunction_7715,
    logic1_raw_eqFunction_7716,
    logic1_raw_eqFunction_7729,
    logic1_raw_eqFunction_7730,
    logic1_raw_eqFunction_7733,
    logic1_raw_eqFunction_7734,
    logic1_raw_eqFunction_7752,
    logic1_raw_eqFunction_7753,
    logic1_raw_eqFunction_7754,
    logic1_raw_eqFunction_7755
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif