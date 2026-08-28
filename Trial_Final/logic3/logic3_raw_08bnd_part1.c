#include "logic3_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 5753
type: SIMPLE_ASSIGN
damEA.dp_nominal = (55.989691542288554 / damEA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5753};
  modelica_real tmp80;
  tmp80 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* damEA.kDam_default PARAM */),"damEA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* damEA.dp_nominal PARAM */) = (tmp80 * tmp80);
  threadData->lastEquationSolved = 5753;
}

/*
equation index: 5754
type: SIMPLE_ASSIGN
damEA.dp_nominal_pos = abs(damEA.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* damEA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1231]] /* damEA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5754;
}

/*
equation index: 5757
type: SIMPLE_ASSIGN
damEA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damEA.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* damEA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* damEA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5757;
}

/*
equation index: 5760
type: SIMPLE_ASSIGN
damEA.m_flow_turbulent = if damEA.use_deltaM then damEA.deltaM * 55.989691542288554 else damEA.eta_default * damEA.ReC * sqrt(damEA.A) * damEA.facRouDuc
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5760};
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  tmp82 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[367]] /* damEA.use_deltaM PARAM */);
  if(tmp82)
  {
    tmp83 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* damEA.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp81 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damEA.A PARAM */);
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
    tmp83 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* damEA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damEA.ReC PARAM */))) * (sqrt(tmp81))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* damEA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* damEA.m_flow_turbulent PARAM */) = tmp83;
  threadData->lastEquationSolved = 5760;
}

/*
equation index: 5770
type: SIMPLE_ASSIGN
damRet.cL[1] = (log(damRet.k0) + (-damRet.b) - damRet.a) / damRet.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5770};
  modelica_real tmp84;
  modelica_real tmp85;
  tmp84 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1307]] /* damRet.k0 PARAM */);
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
  }tmp85 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* damRet.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* damRet.cL[1] PARAM */) = DIVISION_SIM(log(tmp84) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */),(tmp85 * tmp85),"damRet.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5770;
}

/*
equation index: 5771
type: SIMPLE_ASSIGN
damRet.cL[2] = (2.0 * damRet.b + (-2.0) * log(damRet.k0) + 2.0 * damRet.a - damRet.b * damRet.yL) / damRet.yL
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5771};
  modelica_real tmp86;
  tmp86 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1307]] /* damRet.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */)) + (-2.0) * (log(tmp86)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* damRet.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* damRet.yL PARAM */),"damRet.yL",equationIndexes);
  threadData->lastEquationSolved = 5771;
}

/*
equation index: 5772
type: SIMPLE_ASSIGN
damRet.cL[3] = log(damRet.k0)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5772};
  modelica_real tmp87;
  tmp87 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1307]] /* damRet.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1298]] /* damRet.cL[3] PARAM */) = log(tmp87);
  threadData->lastEquationSolved = 5772;
}

/*
equation index: 5773
type: SIMPLE_ASSIGN
damRet.cU[1] = (log(damRet.k1) - damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5773};
  modelica_real tmp88;
  modelica_real tmp89;
  tmp88 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.k1 PARAM */);
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
  }tmp89 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* damRet.cU[1] PARAM */) = DIVISION_SIM(log(tmp88) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */),1.0 + (tmp89 * tmp89) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 5773;
}

/*
equation index: 5774
type: SIMPLE_ASSIGN
damRet.cU[2] = (damRet.b * damRet.yU ^ 2.0 + 2.0 * log(damRet.k1) * damRet.yU + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b) / (-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5774};
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  tmp90 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */);
  tmp91 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.k1 PARAM */);
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
  }tmp92 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* damRet.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */)) * ((tmp90 * tmp90)) + (2.0) * ((log(tmp91)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */)) - ((tmp92 * tmp92)),"-1.0 + 2.0 * damRet.yU - damRet.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5774;
}

/*
equation index: 5775
type: SIMPLE_ASSIGN
damRet.cU[3] = (damRet.yU ^ 2.0 * (log(damRet.k1) + damRet.b) + (-2.0) * (damRet.b + damRet.a) * damRet.yU + damRet.b + damRet.a) / (1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5775};
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  tmp93 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */);
  tmp94 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.k1 PARAM */);
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
  }tmp95 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.cU[3] PARAM */) = DIVISION_SIM(((tmp93 * tmp93)) * (log(tmp94) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */),1.0 + (tmp95 * tmp95) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */)),"1.0 + damRet.yU ^ 2.0 + (-2.0) * damRet.yU",equationIndexes);
  threadData->lastEquationSolved = 5775;
}

/*
equation index: 5776
type: SIMPLE_ASSIGN
damRet.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5776};
  real_array tmp96;
  real_array tmp97;
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1296]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp97, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1299]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* damRet.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1295]] /* damRet.b PARAM */), tmp96, tmp97, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* damRet.yU PARAM */));
  threadData->lastEquationSolved = 5776;
}

/*
equation index: 5778
type: SIMPLE_ASSIGN
damRet.rho_default = 1.1843079200592153e-5 * damRet.sta_default.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* damRet.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5778;
}

/*
equation index: 5779
type: SIMPLE_ASSIGN
damRet.A = 55.989691542288554 / (damRet.v_nominal * damRet.rho_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* damRet.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* damRet.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.rho_default PARAM */)),"damRet.v_nominal * damRet.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5779;
}

/*
equation index: 5780
type: SIMPLE_ASSIGN
damRet.kDam_default = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / damRet.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5780};
  modelica_real tmp98;
  tmp98 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1316]] /* damRet.rho_default PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* damRet.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp98)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* damRet.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1311]] /* damRet.kThetaSqRt_default PARAM */),"damRet.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5780;
}

/*
equation index: 5781
type: SIMPLE_ASSIGN
damRet.facRouDuc = if damRet.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* damRet.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[382]] /* damRet.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5781;
}

/*
equation index: 5787
type: SIMPLE_ASSIGN
damRet.dp_nominal = (55.989691542288554 / damRet.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5787};
  modelica_real tmp99;
  tmp99 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1309]] /* damRet.kDam_default PARAM */),"damRet.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* damRet.dp_nominal PARAM */) = (tmp99 * tmp99);
  threadData->lastEquationSolved = 5787;
}

/*
equation index: 5788
type: SIMPLE_ASSIGN
damRet.dp_nominal_pos = abs(damRet.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* damRet.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1303]] /* damRet.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5788;
}

/*
equation index: 5791
type: SIMPLE_ASSIGN
damRet.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damRet.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* damRet.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1318]] /* damRet.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5791;
}

/*
equation index: 5794
type: SIMPLE_ASSIGN
damRet.m_flow_turbulent = if damRet.use_deltaM then damRet.deltaM * 55.989691542288554 else damRet.eta_default * damRet.ReC * sqrt(damRet.A) * damRet.facRouDuc
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5794};
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  tmp101 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[385]] /* damRet.use_deltaM PARAM */);
  if(tmp101)
  {
    tmp102 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1302]] /* damRet.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp100 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* damRet.A PARAM */);
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
    tmp102 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* damRet.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1291]] /* damRet.ReC PARAM */))) * (sqrt(tmp100))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* damRet.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* damRet.m_flow_turbulent PARAM */) = tmp102;
  threadData->lastEquationSolved = 5794;
}

/*
equation index: 5846
type: SIMPLE_ASSIGN
fanRet.eff.per.speeds_rpm[1] = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* fanRet.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1404]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5846;
}

/*
equation index: 5847
type: SIMPLE_ASSIGN
fanRet.eff.per.constantSpeed_rpm = fanRet.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1392]] /* fanRet.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1404]] /* fanRet.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5847;
}

/*
equation index: 5851
type: SIMPLE_ASSIGN
fanRet.eff.per.motorCooledByFluid = fanRet.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5851};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[396]] /* fanRet.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[403]] /* fanRet.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5851;
}

/*
equation index: 5852
type: SIMPLE_ASSIGN
fanRet.eff.per.power.P[1] = fanRet.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1397]] /* fanRet.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1431]] /* fanRet.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5852;
}

/*
equation index: 5853
type: SIMPLE_ASSIGN
fanRet.eff.per.power.V_flow[1] = fanRet.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1398]] /* fanRet.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* fanRet.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5853;
}

/*
equation index: 5854
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.eta[1] = fanRet.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5854};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1396]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1430]] /* fanRet.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5854;
}

/*
equation index: 5855
type: SIMPLE_ASSIGN
fanRet.eff.per.motorEfficiency.V_flow[1] = fanRet.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5855};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1395]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1429]] /* fanRet.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5855;
}

/*
equation index: 5856
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.eta[1] = fanRet.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1394]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1428]] /* fanRet.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5856;
}

/*
equation index: 5857
type: SIMPLE_ASSIGN
fanRet.eff.per.hydraulicEfficiency.V_flow[1] = fanRet.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1393]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanRet.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5857;
}

/*
equation index: 5870
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1442]] /* fanRet.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1421]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5870;
}

/*
equation index: 5871
type: SIMPLE_ASSIGN
fanRet.preSou.m_flow_start = fanRet.m_flow_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1443]] /* fanRet.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1422]] /* fanRet.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5871;
}

/*
equation index: 5874
type: SIMPLE_ASSIGN
fanRet.vol.tau = fanRet.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1491]] /* fanRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1453]] /* fanRet.tau PARAM */);
  threadData->lastEquationSolved = 5874;
}

/*
equation index: 5875
type: SIMPLE_ASSIGN
fanRet.vol.V_nominal = 55.989691542288554 * fanRet.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5875};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1456]] /* fanRet.vol.V_nominal PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1491]] /* fanRet.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 5875;
}

/*
equation index: 5893
type: SIMPLE_ASSIGN
fanRet.vol.m_flow_small = fanRet.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* fanRet.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1421]] /* fanRet.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5893;
}

/*
equation index: 5894
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flow_small = fanRet.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* fanRet.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1461]] /* fanRet.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5894;
}

/*
equation index: 5895
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaReg = 0.001 * fanRet.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1481]] /* fanRet.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1485]] /* fanRet.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 5895;
}

/*
equation index: 5896
type: SIMPLE_ASSIGN
fanRet.vol.steBal.deltaInvReg = 1.0 / fanRet.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1481]] /* fanRet.vol.steBal.deltaReg PARAM */),"fanRet.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 5896;
}

/*
equation index: 5897
type: SIMPLE_ASSIGN
fanRet.vol.steBal.fReg = 104.0 * fanRet.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5897};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1483]] /* fanRet.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 5897;
}

/*
equation index: 5898
type: SIMPLE_ASSIGN
fanRet.vol.steBal.eReg = (-380.0) * fanRet.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1482]] /* fanRet.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 5898;
}

/*
equation index: 5899
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dReg = 534.0 * fanRet.vol.steBal.deltaInvReg ^ 4.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5899};
  modelica_real tmp103;
  tmp103 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  tmp103 *= tmp103;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1479]] /* fanRet.vol.steBal.dReg PARAM */) = (534.0) * ((tmp103 * tmp103));
  threadData->lastEquationSolved = 5899;
}

/*
equation index: 5900
type: SIMPLE_ASSIGN
fanRet.vol.steBal.cReg = (-361.0) * fanRet.vol.steBal.deltaInvReg ^ 3.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5900};
  modelica_real tmp104;
  tmp104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1477]] /* fanRet.vol.steBal.cReg PARAM */) = (-361.0) * ((tmp104 * tmp104 * tmp104));
  threadData->lastEquationSolved = 5900;
}

/*
equation index: 5901
type: SIMPLE_ASSIGN
fanRet.vol.steBal.bReg = 119.0 * fanRet.vol.steBal.deltaInvReg ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5901};
  modelica_real tmp105;
  tmp105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1476]] /* fanRet.vol.steBal.bReg PARAM */) = (119.0) * ((tmp105 * tmp105));
  threadData->lastEquationSolved = 5901;
}

/*
equation index: 5902
type: SIMPLE_ASSIGN
fanRet.vol.steBal.aReg = (-15.0) * fanRet.vol.steBal.deltaInvReg
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5902};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1475]] /* fanRet.vol.steBal.aReg PARAM */) = (-15.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1480]] /* fanRet.vol.steBal.deltaInvReg PARAM */));
  threadData->lastEquationSolved = 5902;
}

/*
equation index: 5912
type: SIMPLE_ASSIGN
fanRet.vol.V = fanRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5912};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1455]] /* fanRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1456]] /* fanRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5912;
}

/*
equation index: 5918
type: SIMPLE_ASSIGN
fanRet.vol.X_start[2] = fanRet.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5918};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1458]] /* fanRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1359]] /* fanRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5918;
}

/*
equation index: 5919
type: SIMPLE_ASSIGN
fanRet.vol.X_start[1] = fanRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1457]] /* fanRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1358]] /* fanRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5919;
}

/*
equation index: 5920
type: SIMPLE_ASSIGN
fanRet.vol.T_start = fanRet.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1454]] /* fanRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1356]] /* fanRet.T_start PARAM */);
  threadData->lastEquationSolved = 5920;
}

/*
equation index: 5921
type: SIMPLE_ASSIGN
fanRet.vol.p_start = fanRet.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1462]] /* fanRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanRet.p_start PARAM */);
  threadData->lastEquationSolved = 5921;
}

/*
equation index: 5942
type: SIMPLE_ASSIGN
fanRet.stageInputs[1] = fanRet.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1452]] /* fanRet.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1423]] /* fanRet.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5942;
}

/*
equation index: 5946
type: SIMPLE_ASSIGN
fanRet.per.speeds_rpm[1] = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* fanRet.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5946;
}

/*
equation index: 5947
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed_rpm = fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5947};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanRet.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* fanRet.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5947;
}

/*
equation index: 5948
type: SIMPLE_ASSIGN
fanRet.per.speeds[1] = fanRet.per.speeds_rpm[1] / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5948};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1439]] /* fanRet.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1440]] /* fanRet.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5948;
}

/*
equation index: 5949
type: SIMPLE_ASSIGN
fanRet.per.constantSpeed = fanRet.per.constantSpeed_rpm / fanRet.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5949};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanRet.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanRet.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1438]] /* fanRet.per.speed_rpm_nominal PARAM */),"fanRet.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5949;
}

/*
equation index: 5970
type: SIMPLE_ASSIGN
conPIDTAirSup.gainTrack.k = 1.0 / (conPIDTAirSup.Ni * conPIDTAirSup.k)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[477]] /* conPIDTAirSup.gainTrack.k PARAM */) = DIVISION_SIM(1.0,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* conPIDTAirSup.Ni PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* conPIDTAirSup.k PARAM */)),"conPIDTAirSup.Ni * conPIDTAirSup.k",equationIndexes);
  threadData->lastEquationSolved = 5970;
}

/*
equation index: 5971
type: SIMPLE_ASSIGN
conPIDTAirSup.gainPID.k = conPIDTAirSup.k
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[476]] /* conPIDTAirSup.gainPID.k PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[478]] /* conPIDTAirSup.k PARAM */);
  threadData->lastEquationSolved = 5971;
}

/*
equation index: 5975
type: SIMPLE_ASSIGN
conPIDTAirSup.revAct = if conPIDTAirSup.reverseAction then -1.0 else 1.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* conPIDTAirSup.revAct PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[117]] /* conPIDTAirSup.reverseAction PARAM */)?-1.0:1.0);
  threadData->lastEquationSolved = 5975;
}

/*
equation index: 5976
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[467]] /* conPIDTAirSup.addI.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 5976;
}

/*
equation index: 5977
type: SIMPLE_ASSIGN
conPIDTAirSup.addI.k1 = conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[466]] /* conPIDTAirSup.addI.k1 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* conPIDTAirSup.revAct PARAM */);
  threadData->lastEquationSolved = 5977;
}

/*
equation index: 5988
type: SIMPLE_ASSIGN
conPIDTAirSup.I.k = 1.0 / conPIDTAirSup.Ti
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5988};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* conPIDTAirSup.I.k PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* conPIDTAirSup.Ti PARAM */),"conPIDTAirSup.Ti",equationIndexes);
  threadData->lastEquationSolved = 5988;
}

/*
equation index: 5989
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k2 = -conPIDTAirSup.revAct
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[470]] /* conPIDTAirSup.addP.k2 PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* conPIDTAirSup.revAct PARAM */));
  threadData->lastEquationSolved = 5989;
}

/*
equation index: 5990
type: SIMPLE_ASSIGN
conPIDTAirSup.addP.k1 = conPIDTAirSup.revAct * conPIDTAirSup.wp
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[469]] /* conPIDTAirSup.addP.k1 PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[481]] /* conPIDTAirSup.revAct PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* conPIDTAirSup.wp PARAM */));
  threadData->lastEquationSolved = 5990;
}

/*
equation index: 6000
type: SIMPLE_ASSIGN
ramp.startTime = demandRampStartTime
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6000};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* ramp.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* demandRampStartTime PARAM */);
  threadData->lastEquationSolved = 6000;
}

/*
equation index: 6001
type: SIMPLE_ASSIGN
ramp.duration = demandRampDuration
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6001};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* ramp.duration PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1326]] /* demandRampDuration PARAM */);
  threadData->lastEquationSolved = 6001;
}

/*
equation index: 6015
type: SIMPLE_ASSIGN
vol.dynBal.X_start[1] = vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6015;
}

/*
equation index: 6016
type: SIMPLE_ASSIGN
vol.dynBal.hStart = 20120.0 * (1.0 - vol.dynBal.X_start[1]) + 2.5382145e6 * vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2863]] /* vol.dynBal.hStart PARAM */) = (20120.0) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* vol.dynBal.X_start[1] PARAM */)) + (2.5382145e6) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2859]] /* vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 6016;
}

/*
equation index: 6024
type: SIMPLE_ASSIGN
vol.dynBal.p_start = vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2865]] /* vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2876]] /* vol.p_start PARAM */);
  threadData->lastEquationSolved = 6024;
}

/*
equation index: 6025
type: SIMPLE_ASSIGN
vol.dynBal.rho_start = 1.1843079200592153e-5 * vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2867]] /* vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2865]] /* vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 6025;
}

/*
equation index: 6028
type: SIMPLE_ASSIGN
vol.V = rooLen * rooWid * rooHei
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6028};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2854]] /* vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* rooLen PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2686]] /* rooWid PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* rooHei PARAM */)));
  threadData->lastEquationSolved = 6028;
}

/*
equation index: 6029
type: SIMPLE_ASSIGN
vol.dynBal.fluidVolume = vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6029};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2862]] /* vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2854]] /* vol.V PARAM */);
  threadData->lastEquationSolved = 6029;
}

/*
equation index: 6037
type: SIMPLE_ASSIGN
vol.dynBal.X_start[2] = vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6037};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2860]] /* vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2856]] /* vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 6037;
}

/*
equation index: 6058
type: SIMPLE_ASSIGN
weaData.lon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLongitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6058};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* weaData.lon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLongitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 6058;
}

/*
equation index: 6059
type: SIMPLE_ASSIGN
weaData.longitude.longitude = weaData.lon
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* weaData.longitude.longitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 6059;
}

/*
equation index: 6060
type: SIMPLE_ASSIGN
weaData.latitude.latitude = weaData.lat
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6060};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* weaData.latitude.latitude PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 6060;
}

/*
equation index: 6061
type: SIMPLE_ASSIGN
weaData.datRea1.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6061};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.datRea1.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 6061;
}

/*
equation index: 6062
type: SIMPLE_ASSIGN
weaData.datRea1.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea1.tableID)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2912]] /* weaData.datRea1.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 6062;
}

/*
equation index: 6069
type: SIMPLE_ASSIGN
weaData.datRea1.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6069};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* weaData.datRea1.tableName PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 6069;
}

/*
equation index: 6072
type: SIMPLE_ASSIGN
weaData.timZon = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeZoneTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* weaData.timZon PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeZoneTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 6072;
}

/*
equation index: 6073
type: SIMPLE_ASSIGN
weaData.locTim.timZon = weaData.timZon
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* weaData.locTim.timZon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2923]] /* weaData.timZon PARAM */);
  threadData->lastEquationSolved = 6073;
}

/*
equation index: 6074
type: SIMPLE_ASSIGN
weaData.locTim.lon = weaData.lon
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2916]] /* weaData.locTim.lon PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2918]] /* weaData.lon PARAM */);
  threadData->lastEquationSolved = 6074;
}

/*
equation index: 6075
type: SIMPLE_ASSIGN
weaData.locTim.diff = 13750.987083139758 * weaData.locTim.lon - weaData.locTim.timZon
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* weaData.locTim.diff PARAM */) = (13750.987083139758) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2916]] /* weaData.locTim.lon PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2917]] /* weaData.locTim.timZon PARAM */);
  threadData->lastEquationSolved = 6075;
}

/*
equation index: 6084
type: SIMPLE_ASSIGN
weaData.datRea.u_max = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmax(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2909]] /* weaData.datRea.u_max PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmax(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 6084;
}

/*
equation index: 6085
type: SIMPLE_ASSIGN
weaData.datRea.u_min = Modelica.Blocks.Tables.Internal.getTable1DAbscissaUmin(weaData.datRea.tableID)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2910]] /* weaData.datRea.u_min PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTable1DAbscissaUmin(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 6085;
}

/*
equation index: 6115
type: SIMPLE_ASSIGN
weaData.datRea.tableName = "tab1"
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6115};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[1]] /* weaData.datRea.tableName PARAM */) = _OMC_LIT90;
  threadData->lastEquationSolved = 6115;
}

/*
equation index: 6118
type: ARRAY_CALL_ASSIGN

weaData.timeSpan = Buildings.BoundaryConditions.WeatherData.BaseClasses.getTimeSpanTMY3(weaData.filNam, "tab1")
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6118};
  real_array tmp106;
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2924]] /* weaData.timeSpan[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getTimeSpanTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */), _OMC_LIT90), tmp106);
  threadData->lastEquationSolved = 6118;
}

/*
equation index: 6133
type: SIMPLE_ASSIGN
TCHWLeaCoi.ratTau = TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* TCHWLeaCoi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6133;
}

/*
equation index: 6134
type: SIMPLE_ASSIGN
TCHWLeaCoi.tauHeaTraInv = if TCHWLeaCoi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWLeaCoi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6134};
  modelica_boolean tmp107;
  tmp107 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* TCHWLeaCoi.tauHeaTraInv PARAM */) = (tmp107?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* TCHWLeaCoi.tauHeaTra PARAM */),"TCHWLeaCoi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6134;
}

/*
equation index: 6140
type: SIMPLE_ASSIGN
TCHWLeaCoi.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* TCHWLeaCoi.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6140;
}

/*
equation index: 6141
type: SIMPLE_ASSIGN
TCHWLeaCoi.m_flow_small = 1e-4 * TCHWLeaCoi.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* TCHWLeaCoi.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* TCHWLeaCoi.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6141;
}

/*
equation index: 6143
type: SIMPLE_ASSIGN
valByp.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6143};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* valByp.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6143;
}

/*
equation index: 6144
type: SIMPLE_ASSIGN
valByp.kFixed = 0.008184084337096277 * valByp.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2842]] /* valByp.kFixed PARAM */) = (0.008184084337096277) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* valByp.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6144;
}

/*
equation index: 6150
type: SIMPLE_ASSIGN
valByp.dp_nominal = 14930.0 + valByp.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* valByp.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* valByp.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6150;
}

/*
equation index: 6151
type: SIMPLE_ASSIGN
valByp.dp_nominal_pos = abs(valByp.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* valByp.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6151;
}

/*
equation index: 6152
type: SIMPLE_ASSIGN
valByp.m_flow_nominal_pos = abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* valByp.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* valByp.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6152;
}

/*
equation index: 6155
type: SIMPLE_ASSIGN
valByp.eta_default = logic3.valByp.Medium.dynamicViscosity(valByp.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6155};
  logic3_valByp_Medium_ThermodynamicState tmp108;
  logic3_valByp_Medium_ThermodynamicState_wrap_vars(threadData,tmp108, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2851]] /* valByp.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2850]] /* valByp.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2841]] /* valByp.eta_default PARAM */) = omc_logic3_valByp_Medium_dynamicViscosity(threadData, tmp108);
  threadData->lastEquationSolved = 6155;
}

/*
equation index: 6156
type: SIMPLE_ASSIGN
valByp.m_flow_turbulent = valByp.deltaM * abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6156};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2847]] /* valByp.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* valByp.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6156;
}

/*
equation index: 6163
type: SIMPLE_ASSIGN
valByp.m_flow_small = 1e-4 * abs(valByp.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2846]] /* valByp.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* valByp.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6163;
}

/*
equation index: 6165
type: SIMPLE_ASSIGN
TCWEntTow.ratTau = TCWEntTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* TCWEntTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6165;
}

/*
equation index: 6166
type: SIMPLE_ASSIGN
TCWEntTow.tauHeaTraInv = if TCWEntTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWEntTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6166};
  modelica_boolean tmp109;
  tmp109 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* TCWEntTow.tauHeaTraInv PARAM */) = (tmp109?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* TCWEntTow.tauHeaTra PARAM */),"TCWEntTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6166;
}

/*
equation index: 6172
type: SIMPLE_ASSIGN
TCWEntTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* TCWEntTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6172;
}

/*
equation index: 6173
type: SIMPLE_ASSIGN
TCWEntTow.m_flow_small = 1e-4 * TCWEntTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* TCWEntTow.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* TCWEntTow.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6173;
}

/*
equation index: 6175
type: SIMPLE_ASSIGN
TCWLeaTow.ratTau = TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* TCWLeaTow.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6175;
}

/*
equation index: 6176
type: SIMPLE_ASSIGN
TCWLeaTow.tauHeaTraInv = if TCWLeaTow.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWLeaTow.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6176};
  modelica_boolean tmp110;
  tmp110 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* TCWLeaTow.tauHeaTraInv PARAM */) = (tmp110?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* TCWLeaTow.tauHeaTra PARAM */),"TCWLeaTow.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6176;
}

/*
equation index: 6182
type: SIMPLE_ASSIGN
TCWLeaTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* TCWLeaTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6182;
}

/*
equation index: 6183
type: SIMPLE_ASSIGN
TCWLeaTow.m_flow_small = 1e-4 * TCWLeaTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* TCWLeaTow.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* TCWLeaTow.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6183;
}

/*
equation index: 6185
type: SIMPLE_ASSIGN
TCHWEntChi.ratTau = TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* TCHWEntChi.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6185;
}

/*
equation index: 6186
type: SIMPLE_ASSIGN
TCHWEntChi.tauHeaTraInv = if TCHWEntChi.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWEntChi.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6186};
  modelica_boolean tmp111;
  tmp111 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* TCHWEntChi.tauHeaTraInv PARAM */) = (tmp111?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* TCHWEntChi.tauHeaTra PARAM */),"TCHWEntChi.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6186;
}

/*
equation index: 6192
type: SIMPLE_ASSIGN
TCHWEntChi.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* TCHWEntChi.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6192;
}

/*
equation index: 6193
type: SIMPLE_ASSIGN
TCHWEntChi.m_flow_small = 1e-4 * TCHWEntChi.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* TCHWEntChi.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* TCHWEntChi.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6193;
}

/*
equation index: 6195
type: SIMPLE_ASSIGN
TAirSup.ratTau = TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* TAirSup.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6195;
}

/*
equation index: 6196
type: SIMPLE_ASSIGN
TAirSup.tauHeaTraInv = if TAirSup.tauHeaTra < 1e-10 then 0.0 else 1.0 / TAirSup.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6196};
  modelica_boolean tmp112;
  tmp112 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* TAirSup.tauHeaTraInv PARAM */) = (tmp112?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* TAirSup.tauHeaTra PARAM */),"TAirSup.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6196;
}

/*
equation index: 6204
type: SIMPLE_ASSIGN
TCHWChi1Out.ratTau = TCHWChi1Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* TCHWChi1Out.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6204;
}

/*
equation index: 6205
type: SIMPLE_ASSIGN
TCHWChi1Out.tauHeaTraInv = if TCHWChi1Out.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi1Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6205};
  modelica_boolean tmp113;
  tmp113 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* TCHWChi1Out.tauHeaTraInv PARAM */) = (tmp113?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* TCHWChi1Out.tauHeaTra PARAM */),"TCHWChi1Out.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6205;
}

/*
equation index: 6211
type: SIMPLE_ASSIGN
TCHWChi1Out.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* TCHWChi1Out.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6211;
}

/*
equation index: 6212
type: SIMPLE_ASSIGN
TCHWChi1Out.m_flow_small = 1e-4 * TCHWChi1Out.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* TCHWChi1Out.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* TCHWChi1Out.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6212;
}

/*
equation index: 6214
type: SIMPLE_ASSIGN
TCHWChi1In.ratTau = TCHWChi1In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* TCHWChi1In.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 6214;
}

/*
equation index: 6215
type: SIMPLE_ASSIGN
TCHWChi1In.tauHeaTraInv = if TCHWChi1In.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi1In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6215};
  modelica_boolean tmp114;
  tmp114 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* TCHWChi1In.tauHeaTraInv PARAM */) = (tmp114?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* TCHWChi1In.tauHeaTra PARAM */),"TCHWChi1In.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 6215;
}

/*
equation index: 6221
type: SIMPLE_ASSIGN
TCHWChi1In.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* TCHWChi1In.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6221;
}

/*
equation index: 6222
type: SIMPLE_ASSIGN
TCHWChi1In.m_flow_small = 1e-4 * TCHWChi1In.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* TCHWChi1In.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* TCHWChi1In.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6222;
}

/*
equation index: 6224
type: SIMPLE_ASSIGN
val6.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val6.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6224;
}

/*
equation index: 6225
type: SIMPLE_ASSIGN
val6.kFixed = 0.0030932931235336655 * val6.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2748]] /* val6.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val6.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6225;
}

/*
equation index: 6231
type: SIMPLE_ASSIGN
val6.dp_nominal = 104510.0 + val6.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* val6.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* val6.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6231;
}

/*
equation index: 6232
type: SIMPLE_ASSIGN
val6.dp_nominal_pos = abs(val6.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* val6.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6232;
}

/*
equation index: 6233
type: SIMPLE_ASSIGN
val6.m_flow_nominal_pos = abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* val6.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val6.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6233;
}

/*
equation index: 6236
type: SIMPLE_ASSIGN
val6.eta_default = logic3.val6.Medium.dynamicViscosity(val6.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6236};
  logic3_val6_Medium_ThermodynamicState tmp115;
  logic3_val6_Medium_ThermodynamicState_wrap_vars(threadData,tmp115, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* val6.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2756]] /* val6.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2747]] /* val6.eta_default PARAM */) = omc_logic3_val6_Medium_dynamicViscosity(threadData, tmp115);
  threadData->lastEquationSolved = 6236;
}

/*
equation index: 6237
type: SIMPLE_ASSIGN
val6.m_flow_turbulent = val6.deltaM * abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2753]] /* val6.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val6.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6237;
}

/*
equation index: 6244
type: SIMPLE_ASSIGN
val6.m_flow_small = 1e-4 * abs(val6.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* val6.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val6.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6244;
}

/*
equation index: 6246
type: SIMPLE_ASSIGN
chi.TConEnt_nominal_degC = -273.15 + chi.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6246};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* chi.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 6246;
}

/*
equation index: 6247
type: SIMPLE_ASSIGN
chi.per.QEva_flow_nominal = -chiller1Capacity
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.per.QEva_flow_nominal PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */));
  threadData->lastEquationSolved = 6247;
}

/*
equation index: 6248
type: SIMPLE_ASSIGN
chi.QEva_flow_nominal = chi.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* chi.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[152]] /* chi.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6248;
}

/*
equation index: 6249
type: SIMPLE_ASSIGN
chi.Q_flow_small = 1e-9 * chi.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6249};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* chi.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* chi.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6249;
}

/*
equation index: 6250
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal = chi.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* chi.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* chi.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 6250;
}

/*
equation index: 6251
type: SIMPLE_ASSIGN
chi.TEvaLvg_nominal_degC = -273.15 + chi.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* chi.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* chi.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 6251;
}

/*
equation index: 6252
type: SIMPLE_ASSIGN
chi.mCon_flow_nominal = chi.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* chi.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[166]] /* chi.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6252;
}

/*
equation index: 6253
type: SIMPLE_ASSIGN
chi.mEva_flow_nominal = chi.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[136]] /* chi.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* chi.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6253;
}

/*
equation index: 6254
type: SIMPLE_ASSIGN
chi.etaMotor = chi.per.etaMotor
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[128]] /* chi.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[165]] /* chi.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 6254;
}

/*
equation index: 6255
type: SIMPLE_ASSIGN
chi.PLRMin = chi.per.PLRMin
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* chi.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* chi.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 6255;
}

/*
equation index: 6256
type: SIMPLE_ASSIGN
chi.PLRMinUnl = chi.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* chi.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* chi.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 6256;
}

/*
equation index: 6257
type: SIMPLE_ASSIGN
chi.PLRMax = chi.per.PLRMax
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* chi.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* chi.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 6257;
}

/*
equation index: 6258
type: SIMPLE_ASSIGN
chi.COP_nominal = chi.per.COP_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6258};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* chi.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[139]] /* chi.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 6258;
}

/*
equation index: 6261
type: SIMPLE_ASSIGN
chi.rho2_nominal = logic3.chi.Medium2.density(chi.sta2_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6261};
  logic3_chi_Medium2_ThermodynamicState tmp116;
  logic3_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp116, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* chi.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* chi.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* chi.rho2_nominal PARAM */) = omc_logic3_chi_Medium2_density(threadData, tmp116);
  threadData->lastEquationSolved = 6261;
}

/*
equation index: 6264
type: SIMPLE_ASSIGN
chi.rho1_nominal = logic3.chi.Medium1.density(chi.sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6264};
  logic3_chi_Medium1_ThermodynamicState tmp117;
  logic3_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp117, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* chi.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* chi.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.rho1_nominal PARAM */) = omc_logic3_chi_Medium1_density(threadData, tmp117);
  threadData->lastEquationSolved = 6264;
}

/*
equation index: 6270
type: SIMPLE_ASSIGN
chi.m2_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6270;
}

/*
equation index: 6271
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_nominal = chi.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6271};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* chi.preDro2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6271;
}

/*
equation index: 6272
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_nominal_pos = abs(chi.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6272};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[191]] /* chi.preDro2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* chi.preDro2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6272;
}

/*
equation index: 6275
type: SIMPLE_ASSIGN
chi.preDro2.eta_default = logic3.chi.preDro2.Medium.dynamicViscosity(chi.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6275};
  logic3_chi_preDro2_Medium_ThermodynamicState tmp118;
  logic3_chi_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp118, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* chi.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[194]] /* chi.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* chi.preDro2.eta_default PARAM */) = omc_logic3_chi_preDro2_Medium_dynamicViscosity(threadData, tmp118);
  threadData->lastEquationSolved = 6275;
}

/*
equation index: 6284
type: SIMPLE_ASSIGN
chi.preDro2.m_flow_small = 1e-4 * abs(chi.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* chi.preDro2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[190]] /* chi.preDro2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6284;
}

/*
equation index: 6291
type: SIMPLE_ASSIGN
chi.m1_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6291;
}

/*
equation index: 6292
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_nominal = chi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6292;
}

/*
equation index: 6293
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_nominal_pos = abs(chi.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[177]] /* chi.preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6293;
}

/*
equation index: 6296
type: SIMPLE_ASSIGN
chi.preDro1.eta_default = logic3.chi.preDro1.Medium.dynamicViscosity(chi.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6296};
  logic3_chi_preDro1_Medium_ThermodynamicState tmp119;
  logic3_chi_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp119, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[181]] /* chi.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.preDro1.eta_default PARAM */) = omc_logic3_chi_preDro1_Medium_dynamicViscosity(threadData, tmp119);
  threadData->lastEquationSolved = 6296;
}

/*
equation index: 6305
type: SIMPLE_ASSIGN
chi.preDro1.m_flow_small = 1e-4 * abs(chi.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* chi.preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* chi.preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6305;
}

/*
equation index: 6309
type: SIMPLE_ASSIGN
chi.vol2.T_start = chi.T2_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* chi.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 6309;
}

/*
equation index: 6310
type: SIMPLE_ASSIGN
chi.vol2.state_start.T = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 6310;
}

/*
equation index: 6311
type: SIMPLE_ASSIGN
chi.vol2.p_start = chi.p2_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* chi.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 6311;
}

/*
equation index: 6312
type: SIMPLE_ASSIGN
chi.vol2.state_start.p = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6312};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 6312;
}

/*
equation index: 6316
type: SIMPLE_ASSIGN
chi.vol2.rho_start = logic3.chi.vol2.Medium.density(chi.vol2.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6316};
  logic3_chi_vol2_Medium_ThermodynamicState tmp120;
  logic3_chi_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp120, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* chi.vol2.rho_start PARAM */) = omc_logic3_chi_vol2_Medium_density(threadData, tmp120);
  threadData->lastEquationSolved = 6316;
}

/*
equation index: 6317
type: SIMPLE_ASSIGN
chi.vol2.dynBal.p_start = chi.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* chi.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* chi.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 6317;
}

/*
equation index: 6318
type: SIMPLE_ASSIGN
chi.vol2.dynBal.T_start = chi.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* chi.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 6318;
}

/*
equation index: 6319
type: SIMPLE_ASSIGN
chi.vol2.X_start[1] = chi.X2_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* chi.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* chi.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 6319;
}

/*
equation index: 6320
type: SIMPLE_ASSIGN
chi.vol2.dynBal.X_start[1] = chi.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[238]] /* chi.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* chi.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6320;
}

/*
equation index: 6321
type: SIMPLE_ASSIGN
chi.vol2.dynBal.hStart = logic3.chi.vol2.dynBal.Medium.specificEnthalpy_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, chi.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6321};
  real_array tmp121;
  real_array_create(&tmp121, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[238]] /* chi.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* chi.vol2.dynBal.hStart PARAM */) = omc_logic3_chi_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */), tmp121);
  threadData->lastEquationSolved = 6321;
}

/*
equation index: 6326
type: SIMPLE_ASSIGN
chi.vol2.dynBal.rho_start = logic3.chi.vol2.dynBal.Medium.density(logic3.chi.vol2.dynBal.Medium.setState_pTX(chi.vol2.dynBal.p_start, chi.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[245]] /* chi.vol2.dynBal.rho_start PARAM */) = omc_logic3_chi_vol2_dynBal_Medium_density(threadData, omc_logic3_chi_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[243]] /* chi.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6326;
}

/*
equation index: 6329
type: SIMPLE_ASSIGN
chi.vol2.V = 30.0 * chi.m2_flow_nominal / chi.rho2_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6329};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* chi.rho2_nominal PARAM */),"chi.rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 6329;
}

/*
equation index: 6330
type: SIMPLE_ASSIGN
chi.vol2.dynBal.fluidVolume = chi.vol2.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.V PARAM */);
  threadData->lastEquationSolved = 6330;
}

/*
equation index: 6343
type: SIMPLE_ASSIGN
chi.vol2.m_flow_nominal = chi.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* chi.vol2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6343;
}

/*
equation index: 6344
type: SIMPLE_ASSIGN
chi.vol2.m_flow_small = 1e-4 * abs(chi.vol2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* chi.vol2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[249]] /* chi.vol2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6344;
}

/*
equation index: 6353
type: SIMPLE_ASSIGN
chi.vol1.T_start = chi.T1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 6353;
}

/*
equation index: 6354
type: SIMPLE_ASSIGN
chi.vol1.state_start.T = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* chi.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6354;
}

/*
equation index: 6355
type: SIMPLE_ASSIGN
chi.vol1.p_start = chi.p1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 6355;
}

/*
equation index: 6356
type: SIMPLE_ASSIGN
chi.vol1.state_start.p = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* chi.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6356;
}

/*
equation index: 6360
type: SIMPLE_ASSIGN
chi.vol1.rho_start = logic3.chi.vol1.Medium.density(chi.vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6360};
  logic3_chi_vol1_Medium_ThermodynamicState tmp122;
  logic3_chi_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp122, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* chi.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* chi.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi.vol1.rho_start PARAM */) = omc_logic3_chi_vol1_Medium_density(threadData, tmp122);
  threadData->lastEquationSolved = 6360;
}

/*
equation index: 6361
type: SIMPLE_ASSIGN
chi.vol1.dynBal.p_start = chi.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* chi.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 6361;
}

/*
equation index: 6362
type: SIMPLE_ASSIGN
chi.vol1.dynBal.T_start = chi.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 6362;
}

/*
equation index: 6363
type: SIMPLE_ASSIGN
chi.vol1.X_start[1] = chi.X1_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* chi.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 6363;
}

/*
equation index: 6364
type: SIMPLE_ASSIGN
chi.vol1.dynBal.X_start[1] = chi.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* chi.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6364;
}

/*
equation index: 6365
type: SIMPLE_ASSIGN
chi.vol1.dynBal.hStart = logic3.chi.vol1.dynBal.Medium.specificEnthalpy_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, chi.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6365};
  real_array tmp123;
  real_array_create(&tmp123, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[213]] /* chi.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* chi.vol1.dynBal.hStart PARAM */) = omc_logic3_chi_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */), tmp123);
  threadData->lastEquationSolved = 6365;
}

/*
equation index: 6370
type: SIMPLE_ASSIGN
chi.vol1.dynBal.rho_start = logic3.chi.vol1.dynBal.Medium.density(logic3.chi.vol1.dynBal.Medium.setState_pTX(chi.vol1.dynBal.p_start, chi.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[220]] /* chi.vol1.dynBal.rho_start PARAM */) = omc_logic3_chi_vol1_dynBal_Medium_density(threadData, omc_logic3_chi_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[218]] /* chi.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6370;
}

/*
equation index: 6373
type: SIMPLE_ASSIGN
chi.vol1.V = 30.0 * chi.m1_flow_nominal / chi.rho1_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* chi.rho1_nominal PARAM */),"chi.rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 6373;
}

/*
equation index: 6374
type: SIMPLE_ASSIGN
chi.vol1.dynBal.fluidVolume = chi.vol1.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* chi.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.V PARAM */);
  threadData->lastEquationSolved = 6374;
}

/*
equation index: 6387
type: SIMPLE_ASSIGN
chi.vol1.m_flow_nominal = chi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* chi.vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6387;
}

/*
equation index: 6388
type: SIMPLE_ASSIGN
chi.vol1.m_flow_small = 1e-4 * abs(chi.vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* chi.vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* chi.vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6388;
}

/*
equation index: 6412
type: SIMPLE_ASSIGN
chi.m2_flow_small = 1e-4 * abs(chi.m2_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* chi.m2_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[133]] /* chi.m2_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6412;
}

/*
equation index: 6413
type: SIMPLE_ASSIGN
chi.m1_flow_small = 1e-4 * abs(chi.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[132]] /* chi.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[131]] /* chi.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6413;
}

/*
equation index: 6416
type: SIMPLE_ASSIGN
expVesChi.state_start.p = expVesChi.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* expVesChi.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi.p_start PARAM */);
  threadData->lastEquationSolved = 6416;
}

/*
equation index: 6417
type: SIMPLE_ASSIGN
expVesChi.state_start.T = expVesChi.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* expVesChi.T_start PARAM */);
  threadData->lastEquationSolved = 6417;
}

/*
equation index: 6418
type: SIMPLE_ASSIGN
expVesChi.rho_start = logic3.expVesChi.Medium.density(expVesChi.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6418};
  logic3_expVesChi_Medium_ThermodynamicState tmp124;
  logic3_expVesChi_Medium_ThermodynamicState_wrap_vars(threadData,tmp124, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* expVesChi.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* expVesChi.rho_start PARAM */) = omc_logic3_expVesChi_Medium_density(threadData, tmp124);
  threadData->lastEquationSolved = 6418;
}

/*
equation index: 6424
type: SIMPLE_ASSIGN
val1.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6424;
}

/*
equation index: 6425
type: SIMPLE_ASSIGN
val1.kFixed = 0.008184084337096277 * val1.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2702]] /* val1.kFixed PARAM */) = (0.008184084337096277) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6425;
}

/*
equation index: 6431
type: SIMPLE_ASSIGN
val1.dp_nominal = 14930.0 + val1.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* val1.dp_nominal PARAM */) = 14930.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* val1.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6431;
}

/*
equation index: 6432
type: SIMPLE_ASSIGN
val1.dp_nominal_pos = abs(val1.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* val1.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6432;
}

/*
equation index: 6433
type: SIMPLE_ASSIGN
val1.m_flow_nominal_pos = abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* val1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6433;
}

/*
equation index: 6436
type: SIMPLE_ASSIGN
val1.eta_default = logic3.val1.Medium.dynamicViscosity(val1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6436};
  logic3_val1_Medium_ThermodynamicState tmp125;
  logic3_val1_Medium_ThermodynamicState_wrap_vars(threadData,tmp125, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* val1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2710]] /* val1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2701]] /* val1.eta_default PARAM */) = omc_logic3_val1_Medium_dynamicViscosity(threadData, tmp125);
  threadData->lastEquationSolved = 6436;
}

/*
equation index: 6437
type: SIMPLE_ASSIGN
val1.m_flow_turbulent = val1.deltaM * abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* val1.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6437;
}

/*
equation index: 6444
type: SIMPLE_ASSIGN
val1.m_flow_small = 1e-4 * abs(val1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* val1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6444;
}

/*
equation index: 6446
type: SIMPLE_ASSIGN
val5.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6446};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val5.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6446;
}

/*
equation index: 6447
type: SIMPLE_ASSIGN
val5.kFixed = 0.003341138439631633 * val5.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6447};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* val5.kFixed PARAM */) = (0.003341138439631633) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val5.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6447;
}

/*
equation index: 6453
type: SIMPLE_ASSIGN
val5.dp_nominal = 89580.0 + val5.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6453};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2722]] /* val5.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* val5.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 6453;
}

/*
equation index: 6454
type: SIMPLE_ASSIGN
val5.dp_nominal_pos = abs(val5.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2722]] /* val5.dp_nominal PARAM */));
  threadData->lastEquationSolved = 6454;
}

/*
equation index: 6455
type: SIMPLE_ASSIGN
val5.m_flow_nominal_pos = abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val5.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6455;
}

/*
equation index: 6458
type: SIMPLE_ASSIGN
val5.eta_default = logic3.val5.Medium.dynamicViscosity(val5.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6458};
  logic3_val5_Medium_ThermodynamicState tmp126;
  logic3_val5_Medium_ThermodynamicState_wrap_vars(threadData,tmp126, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2734]] /* val5.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2733]] /* val5.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2724]] /* val5.eta_default PARAM */) = omc_logic3_val5_Medium_dynamicViscosity(threadData, tmp126);
  threadData->lastEquationSolved = 6458;
}

/*
equation index: 6459
type: SIMPLE_ASSIGN
val5.m_flow_turbulent = val5.deltaM * abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2730]] /* val5.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val5.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6459;
}

/*
equation index: 6466
type: SIMPLE_ASSIGN
val5.m_flow_small = 1e-4 * abs(val5.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* val5.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val5.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6466;
}

/*
equation index: 6508
type: SIMPLE_ASSIGN
pumCW.eff.per.speeds_rpm[1] = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2475]] /* pumCW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6508;
}

/*
equation index: 6509
type: SIMPLE_ASSIGN
pumCW.eff.per.constantSpeed_rpm = pumCW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2461]] /* pumCW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* pumCW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6509;
}

/*
equation index: 6513
type: SIMPLE_ASSIGN
pumCW.eff.per.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6513};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[751]] /* pumCW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[760]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6513;
}

/*
equation index: 6514
type: SIMPLE_ASSIGN
pumCW.eff.per.power.P[1] = pumCW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2466]] /* pumCW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2501]] /* pumCW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6514;
}

/*
equation index: 6515
type: SIMPLE_ASSIGN
pumCW.eff.per.power.V_flow[1] = pumCW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2467]] /* pumCW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2502]] /* pumCW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6515;
}

/*
equation index: 6516
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.eta[1] = pumCW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2500]] /* pumCW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6516;
}

/*
equation index: 6517
type: SIMPLE_ASSIGN
pumCW.eff.per.motorEfficiency.V_flow[1] = pumCW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2499]] /* pumCW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6517;
}

/*
equation index: 6518
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.eta[1] = pumCW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2498]] /* pumCW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6518;
}

/*
equation index: 6519
type: SIMPLE_ASSIGN
pumCW.eff.per.hydraulicEfficiency.V_flow[1] = pumCW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2497]] /* pumCW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6519;
}

/*
equation index: 6533
type: SIMPLE_ASSIGN
pumCW.heaDis.motorCooledByFluid = pumCW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6533};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[757]] /* pumCW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[760]] /* pumCW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6533;
}

/*
equation index: 6539
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6539;
}

/*
equation index: 6540
type: SIMPLE_ASSIGN
pumCW.preSou.m_flow_start = pumCW.m_flow_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2515]] /* pumCW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2492]] /* pumCW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 6540;
}

/*
equation index: 6543
type: SIMPLE_ASSIGN
pumCW.vol.tau = pumCW.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2523]] /* pumCW.tau PARAM */);
  threadData->lastEquationSolved = 6543;
}

/*
equation index: 6544
type: SIMPLE_ASSIGN
pumCW.vol.V_nominal = 12.5601875 * pumCW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2526]] /* pumCW.vol.V_nominal PARAM */) = (12.5601875) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6544;
}

/*
equation index: 6547
type: SIMPLE_ASSIGN
pumCW.vol.T_start = pumCW.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* pumCW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2426]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 6547;
}

/*
equation index: 6548
type: SIMPLE_ASSIGN
pumCW.vol.state_start.T = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6548;
}

/*
equation index: 6549
type: SIMPLE_ASSIGN
pumCW.vol.p_start = pumCW.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2494]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 6549;
}

/*
equation index: 6550
type: SIMPLE_ASSIGN
pumCW.vol.state_start.p = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* pumCW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6550;
}

/*
equation index: 6554
type: SIMPLE_ASSIGN
pumCW.vol.rho_start = logic3.pumCW.vol.Medium.density(pumCW.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6554};
  logic3_pumCW_vol_Medium_ThermodynamicState tmp127;
  logic3_pumCW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp127, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2549]] /* pumCW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2545]] /* pumCW.vol.rho_start PARAM */) = omc_logic3_pumCW_vol_Medium_density(threadData, tmp127);
  threadData->lastEquationSolved = 6554;
}

/*
equation index: 6555
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.p_start = pumCW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2543]] /* pumCW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6555;
}

/*
equation index: 6556
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.T_start = pumCW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2529]] /* pumCW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2524]] /* pumCW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6556;
}

/*
equation index: 6557
type: SIMPLE_ASSIGN
pumCW.vol.X_start[1] = pumCW.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* pumCW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2428]] /* pumCW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6557;
}

/*
equation index: 6558
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.X_start[1] = pumCW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2530]] /* pumCW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2527]] /* pumCW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6558;
}

/*
equation index: 6559
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.hStart = logic3.pumCW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, pumCW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6559};
  real_array tmp128;
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2530]] /* pumCW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2533]] /* pumCW.vol.dynBal.hStart PARAM */) = omc_logic3_pumCW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2529]] /* pumCW.vol.dynBal.T_start PARAM */), tmp128);
  threadData->lastEquationSolved = 6559;
}

/*
equation index: 6564
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.rho_start = logic3.pumCW.vol.dynBal.Medium.density(logic3.pumCW.vol.dynBal.Medium.setState_pTX(pumCW.vol.dynBal.p_start, pumCW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* pumCW.vol.dynBal.rho_start PARAM */) = omc_logic3_pumCW_vol_dynBal_Medium_density(threadData, omc_logic3_pumCW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2535]] /* pumCW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2529]] /* pumCW.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6564;
}

/*
equation index: 6567
type: SIMPLE_ASSIGN
pumCW.vol.V = pumCW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2526]] /* pumCW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6567;
}

/*
equation index: 6568
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.fluidVolume = pumCW.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2532]] /* pumCW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2525]] /* pumCW.vol.V PARAM */);
  threadData->lastEquationSolved = 6568;
}

/*
equation index: 6581
type: SIMPLE_ASSIGN
pumCW.vol.m_flow_small = pumCW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2542]] /* pumCW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2491]] /* pumCW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6581;
}

/*
equation index: 6590
type: SIMPLE_ASSIGN
pumCW.sta_start.p = pumCW.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2494]] /* pumCW.p_start PARAM */);
  threadData->lastEquationSolved = 6590;
}

/*
equation index: 6591
type: SIMPLE_ASSIGN
pumCW.sta_start.T = pumCW.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* pumCW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2426]] /* pumCW.T_start PARAM */);
  threadData->lastEquationSolved = 6591;
}

/*
equation index: 6592
type: SIMPLE_ASSIGN
pumCW.h_outflow_start = logic3.pumCW.Medium.specificEnthalpy(pumCW.sta_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6592};
  logic3_pumCW_Medium_ThermodynamicState tmp129;
  logic3_pumCW_Medium_ThermodynamicState_wrap_vars(threadData,tmp129, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2520]] /* pumCW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2487]] /* pumCW.h_outflow_start PARAM */) = omc_logic3_pumCW_Medium_specificEnthalpy(threadData, tmp129);
  threadData->lastEquationSolved = 6592;
}

/*
equation index: 6604
type: SIMPLE_ASSIGN
pumCW.stageInputs[1] = pumCW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6604};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2493]] /* pumCW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 6604;
}

/*
equation index: 6605
type: SIMPLE_ASSIGN
pumCW.constInput = pumCW.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2432]] /* pumCW.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2433]] /* pumCW.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 6605;
}

/*
equation index: 6608
type: SIMPLE_ASSIGN
pumCW.per.speeds_rpm[1] = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6608};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* pumCW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2508]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6608;
}

/*
equation index: 6609
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed_rpm = pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* pumCW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2508]] /* pumCW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6609;
}

/*
equation index: 6610
type: SIMPLE_ASSIGN
pumCW.per.speeds[1] = pumCW.per.speeds_rpm[1] / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2509]] /* pumCW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2510]] /* pumCW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2508]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6610;
}

/*
equation index: 6611
type: SIMPLE_ASSIGN
pumCW.per.constantSpeed = pumCW.per.constantSpeed_rpm / pumCW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2495]] /* pumCW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2496]] /* pumCW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2508]] /* pumCW.per.speed_rpm_nominal PARAM */),"pumCW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6611;
}

/*
equation index: 6627
type: SIMPLE_ASSIGN
cooTow.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6627;
}

/*
equation index: 6628
type: SIMPLE_ASSIGN
cooTow.mRef_flow = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* cooTow.mRef_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6628;
}

/*
equation index: 6633
type: SIMPLE_ASSIGN
cooTow.rho_default = logic3.cooTow.Medium.density(cooTow.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6633};
  logic3_cooTow_Medium_ThermodynamicState tmp130;
  logic3_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp130, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1102]] /* cooTow.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1101]] /* cooTow.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.rho_default PARAM */) = omc_logic3_cooTow_Medium_density(threadData, tmp130);
  threadData->lastEquationSolved = 6633;
}

/*
equation index: 6636
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_nominal = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6636};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* cooTow.preDro.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6636;
}

/*
equation index: 6637
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_nominal_pos = abs(cooTow.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.preDro.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* cooTow.preDro.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6637;
}

/*
equation index: 6638
type: SIMPLE_ASSIGN
cooTow.preDro.k = 0.0030932931235336655 * cooTow.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* cooTow.preDro.k PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 6638;
}

/*
equation index: 6643
type: SIMPLE_ASSIGN
cooTow.preDro.eta_default = logic3.cooTow.preDro.Medium.dynamicViscosity(cooTow.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6643};
  logic3_cooTow_preDro_Medium_ThermodynamicState tmp131;
  logic3_cooTow_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp131, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* cooTow.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* cooTow.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow.preDro.eta_default PARAM */) = omc_logic3_cooTow_preDro_Medium_dynamicViscosity(threadData, tmp131);
  threadData->lastEquationSolved = 6643;
}

/*
equation index: 6644
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_turbulent = 0.1 * cooTow.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6644};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1095]] /* cooTow.preDro.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 6644;
}

/*
equation index: 6652
type: SIMPLE_ASSIGN
cooTow.preDro.m_flow_small = 1e-4 * abs(cooTow.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6652};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* cooTow.preDro.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* cooTow.preDro.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6652;
}

/*
equation index: 6656
type: SIMPLE_ASSIGN
cooTow.vol.T_start = cooTow.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 6656;
}

/*
equation index: 6657
type: SIMPLE_ASSIGN
cooTow.vol.state_start.T = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6657;
}

/*
equation index: 6658
type: SIMPLE_ASSIGN
cooTow.vol.p_start = cooTow.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6658};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 6658;
}

/*
equation index: 6659
type: SIMPLE_ASSIGN
cooTow.vol.state_start.p = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* cooTow.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6659;
}

/*
equation index: 6663
type: SIMPLE_ASSIGN
cooTow.vol.rho_start = logic3.cooTow.vol.Medium.density(cooTow.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6663};
  logic3_cooTow_vol_Medium_ThermodynamicState tmp132;
  logic3_cooTow_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp132, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* cooTow.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* cooTow.vol.rho_start PARAM */) = omc_logic3_cooTow_vol_Medium_density(threadData, tmp132);
  threadData->lastEquationSolved = 6663;
}

/*
equation index: 6664
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.p_start = cooTow.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6664};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* cooTow.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6664;
}

/*
equation index: 6665
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.T_start = cooTow.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6665};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTow.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1106]] /* cooTow.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6665;
}

/*
equation index: 6666
type: SIMPLE_ASSIGN
cooTow.vol.X_start[1] = cooTow.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6666};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* cooTow.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6666;
}

/*
equation index: 6667
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.X_start[1] = cooTow.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* cooTow.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6667;
}

/*
equation index: 6668
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.hStart = logic3.cooTow.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, cooTow.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6668};
  real_array tmp133;
  real_array_create(&tmp133, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1111]] /* cooTow.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* cooTow.vol.dynBal.hStart PARAM */) = omc_logic3_cooTow_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTow.vol.dynBal.T_start PARAM */), tmp133);
  threadData->lastEquationSolved = 6668;
}

/*
equation index: 6673
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.rho_start = logic3.cooTow.vol.dynBal.Medium.density(logic3.cooTow.vol.dynBal.Medium.setState_pTX(cooTow.vol.dynBal.p_start, cooTow.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* cooTow.vol.dynBal.rho_start PARAM */) = omc_logic3_cooTow_vol_dynBal_Medium_density(threadData, omc_logic3_cooTow_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1116]] /* cooTow.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTow.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6673;
}

/*
equation index: 6676
type: SIMPLE_ASSIGN
cooTow.vol.V = cooTow.m_flow_nominal * cooTow.tau / cooTow.rho_default
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow.vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1105]] /* cooTow.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1100]] /* cooTow.rho_default PARAM */),"cooTow.rho_default",equationIndexes));
  threadData->lastEquationSolved = 6676;
}

/*
equation index: 6677
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.fluidVolume = cooTow.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* cooTow.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1107]] /* cooTow.vol.V PARAM */);
  threadData->lastEquationSolved = 6677;
}

/*
equation index: 6690
type: SIMPLE_ASSIGN
cooTow.vol.m_flow_nominal = cooTow.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6690;
}

/*
equation index: 6691
type: SIMPLE_ASSIGN
cooTow.vol.m_flow_small = 1e-4 * abs(cooTow.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* cooTow.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6691;
}

/*
equation index: 6710
type: SIMPLE_ASSIGN
cooTow.m_flow_small = 1e-4 * abs(cooTow.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1082]] /* cooTow.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6710;
}

/*
equation index: 6712
type: SIMPLE_ASSIGN
expVesCHW.state_start.p = expVesCHW.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* expVesCHW.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6712;
}

/*
equation index: 6713
type: SIMPLE_ASSIGN
expVesCHW.state_start.T = expVesCHW.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesCHW.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* expVesCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6713;
}

/*
equation index: 6714
type: SIMPLE_ASSIGN
expVesCHW.rho_start = logic3.expVesCHW.Medium.density(expVesCHW.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6714};
  logic3_expVesCHW_Medium_ThermodynamicState tmp134;
  logic3_expVesCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp134, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* expVesCHW.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesCHW.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* expVesCHW.rho_start PARAM */) = omc_logic3_expVesCHW_Medium_density(threadData, tmp134);
  threadData->lastEquationSolved = 6714;
}

/*
equation index: 6760
type: SIMPLE_ASSIGN
pumCHW.eff.per.speeds_rpm[1] = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6760};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2219]] /* pumCHW.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2217]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6760;
}

/*
equation index: 6761
type: SIMPLE_ASSIGN
pumCHW.eff.per.constantSpeed_rpm = pumCHW.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2205]] /* pumCHW.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2217]] /* pumCHW.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6761;
}

/*
equation index: 6765
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6765};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[673]] /* pumCHW.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[682]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6765;
}

/*
equation index: 6766
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.P[1] = pumCHW.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2210]] /* pumCHW.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2245]] /* pumCHW.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 6766;
}

/*
equation index: 6767
type: SIMPLE_ASSIGN
pumCHW.eff.per.power.V_flow[1] = pumCHW.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6767};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2211]] /* pumCHW.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2246]] /* pumCHW.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6767;
}

/*
equation index: 6768
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.eta[1] = pumCHW.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2244]] /* pumCHW.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6768;
}

/*
equation index: 6769
type: SIMPLE_ASSIGN
pumCHW.eff.per.motorEfficiency.V_flow[1] = pumCHW.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2208]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2243]] /* pumCHW.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6769;
}

/*
equation index: 6770
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.eta[1] = pumCHW.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6770};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2242]] /* pumCHW.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 6770;
}

/*
equation index: 6771
type: SIMPLE_ASSIGN
pumCHW.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2241]] /* pumCHW.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 6771;
}

/*
equation index: 6785
type: SIMPLE_ASSIGN
pumCHW.heaDis.motorCooledByFluid = pumCHW.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6785};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[679]] /* pumCHW.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[682]] /* pumCHW.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 6785;
}

/*
equation index: 6791
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2258]] /* pumCHW.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2235]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6791;
}

/*
equation index: 6792
type: SIMPLE_ASSIGN
pumCHW.preSou.m_flow_start = pumCHW.m_flow_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6792};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2259]] /* pumCHW.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2236]] /* pumCHW.m_flow_start PARAM */);
  threadData->lastEquationSolved = 6792;
}

/*
equation index: 6795
type: SIMPLE_ASSIGN
pumCHW.vol.tau = pumCHW.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2267]] /* pumCHW.tau PARAM */);
  threadData->lastEquationSolved = 6795;
}

/*
equation index: 6796
type: SIMPLE_ASSIGN
pumCHW.vol.V_nominal = 25.120375 * pumCHW.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2270]] /* pumCHW.vol.V_nominal PARAM */) = (25.120375) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 6796;
}

/*
equation index: 6799
type: SIMPLE_ASSIGN
pumCHW.vol.T_start = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6799};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* pumCHW.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2170]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6799;
}

/*
equation index: 6800
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.T = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6800};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6800;
}

/*
equation index: 6801
type: SIMPLE_ASSIGN
pumCHW.vol.p_start = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* pumCHW.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6801;
}

/*
equation index: 6802
type: SIMPLE_ASSIGN
pumCHW.vol.state_start.p = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* pumCHW.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6802;
}

/*
equation index: 6806
type: SIMPLE_ASSIGN
pumCHW.vol.rho_start = logic3.pumCHW.vol.Medium.density(pumCHW.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6806};
  logic3_pumCHW_vol_Medium_ThermodynamicState tmp135;
  logic3_pumCHW_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp135, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2293]] /* pumCHW.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2289]] /* pumCHW.vol.rho_start PARAM */) = omc_logic3_pumCHW_vol_Medium_density(threadData, tmp135);
  threadData->lastEquationSolved = 6806;
}

/*
equation index: 6807
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.p_start = pumCHW.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2287]] /* pumCHW.vol.p_start PARAM */);
  threadData->lastEquationSolved = 6807;
}

/*
equation index: 6808
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.T_start = pumCHW.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2268]] /* pumCHW.vol.T_start PARAM */);
  threadData->lastEquationSolved = 6808;
}

/*
equation index: 6809
type: SIMPLE_ASSIGN
pumCHW.vol.X_start[1] = pumCHW.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* pumCHW.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2172]] /* pumCHW.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6809;
}

/*
equation index: 6810
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.X_start[1] = pumCHW.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6810};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2274]] /* pumCHW.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2271]] /* pumCHW.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 6810;
}

/*
equation index: 6811
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.hStart = logic3.pumCHW.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, pumCHW.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6811};
  real_array tmp136;
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2274]] /* pumCHW.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2277]] /* pumCHW.vol.dynBal.hStart PARAM */) = omc_logic3_pumCHW_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW.vol.dynBal.T_start PARAM */), tmp136);
  threadData->lastEquationSolved = 6811;
}

/*
equation index: 6816
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.rho_start = logic3.pumCHW.vol.dynBal.Medium.density(logic3.pumCHW.vol.dynBal.Medium.setState_pTX(pumCHW.vol.dynBal.p_start, pumCHW.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2281]] /* pumCHW.vol.dynBal.rho_start PARAM */) = omc_logic3_pumCHW_vol_dynBal_Medium_density(threadData, omc_logic3_pumCHW_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2279]] /* pumCHW.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 6816;
}

/*
equation index: 6819
type: SIMPLE_ASSIGN
pumCHW.vol.V = pumCHW.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6819};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* pumCHW.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2270]] /* pumCHW.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 6819;
}

/*
equation index: 6820
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.fluidVolume = pumCHW.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2276]] /* pumCHW.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2269]] /* pumCHW.vol.V PARAM */);
  threadData->lastEquationSolved = 6820;
}

/*
equation index: 6833
type: SIMPLE_ASSIGN
pumCHW.vol.m_flow_small = pumCHW.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2286]] /* pumCHW.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2235]] /* pumCHW.m_flow_small PARAM */);
  threadData->lastEquationSolved = 6833;
}

/*
equation index: 6842
type: SIMPLE_ASSIGN
pumCHW.sta_start.p = pumCHW.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6842};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2238]] /* pumCHW.p_start PARAM */);
  threadData->lastEquationSolved = 6842;
}

/*
equation index: 6843
type: SIMPLE_ASSIGN
pumCHW.sta_start.T = pumCHW.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6843};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* pumCHW.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2170]] /* pumCHW.T_start PARAM */);
  threadData->lastEquationSolved = 6843;
}

/*
equation index: 6844
type: SIMPLE_ASSIGN
pumCHW.h_outflow_start = logic3.pumCHW.Medium.specificEnthalpy(pumCHW.sta_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6844};
  logic3_pumCHW_Medium_ThermodynamicState tmp137;
  logic3_pumCHW_Medium_ThermodynamicState_wrap_vars(threadData,tmp137, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2264]] /* pumCHW.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2231]] /* pumCHW.h_outflow_start PARAM */) = omc_logic3_pumCHW_Medium_specificEnthalpy(threadData, tmp137);
  threadData->lastEquationSolved = 6844;
}

/*
equation index: 6856
type: SIMPLE_ASSIGN
pumCHW.stageInputs[1] = pumCHW.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6856};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2237]] /* pumCHW.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 6856;
}

/*
equation index: 6857
type: SIMPLE_ASSIGN
pumCHW.constInput = pumCHW.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6857};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2176]] /* pumCHW.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2177]] /* pumCHW.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 6857;
}

/*
equation index: 6860
type: SIMPLE_ASSIGN
pumCHW.per.speeds_rpm[1] = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2254]] /* pumCHW.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2252]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6860;
}

/*
equation index: 6861
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed_rpm = pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2240]] /* pumCHW.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2252]] /* pumCHW.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 6861;
}

/*
equation index: 6862
type: SIMPLE_ASSIGN
pumCHW.per.speeds[1] = pumCHW.per.speeds_rpm[1] / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6862};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2253]] /* pumCHW.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2254]] /* pumCHW.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2252]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6862;
}

/*
equation index: 6863
type: SIMPLE_ASSIGN
pumCHW.per.constantSpeed = pumCHW.per.constantSpeed_rpm / pumCHW.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6863};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2239]] /* pumCHW.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2240]] /* pumCHW.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2252]] /* pumCHW.per.speed_rpm_nominal PARAM */),"pumCHW.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 6863;
}

/*
equation index: 6880
type: SIMPLE_ASSIGN
cooCoi.GDif = 0.0033333333333333335 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6880};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */) = (0.0033333333333333335) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 6880;
}

/*
equation index: 6881
type: SIMPLE_ASSIGN
cooCoi.theCon2[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6881};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* cooCoi.theCon2[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6881;
}

/*
equation index: 6882
type: SIMPLE_ASSIGN
cooCoi.theCon2[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6882};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* cooCoi.theCon2[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6882;
}

/*
equation index: 6883
type: SIMPLE_ASSIGN
cooCoi.theCon2[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6883};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* cooCoi.theCon2[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6883;
}

/*
equation index: 6884
type: SIMPLE_ASSIGN
cooCoi.theCon1[3].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* cooCoi.theCon1[3].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6884;
}

/*
equation index: 6885
type: SIMPLE_ASSIGN
cooCoi.theCon1[2].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* cooCoi.theCon1[2].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6885;
}

/*
equation index: 6886
type: SIMPLE_ASSIGN
cooCoi.theCon1[1].G = cooCoi.GDif
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6886};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* cooCoi.theCon1[1].G PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.GDif PARAM */);
  threadData->lastEquationSolved = 6886;
}

/*
equation index: 6889
type: SIMPLE_ASSIGN
cooCoi.ele[4].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6889};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* cooCoi.ele[4].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 6889;
}

/*
equation index: 6890
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6890};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[4].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 6890;
}

/*
equation index: 6891
type: SIMPLE_ASSIGN
cooCoi.ele[4].C = 2.0 * cooCoi.ele[4].UA_nominal * cooCoi.ele[4].tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6891};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* cooCoi.ele[4].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* cooCoi.ele[4].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* cooCoi.ele[4].tau_m PARAM */)));
  threadData->lastEquationSolved = 6891;
}

/*
equation index: 6892
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.C = cooCoi.ele[4].C
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6892};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* cooCoi.ele[4].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* cooCoi.ele[4].C PARAM */);
  threadData->lastEquationSolved = 6892;
}

/*
equation index: 6896
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[4].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6896};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* cooCoi.ele[4].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* cooCoi.ele[4].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 6896;
}

/*
equation index: 6902
type: SIMPLE_ASSIGN
cooCoi.ele[4].rho1_nominal = logic3.cooCoi.ele.Medium1.density(cooCoi.ele[4].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6902};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp138;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp138, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* cooCoi.ele[4].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[4].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[4].rho1_nominal PARAM */) = omc_logic3_cooCoi_ele_Medium1_density(threadData, tmp138);
  threadData->lastEquationSolved = 6902;
}

/*
equation index: 6910
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[4].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* cooCoi.ele[4].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[683]] /* cooCoi.ele[4].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 6910;
}

/*
equation index: 6930
type: SIMPLE_ASSIGN
cooCoi.m1_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6930;
}

/*
equation index: 6931
type: SIMPLE_ASSIGN
cooCoi.ele[4].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[4].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6931;
}

/*
equation index: 6932
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_nominal = cooCoi.ele[4].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6932};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[4].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 6932;
}

/*
equation index: 6933
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[4].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* cooCoi.ele[4].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 6933;
}

/*
equation index: 6936
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.eta_default = logic3.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[4].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6936};
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp139;
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp139, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* cooCoi.ele[4].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* cooCoi.ele[4].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* cooCoi.ele[4].preDro1.eta_default PARAM */) = omc_logic3_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp139);
  threadData->lastEquationSolved = 6936;
}

/*
equation index: 6945
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[4].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6945};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[619]] /* cooCoi.ele[4].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* cooCoi.ele[4].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 6945;
}

/*
equation index: 6969
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6969};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[4].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 6969;
}

/*
equation index: 6970
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.V = 55.989691542288554 * cooCoi.ele[4].tau2 / cooCoi.ele[4].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6970};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[871]] /* cooCoi.ele[4].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[759]] /* cooCoi.ele[4].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* cooCoi.ele[4].rho2_nominal PARAM */),"cooCoi.ele[4].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 6970;
}

/*
equation index: 6971
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.fluidVolume = cooCoi.ele[4].vol2.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_6971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6971};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[871]] /* cooCoi.ele[4].vol2.V PARAM */);
  threadData->lastEquationSolved = 6971;
}

/*
equation index: 7003
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.T_start = cooCoi.ele[4].T1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7003};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* cooCoi.ele[4].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 7003;
}

/*
equation index: 7004
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.T = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* cooCoi.ele[4].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7004;
}

/*
equation index: 7006
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.p_start = cooCoi.ele[4].p1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* cooCoi.ele[4].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 7006;
}

/*
equation index: 7007
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.state_start.p = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* cooCoi.ele[4].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7007;
}

/*
equation index: 7011
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.rho_start = logic3.cooCoi.ele.vol1.Medium.density(cooCoi.ele[4].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7011};
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState tmp140;
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp140, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[863]] /* cooCoi.ele[4].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[859]] /* cooCoi.ele[4].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[847]] /* cooCoi.ele[4].vol1.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_Medium_density(threadData, tmp140);
  threadData->lastEquationSolved = 7011;
}

/*
equation index: 7012
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.p_start = cooCoi.ele[4].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[839]] /* cooCoi.ele[4].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7012;
}

/*
equation index: 7013
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.T_start = cooCoi.ele[4].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7013};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[767]] /* cooCoi.ele[4].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7013;
}

/*
equation index: 7015
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.X_start[1] = cooCoi.ele[4].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* cooCoi.ele[4].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7015;
}

/*
equation index: 7016
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.X_start[1] = cooCoi.ele[4].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[4].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7016;
}

/*
equation index: 7017
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.hStart = logic3.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, cooCoi.ele[4].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7017};
  real_array tmp141;
  real_array_create(&tmp141, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* cooCoi.ele[4].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* cooCoi.ele[4].vol1.dynBal.hStart PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), tmp141);
  threadData->lastEquationSolved = 7017;
}

/*
equation index: 7022
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.rho_start = logic3.cooCoi.ele.vol1.dynBal.Medium.density(logic3.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[4].vol1.dynBal.p_start, cooCoi.ele[4].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* cooCoi.ele[4].vol1.dynBal.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic3_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* cooCoi.ele[4].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7022;
}

/*
equation index: 7025
type: SIMPLE_ASSIGN
cooCoi.ele[4].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[4].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7025;
}

/*
equation index: 7026
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.V = cooCoi.ele[4].m1_flow_nominal * cooCoi.ele[4].tau1 / cooCoi.ele[4].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7026};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* cooCoi.ele[4].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[4].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[755]] /* cooCoi.ele[4].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[699]] /* cooCoi.ele[4].rho1_nominal PARAM */),"cooCoi.ele[4].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7026;
}

/*
equation index: 7027
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.fluidVolume = cooCoi.ele[4].vol1.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7027};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* cooCoi.ele[4].vol1.V PARAM */);
  threadData->lastEquationSolved = 7027;
}

/*
equation index: 7040
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.m_flow_nominal = cooCoi.ele[4].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* cooCoi.ele[4].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[4].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7040;
}

/*
equation index: 7041
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[4].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7041};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* cooCoi.ele[4].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* cooCoi.ele[4].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7041;
}

/*
equation index: 7068
type: SIMPLE_ASSIGN
cooCoi.ele[4].m1_flow_small = 1e-4 * abs(cooCoi.ele[4].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* cooCoi.ele[4].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[551]] /* cooCoi.ele[4].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7068;
}

/*
equation index: 7072
type: SIMPLE_ASSIGN
cooCoi.ele[3].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7072};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* cooCoi.ele[3].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7072;
}

/*
equation index: 7073
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7073};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[3].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7073;
}

/*
equation index: 7074
type: SIMPLE_ASSIGN
cooCoi.ele[3].C = 2.0 * cooCoi.ele[3].UA_nominal * cooCoi.ele[3].tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7074};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* cooCoi.ele[3].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* cooCoi.ele[3].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[762]] /* cooCoi.ele[3].tau_m PARAM */)));
  threadData->lastEquationSolved = 7074;
}

/*
equation index: 7075
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.C = cooCoi.ele[3].C
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7075};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* cooCoi.ele[3].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* cooCoi.ele[3].C PARAM */);
  threadData->lastEquationSolved = 7075;
}

/*
equation index: 7079
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[3].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* cooCoi.ele[3].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* cooCoi.ele[3].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7079;
}

/*
equation index: 7085
type: SIMPLE_ASSIGN
cooCoi.ele[3].rho1_nominal = logic3.cooCoi.ele.Medium1.density(cooCoi.ele[3].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7085};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp142;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp142, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* cooCoi.ele[3].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[3].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[3].rho1_nominal PARAM */) = omc_logic3_cooCoi_ele_Medium1_density(threadData, tmp142);
  threadData->lastEquationSolved = 7085;
}

/*
equation index: 7093
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[3].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7093};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* cooCoi.ele[3].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[682]] /* cooCoi.ele[3].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7093;
}

/*
equation index: 7113
type: SIMPLE_ASSIGN
cooCoi.ele[3].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[3].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7113;
}

/*
equation index: 7114
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_nominal = cooCoi.ele[3].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[3].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7114;
}

/*
equation index: 7115
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[3].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* cooCoi.ele[3].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7115;
}

/*
equation index: 7118
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.eta_default = logic3.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[3].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7118};
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp143;
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp143, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* cooCoi.ele[3].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[626]] /* cooCoi.ele[3].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[3].preDro1.eta_default PARAM */) = omc_logic3_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp143);
  threadData->lastEquationSolved = 7118;
}

/*
equation index: 7127
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[3].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[618]] /* cooCoi.ele[3].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[3].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7127;
}

/*
equation index: 7151
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[3].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7151;
}

/*
equation index: 7152
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.V = 55.989691542288554 * cooCoi.ele[3].tau2 / cooCoi.ele[3].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[870]] /* cooCoi.ele[3].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[758]] /* cooCoi.ele[3].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* cooCoi.ele[3].rho2_nominal PARAM */),"cooCoi.ele[3].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7152;
}

/*
equation index: 7153
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.fluidVolume = cooCoi.ele[3].vol2.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[870]] /* cooCoi.ele[3].vol2.V PARAM */);
  threadData->lastEquationSolved = 7153;
}

/*
equation index: 7185
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.T_start = cooCoi.ele[3].T1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[3].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 7185;
}

/*
equation index: 7186
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.T = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* cooCoi.ele[3].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7186;
}

/*
equation index: 7188
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.p_start = cooCoi.ele[3].p1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* cooCoi.ele[3].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 7188;
}

/*
equation index: 7189
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.state_start.p = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* cooCoi.ele[3].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7189;
}

/*
equation index: 7193
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.rho_start = logic3.cooCoi.ele.vol1.Medium.density(cooCoi.ele[3].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7193};
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState tmp144;
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp144, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[862]] /* cooCoi.ele[3].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[858]] /* cooCoi.ele[3].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* cooCoi.ele[3].vol1.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_Medium_density(threadData, tmp144);
  threadData->lastEquationSolved = 7193;
}

/*
equation index: 7194
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.p_start = cooCoi.ele[3].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* cooCoi.ele[3].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7194;
}

/*
equation index: 7195
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.T_start = cooCoi.ele[3].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[766]] /* cooCoi.ele[3].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7195;
}

/*
equation index: 7197
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.X_start[1] = cooCoi.ele[3].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[514]] /* cooCoi.ele[3].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7197;
}

/*
equation index: 7198
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.X_start[1] = cooCoi.ele[3].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[3].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7198;
}

/*
equation index: 7199
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.hStart = logic3.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, cooCoi.ele[3].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7199};
  real_array tmp145;
  real_array_create(&tmp145, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* cooCoi.ele[3].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* cooCoi.ele[3].vol1.dynBal.hStart PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), tmp145);
  threadData->lastEquationSolved = 7199;
}

/*
equation index: 7204
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.rho_start = logic3.cooCoi.ele.vol1.dynBal.Medium.density(logic3.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[3].vol1.dynBal.p_start, cooCoi.ele[3].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* cooCoi.ele[3].vol1.dynBal.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic3_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* cooCoi.ele[3].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7204;
}

/*
equation index: 7207
type: SIMPLE_ASSIGN
cooCoi.ele[3].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7207};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[3].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7207;
}

/*
equation index: 7208
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.V = cooCoi.ele[3].m1_flow_nominal * cooCoi.ele[3].tau1 / cooCoi.ele[3].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* cooCoi.ele[3].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[3].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[754]] /* cooCoi.ele[3].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[698]] /* cooCoi.ele[3].rho1_nominal PARAM */),"cooCoi.ele[3].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7208;
}

/*
equation index: 7209
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.fluidVolume = cooCoi.ele[3].vol1.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7209};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* cooCoi.ele[3].vol1.V PARAM */);
  threadData->lastEquationSolved = 7209;
}

/*
equation index: 7222
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.m_flow_nominal = cooCoi.ele[3].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* cooCoi.ele[3].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[3].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7222;
}

/*
equation index: 7223
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[3].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* cooCoi.ele[3].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* cooCoi.ele[3].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7223;
}

/*
equation index: 7250
type: SIMPLE_ASSIGN
cooCoi.ele[3].m1_flow_small = 1e-4 * abs(cooCoi.ele[3].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* cooCoi.ele[3].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* cooCoi.ele[3].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7250;
}

/*
equation index: 7254
type: SIMPLE_ASSIGN
cooCoi.ele[2].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* cooCoi.ele[2].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7254;
}

/*
equation index: 7255
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7255};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[2].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7255;
}

/*
equation index: 7256
type: SIMPLE_ASSIGN
cooCoi.ele[2].C = 2.0 * cooCoi.ele[2].UA_nominal * cooCoi.ele[2].tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* cooCoi.ele[2].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* cooCoi.ele[2].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[761]] /* cooCoi.ele[2].tau_m PARAM */)));
  threadData->lastEquationSolved = 7256;
}

/*
equation index: 7257
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.C = cooCoi.ele[2].C
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7257};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* cooCoi.ele[2].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* cooCoi.ele[2].C PARAM */);
  threadData->lastEquationSolved = 7257;
}

/*
equation index: 7261
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[2].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* cooCoi.ele[2].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* cooCoi.ele[2].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7261;
}

/*
equation index: 7267
type: SIMPLE_ASSIGN
cooCoi.ele[2].rho1_nominal = logic3.cooCoi.ele.Medium1.density(cooCoi.ele[2].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7267};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp146;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp146, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* cooCoi.ele[2].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[2].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[2].rho1_nominal PARAM */) = omc_logic3_cooCoi_ele_Medium1_density(threadData, tmp146);
  threadData->lastEquationSolved = 7267;
}

/*
equation index: 7275
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[2].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[657]] /* cooCoi.ele[2].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[681]] /* cooCoi.ele[2].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7275;
}

/*
equation index: 7295
type: SIMPLE_ASSIGN
cooCoi.ele[2].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[2].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7295;
}

/*
equation index: 7296
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_nominal = cooCoi.ele[2].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[2].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7296;
}

/*
equation index: 7297
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[2].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* cooCoi.ele[2].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7297;
}

/*
equation index: 7300
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.eta_default = logic3.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[2].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7300};
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp147;
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp147, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* cooCoi.ele[2].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* cooCoi.ele[2].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* cooCoi.ele[2].preDro1.eta_default PARAM */) = omc_logic3_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp147);
  threadData->lastEquationSolved = 7300;
}

/*
equation index: 7309
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[2].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* cooCoi.ele[2].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[2].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7309;
}

/*
equation index: 7333
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7333};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[2].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7333;
}

/*
equation index: 7334
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.V = 55.989691542288554 * cooCoi.ele[2].tau2 / cooCoi.ele[2].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* cooCoi.ele[2].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[757]] /* cooCoi.ele[2].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[701]] /* cooCoi.ele[2].rho2_nominal PARAM */),"cooCoi.ele[2].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7334;
}

/*
equation index: 7335
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.fluidVolume = cooCoi.ele[2].vol2.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[869]] /* cooCoi.ele[2].vol2.V PARAM */);
  threadData->lastEquationSolved = 7335;
}

/*
equation index: 7367
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.T_start = cooCoi.ele[2].T1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[2].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 7367;
}

/*
equation index: 7368
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.T = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* cooCoi.ele[2].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7368;
}

/*
equation index: 7370
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.p_start = cooCoi.ele[2].p1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* cooCoi.ele[2].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 7370;
}

/*
equation index: 7371
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.state_start.p = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* cooCoi.ele[2].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7371;
}

/*
equation index: 7375
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.rho_start = logic3.cooCoi.ele.vol1.Medium.density(cooCoi.ele[2].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7375};
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState tmp148;
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp148, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[861]] /* cooCoi.ele[2].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* cooCoi.ele[2].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[845]] /* cooCoi.ele[2].vol1.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_Medium_density(threadData, tmp148);
  threadData->lastEquationSolved = 7375;
}

/*
equation index: 7376
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.p_start = cooCoi.ele[2].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* cooCoi.ele[2].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7376;
}

/*
equation index: 7377
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.T_start = cooCoi.ele[2].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[765]] /* cooCoi.ele[2].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7377;
}

/*
equation index: 7379
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.X_start[1] = cooCoi.ele[2].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* cooCoi.ele[2].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7379;
}

/*
equation index: 7380
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.X_start[1] = cooCoi.ele[2].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[2].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7380;
}

/*
equation index: 7381
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.hStart = logic3.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, cooCoi.ele[2].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7381};
  real_array tmp149;
  real_array_create(&tmp149, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* cooCoi.ele[2].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* cooCoi.ele[2].vol1.dynBal.hStart PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), tmp149);
  threadData->lastEquationSolved = 7381;
}

/*
equation index: 7386
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.rho_start = logic3.cooCoi.ele.vol1.dynBal.Medium.density(logic3.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[2].vol1.dynBal.p_start, cooCoi.ele[2].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* cooCoi.ele[2].vol1.dynBal.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic3_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[2].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7386;
}

/*
equation index: 7389
type: SIMPLE_ASSIGN
cooCoi.ele[2].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[2].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7389;
}

/*
equation index: 7390
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.V = cooCoi.ele[2].m1_flow_nominal * cooCoi.ele[2].tau1 / cooCoi.ele[2].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* cooCoi.ele[2].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[2].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[753]] /* cooCoi.ele[2].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[697]] /* cooCoi.ele[2].rho1_nominal PARAM */),"cooCoi.ele[2].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7390;
}

/*
equation index: 7391
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.fluidVolume = cooCoi.ele[2].vol1.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[769]] /* cooCoi.ele[2].vol1.V PARAM */);
  threadData->lastEquationSolved = 7391;
}

/*
equation index: 7404
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.m_flow_nominal = cooCoi.ele[2].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[2].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[2].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7404;
}

/*
equation index: 7405
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[2].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* cooCoi.ele[2].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* cooCoi.ele[2].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7405;
}

/*
equation index: 7432
type: SIMPLE_ASSIGN
cooCoi.ele[2].m1_flow_small = 1e-4 * abs(cooCoi.ele[2].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* cooCoi.ele[2].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* cooCoi.ele[2].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7432;
}

/*
equation index: 7436
type: SIMPLE_ASSIGN
cooCoi.ele[1].UA_nominal = 0.25 * cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7436};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* cooCoi.ele[1].UA_nominal PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.UA_nominal PARAM */));
  threadData->lastEquationSolved = 7436;
}

/*
equation index: 7437
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau_m = 0.25 * cooCoi.tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[1].tau_m PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooCoi.tau_m PARAM */));
  threadData->lastEquationSolved = 7437;
}

/*
equation index: 7438
type: SIMPLE_ASSIGN
cooCoi.ele[1].C = 2.0 * cooCoi.ele[1].UA_nominal * cooCoi.ele[1].tau_m
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[1].C PARAM */) = (2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* cooCoi.ele[1].UA_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[760]] /* cooCoi.ele[1].tau_m PARAM */)));
  threadData->lastEquationSolved = 7438;
}

/*
equation index: 7439
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.C = cooCoi.ele[1].C
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* cooCoi.ele[1].mas.C PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[1].C PARAM */);
  threadData->lastEquationSolved = 7439;
}

/*
equation index: 7443
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho2_nominal = 1.1843079200592153e-5 * cooCoi.ele[1].sta2_nominal.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[1].rho2_nominal PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[1].sta2_nominal.p PARAM */));
  threadData->lastEquationSolved = 7443;
}

/*
equation index: 7449
type: SIMPLE_ASSIGN
cooCoi.ele[1].rho1_nominal = logic3.cooCoi.ele.Medium1.density(cooCoi.ele[1].sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7449};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp150;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp150, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[1].sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* cooCoi.ele[1].sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* cooCoi.ele[1].rho1_nominal PARAM */) = omc_logic3_cooCoi_ele_Medium1_density(threadData, tmp150);
  threadData->lastEquationSolved = 7449;
}

/*
equation index: 7457
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * cooCoi.ele[1].preDro2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* cooCoi.ele[1].preDro2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[680]] /* cooCoi.ele[1].preDro2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 7457;
}

/*
equation index: 7474
type: SIMPLE_ASSIGN
cooCoi.ele[1].m1_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* cooCoi.ele[1].m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7474;
}

/*
equation index: 7475
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_nominal = cooCoi.ele[1].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* cooCoi.ele[1].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7475;
}

/*
equation index: 7476
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_nominal_pos = abs(cooCoi.ele[1].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7476;
}

/*
equation index: 7477
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.k = 0.0033226442289407162 * cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[1].preDro1.k PARAM */) = (0.0033226442289407162) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 7477;
}

/*
equation index: 7482
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.eta_default = logic3.cooCoi.ele.preDro1.Medium.dynamicViscosity(cooCoi.ele[1].preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7482};
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState tmp151;
  logic3_cooCoi_ele_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp151, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[628]] /* cooCoi.ele[1].preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* cooCoi.ele[1].preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[600]] /* cooCoi.ele[1].preDro1.eta_default PARAM */) = omc_logic3_cooCoi_ele_preDro1_Medium_dynamicViscosity(threadData, tmp151);
  threadData->lastEquationSolved = 7482;
}

/*
equation index: 7483
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_turbulent = 0.1 * cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 7483;
}

/*
equation index: 7491
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.m_flow_small = 1e-4 * abs(cooCoi.ele[1].preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* cooCoi.ele[1].preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[1].preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7491;
}

/*
equation index: 7505
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.T_start = cooCoi.ele[1].T2_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* cooCoi.ele[1].vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 7505;
}

/*
equation index: 7506
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.T_start = cooCoi.ele[1].vol2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[864]] /* cooCoi.ele[1].vol2.T_start PARAM */);
  threadData->lastEquationSolved = 7506;
}

/*
equation index: 7508
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[1] = cooCoi.ele[1].X2_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* cooCoi.ele[1].X2_start[1] PARAM */);
  threadData->lastEquationSolved = 7508;
}

/*
equation index: 7509
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[1] = cooCoi.ele[1].vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[872]] /* cooCoi.ele[1].vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7509;
}

/*
equation index: 7510
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.hStart = 1006.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start) * (1.0 - cooCoi.ele[1].vol2.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].vol2.dynBal.T_start)) * cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[904]] /* cooCoi.ele[1].vol2.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 7510;
}

/*
equation index: 7519
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.p_start = cooCoi.ele[1].p2_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* cooCoi.ele[1].vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* cooCoi.ele[1].p2_start PARAM */);
  threadData->lastEquationSolved = 7519;
}

/*
equation index: 7520
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.p_start = cooCoi.ele[1].vol2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[912]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* cooCoi.ele[1].vol2.p_start PARAM */);
  threadData->lastEquationSolved = 7520;
}

/*
equation index: 7521
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.rho_start = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[920]] /* cooCoi.ele[1].vol2.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[912]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 7521;
}

/*
equation index: 7524
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau2 = cooCoi.tau2
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[1].tau2 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1023]] /* cooCoi.tau2 PARAM */);
  threadData->lastEquationSolved = 7524;
}

/*
equation index: 7525
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.V = 55.989691542288554 * cooCoi.ele[1].tau2 / cooCoi.ele[1].rho2_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[868]] /* cooCoi.ele[1].vol2.V PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[756]] /* cooCoi.ele[1].tau2 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[700]] /* cooCoi.ele[1].rho2_nominal PARAM */),"cooCoi.ele[1].rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 7525;
}

/*
equation index: 7526
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.fluidVolume = cooCoi.ele[1].vol2.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[868]] /* cooCoi.ele[1].vol2.V PARAM */);
  threadData->lastEquationSolved = 7526;
}

/*
equation index: 7535
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.X_start[2] = cooCoi.ele[1].X2_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[873]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[517]] /* cooCoi.ele[1].X2_start[2] PARAM */);
  threadData->lastEquationSolved = 7535;
}

/*
equation index: 7536
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.X_start[2] = cooCoi.ele[1].vol2.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[889]] /* cooCoi.ele[1].vol2.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[873]] /* cooCoi.ele[1].vol2.X_start[2] PARAM */);
  threadData->lastEquationSolved = 7536;
}

/*
equation index: 7553
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.T_start = cooCoi.ele[1].T1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7553};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[1].vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 7553;
}

/*
equation index: 7554
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.T = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* cooCoi.ele[1].vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7554;
}

/*
equation index: 7556
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.p_start = cooCoi.ele[1].p1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* cooCoi.ele[1].vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 7556;
}

/*
equation index: 7557
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.state_start.p = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* cooCoi.ele[1].vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7557;
}

/*
equation index: 7561
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.rho_start = logic3.cooCoi.ele.vol1.Medium.density(cooCoi.ele[1].vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7561};
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState tmp152;
  logic3_cooCoi_ele_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp152, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[860]] /* cooCoi.ele[1].vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* cooCoi.ele[1].vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* cooCoi.ele[1].vol1.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_Medium_density(threadData, tmp152);
  threadData->lastEquationSolved = 7561;
}

/*
equation index: 7562
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.p_start = cooCoi.ele[1].vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* cooCoi.ele[1].vol1.p_start PARAM */);
  threadData->lastEquationSolved = 7562;
}

/*
equation index: 7563
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.T_start = cooCoi.ele[1].vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[764]] /* cooCoi.ele[1].vol1.T_start PARAM */);
  threadData->lastEquationSolved = 7563;
}

/*
equation index: 7565
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.X_start[1] = cooCoi.ele[1].X1_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* cooCoi.ele[1].X1_start[1] PARAM */);
  threadData->lastEquationSolved = 7565;
}

/*
equation index: 7566
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.X_start[1] = cooCoi.ele[1].vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* cooCoi.ele[1].vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 7566;
}

/*
equation index: 7567
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.hStart = logic3.cooCoi.ele.vol1.dynBal.Medium.specificEnthalpy_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, cooCoi.ele[1].vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7567};
  real_array tmp153;
  real_array_create(&tmp153, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* cooCoi.ele[1].vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[1].vol1.dynBal.hStart PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), tmp153);
  threadData->lastEquationSolved = 7567;
}

/*
equation index: 7572
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.rho_start = logic3.cooCoi.ele.vol1.dynBal.Medium.density(logic3.cooCoi.ele.vol1.dynBal.Medium.setState_pTX(cooCoi.ele[1].vol1.dynBal.p_start, cooCoi.ele[1].vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7572};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* cooCoi.ele[1].vol1.dynBal.rho_start PARAM */) = omc_logic3_cooCoi_ele_vol1_dynBal_Medium_density(threadData, omc_logic3_cooCoi_ele_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* cooCoi.ele[1].vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 7572;
}

/*
equation index: 7575
type: SIMPLE_ASSIGN
cooCoi.ele[1].tau1 = 0.25 * cooCoi.tau1
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[1].tau1 PARAM */) = (0.25) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1022]] /* cooCoi.tau1 PARAM */));
  threadData->lastEquationSolved = 7575;
}

/*
equation index: 7576
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.V = cooCoi.ele[1].m1_flow_nominal * cooCoi.ele[1].tau1 / cooCoi.ele[1].rho1_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* cooCoi.ele[1].vol1.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* cooCoi.ele[1].m1_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[1].tau1 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[696]] /* cooCoi.ele[1].rho1_nominal PARAM */),"cooCoi.ele[1].rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 7576;
}

/*
equation index: 7577
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.fluidVolume = cooCoi.ele[1].vol1.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7577};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[768]] /* cooCoi.ele[1].vol1.V PARAM */);
  threadData->lastEquationSolved = 7577;
}

/*
equation index: 7590
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.m_flow_nominal = cooCoi.ele[1].m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* cooCoi.ele[1].vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* cooCoi.ele[1].m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7590;
}

/*
equation index: 7591
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.m_flow_small = 1e-4 * abs(cooCoi.ele[1].vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* cooCoi.ele[1].vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* cooCoi.ele[1].vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7591;
}

/*
equation index: 7614
type: SIMPLE_ASSIGN
cooCoi.ele[1].m1_flow_small = 1e-4 * abs(cooCoi.ele[1].m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* cooCoi.ele[1].m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[548]] /* cooCoi.ele[1].m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7614;
}

/*
equation index: 7625
type: SIMPLE_ASSIGN
cooCoi.temSen_2.tauHeaTraInv = if cooCoi.temSen_2.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7625};
  modelica_boolean tmp154;
  tmp154 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* cooCoi.temSen_2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* cooCoi.temSen_2.tauHeaTraInv PARAM */) = (tmp154?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* cooCoi.temSen_2.tauHeaTra PARAM */),"cooCoi.temSen_2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7625;
}

/*
equation index: 7641
type: SIMPLE_ASSIGN
cooCoi.temSen_1.tauHeaTraInv = if cooCoi.temSen_1.tauHeaTra < 1e-10 then 0.0 else 1.0 / cooCoi.temSen_1.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7641};
  modelica_boolean tmp155;
  tmp155 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* cooCoi.temSen_1.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* cooCoi.temSen_1.tauHeaTraInv PARAM */) = (tmp155?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1031]] /* cooCoi.temSen_1.tauHeaTra PARAM */),"cooCoi.temSen_1.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 7641;
}

/*
equation index: 7649
type: SIMPLE_ASSIGN
cooCoi.temSen_1.m_flow_nominal = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* cooCoi.temSen_1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7649;
}

/*
equation index: 7650
type: SIMPLE_ASSIGN
cooCoi.temSen_1.m_flow_small = 1e-4 * cooCoi.temSen_1.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* cooCoi.temSen_1.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* cooCoi.temSen_1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 7650;
}

/*
equation index: 7658
type: SIMPLE_ASSIGN
cooCoi.hA.r_nominal = cooCoi.r_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7658};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooCoi.hA.r_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1021]] /* cooCoi.r_nominal PARAM */);
  threadData->lastEquationSolved = 7658;
}

/*
equation index: 7659
type: SIMPLE_ASSIGN
cooCoi.hA.UA_nominal = cooCoi.UA_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.hA.UA_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.UA_nominal PARAM */);
  threadData->lastEquationSolved = 7659;
}

/*
equation index: 7660
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_w = cooCoi.hA.UA_nominal * (1.0 + cooCoi.hA.r_nominal) / cooCoi.hA.r_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.hA.hA_nominal_w PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1004]] /* cooCoi.hA.UA_nominal PARAM */)) * (DIVISION_SIM(1.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooCoi.hA.r_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooCoi.hA.r_nominal PARAM */),"cooCoi.hA.r_nominal",equationIndexes));
  threadData->lastEquationSolved = 7660;
}

/*
equation index: 7661
type: SIMPLE_ASSIGN
cooCoi.hA.hA_nominal_a = cooCoi.hA.r_nominal * cooCoi.hA.hA_nominal_w
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7661};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* cooCoi.hA.hA_nominal_a PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1011]] /* cooCoi.hA.r_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.hA.hA_nominal_w PARAM */));
  threadData->lastEquationSolved = 7661;
}

/*
equation index: 7663
type: SIMPLE_ASSIGN
cooCoi.hA.m_flow_nominal_w = cooCoi.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7663};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* cooCoi.hA.m_flow_nominal_w PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 7663;
}

/*
equation index: 7679
type: SIMPLE_ASSIGN
cooCoi.m1_flow_small = 1e-4 * abs(cooCoi.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7679};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1014]] /* cooCoi.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1013]] /* cooCoi.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 7679;
}

/*
equation index: 7725
type: SIMPLE_ASSIGN
fanSup.eff.per.speeds_rpm[1] = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1543]] /* fanSup.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7725;
}

/*
equation index: 7726
type: SIMPLE_ASSIGN
fanSup.eff.per.constantSpeed_rpm = fanSup.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1529]] /* fanSup.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* fanSup.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 7726;
}

/*
equation index: 7730
type: SIMPLE_ASSIGN
fanSup.eff.per.motorCooledByFluid = fanSup.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7730};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[432]] /* fanSup.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[439]] /* fanSup.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 7730;
}

/*
equation index: 7731
type: SIMPLE_ASSIGN
fanSup.eff.per.power.P[1] = fanSup.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1534]] /* fanSup.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1568]] /* fanSup.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 7731;
}

/*
equation index: 7732
type: SIMPLE_ASSIGN
fanSup.eff.per.power.V_flow[1] = fanSup.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1535]] /* fanSup.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1569]] /* fanSup.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7732;
}

/*
equation index: 7733
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.eta[1] = fanSup.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1533]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1567]] /* fanSup.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7733;
}

/*
equation index: 7734
type: SIMPLE_ASSIGN
fanSup.eff.per.motorEfficiency.V_flow[1] = fanSup.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1532]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1566]] /* fanSup.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7734;
}

/*
equation index: 7735
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.eta[1] = fanSup.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1531]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1565]] /* fanSup.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 7735;
}

/*
equation index: 7736
type: SIMPLE_ASSIGN
fanSup.eff.per.hydraulicEfficiency.V_flow[1] = fanSup.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7736};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1530]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1564]] /* fanSup.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 7736;
}

/*
equation index: 7749
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1579]] /* fanSup.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1558]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7749;
}

/*
equation index: 7750
type: SIMPLE_ASSIGN
fanSup.preSou.m_flow_start = fanSup.m_flow_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1580]] /* fanSup.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1559]] /* fanSup.m_flow_start PARAM */);
  threadData->lastEquationSolved = 7750;
}

/*
equation index: 7753
type: SIMPLE_ASSIGN
fanSup.vol.tau = fanSup.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* fanSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1590]] /* fanSup.tau PARAM */);
  threadData->lastEquationSolved = 7753;
}

/*
equation index: 7754
type: SIMPLE_ASSIGN
fanSup.vol.V_nominal = 55.989691542288554 * fanSup.vol.tau / 1.2
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1593]] /* fanSup.vol.V_nominal PARAM */) = (55.989691542288554) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* fanSup.vol.tau PARAM */),1.2,"1.2",equationIndexes));
  threadData->lastEquationSolved = 7754;
}

/*
equation index: 7772
type: SIMPLE_ASSIGN
fanSup.vol.m_flow_small = fanSup.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7772};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1598]] /* fanSup.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1558]] /* fanSup.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7772;
}

/*
equation index: 7773
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flow_small = fanSup.vol.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1622]] /* fanSup.vol.steBal.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1598]] /* fanSup.vol.m_flow_small PARAM */);
  threadData->lastEquationSolved = 7773;
}

/*
equation index: 7774
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaReg = 0.001 * fanSup.vol.steBal.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7774};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1618]] /* fanSup.vol.steBal.deltaReg PARAM */) = (0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1622]] /* fanSup.vol.steBal.m_flow_small PARAM */));
  threadData->lastEquationSolved = 7774;
}

/*
equation index: 7775
type: SIMPLE_ASSIGN
fanSup.vol.steBal.deltaInvReg = 1.0 / fanSup.vol.steBal.deltaReg
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7775};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* fanSup.vol.steBal.deltaInvReg PARAM */) = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1618]] /* fanSup.vol.steBal.deltaReg PARAM */),"fanSup.vol.steBal.deltaReg",equationIndexes);
  threadData->lastEquationSolved = 7775;
}

/*
equation index: 7776
type: SIMPLE_ASSIGN
fanSup.vol.steBal.fReg = 104.0 * fanSup.vol.steBal.deltaInvReg ^ 6.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7776};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1620]] /* fanSup.vol.steBal.fReg PARAM */) = (104.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 6));
  threadData->lastEquationSolved = 7776;
}

/*
equation index: 7777
type: SIMPLE_ASSIGN
fanSup.vol.steBal.eReg = (-380.0) * fanSup.vol.steBal.deltaInvReg ^ 5.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_7777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7777};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1619]] /* fanSup.vol.steBal.eReg PARAM */) = (-380.0) * (real_int_pow(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1617]] /* fanSup.vol.steBal.deltaInvReg PARAM */), 5));
  threadData->lastEquationSolved = 7777;
}
OMC_DISABLE_OPT
void logic3_raw_updateBoundParameters_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[480])(DATA*, threadData_t*) = {
    logic3_raw_eqFunction_5753,
    logic3_raw_eqFunction_5754,
    logic3_raw_eqFunction_5757,
    logic3_raw_eqFunction_5760,
    logic3_raw_eqFunction_5770,
    logic3_raw_eqFunction_5771,
    logic3_raw_eqFunction_5772,
    logic3_raw_eqFunction_5773,
    logic3_raw_eqFunction_5774,
    logic3_raw_eqFunction_5775,
    logic3_raw_eqFunction_5776,
    logic3_raw_eqFunction_5778,
    logic3_raw_eqFunction_5779,
    logic3_raw_eqFunction_5780,
    logic3_raw_eqFunction_5781,
    logic3_raw_eqFunction_5787,
    logic3_raw_eqFunction_5788,
    logic3_raw_eqFunction_5791,
    logic3_raw_eqFunction_5794,
    logic3_raw_eqFunction_5846,
    logic3_raw_eqFunction_5847,
    logic3_raw_eqFunction_5851,
    logic3_raw_eqFunction_5852,
    logic3_raw_eqFunction_5853,
    logic3_raw_eqFunction_5854,
    logic3_raw_eqFunction_5855,
    logic3_raw_eqFunction_5856,
    logic3_raw_eqFunction_5857,
    logic3_raw_eqFunction_5870,
    logic3_raw_eqFunction_5871,
    logic3_raw_eqFunction_5874,
    logic3_raw_eqFunction_5875,
    logic3_raw_eqFunction_5893,
    logic3_raw_eqFunction_5894,
    logic3_raw_eqFunction_5895,
    logic3_raw_eqFunction_5896,
    logic3_raw_eqFunction_5897,
    logic3_raw_eqFunction_5898,
    logic3_raw_eqFunction_5899,
    logic3_raw_eqFunction_5900,
    logic3_raw_eqFunction_5901,
    logic3_raw_eqFunction_5902,
    logic3_raw_eqFunction_5912,
    logic3_raw_eqFunction_5918,
    logic3_raw_eqFunction_5919,
    logic3_raw_eqFunction_5920,
    logic3_raw_eqFunction_5921,
    logic3_raw_eqFunction_5942,
    logic3_raw_eqFunction_5946,
    logic3_raw_eqFunction_5947,
    logic3_raw_eqFunction_5948,
    logic3_raw_eqFunction_5949,
    logic3_raw_eqFunction_5970,
    logic3_raw_eqFunction_5971,
    logic3_raw_eqFunction_5975,
    logic3_raw_eqFunction_5976,
    logic3_raw_eqFunction_5977,
    logic3_raw_eqFunction_5988,
    logic3_raw_eqFunction_5989,
    logic3_raw_eqFunction_5990,
    logic3_raw_eqFunction_6000,
    logic3_raw_eqFunction_6001,
    logic3_raw_eqFunction_6015,
    logic3_raw_eqFunction_6016,
    logic3_raw_eqFunction_6024,
    logic3_raw_eqFunction_6025,
    logic3_raw_eqFunction_6028,
    logic3_raw_eqFunction_6029,
    logic3_raw_eqFunction_6037,
    logic3_raw_eqFunction_6058,
    logic3_raw_eqFunction_6059,
    logic3_raw_eqFunction_6060,
    logic3_raw_eqFunction_6061,
    logic3_raw_eqFunction_6062,
    logic3_raw_eqFunction_6069,
    logic3_raw_eqFunction_6072,
    logic3_raw_eqFunction_6073,
    logic3_raw_eqFunction_6074,
    logic3_raw_eqFunction_6075,
    logic3_raw_eqFunction_6084,
    logic3_raw_eqFunction_6085,
    logic3_raw_eqFunction_6115,
    logic3_raw_eqFunction_6118,
    logic3_raw_eqFunction_6133,
    logic3_raw_eqFunction_6134,
    logic3_raw_eqFunction_6140,
    logic3_raw_eqFunction_6141,
    logic3_raw_eqFunction_6143,
    logic3_raw_eqFunction_6144,
    logic3_raw_eqFunction_6150,
    logic3_raw_eqFunction_6151,
    logic3_raw_eqFunction_6152,
    logic3_raw_eqFunction_6155,
    logic3_raw_eqFunction_6156,
    logic3_raw_eqFunction_6163,
    logic3_raw_eqFunction_6165,
    logic3_raw_eqFunction_6166,
    logic3_raw_eqFunction_6172,
    logic3_raw_eqFunction_6173,
    logic3_raw_eqFunction_6175,
    logic3_raw_eqFunction_6176,
    logic3_raw_eqFunction_6182,
    logic3_raw_eqFunction_6183,
    logic3_raw_eqFunction_6185,
    logic3_raw_eqFunction_6186,
    logic3_raw_eqFunction_6192,
    logic3_raw_eqFunction_6193,
    logic3_raw_eqFunction_6195,
    logic3_raw_eqFunction_6196,
    logic3_raw_eqFunction_6204,
    logic3_raw_eqFunction_6205,
    logic3_raw_eqFunction_6211,
    logic3_raw_eqFunction_6212,
    logic3_raw_eqFunction_6214,
    logic3_raw_eqFunction_6215,
    logic3_raw_eqFunction_6221,
    logic3_raw_eqFunction_6222,
    logic3_raw_eqFunction_6224,
    logic3_raw_eqFunction_6225,
    logic3_raw_eqFunction_6231,
    logic3_raw_eqFunction_6232,
    logic3_raw_eqFunction_6233,
    logic3_raw_eqFunction_6236,
    logic3_raw_eqFunction_6237,
    logic3_raw_eqFunction_6244,
    logic3_raw_eqFunction_6246,
    logic3_raw_eqFunction_6247,
    logic3_raw_eqFunction_6248,
    logic3_raw_eqFunction_6249,
    logic3_raw_eqFunction_6250,
    logic3_raw_eqFunction_6251,
    logic3_raw_eqFunction_6252,
    logic3_raw_eqFunction_6253,
    logic3_raw_eqFunction_6254,
    logic3_raw_eqFunction_6255,
    logic3_raw_eqFunction_6256,
    logic3_raw_eqFunction_6257,
    logic3_raw_eqFunction_6258,
    logic3_raw_eqFunction_6261,
    logic3_raw_eqFunction_6264,
    logic3_raw_eqFunction_6270,
    logic3_raw_eqFunction_6271,
    logic3_raw_eqFunction_6272,
    logic3_raw_eqFunction_6275,
    logic3_raw_eqFunction_6284,
    logic3_raw_eqFunction_6291,
    logic3_raw_eqFunction_6292,
    logic3_raw_eqFunction_6293,
    logic3_raw_eqFunction_6296,
    logic3_raw_eqFunction_6305,
    logic3_raw_eqFunction_6309,
    logic3_raw_eqFunction_6310,
    logic3_raw_eqFunction_6311,
    logic3_raw_eqFunction_6312,
    logic3_raw_eqFunction_6316,
    logic3_raw_eqFunction_6317,
    logic3_raw_eqFunction_6318,
    logic3_raw_eqFunction_6319,
    logic3_raw_eqFunction_6320,
    logic3_raw_eqFunction_6321,
    logic3_raw_eqFunction_6326,
    logic3_raw_eqFunction_6329,
    logic3_raw_eqFunction_6330,
    logic3_raw_eqFunction_6343,
    logic3_raw_eqFunction_6344,
    logic3_raw_eqFunction_6353,
    logic3_raw_eqFunction_6354,
    logic3_raw_eqFunction_6355,
    logic3_raw_eqFunction_6356,
    logic3_raw_eqFunction_6360,
    logic3_raw_eqFunction_6361,
    logic3_raw_eqFunction_6362,
    logic3_raw_eqFunction_6363,
    logic3_raw_eqFunction_6364,
    logic3_raw_eqFunction_6365,
    logic3_raw_eqFunction_6370,
    logic3_raw_eqFunction_6373,
    logic3_raw_eqFunction_6374,
    logic3_raw_eqFunction_6387,
    logic3_raw_eqFunction_6388,
    logic3_raw_eqFunction_6412,
    logic3_raw_eqFunction_6413,
    logic3_raw_eqFunction_6416,
    logic3_raw_eqFunction_6417,
    logic3_raw_eqFunction_6418,
    logic3_raw_eqFunction_6424,
    logic3_raw_eqFunction_6425,
    logic3_raw_eqFunction_6431,
    logic3_raw_eqFunction_6432,
    logic3_raw_eqFunction_6433,
    logic3_raw_eqFunction_6436,
    logic3_raw_eqFunction_6437,
    logic3_raw_eqFunction_6444,
    logic3_raw_eqFunction_6446,
    logic3_raw_eqFunction_6447,
    logic3_raw_eqFunction_6453,
    logic3_raw_eqFunction_6454,
    logic3_raw_eqFunction_6455,
    logic3_raw_eqFunction_6458,
    logic3_raw_eqFunction_6459,
    logic3_raw_eqFunction_6466,
    logic3_raw_eqFunction_6508,
    logic3_raw_eqFunction_6509,
    logic3_raw_eqFunction_6513,
    logic3_raw_eqFunction_6514,
    logic3_raw_eqFunction_6515,
    logic3_raw_eqFunction_6516,
    logic3_raw_eqFunction_6517,
    logic3_raw_eqFunction_6518,
    logic3_raw_eqFunction_6519,
    logic3_raw_eqFunction_6533,
    logic3_raw_eqFunction_6539,
    logic3_raw_eqFunction_6540,
    logic3_raw_eqFunction_6543,
    logic3_raw_eqFunction_6544,
    logic3_raw_eqFunction_6547,
    logic3_raw_eqFunction_6548,
    logic3_raw_eqFunction_6549,
    logic3_raw_eqFunction_6550,
    logic3_raw_eqFunction_6554,
    logic3_raw_eqFunction_6555,
    logic3_raw_eqFunction_6556,
    logic3_raw_eqFunction_6557,
    logic3_raw_eqFunction_6558,
    logic3_raw_eqFunction_6559,
    logic3_raw_eqFunction_6564,
    logic3_raw_eqFunction_6567,
    logic3_raw_eqFunction_6568,
    logic3_raw_eqFunction_6581,
    logic3_raw_eqFunction_6590,
    logic3_raw_eqFunction_6591,
    logic3_raw_eqFunction_6592,
    logic3_raw_eqFunction_6604,
    logic3_raw_eqFunction_6605,
    logic3_raw_eqFunction_6608,
    logic3_raw_eqFunction_6609,
    logic3_raw_eqFunction_6610,
    logic3_raw_eqFunction_6611,
    logic3_raw_eqFunction_6627,
    logic3_raw_eqFunction_6628,
    logic3_raw_eqFunction_6633,
    logic3_raw_eqFunction_6636,
    logic3_raw_eqFunction_6637,
    logic3_raw_eqFunction_6638,
    logic3_raw_eqFunction_6643,
    logic3_raw_eqFunction_6644,
    logic3_raw_eqFunction_6652,
    logic3_raw_eqFunction_6656,
    logic3_raw_eqFunction_6657,
    logic3_raw_eqFunction_6658,
    logic3_raw_eqFunction_6659,
    logic3_raw_eqFunction_6663,
    logic3_raw_eqFunction_6664,
    logic3_raw_eqFunction_6665,
    logic3_raw_eqFunction_6666,
    logic3_raw_eqFunction_6667,
    logic3_raw_eqFunction_6668,
    logic3_raw_eqFunction_6673,
    logic3_raw_eqFunction_6676,
    logic3_raw_eqFunction_6677,
    logic3_raw_eqFunction_6690,
    logic3_raw_eqFunction_6691,
    logic3_raw_eqFunction_6710,
    logic3_raw_eqFunction_6712,
    logic3_raw_eqFunction_6713,
    logic3_raw_eqFunction_6714,
    logic3_raw_eqFunction_6760,
    logic3_raw_eqFunction_6761,
    logic3_raw_eqFunction_6765,
    logic3_raw_eqFunction_6766,
    logic3_raw_eqFunction_6767,
    logic3_raw_eqFunction_6768,
    logic3_raw_eqFunction_6769,
    logic3_raw_eqFunction_6770,
    logic3_raw_eqFunction_6771,
    logic3_raw_eqFunction_6785,
    logic3_raw_eqFunction_6791,
    logic3_raw_eqFunction_6792,
    logic3_raw_eqFunction_6795,
    logic3_raw_eqFunction_6796,
    logic3_raw_eqFunction_6799,
    logic3_raw_eqFunction_6800,
    logic3_raw_eqFunction_6801,
    logic3_raw_eqFunction_6802,
    logic3_raw_eqFunction_6806,
    logic3_raw_eqFunction_6807,
    logic3_raw_eqFunction_6808,
    logic3_raw_eqFunction_6809,
    logic3_raw_eqFunction_6810,
    logic3_raw_eqFunction_6811,
    logic3_raw_eqFunction_6816,
    logic3_raw_eqFunction_6819,
    logic3_raw_eqFunction_6820,
    logic3_raw_eqFunction_6833,
    logic3_raw_eqFunction_6842,
    logic3_raw_eqFunction_6843,
    logic3_raw_eqFunction_6844,
    logic3_raw_eqFunction_6856,
    logic3_raw_eqFunction_6857,
    logic3_raw_eqFunction_6860,
    logic3_raw_eqFunction_6861,
    logic3_raw_eqFunction_6862,
    logic3_raw_eqFunction_6863,
    logic3_raw_eqFunction_6880,
    logic3_raw_eqFunction_6881,
    logic3_raw_eqFunction_6882,
    logic3_raw_eqFunction_6883,
    logic3_raw_eqFunction_6884,
    logic3_raw_eqFunction_6885,
    logic3_raw_eqFunction_6886,
    logic3_raw_eqFunction_6889,
    logic3_raw_eqFunction_6890,
    logic3_raw_eqFunction_6891,
    logic3_raw_eqFunction_6892,
    logic3_raw_eqFunction_6896,
    logic3_raw_eqFunction_6902,
    logic3_raw_eqFunction_6910,
    logic3_raw_eqFunction_6930,
    logic3_raw_eqFunction_6931,
    logic3_raw_eqFunction_6932,
    logic3_raw_eqFunction_6933,
    logic3_raw_eqFunction_6936,
    logic3_raw_eqFunction_6945,
    logic3_raw_eqFunction_6969,
    logic3_raw_eqFunction_6970,
    logic3_raw_eqFunction_6971,
    logic3_raw_eqFunction_7003,
    logic3_raw_eqFunction_7004,
    logic3_raw_eqFunction_7006,
    logic3_raw_eqFunction_7007,
    logic3_raw_eqFunction_7011,
    logic3_raw_eqFunction_7012,
    logic3_raw_eqFunction_7013,
    logic3_raw_eqFunction_7015,
    logic3_raw_eqFunction_7016,
    logic3_raw_eqFunction_7017,
    logic3_raw_eqFunction_7022,
    logic3_raw_eqFunction_7025,
    logic3_raw_eqFunction_7026,
    logic3_raw_eqFunction_7027,
    logic3_raw_eqFunction_7040,
    logic3_raw_eqFunction_7041,
    logic3_raw_eqFunction_7068,
    logic3_raw_eqFunction_7072,
    logic3_raw_eqFunction_7073,
    logic3_raw_eqFunction_7074,
    logic3_raw_eqFunction_7075,
    logic3_raw_eqFunction_7079,
    logic3_raw_eqFunction_7085,
    logic3_raw_eqFunction_7093,
    logic3_raw_eqFunction_7113,
    logic3_raw_eqFunction_7114,
    logic3_raw_eqFunction_7115,
    logic3_raw_eqFunction_7118,
    logic3_raw_eqFunction_7127,
    logic3_raw_eqFunction_7151,
    logic3_raw_eqFunction_7152,
    logic3_raw_eqFunction_7153,
    logic3_raw_eqFunction_7185,
    logic3_raw_eqFunction_7186,
    logic3_raw_eqFunction_7188,
    logic3_raw_eqFunction_7189,
    logic3_raw_eqFunction_7193,
    logic3_raw_eqFunction_7194,
    logic3_raw_eqFunction_7195,
    logic3_raw_eqFunction_7197,
    logic3_raw_eqFunction_7198,
    logic3_raw_eqFunction_7199,
    logic3_raw_eqFunction_7204,
    logic3_raw_eqFunction_7207,
    logic3_raw_eqFunction_7208,
    logic3_raw_eqFunction_7209,
    logic3_raw_eqFunction_7222,
    logic3_raw_eqFunction_7223,
    logic3_raw_eqFunction_7250,
    logic3_raw_eqFunction_7254,
    logic3_raw_eqFunction_7255,
    logic3_raw_eqFunction_7256,
    logic3_raw_eqFunction_7257,
    logic3_raw_eqFunction_7261,
    logic3_raw_eqFunction_7267,
    logic3_raw_eqFunction_7275,
    logic3_raw_eqFunction_7295,
    logic3_raw_eqFunction_7296,
    logic3_raw_eqFunction_7297,
    logic3_raw_eqFunction_7300,
    logic3_raw_eqFunction_7309,
    logic3_raw_eqFunction_7333,
    logic3_raw_eqFunction_7334,
    logic3_raw_eqFunction_7335,
    logic3_raw_eqFunction_7367,
    logic3_raw_eqFunction_7368,
    logic3_raw_eqFunction_7370,
    logic3_raw_eqFunction_7371,
    logic3_raw_eqFunction_7375,
    logic3_raw_eqFunction_7376,
    logic3_raw_eqFunction_7377,
    logic3_raw_eqFunction_7379,
    logic3_raw_eqFunction_7380,
    logic3_raw_eqFunction_7381,
    logic3_raw_eqFunction_7386,
    logic3_raw_eqFunction_7389,
    logic3_raw_eqFunction_7390,
    logic3_raw_eqFunction_7391,
    logic3_raw_eqFunction_7404,
    logic3_raw_eqFunction_7405,
    logic3_raw_eqFunction_7432,
    logic3_raw_eqFunction_7436,
    logic3_raw_eqFunction_7437,
    logic3_raw_eqFunction_7438,
    logic3_raw_eqFunction_7439,
    logic3_raw_eqFunction_7443,
    logic3_raw_eqFunction_7449,
    logic3_raw_eqFunction_7457,
    logic3_raw_eqFunction_7474,
    logic3_raw_eqFunction_7475,
    logic3_raw_eqFunction_7476,
    logic3_raw_eqFunction_7477,
    logic3_raw_eqFunction_7482,
    logic3_raw_eqFunction_7483,
    logic3_raw_eqFunction_7491,
    logic3_raw_eqFunction_7505,
    logic3_raw_eqFunction_7506,
    logic3_raw_eqFunction_7508,
    logic3_raw_eqFunction_7509,
    logic3_raw_eqFunction_7510,
    logic3_raw_eqFunction_7519,
    logic3_raw_eqFunction_7520,
    logic3_raw_eqFunction_7521,
    logic3_raw_eqFunction_7524,
    logic3_raw_eqFunction_7525,
    logic3_raw_eqFunction_7526,
    logic3_raw_eqFunction_7535,
    logic3_raw_eqFunction_7536,
    logic3_raw_eqFunction_7553,
    logic3_raw_eqFunction_7554,
    logic3_raw_eqFunction_7556,
    logic3_raw_eqFunction_7557,
    logic3_raw_eqFunction_7561,
    logic3_raw_eqFunction_7562,
    logic3_raw_eqFunction_7563,
    logic3_raw_eqFunction_7565,
    logic3_raw_eqFunction_7566,
    logic3_raw_eqFunction_7567,
    logic3_raw_eqFunction_7572,
    logic3_raw_eqFunction_7575,
    logic3_raw_eqFunction_7576,
    logic3_raw_eqFunction_7577,
    logic3_raw_eqFunction_7590,
    logic3_raw_eqFunction_7591,
    logic3_raw_eqFunction_7614,
    logic3_raw_eqFunction_7625,
    logic3_raw_eqFunction_7641,
    logic3_raw_eqFunction_7649,
    logic3_raw_eqFunction_7650,
    logic3_raw_eqFunction_7658,
    logic3_raw_eqFunction_7659,
    logic3_raw_eqFunction_7660,
    logic3_raw_eqFunction_7661,
    logic3_raw_eqFunction_7663,
    logic3_raw_eqFunction_7679,
    logic3_raw_eqFunction_7725,
    logic3_raw_eqFunction_7726,
    logic3_raw_eqFunction_7730,
    logic3_raw_eqFunction_7731,
    logic3_raw_eqFunction_7732,
    logic3_raw_eqFunction_7733,
    logic3_raw_eqFunction_7734,
    logic3_raw_eqFunction_7735,
    logic3_raw_eqFunction_7736,
    logic3_raw_eqFunction_7749,
    logic3_raw_eqFunction_7750,
    logic3_raw_eqFunction_7753,
    logic3_raw_eqFunction_7754,
    logic3_raw_eqFunction_7772,
    logic3_raw_eqFunction_7773,
    logic3_raw_eqFunction_7774,
    logic3_raw_eqFunction_7775,
    logic3_raw_eqFunction_7776,
    logic3_raw_eqFunction_7777
  };
  
  for (int id = 0; id < 480; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif