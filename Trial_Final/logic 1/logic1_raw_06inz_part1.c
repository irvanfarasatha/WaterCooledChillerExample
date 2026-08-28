#include "logic1_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 495
type: SIMPLE_ASSIGN
valByp.Kv_SI = valByp.m_flow_nominal / sqrt(valByp.dpValve_nominal)
*/
void logic1_raw_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  modelica_real tmp72;
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* valByp.dpValve_nominal PARAM */);
  if(!(tmp72 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.dpValve_nominal) was %g should be >= 0", tmp72);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* valByp.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2836]] /* valByp.m_flow_nominal PARAM */),sqrt(tmp72),"sqrt(valByp.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 495;
}

/*
equation index: 496
type: SIMPLE_ASSIGN
valByp.Kv = 1.1384199576606166e6 * valByp.Kv_SI / valByp.rhoStd
*/
void logic1_raw_eqFunction_496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* valByp.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* valByp.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.rhoStd PARAM */),"valByp.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 496;
}

/*
equation index: 497
type: SIMPLE_ASSIGN
valByp.Cv = 83036.13671167512 * valByp.Kv_SI / (valByp.rhoStd * 0.0631)
*/
void logic1_raw_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* valByp.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* valByp.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.rhoStd PARAM */)) * (0.0631),"valByp.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 497;
}

/*
equation index: 498
type: SIMPLE_ASSIGN
valByp.Av = valByp.Kv_SI / sqrt(valByp.rhoStd)
*/
void logic1_raw_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  modelica_real tmp73;
  tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.rhoStd PARAM */);
  if(!(tmp73 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.rhoStd) was %g should be >= 0", tmp73);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* valByp.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2823]] /* valByp.Kv_SI PARAM */),sqrt(tmp73),"sqrt(valByp.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 498;
}
extern void logic1_raw_eqFunction_3133(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3134(DATA *data, threadData_t *threadData);


/*
equation index: 501
type: SIMPLE_ASSIGN
TCWEntTow.T = TCWEntTow.T_start
*/
void logic1_raw_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* TCWEntTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* TCWEntTow.T_start PARAM */);
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
TCWLeaTow.T = TCWLeaTow.T_start
*/
void logic1_raw_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* TCWLeaTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* TCWLeaTow.T_start PARAM */);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
TCHWEntChi.T = TCHWEntChi.T_start
*/
void logic1_raw_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* TCHWEntChi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* TCHWEntChi.T_start PARAM */);
  threadData->lastEquationSolved = 503;
}

/*
equation index: 504
type: SIMPLE_ASSIGN
TAirSup.T = TAirSup.T_start
*/
void logic1_raw_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TAirSup.T_start PARAM */);
  threadData->lastEquationSolved = 504;
}

/*
equation index: 505
type: SIMPLE_ASSIGN
TCHWChi1Out.T = TCHWChi1Out.T_start
*/
void logic1_raw_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWChi1Out.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* TCHWChi1Out.T_start PARAM */);
  threadData->lastEquationSolved = 505;
}

/*
equation index: 506
type: SIMPLE_ASSIGN
TCHWChi1In.T = TCHWChi1In.T_start
*/
void logic1_raw_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWChi1In.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* TCHWChi1In.T_start PARAM */);
  threadData->lastEquationSolved = 506;
}
extern void logic1_raw_eqFunction_3625(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3626(DATA *data, threadData_t *threadData);


/*
equation index: 509
type: ALGORITHM

  chwPump1PID.requestMoreChiller := $START.chwPump1PID.requestMoreChiller;
  chwPump1PID.mCHWRaw := $START.chwPump1PID.mCHWRaw;
  chwPump1PID.mCHWSet := $START.chwPump1PID.mCHWSet;
  chwPump1PID.nextControlTime := $START.chwPump1PID.nextControlTime;
  chwPump1PID.lastControlTime := $START.chwPump1PID.lastControlTime;
  chwPump1PID.dTErrSample := $START.chwPump1PID.dTErrSample;
  chwPump1PID.dTErrInt := $START.chwPump1PID.dTErrInt;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := time >= $PRE.chwPump1PID.nextControlTime;
  chwPump1PID.dTErrInt := 0.0;
  chwPump1PID.dTErrSample := chwPump1PID.dTErr;
  chwPump1PID.lastControlTime := time;
  chwPump1PID.nextControlTime := time + chwPump1PID.internalSamplePeriod;
  chwPump1PID.mCHWSet := chwPump1PID.mCHWStart;
  chwPump1PID.mCHWRaw := chwPump1PID.mCHWStart;
  chwPump1PID.requestMoreChiller := false;
*/
void logic1_raw_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  modelica_boolean tmp74;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* chwPump1PID.requestMoreChiller DISCRETE */) = (data->modelData->booleanVarsData[8] /* chwPump1PID.requestMoreChiller DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwPump1PID.mCHWRaw DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1339] /* chwPump1PID.mCHWRaw DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* chwPump1PID.mCHWSet DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1340] /* chwPump1PID.mCHWSet DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* chwPump1PID.nextControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1341] /* chwPump1PID.nextControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwPump1PID.lastControlTime DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1338] /* chwPump1PID.lastControlTime DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* chwPump1PID.dTErrSample DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1337] /* chwPump1PID.dTErrSample DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* chwPump1PID.dTErrInt DISCRETE */) = ((modelica_real *)((data->modelData->realVarsData[1336] /* chwPump1PID.dTErrInt DISCRETE */).attribute .start.data))[0];

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (data->modelData->booleanVarsData[0] /* $whenCondition1 DISCRETE */).attribute .start;

  tmp74 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1341] /* chwPump1PID.nextControlTime DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp74;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* chwPump1PID.dTErrInt DISCRETE */) = 0.0;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* chwPump1PID.dTErrSample DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* chwPump1PID.dTErr variable */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* chwPump1PID.lastControlTime DISCRETE */) = data->localData[0]->timeValue;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* chwPump1PID.nextControlTime DISCRETE */) = data->localData[0]->timeValue + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[428]] /* chwPump1PID.internalSamplePeriod PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* chwPump1PID.mCHWSet DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* chwPump1PID.mCHWStart PARAM */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* chwPump1PID.mCHWRaw DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* chwPump1PID.mCHWStart PARAM */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* chwPump1PID.requestMoreChiller DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 509;
}
extern void logic1_raw_eqFunction_3628(DATA *data, threadData_t *threadData);


/*
equation index: 511
type: SIMPLE_ASSIGN
val6.Kv_SI = val6.m_flow_nominal / sqrt(val6.dpValve_nominal)
*/
void logic1_raw_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  modelica_real tmp75;
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* val6.dpValve_nominal PARAM */);
  if(!(tmp75 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.dpValve_nominal) was %g should be >= 0", tmp75);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val6.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2742]] /* val6.m_flow_nominal PARAM */),sqrt(tmp75),"sqrt(val6.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 511;
}

/*
equation index: 512
type: SIMPLE_ASSIGN
val6.Kv = 1.1384199576606166e6 * val6.Kv_SI / val6.rhoStd
*/
void logic1_raw_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2730]] /* val6.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val6.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.rhoStd PARAM */),"val6.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
val6.Cv = 83036.13671167512 * val6.Kv_SI / (val6.rhoStd * 0.0631)
*/
void logic1_raw_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* val6.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val6.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.rhoStd PARAM */)) * (0.0631),"val6.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 513;
}

/*
equation index: 514
type: SIMPLE_ASSIGN
val6.Av = val6.Kv_SI / sqrt(val6.rhoStd)
*/
void logic1_raw_eqFunction_514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,514};
  modelica_real tmp76;
  tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.rhoStd PARAM */);
  if(!(tmp76 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.rhoStd) was %g should be >= 0", tmp76);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val6.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val6.Kv_SI PARAM */),sqrt(tmp76),"sqrt(val6.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 514;
}
extern void logic1_raw_eqFunction_3172(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3173(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_517(DATA*, threadData_t*);
/*
equation index: 518
indexNonlinear: 5
type: NONLINEAR

vars: {val6.dp}
eqns: {517}
*/
void logic1_raw_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 518 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,518};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 518 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
chi.sta2_start.p = chi.p2_start
*/
void logic1_raw_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* chi.sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[135]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
chi.sta2_start.T = chi.T2_start
*/
void logic1_raw_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi.sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 520;
}

/*
equation index: 521
type: SIMPLE_ASSIGN
chi.h2_outflow_start = logic1.chi.Medium2.specificEnthalpy(chi.sta2_start)
*/
void logic1_raw_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  logic1_chi_Medium2_ThermodynamicState tmp77;
  logic1_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp77, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[202]] /* chi.sta2_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi.sta2_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* chi.h2_outflow_start PARAM */) = omc_logic1_chi_Medium2_specificEnthalpy(threadData, tmp77);
  threadData->lastEquationSolved = 521;
}

/*
equation index: 522
type: SIMPLE_ASSIGN
$START.val6.port_b.h_outflow = chi.h2_outflow_start
*/
void logic1_raw_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  ((modelica_real *)((data->modelData->realVarsData[1220] /* val6.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[127]] /* chi.h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[1220] /* val6.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1220] /* val6.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 522;
}

/*
equation index: 523
type: SIMPLE_ASSIGN
chi.sta1_start.p = chi.p1_start
*/
void logic1_raw_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* chi.sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 523;
}

/*
equation index: 524
type: SIMPLE_ASSIGN
chi.sta1_start.T = chi.T1_start
*/
void logic1_raw_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* chi.sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 524;
}

/*
equation index: 525
type: SIMPLE_ASSIGN
chi.h1_outflow_start = logic1.chi.Medium1.specificEnthalpy(chi.sta1_start)
*/
void logic1_raw_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  logic1_chi_Medium1_ThermodynamicState tmp78;
  logic1_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* chi.sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* chi.sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* chi.h1_outflow_start PARAM */) = omc_logic1_chi_Medium1_specificEnthalpy(threadData, tmp78);
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$START.TCWLeaTow.port_a.h_outflow = chi.h1_outflow_start
*/
void logic1_raw_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  ((modelica_real *)((data->modelData->realVarsData[324] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* chi.h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[324] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[324] /* TCWLeaTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T = chi.vol2.dynBal.T_start
*/
void logic1_raw_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* chi.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T_degC = -273.15 + chi.vol2.dynBal.medium.T
*/
void logic1_raw_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* chi.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
val6.port_b.h_outflow = 4184.0 * chi.vol2.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* chi.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 529;
}
extern void logic1_raw_eqFunction_3546(DATA *data, threadData_t *threadData);


/*
equation index: 531
type: SIMPLE_ASSIGN
chi.vol2.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, junCHWSup.port_3.h_outflow, val6.port_b.h_outflow)
*/
void logic1_raw_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* chi.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 531;
}

/*
equation index: 532
type: SIMPLE_ASSIGN
chi.vol2.dynBal.U = chi.vol2.dynBal.m * val6.port_b.h_outflow
*/
void logic1_raw_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* chi.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 532;
}

/*
equation index: 533
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T = chi.vol1.dynBal.T_start
*/
void logic1_raw_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* chi.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T_degC = -273.15 + chi.vol1.dynBal.medium.T
*/
void logic1_raw_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 534;
}

/*
equation index: 535
type: SIMPLE_ASSIGN
TCWLeaTow.port_a.h_outflow = 4184.0 * chi.vol1.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 535;
}
extern void logic1_raw_eqFunction_3004(DATA *data, threadData_t *threadData);


/*
equation index: 537
type: SIMPLE_ASSIGN
TCWLeaTow.T_b_inflow = logic1.TCWLeaTow.Medium.temperature(logic1.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWLeaTow.T_b_inflow variable */) = omc_logic1_TCWLeaTow_Medium_temperature(threadData, omc_logic1_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
chi.vol1.dynBal.U = chi.vol1.dynBal.m * TCWLeaTow.port_a.h_outflow
*/
void logic1_raw_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* chi.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* chi.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
expVesChi.m = expVesChi.V_start * expVesChi.rho_start
*/
void logic1_raw_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesChi.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1332]] /* expVesChi.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* expVesChi.rho_start PARAM */));
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: SIMPLE_ASSIGN
expVesChi.H = expVesChi.m * logic1.expVesChi.Medium.specificInternalEnergy(logic1.expVesChi.Medium.setState_pTX(expVesChi.p_start, expVesChi.T_start, {}))
*/
void logic1_raw_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* expVesChi.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesChi.m STATE(1) */)) * (omc_logic1_expVesChi_Medium_specificInternalEnergy(threadData, omc_logic1_expVesChi_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1331]] /* expVesChi.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 540;
}
extern void logic1_raw_eqFunction_3002(DATA *data, threadData_t *threadData);


/*
equation index: 542
type: SIMPLE_ASSIGN
TCWEntTow.port_b.h_outflow = (max(val5.m_flow, 1e-7) * TCWLeaTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(val5.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */),1e-7),"1e-7 + max(val5.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 542;
}

/*
equation index: 543
type: SIMPLE_ASSIGN
val1.Kv_SI = val1.m_flow_nominal / sqrt(val1.dpValve_nominal)
*/
void logic1_raw_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* val1.dpValve_nominal PARAM */);
  if(!(tmp79 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.dpValve_nominal) was %g should be >= 0", tmp79);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* val1.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2696]] /* val1.m_flow_nominal PARAM */),sqrt(tmp79),"sqrt(val1.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: SIMPLE_ASSIGN
val1.Kv = 1.1384199576606166e6 * val1.Kv_SI / val1.rhoStd
*/
void logic1_raw_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* val1.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* val1.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.rhoStd PARAM */),"val1.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 544;
}

/*
equation index: 545
type: SIMPLE_ASSIGN
val1.Cv = 83036.13671167512 * val1.Kv_SI / (val1.rhoStd * 0.0631)
*/
void logic1_raw_eqFunction_545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* val1.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* val1.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.rhoStd PARAM */)) * (0.0631),"val1.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 545;
}

/*
equation index: 546
type: SIMPLE_ASSIGN
val1.Av = val1.Kv_SI / sqrt(val1.rhoStd)
*/
void logic1_raw_eqFunction_546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,546};
  modelica_real tmp80;
  tmp80 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.rhoStd PARAM */);
  if(!(tmp80 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.rhoStd) was %g should be >= 0", tmp80);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* val1.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2683]] /* val1.Kv_SI PARAM */),sqrt(tmp80),"sqrt(val1.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 546;
}
extern void logic1_raw_eqFunction_3136(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3137(DATA *data, threadData_t *threadData);


/*
equation index: 549
type: SIMPLE_ASSIGN
val5.Kv_SI = val5.m_flow_nominal / sqrt(val5.dpValve_nominal)
*/
void logic1_raw_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  modelica_real tmp81;
  tmp81 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* val5.dpValve_nominal PARAM */);
  if(!(tmp81 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.dpValve_nominal) was %g should be >= 0", tmp81);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val5.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2719]] /* val5.m_flow_nominal PARAM */),sqrt(tmp81),"sqrt(val5.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 549;
}

/*
equation index: 550
type: SIMPLE_ASSIGN
val5.Kv = 1.1384199576606166e6 * val5.Kv_SI / val5.rhoStd
*/
void logic1_raw_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* val5.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val5.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.rhoStd PARAM */),"val5.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: SIMPLE_ASSIGN
val5.Cv = 83036.13671167512 * val5.Kv_SI / (val5.rhoStd * 0.0631)
*/
void logic1_raw_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* val5.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val5.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.rhoStd PARAM */)) * (0.0631),"val5.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
val5.Av = val5.Kv_SI / sqrt(val5.rhoStd)
*/
void logic1_raw_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  modelica_real tmp82;
  tmp82 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.rhoStd PARAM */);
  if(!(tmp82 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.rhoStd) was %g should be >= 0", tmp82);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* val5.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val5.Kv_SI PARAM */),sqrt(tmp82),"sqrt(val5.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 552;
}
extern void logic1_raw_eqFunction_3169(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3170(DATA *data, threadData_t *threadData);


/*
equation index: 555
type: SIMPLE_ASSIGN
val5.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val5.m_flow, val5.k, val5.m_flow_turbulent), val5.dp_nominal_pos * val5.m_flow / val5.m_flow_nominal_pos)
*/
void logic1_raw_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val5.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val5.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2722]] /* val5.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* val5.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_nominal_pos PARAM */),"val5.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 555;
}
extern void logic1_raw_eqFunction_3188(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3189(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3192(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3191(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3190(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3193(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3205(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3194(DATA *data, threadData_t *threadData);


/*
equation index: 564
type: SIMPLE_ASSIGN
TCWEntTow.T_a_inflow = logic1.TCWEntTow.Medium.temperature(logic1.TCWEntTow.Medium.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWEntTow.T_a_inflow variable */) = omc_logic1_TCWEntTow_Medium_temperature(threadData, omc_logic1_TCWEntTow_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 564;
}

/*
equation index: 565
type: SIMPLE_ASSIGN
pumCW.eff.hydDer[1] = 0.0
*/
void logic1_raw_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 565;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
pumCW.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, pumCW.VMachine_flow, pumCW.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW.eff.hydDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  real_array tmp83;
  real_array tmp84;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp85;
  real_array tmp86;
  real_array tmp87;
  real_array tmp88;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp89;
  real_array tmp90;
  real_array_create(&tmp83, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp84, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp85, tmp83, tmp84);
  real_array_create(&tmp86, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp87, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp88, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp89, tmp87, tmp88);
  real_array_create(&tmp90, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* pumCW.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp85, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* pumCW.VMachine_flow variable */), tmp86, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp89, 0.012615873967693397, tmp90, 1.0, 0.05));
  threadData->lastEquationSolved = 566;
}
extern void logic1_raw_eqFunction_3207(DATA *data, threadData_t *threadData);


/*
equation index: 568
type: SIMPLE_ASSIGN
pumCW.eff.motDer[1] = 0.0
*/
void logic1_raw_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2433]] /* pumCW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 568;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
pumCW.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, pumCW.VMachine_flow, pumCW.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, 0.012615873967693397, pumCW.eff.motDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  real_array tmp91;
  real_array tmp92;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp93;
  real_array tmp94;
  real_array tmp95;
  real_array tmp96;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp97;
  real_array tmp98;
  real_array_create(&tmp91, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2456]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp92, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2457]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp93, tmp91, tmp92);
  real_array_create(&tmp94, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2433]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp95, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2456]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2457]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp97, tmp95, tmp96);
  real_array_create(&tmp98, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2433]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* pumCW.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp93, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* pumCW.VMachine_flow variable */), tmp94, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp97, 0.012615873967693397, tmp98, 1.0, 0.05));
  threadData->lastEquationSolved = 569;
}
extern void logic1_raw_eqFunction_3204(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3206(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3208(DATA *data, threadData_t *threadData);


/*
equation index: 573
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCW.VMachine_flow) + -2.5231747935386794e-5 > 1.2615873967693397e-5) then pumCW.heaDis.QThe_flow else if noEvent(abs(pumCW.VMachine_flow) + -2.5231747935386794e-5 < -1.2615873967693397e-5) then 0.0 else 0.25 * (2.0 - 79265.21797544822 * abs(pumCW.VMachine_flow)) * ((79265.21797544822 * abs(pumCW.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCW.heaDis.QThe_flow + 0.5 * pumCW.heaDis.QThe_flow), 0.0)
*/
void logic1_raw_eqFunction_573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,573};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  tmp99 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* pumCW.VMachine_flow variable */)) + -2.5231747935386794e-5,1.2615873967693397e-5);
  tmp104 = (modelica_boolean)tmp99;
  if(tmp104)
  {
    tmp105 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* pumCW.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp100 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* pumCW.VMachine_flow variable */)) + -2.5231747935386794e-5,-1.2615873967693397e-5);
    tmp102 = (modelica_boolean)tmp100;
    if(tmp102)
    {
      tmp103 = 0.0;
    }
    else
    {
      tmp101 = (79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* pumCW.VMachine_flow variable */))) + -2.0;
      tmp103 = (0.25) * (((2.0 - ((79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* pumCW.VMachine_flow variable */))))) * ((tmp101 * tmp101) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* pumCW.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* pumCW.heaDis.QThe_flow variable */));
    }
    tmp105 = tmp103;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* pumCW.PToMed.u1 variable */) = homotopy(tmp105, 0.0);
  threadData->lastEquationSolved = 573;
}
extern void logic1_raw_eqFunction_3210(DATA *data, threadData_t *threadData);


/*
equation index: 575
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T = pumCW.vol.dynBal.T_start
*/
void logic1_raw_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* pumCW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2521]] /* pumCW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 575;
}

/*
equation index: 576
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T_degC = -273.15 + pumCW.vol.dynBal.medium.T
*/
void logic1_raw_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* pumCW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* pumCW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 576;
}

/*
equation index: 577
type: SIMPLE_ASSIGN
TCWLeaTow.port_b.h_outflow = 4184.0 * pumCW.vol.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* pumCW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 577;
}

/*
equation index: 578
type: SIMPLE_ASSIGN
pumCW.preSou.V_flow = val5.m_flow / Modelica.Fluid.Utilities.regStep(val5.m_flow, logic1.pumCW.preSou.Medium.density(logic1.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), logic1.pumCW.preSou.Medium.density(logic1.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)
*/
void logic1_raw_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* pumCW.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */), omc_logic1_pumCW_preSou_Medium_density(threadData, omc_logic1_pumCW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT83)), omc_logic1_pumCW_preSou_Medium_density(threadData, omc_logic1_pumCW_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2506]] /* pumCW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(val5.m_flow, logic1.pumCW.preSou.Medium.density(logic1.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), logic1.pumCW.preSou.Medium.density(logic1.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 578;
}
extern void logic1_raw_eqFunction_3197(DATA *data, threadData_t *threadData);


/*
equation index: 580
type: SIMPLE_ASSIGN
TCWLeaTow.T_a_inflow = logic1.TCWLeaTow.Medium.temperature(logic1.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWLeaTow.T_a_inflow variable */) = omc_logic1_TCWLeaTow_Medium_temperature(threadData, omc_logic1_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 580;
}
extern void logic1_raw_eqFunction_3215(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3216(DATA *data, threadData_t *threadData);


/*
equation index: 583
type: SIMPLE_ASSIGN
chi.TConEnt = logic1.chi.Medium1.temperature(logic1.chi.Medium1.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {1.0}))
*/
void logic1_raw_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* chi.TConEnt variable */) = omc_logic1_chi_Medium1_temperature(threadData, omc_logic1_chi_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 583;
}
extern void logic1_raw_eqFunction_2997(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3212(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2992(DATA *data, threadData_t *threadData);


/*
equation index: 587
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_a.h_outflow, TCWLeaTow.port_b.h_outflow)
*/
void logic1_raw_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* pumCW.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.U = pumCW.vol.dynBal.m * TCWLeaTow.port_b.h_outflow
*/
void logic1_raw_eqFunction_588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* pumCW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* pumCW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: ARRAY_CALL_ASSIGN

cooTow.fanRelPowDer = Buildings.Utilities.Math.Functions.splineDerivatives(cooTow.fanRelPow.r_V, cooTow.fanRelPow.r_P, Buildings.Utilities.Math.Functions.isMonotonic(cooTow.fanRelPow.r_P, false))
*/
void logic1_raw_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  real_array tmp106;
  real_array tmp107;
  real_array tmp108;
  real_array tmp109;
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp107, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp108, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp109, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp106, tmp107, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp108, 0 /* false */)), tmp109);
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
cooTow.PFan = Buildings.Utilities.Math.Functions.spliceFunction(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, cooTow.FRAir, cooTow.fanRelPowDer) * cooTow.PFan_nominal, 0.0, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic1_raw_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  real_array tmp110;
  real_array tmp111;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp112;
  real_array tmp113;
  real_array_create(&tmp110, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp111, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp112, tmp110, tmp111);
  real_array_create(&tmp113, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cooTow.PFan variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp112, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */), tmp113)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* cooTow.PFan_nominal PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 590;
}

void logic1_raw_eqFunction_591(DATA*, threadData_t*);
/*
equation index: 592
indexNonlinear: 6
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {591}
*/
void logic1_raw_eqFunction_592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,592};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 592 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,592};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 592 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 592;
}

/*
equation index: 593
type: SIMPLE_ASSIGN
cooTow.mRef_flow = cooTow.m_flow_nominal / cooTow.FRWat0
*/
void logic1_raw_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* cooTow.mRef_flow PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1074]] /* cooTow.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */),"cooTow.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 593;
}
extern void logic1_raw_eqFunction_3217(DATA *data, threadData_t *threadData);


/*
equation index: 595
type: SIMPLE_ASSIGN
cooTow.sta_start.p = cooTow.p_start
*/
void logic1_raw_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* cooTow.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 595;
}

/*
equation index: 596
type: SIMPLE_ASSIGN
cooTow.sta_start.T = cooTow.T_start
*/
void logic1_raw_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* cooTow.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 596;
}

/*
equation index: 597
type: SIMPLE_ASSIGN
cooTow.h_outflow_start = logic1.cooTow.Medium.specificEnthalpy(cooTow.sta_start)
*/
void logic1_raw_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  logic1_cooTow_Medium_ThermodynamicState tmp114;
  logic1_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp114, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1097]] /* cooTow.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1096]] /* cooTow.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* cooTow.h_outflow_start PARAM */) = omc_logic1_cooTow_Medium_specificEnthalpy(threadData, tmp114);
  threadData->lastEquationSolved = 597;
}

/*
equation index: 598
type: SIMPLE_ASSIGN
$START.TCWEntTow.port_a.h_outflow = cooTow.h_outflow_start
*/
void logic1_raw_eqFunction_598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,598};
  ((modelica_real *)((data->modelData->realVarsData[308] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* cooTow.h_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = ((modelica_real *)((data->modelData->realVarsData[308] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[308] /* TCWEntTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 598;
}

/*
equation index: 599
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T = 0.0
*/
void logic1_raw_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 599;
}

/*
equation index: 600
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T_degC = $DER.cooTow.vol.dynBal.medium.T
*/
void logic1_raw_eqFunction_600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 600;
}

/*
equation index: 601
type: SIMPLE_ASSIGN
$DER.TCWEntTow.port_a.h_outflow = 4184.0 * $DER.cooTow.vol.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* der(TCWEntTow.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 601;
}

/*
equation index: 602
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * $DER.TCWEntTow.port_a.h_outflow
*/
void logic1_raw_eqFunction_602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* der(cooTow.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* der(TCWEntTow.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 602;
}

void logic1_raw_eqFunction_603(DATA*, threadData_t*);
void logic1_raw_eqFunction_604(DATA*, threadData_t*);
void logic1_raw_eqFunction_605(DATA*, threadData_t*);
void logic1_raw_eqFunction_606(DATA*, threadData_t*);
void logic1_raw_eqFunction_607(DATA*, threadData_t*);
void logic1_raw_eqFunction_608(DATA*, threadData_t*);
void logic1_raw_eqFunction_609(DATA*, threadData_t*);
void logic1_raw_eqFunction_610(DATA*, threadData_t*);
void logic1_raw_eqFunction_611(DATA*, threadData_t*);
void logic1_raw_eqFunction_612(DATA*, threadData_t*);
void logic1_raw_eqFunction_613(DATA*, threadData_t*);
void logic1_raw_eqFunction_614(DATA*, threadData_t*);
void logic1_raw_eqFunction_615(DATA*, threadData_t*);
void logic1_raw_eqFunction_616(DATA*, threadData_t*);
/*
equation index: 617
indexNonlinear: 7
type: NONLINEAR

vars: {TCWEntTow.port_a.h_outflow}
eqns: {603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616}
*/
void logic1_raw_eqFunction_617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,617};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 617 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,617};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 617 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  threadData->lastEquationSolved = 617;
}
extern void logic1_raw_eqFunction_3670(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3671(DATA *data, threadData_t *threadData);


/*
equation index: 620
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * TCWEntTow.port_a.h_outflow
*/
void logic1_raw_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* cooTow.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 620;
}

/*
equation index: 621
type: SIMPLE_ASSIGN
TCWEntTow.T_b_inflow = logic1.TCWEntTow.Medium.temperature(logic1.TCWEntTow.Medium.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWEntTow.T_b_inflow variable */) = omc_logic1_TCWEntTow_Medium_temperature(threadData, omc_logic1_TCWEntTow_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), _OMC_LIT83));
  threadData->lastEquationSolved = 621;
}
extern void logic1_raw_eqFunction_3679(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3680(DATA *data, threadData_t *threadData);


/*
equation index: 624
type: SIMPLE_ASSIGN
chi.vol1.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, (max(-val5.m_flow, 1e-7) * TCWEntTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(-val5.m_flow, 1e-7)), TCWLeaTow.port_a.h_outflow)
*/
void logic1_raw_eqFunction_624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* chi.vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),1e-7),"1e-7 + max(-val5.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 624;
}
extern void logic1_raw_eqFunction_3674(DATA *data, threadData_t *threadData);


/*
equation index: 626
type: SIMPLE_ASSIGN
chi.state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val5.m_flow, 1e-7) * TCWEntTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(-val5.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* chi.state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),1e-7),"1e-7 + max(-val5.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 626;
}
extern void logic1_raw_eqFunction_3684(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3685(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3686(DATA *data, threadData_t *threadData);


/*
equation index: 630
type: SIMPLE_ASSIGN
expVesCHW.m = expVesCHW.V_start * expVesCHW.rho_start
*/
void logic1_raw_eqFunction_630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1323]] /* expVesCHW.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1328]] /* expVesCHW.rho_start PARAM */));
  threadData->lastEquationSolved = 630;
}

/*
equation index: 631
type: SIMPLE_ASSIGN
expVesCHW.H = expVesCHW.m * logic1.expVesCHW.Medium.specificInternalEnergy(logic1.expVesCHW.Medium.setState_pTX(expVesCHW.p_start, expVesCHW.T_start, {}))
*/
void logic1_raw_eqFunction_631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* expVesCHW.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */)) * (omc_logic1_expVesCHW_Medium_specificInternalEnergy(threadData, omc_logic1_expVesCHW_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1322]] /* expVesCHW.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 631;
}
extern void logic1_raw_eqFunction_2990(DATA *data, threadData_t *threadData);


/*
equation index: 633
type: SIMPLE_ASSIGN
pumCHW.eff.hydDer[1] = 0.0
*/
void logic1_raw_eqFunction_633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 633;
}

/*
equation index: 634
type: SIMPLE_ASSIGN
pumCHW.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, pumCHW.VMachine_flow, pumCHW.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW.eff.hydDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,634};
  real_array tmp115;
  real_array tmp116;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp117;
  real_array tmp118;
  real_array tmp119;
  real_array tmp120;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp121;
  real_array tmp122;
  real_array_create(&tmp115, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp117, tmp115, tmp116);
  real_array_create(&tmp118, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp119, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp120, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp121, tmp119, tmp120);
  real_array_create(&tmp122, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* pumCHW.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp117, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */), tmp118, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp121, 0.025231747935386795, tmp122, 1.0, 0.05));
  threadData->lastEquationSolved = 634;
}

/*
equation index: 635
type: SIMPLE_ASSIGN
pumCHW.eff.motDer[1] = 0.0
*/
void logic1_raw_eqFunction_635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2177]] /* pumCHW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 635;
}

/*
equation index: 636
type: SIMPLE_ASSIGN
pumCHW.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, pumCHW.VMachine_flow, pumCHW.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, 0.025231747935386795, pumCHW.eff.motDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,636};
  real_array tmp123;
  real_array tmp124;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp125;
  real_array tmp126;
  real_array tmp127;
  real_array tmp128;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp129;
  real_array tmp130;
  real_array_create(&tmp123, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp124, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp125, tmp123, tmp124);
  real_array_create(&tmp126, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2177]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp127, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2200]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2201]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp129, tmp127, tmp128);
  real_array_create(&tmp130, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2177]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp125, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */), tmp126, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp129, 0.025231747935386795, tmp130, 1.0, 0.05));
  threadData->lastEquationSolved = 636;
}
extern void logic1_raw_eqFunction_3164(DATA *data, threadData_t *threadData);


/*
equation index: 638
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T = pumCHW.vol.dynBal.T_start
*/
void logic1_raw_eqFunction_638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* pumCHW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2265]] /* pumCHW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 638;
}

/*
equation index: 639
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T_degC = -273.15 + pumCHW.vol.dynBal.medium.T
*/
void logic1_raw_eqFunction_639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* pumCHW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* pumCHW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 639;
}

/*
equation index: 640
type: SIMPLE_ASSIGN
pumCHW.port_a.h_outflow = 4184.0 * pumCHW.vol.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* pumCHW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 640;
}

/*
equation index: 641
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, pumCHW.port_a.h_outflow, junCHWRet.port_3.h_outflow)
*/
void logic1_raw_eqFunction_641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* junCHWRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 641;
}
extern void logic1_raw_eqFunction_3166(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3544(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2987(DATA *data, threadData_t *threadData);


/*
equation index: 645
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, val6.port_b.h_outflow, pumCHW.port_a.h_outflow)
*/
void logic1_raw_eqFunction_645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* pumCHW.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 645;
}
extern void logic1_raw_eqFunction_3558(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3559(DATA *data, threadData_t *threadData);


/*
equation index: 648
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.U = pumCHW.vol.dynBal.m * pumCHW.port_a.h_outflow
*/
void logic1_raw_eqFunction_648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* pumCHW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* pumCHW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 648;
}

/*
equation index: 649
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta2_start.T = cooCoi.ele[4].T2_start
*/
void logic1_raw_eqFunction_649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* cooCoi.ele[4].T2_start PARAM */);
  threadData->lastEquationSolved = 649;
}

/*
equation index: 650
type: ARRAY_CALL_ASSIGN

cooCoi.ele[4].sta2_start.X = cooCoi.ele[4].X2_start
*/
void logic1_raw_eqFunction_650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,650};
  real_array tmp131;
  real_array tmp132;
  real_array_create(&tmp131, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[515]] /* cooCoi.ele[4].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp132, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp131, tmp132);
  threadData->lastEquationSolved = 650;
}

/*
equation index: 651
type: SIMPLE_ASSIGN
cooCoi.ele[4].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[4].sta2_start.T) * (1.0 - cooCoi.ele[4].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[4].sta2_start.T)) * cooCoi.ele[4].sta2_start.X[1]
*/
void logic1_raw_eqFunction_651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,651};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[4].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[4].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 651;
}

/*
equation index: 652
type: SIMPLE_ASSIGN
$START.cooCoi.port_a2.h_outflow = cooCoi.ele[4].h2_outflow_start
*/
void logic1_raw_eqFunction_652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,652};
  ((modelica_real *)((data->modelData->realVarsData[693] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[4].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[693] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[693] /* cooCoi.port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 652;
}

/*
equation index: 653
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.p = cooCoi.ele[4].p1_start
*/
void logic1_raw_eqFunction_653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* cooCoi.ele[4].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 653;
}

/*
equation index: 654
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.T = cooCoi.ele[4].T1_start
*/
void logic1_raw_eqFunction_654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[4].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
cooCoi.ele[4].h1_outflow_start = logic1.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[4].sta1_start)
*/
void logic1_raw_eqFunction_655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,655};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp133;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp133, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* cooCoi.ele[4].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[4].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* cooCoi.ele[4].h1_outflow_start PARAM */) = omc_logic1_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp133);
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: SIMPLE_ASSIGN
$START.cooCoi.port_b1.h_outflow = cooCoi.ele[4].h1_outflow_start
*/
void logic1_raw_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  ((modelica_real *)((data->modelData->realVarsData[694] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* cooCoi.ele[4].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[694] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[694] /* cooCoi.port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic1_raw_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 657;
}
extern void logic1_raw_eqFunction_2975(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2976(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2977(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2978(DATA *data, threadData_t *threadData);


/*
equation index: 662
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T = 293.15
*/
void logic1_raw_eqFunction_662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 662;
}

/*
equation index: 663
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol2.dynBal.medium.T
*/
void logic1_raw_eqFunction_663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 663;
}

/*
equation index: 664
type: SIMPLE_ASSIGN
cooCoi.port_a2.h_outflow = 1006.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC * cooCoi.ele[4].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC) * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 664;
}
extern void logic1_raw_eqFunction_2981(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2982(DATA *data, threadData_t *threadData);


/*
equation index: 667
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.u = -84437.5 + cooCoi.port_a2.h_outflow
*/
void logic1_raw_eqFunction_667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 667;
}
extern void logic1_raw_eqFunction_2985(DATA *data, threadData_t *threadData);


/*
equation index: 669
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T = cooCoi.ele[4].vol1.dynBal.T_start
*/
void logic1_raw_eqFunction_669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 669;
}

/*
equation index: 670
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol1.dynBal.medium.T
*/
void logic1_raw_eqFunction_670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 670;
}

/*
equation index: 671
type: SIMPLE_ASSIGN
cooCoi.port_b1.h_outflow = 4184.0 * cooCoi.ele[4].vol1.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 671;
}
extern void logic1_raw_eqFunction_2966(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2967(DATA *data, threadData_t *threadData);


/*
equation index: 674
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.U = cooCoi.ele[4].vol1.dynBal.m * cooCoi.port_b1.h_outflow
*/
void logic1_raw_eqFunction_674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* cooCoi.ele[4].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 674;
}
extern void logic1_raw_eqFunction_2973(DATA *data, threadData_t *threadData);


/*
equation index: 676
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta2_start.T = cooCoi.ele[3].T2_start
*/
void logic1_raw_eqFunction_676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[499]] /* cooCoi.ele[3].T2_start PARAM */);
  threadData->lastEquationSolved = 676;
}

/*
equation index: 677
type: ARRAY_CALL_ASSIGN

cooCoi.ele[3].sta2_start.X = cooCoi.ele[3].X2_start
*/
void logic1_raw_eqFunction_677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,677};
  real_array tmp134;
  real_array tmp135;
  real_array_create(&tmp134, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[513]] /* cooCoi.ele[3].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp134, tmp135);
  threadData->lastEquationSolved = 677;
}

/*
equation index: 678
type: SIMPLE_ASSIGN
cooCoi.ele[3].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[3].sta2_start.T) * (1.0 - cooCoi.ele[3].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[3].sta2_start.T)) * cooCoi.ele[3].sta2_start.X[1]
*/
void logic1_raw_eqFunction_678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,678};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[3].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[731]] /* cooCoi.ele[3].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 678;
}

/*
equation index: 679
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_a2.h_outflow = cooCoi.ele[3].h2_outflow_start
*/
void logic1_raw_eqFunction_679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,679};
  ((modelica_real *)((data->modelData->realVarsData[525] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[539]] /* cooCoi.ele[3].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[525] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[525] /* cooCoi.ele[3].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 679;
}

/*
equation index: 680
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.p = cooCoi.ele[3].p1_start
*/
void logic1_raw_eqFunction_680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* cooCoi.ele[3].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[563]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 680;
}

/*
equation index: 681
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.T = cooCoi.ele[3].T1_start
*/
void logic1_raw_eqFunction_681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[3].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 681;
}

/*
equation index: 682
type: SIMPLE_ASSIGN
cooCoi.ele[3].h1_outflow_start = logic1.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[3].sta1_start)
*/
void logic1_raw_eqFunction_682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,682};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp136;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp136, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[711]] /* cooCoi.ele[3].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[3].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* cooCoi.ele[3].h1_outflow_start PARAM */) = omc_logic1_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp136);
  threadData->lastEquationSolved = 682;
}

/*
equation index: 683
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_b1.h_outflow = cooCoi.ele[3].h1_outflow_start
*/
void logic1_raw_eqFunction_683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,683};
  ((modelica_real *)((data->modelData->realVarsData[527] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* cooCoi.ele[3].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[527] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[527] /* cooCoi.ele[3].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 683;
}

/*
equation index: 684
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic1_raw_eqFunction_684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 684;
}
extern void logic1_raw_eqFunction_3710(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3716(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3719(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3720(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3721(DATA *data, threadData_t *threadData);


/*
equation index: 690
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T = 293.15
*/
void logic1_raw_eqFunction_690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 690;
}

/*
equation index: 691
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol2.dynBal.medium.T
*/
void logic1_raw_eqFunction_691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 691;
}

/*
equation index: 692
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_a2.h_outflow = 1006.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC * cooCoi.ele[3].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC) * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 692;
}
extern void logic1_raw_eqFunction_3712(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3714(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3715(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3713(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3711(DATA *data, threadData_t *threadData);


/*
equation index: 698
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[3].port_a2.h_outflow
*/
void logic1_raw_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 698;
}
extern void logic1_raw_eqFunction_3722(DATA *data, threadData_t *threadData);


/*
equation index: 700
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T = cooCoi.ele[3].vol1.dynBal.T_start
*/
void logic1_raw_eqFunction_700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 700;
}

/*
equation index: 701
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol1.dynBal.medium.T
*/
void logic1_raw_eqFunction_701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 701;
}

/*
equation index: 702
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_b1.h_outflow = 4184.0 * cooCoi.ele[3].vol1.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 702;
}
extern void logic1_raw_eqFunction_2957(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2968(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2958(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2956(DATA *data, threadData_t *threadData);


/*
equation index: 708
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.U = cooCoi.ele[3].vol1.dynBal.m * cooCoi.ele[3].port_b1.h_outflow
*/
void logic1_raw_eqFunction_708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* cooCoi.ele[3].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 708;
}
extern void logic1_raw_eqFunction_2964(DATA *data, threadData_t *threadData);


/*
equation index: 710
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta2_start.T = cooCoi.ele[2].T2_start
*/
void logic1_raw_eqFunction_710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[498]] /* cooCoi.ele[2].T2_start PARAM */);
  threadData->lastEquationSolved = 710;
}

/*
equation index: 711
type: ARRAY_CALL_ASSIGN

cooCoi.ele[2].sta2_start.X = cooCoi.ele[2].X2_start
*/
void logic1_raw_eqFunction_711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,711};
  real_array tmp137;
  real_array tmp138;
  real_array_create(&tmp137, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* cooCoi.ele[2].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp138, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp137, tmp138);
  threadData->lastEquationSolved = 711;
}

/*
equation index: 712
type: SIMPLE_ASSIGN
cooCoi.ele[2].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[2].sta2_start.T) * (1.0 - cooCoi.ele[2].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[2].sta2_start.T)) * cooCoi.ele[2].sta2_start.X[1]
*/
void logic1_raw_eqFunction_712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[2].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[2].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[735]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 712;
}

/*
equation index: 713
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_a2.h_outflow = cooCoi.ele[2].h2_outflow_start
*/
void logic1_raw_eqFunction_713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,713};
  ((modelica_real *)((data->modelData->realVarsData[524] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[538]] /* cooCoi.ele[2].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[524] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[524] /* cooCoi.ele[2].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 713;
}

/*
equation index: 714
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.p = cooCoi.ele[2].p1_start
*/
void logic1_raw_eqFunction_714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* cooCoi.ele[2].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[562]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 714;
}

/*
equation index: 715
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.T = cooCoi.ele[2].T1_start
*/
void logic1_raw_eqFunction_715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[2].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 715;
}

/*
equation index: 716
type: SIMPLE_ASSIGN
cooCoi.ele[2].h1_outflow_start = logic1.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[2].sta1_start)
*/
void logic1_raw_eqFunction_716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,716};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp139;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp139, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[710]] /* cooCoi.ele[2].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[2].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* cooCoi.ele[2].h1_outflow_start PARAM */) = omc_logic1_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp139);
  threadData->lastEquationSolved = 716;
}

/*
equation index: 717
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_b1.h_outflow = cooCoi.ele[2].h1_outflow_start
*/
void logic1_raw_eqFunction_717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,717};
  ((modelica_real *)((data->modelData->realVarsData[526] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* cooCoi.ele[2].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[526] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[526] /* cooCoi.ele[2].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 717;
}

/*
equation index: 718
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic1_raw_eqFunction_718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 718;
}
extern void logic1_raw_eqFunction_3727(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3734(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3737(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3738(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3739(DATA *data, threadData_t *threadData);


/*
equation index: 724
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T = 293.15
*/
void logic1_raw_eqFunction_724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 724;
}

/*
equation index: 725
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol2.dynBal.medium.T
*/
void logic1_raw_eqFunction_725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 725;
}

/*
equation index: 726
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_a2.h_outflow = 1006.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC * cooCoi.ele[2].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC) * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 726;
}
extern void logic1_raw_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3731(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3733(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3730(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3728(DATA *data, threadData_t *threadData);


/*
equation index: 733
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[2].port_a2.h_outflow
*/
void logic1_raw_eqFunction_733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 733;
}
extern void logic1_raw_eqFunction_3740(DATA *data, threadData_t *threadData);


/*
equation index: 735
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T = cooCoi.ele[2].vol1.dynBal.T_start
*/
void logic1_raw_eqFunction_735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 735;
}

/*
equation index: 736
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol1.dynBal.medium.T
*/
void logic1_raw_eqFunction_736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 736;
}

/*
equation index: 737
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_b1.h_outflow = 4184.0 * cooCoi.ele[2].vol1.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 737;
}
extern void logic1_raw_eqFunction_2948(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2959(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2970(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2949(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2947(DATA *data, threadData_t *threadData);


/*
equation index: 744
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.U = cooCoi.ele[2].vol1.dynBal.m * cooCoi.ele[2].port_b1.h_outflow
*/
void logic1_raw_eqFunction_744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* cooCoi.ele[2].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 744;
}
extern void logic1_raw_eqFunction_2954(DATA *data, threadData_t *threadData);


/*
equation index: 746
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta2_start.T = cooCoi.ele[1].T2_start
*/
void logic1_raw_eqFunction_746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 746;
}

/*
equation index: 747
type: ARRAY_CALL_ASSIGN

cooCoi.ele[1].sta2_start.X = cooCoi.ele[1].X2_start
*/
void logic1_raw_eqFunction_747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,747};
  real_array tmp140;
  real_array tmp141;
  real_array_create(&tmp140, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[509]] /* cooCoi.ele[1].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp141, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp140, tmp141);
  threadData->lastEquationSolved = 747;
}

/*
equation index: 748
type: SIMPLE_ASSIGN
cooCoi.ele[1].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[1].sta2_start.T) * (1.0 - cooCoi.ele[1].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].sta2_start.T)) * cooCoi.ele[1].sta2_start.X[1]
*/
void logic1_raw_eqFunction_748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* cooCoi.ele[1].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[1].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[733]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 748;
}

/*
equation index: 749
type: SIMPLE_ASSIGN
$START.TAirSup.port_b.h_outflow = cooCoi.ele[1].h2_outflow_start
*/
void logic1_raw_eqFunction_749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,749};
  ((modelica_real *)((data->modelData->realVarsData[268] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* cooCoi.ele[1].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[268] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[268] /* TAirSup.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 749;
}

/*
equation index: 750
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.p = cooCoi.ele[1].p1_start
*/
void logic1_raw_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* cooCoi.ele[1].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 750;
}

/*
equation index: 751
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.T = cooCoi.ele[1].T1_start
*/
void logic1_raw_eqFunction_751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[1].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 751;
}

/*
equation index: 752
type: SIMPLE_ASSIGN
cooCoi.ele[1].h1_outflow_start = logic1.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[1].sta1_start)
*/
void logic1_raw_eqFunction_752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,752};
  logic1_cooCoi_ele_Medium1_ThermodynamicState tmp142;
  logic1_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp142, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* cooCoi.ele[1].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[1].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* cooCoi.ele[1].h1_outflow_start PARAM */) = omc_logic1_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp142);
  threadData->lastEquationSolved = 752;
}

/*
equation index: 753
type: SIMPLE_ASSIGN
$START.TCHWEntChi.port_b.h_outflow = cooCoi.ele[1].h1_outflow_start
*/
void logic1_raw_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  ((modelica_real *)((data->modelData->realVarsData[296] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* cooCoi.ele[1].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[296] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[296] /* TCHWEntChi.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 753;
}

/*
equation index: 754
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.Xi[1] = cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
void logic1_raw_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[881]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 754;
}
extern void logic1_raw_eqFunction_3752(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3753(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3751(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3763(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3766(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3767(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3768(DATA *data, threadData_t *threadData);


/*
equation index: 764
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.p = cooCoi.ele[1].vol2.dynBal.p_start
*/
void logic1_raw_eqFunction_764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[905]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 764;
}
extern void logic1_raw_eqFunction_3741(DATA *data, threadData_t *threadData);


/*
equation index: 766
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mXi[1] = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 766;
}
extern void logic1_raw_eqFunction_3723(DATA *data, threadData_t *threadData);


/*
equation index: 768
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.U = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.u
*/
void logic1_raw_eqFunction_768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* cooCoi.ele[2].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 768;
}

/*
equation index: 769
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mXi[1] = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 769;
}
extern void logic1_raw_eqFunction_3706(DATA *data, threadData_t *threadData);


/*
equation index: 771
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.U = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.u
*/
void logic1_raw_eqFunction_771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* cooCoi.ele[3].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 771;
}

/*
equation index: 772
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mXi[1] = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 772;
}

/*
equation index: 773
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.m = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)));
  threadData->lastEquationSolved = 773;
}

/*
equation index: 774
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.U = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.u
*/
void logic1_raw_eqFunction_774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* cooCoi.ele[4].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 774;
}

/*
equation index: 775
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mXi[1] = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 775;
}
extern void logic1_raw_eqFunction_3780(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_777(DATA*, threadData_t*);
/*
equation index: 778
indexNonlinear: 8
type: NONLINEAR

vars: {cooCoi.m2_flow}
eqns: {777}
*/
void logic1_raw_eqFunction_778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,778};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 778 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,778};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 778 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 778;
}
extern void logic1_raw_eqFunction_3783(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3784(DATA *data, threadData_t *threadData);


/*
equation index: 781
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.m2_flow, cooCoi.ele[4].vol2.dynBal.medium.Xi[1], junOut.vol.dynBal.medium.Xi[1])
*/
void logic1_raw_eqFunction_781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* junOut.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 781;
}
extern void logic1_raw_eqFunction_3787(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3788(DATA *data, threadData_t *threadData);


/*
equation index: 784
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m2_flow, cooCoi.port_a2.h_outflow, junOut.vol.ports[3].h_outflow)
*/
void logic1_raw_eqFunction_784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 784;
}
extern void logic1_raw_eqFunction_3791(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3792(DATA *data, threadData_t *threadData);


/*
equation index: 802
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void logic1_raw_eqFunction_802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,802};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 802 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,802};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 802 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 802;
}
extern void logic1_raw_eqFunction_3809(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3810(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3811(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3812(DATA *data, threadData_t *threadData);


/*
equation index: 807
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].vol2.dynBal.medium.Xi[1], cooCoi.ele[4].vol2.dynBal.medium.Xi[1])
*/
void logic1_raw_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 807;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].port_a2.h_outflow, cooCoi.port_a2.h_outflow)
*/
void logic1_raw_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 808;
}
extern void logic1_raw_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3827(DATA *data, threadData_t *threadData);


/*
equation index: 811
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].vol2.dynBal.medium.Xi[1], cooCoi.ele[3].vol2.dynBal.medium.Xi[1])
*/
void logic1_raw_eqFunction_811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 811;
}
extern void logic1_raw_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3831(DATA *data, threadData_t *threadData);


/*
equation index: 814
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].port_a2.h_outflow, cooCoi.ele[3].port_a2.h_outflow)
*/
void logic1_raw_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 814;
}
extern void logic1_raw_eqFunction_3828(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3822(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3820(DATA *data, threadData_t *threadData);


/*
equation index: 818
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[1].m2_flow, cooCoi.ele[1].vol2.dynBal.medium.Xi[1], cooCoi.ele[2].vol2.dynBal.medium.Xi[1])
*/
void logic1_raw_eqFunction_818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 818;
}
extern void logic1_raw_eqFunction_3823(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3824(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3813(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3814(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3815(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3785(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3835(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3789(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3833(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3838(DATA *data, threadData_t *threadData);


/*
equation index: 831
type: SIMPLE_ASSIGN
cooCoi.hA.hA_2 = cooCoi.hA.hA_nominal_a * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_a, cooCoi.hA.n_a, 0.1)
*/
void logic1_raw_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* cooCoi.hA.hA_2 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooCoi.hA.hA_nominal_a PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* cooCoi.hA.fm_a variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1002]] /* cooCoi.hA.n_a PARAM */), 0.1));
  threadData->lastEquationSolved = 831;
}
extern void logic1_raw_eqFunction_3841(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3860(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3861(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3862(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3854(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3855(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3856(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3848(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3770(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3772(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3774(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3776(DATA *data, threadData_t *threadData);


/*
equation index: 847
type: SIMPLE_ASSIGN
fanSup.preSou.V_flow = 55.989691542288554 / Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)
*/
void logic1_raw_eqFunction_847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* fanSup.preSou.V_flow variable */) = DIVISION_SIM(55.989691542288554,omc_Modelica_Fluid_Utilities_regStep(threadData, 55.989691542288554, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1572]] /* fanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 847;
}
extern void logic1_raw_eqFunction_3867(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3870(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3871(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3872(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3873(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3874(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3875(DATA *data, threadData_t *threadData);


/*
equation index: 855
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T = cooCoi.ele[1].vol2.dynBal.T_start
*/
void logic1_raw_eqFunction_855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[877]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 855;
}

/*
equation index: 856
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol2.dynBal.medium.T
*/
void logic1_raw_eqFunction_856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 856;
}

/*
equation index: 857
type: SIMPLE_ASSIGN
TAirSup.port_b.h_outflow = 1006.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC * cooCoi.ele[1].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC) * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void logic1_raw_eqFunction_857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 857;
}
extern void logic1_raw_eqFunction_3756(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3758(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3759(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3757(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3842(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3863(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3747(DATA *data, threadData_t *threadData);


/*
equation index: 872
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[1].m2_flow, TAirSup.port_b.h_outflow, cooCoi.ele[2].port_a2.h_outflow)
*/
void logic1_raw_eqFunction_872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 872;
}
extern void logic1_raw_eqFunction_3821(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3850(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3755(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3744(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3817(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3818(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3844(DATA *data, threadData_t *threadData);


/*
equation index: 880
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.u = -84437.5 + TAirSup.port_b.h_outflow
*/
void logic1_raw_eqFunction_880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */);
  threadData->lastEquationSolved = 880;
}

/*
equation index: 881
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.U = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.u
*/
void logic1_raw_eqFunction_881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* cooCoi.ele[1].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 881;
}
extern void logic1_raw_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3769(DATA *data, threadData_t *threadData);


/*
equation index: 884
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T = cooCoi.ele[1].vol1.dynBal.T_start
*/
void logic1_raw_eqFunction_884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 884;
}

/*
equation index: 885
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol1.dynBal.medium.T
*/
void logic1_raw_eqFunction_885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 885;
}

/*
equation index: 886
type: SIMPLE_ASSIGN
TCHWEntChi.port_b.h_outflow = 4184.0 * cooCoi.ele[1].vol1.dynBal.medium.T_degC
*/
void logic1_raw_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 886;
}
extern void logic1_raw_eqFunction_2942(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2950(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2951(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2943(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_892(DATA*, threadData_t*);
void logic1_raw_eqFunction_893(DATA*, threadData_t*);
void logic1_raw_eqFunction_894(DATA*, threadData_t*);
void logic1_raw_eqFunction_895(DATA*, threadData_t*);
void logic1_raw_eqFunction_896(DATA*, threadData_t*);
void logic1_raw_eqFunction_897(DATA*, threadData_t*);
void logic1_raw_eqFunction_898(DATA*, threadData_t*);
void logic1_raw_eqFunction_899(DATA*, threadData_t*);
void logic1_raw_eqFunction_900(DATA*, threadData_t*);
void logic1_raw_eqFunction_901(DATA*, threadData_t*);
void logic1_raw_eqFunction_902(DATA*, threadData_t*);
void logic1_raw_eqFunction_903(DATA*, threadData_t*);
void logic1_raw_eqFunction_904(DATA*, threadData_t*);
void logic1_raw_eqFunction_905(DATA*, threadData_t*);
void logic1_raw_eqFunction_906(DATA*, threadData_t*);
void logic1_raw_eqFunction_907(DATA*, threadData_t*);
void logic1_raw_eqFunction_908(DATA*, threadData_t*);
void logic1_raw_eqFunction_909(DATA*, threadData_t*);
void logic1_raw_eqFunction_910(DATA*, threadData_t*);
void logic1_raw_eqFunction_911(DATA*, threadData_t*);
void logic1_raw_eqFunction_912(DATA*, threadData_t*);
void logic1_raw_eqFunction_913(DATA*, threadData_t*);
void logic1_raw_eqFunction_914(DATA*, threadData_t*);
void logic1_raw_eqFunction_917(DATA*, threadData_t*);
void logic1_raw_eqFunction_916(DATA*, threadData_t*);
void logic1_raw_eqFunction_915(DATA*, threadData_t*);
/*
equation index: 918
indexNonlinear: 9
type: NONLINEAR

vars: {val1.dp, cooCoi.m1_flow, cooCoi.rep1.y[4]}
eqns: {892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 917, 916, 915}
*/
void logic1_raw_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 918 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */);
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,918};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 918 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[2];
  threadData->lastEquationSolved = 918;
}
extern void logic1_raw_eqFunction_3310(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3371(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3507(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3379(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3381(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3378(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3382(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3502(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3503(DATA *data, threadData_t *threadData);


/*
equation index: 928
type: SIMPLE_ASSIGN
TCWEntTow2.port_b.h_outflow = (max(val7.m_flow, 1e-7) * chi2.port_a1.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(val7.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */),1e-7),"1e-7 + max(val7.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 928;
}
extern void logic1_raw_eqFunction_3373(DATA *data, threadData_t *threadData);


/*
equation index: 930
type: SIMPLE_ASSIGN
pumCW2.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, pumCW2.VMachine_flow, pumCW2.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, 0.012615873967693397, pumCW2.eff.motDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  real_array tmp143;
  real_array tmp144;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp145;
  real_array tmp146;
  real_array tmp147;
  real_array tmp148;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp149;
  real_array tmp150;
  real_array_create(&tmp143, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp144, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp145, tmp143, tmp144);
  real_array_create(&tmp146, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2561]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp147, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp148, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp149, tmp147, tmp148);
  real_array_create(&tmp150, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2561]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* pumCW2.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp145, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW2.VMachine_flow variable */), tmp146, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp149, 0.012615873967693397, tmp150, 1.0, 0.05));
  threadData->lastEquationSolved = 930;
}

/*
equation index: 931
type: SIMPLE_ASSIGN
pumCW2.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, pumCW2.VMachine_flow, pumCW2.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW2.eff.hydDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  real_array tmp151;
  real_array tmp152;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp153;
  real_array tmp154;
  real_array tmp155;
  real_array tmp156;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp157;
  real_array tmp158;
  real_array_create(&tmp151, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp152, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp153, tmp151, tmp152);
  real_array_create(&tmp154, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp155, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp156, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp157, tmp155, tmp156);
  real_array_create(&tmp158, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* pumCW2.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp153, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW2.VMachine_flow variable */), tmp154, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp157, 0.012615873967693397, tmp158, 1.0, 0.05));
  threadData->lastEquationSolved = 931;
}
extern void logic1_raw_eqFunction_3377(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3374(DATA *data, threadData_t *threadData);


/*
equation index: 934
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, chi2.port_a1.h_outflow, TWCLeaTow2.port_b.h_outflow)
*/
void logic1_raw_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* pumCW2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 934;
}
extern void logic1_raw_eqFunction_3372(DATA *data, threadData_t *threadData);


/*
equation index: 936
type: SIMPLE_ASSIGN
cooTow2.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val7.m_flow, cooTow2.preDro.k, cooTow2.preDro.m_flow_turbulent), 104510.0 * val7.m_flow / cooTow2.preDro.m_flow_nominal_pos)
*/
void logic1_raw_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* cooTow2.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* cooTow2.preDro.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* cooTow2.preDro.m_flow_turbulent PARAM */)), DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */),"cooTow2.preDro.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 936;
}
extern void logic1_raw_eqFunction_3341(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3353(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3354(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3355(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3350(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3351(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3352(DATA *data, threadData_t *threadData);


/*
equation index: 944
type: SIMPLE_ASSIGN
val7.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val7.m_flow, val7.k, val7.m_flow_turbulent), val7.dp_nominal_pos * val7.m_flow / val7.m_flow_nominal_pos)
*/
void logic1_raw_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* val7.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val7.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2768]] /* val7.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* val7.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */),"val7.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 944;
}
extern void logic1_raw_eqFunction_3385(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3387(DATA *data, threadData_t *threadData);


/*
equation index: 947
type: SIMPLE_ASSIGN
pumCW2.preSou.V_flow = val7.m_flow / Modelica.Fluid.Utilities.regStep(val7.m_flow, logic1.pumCW2.preSou.Medium.density(logic1.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), logic1.pumCW2.preSou.Medium.density(logic1.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)
*/
void logic1_raw_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* pumCW2.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), omc_logic1_pumCW2_preSou_Medium_density(threadData, omc_logic1_pumCW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT83)), omc_logic1_pumCW2_preSou_Medium_density(threadData, omc_logic1_pumCW2_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2634]] /* pumCW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(val7.m_flow, logic1.pumCW2.preSou.Medium.density(logic1.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), logic1.pumCW2.preSou.Medium.density(logic1.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 947;
}
extern void logic1_raw_eqFunction_3398(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3490(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3396(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3389(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3390(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3392(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3391(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3393(DATA *data, threadData_t *threadData);


/*
equation index: 957
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCW2.VMachine_flow) + -2.5231747935386794e-5 > 1.2615873967693397e-5) then pumCW2.heaDis.QThe_flow else if noEvent(abs(pumCW2.VMachine_flow) + -2.5231747935386794e-5 < -1.2615873967693397e-5) then 0.0 else 0.25 * (2.0 - 79265.21797544822 * abs(pumCW2.VMachine_flow)) * ((79265.21797544822 * abs(pumCW2.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCW2.heaDis.QThe_flow + 0.5 * pumCW2.heaDis.QThe_flow), 0.0)
*/
void logic1_raw_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_real tmp161;
  modelica_boolean tmp162;
  modelica_real tmp163;
  modelica_boolean tmp164;
  modelica_real tmp165;
  tmp159 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW2.VMachine_flow variable */)) + -2.5231747935386794e-5,1.2615873967693397e-5);
  tmp164 = (modelica_boolean)tmp159;
  if(tmp164)
  {
    tmp165 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* pumCW2.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp160 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW2.VMachine_flow variable */)) + -2.5231747935386794e-5,-1.2615873967693397e-5);
    tmp162 = (modelica_boolean)tmp160;
    if(tmp162)
    {
      tmp163 = 0.0;
    }
    else
    {
      tmp161 = (79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW2.VMachine_flow variable */))) + -2.0;
      tmp163 = (0.25) * (((2.0 - ((79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW2.VMachine_flow variable */))))) * ((tmp161 * tmp161) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* pumCW2.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* pumCW2.heaDis.QThe_flow variable */));
    }
    tmp165 = tmp163;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* pumCW2.PToMed.u1 variable */) = homotopy(tmp165, 0.0);
  threadData->lastEquationSolved = 957;
}
extern void logic1_raw_eqFunction_3395(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3388(DATA *data, threadData_t *threadData);


/*
equation index: 960
type: SIMPLE_ASSIGN
TCWEntTow2.T_a_inflow = logic1.TCWEntTow2.Medium.temperature(logic1.TCWEntTow2.Medium.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow2.T_a_inflow variable */) = omc_logic1_TCWEntTow2_Medium_temperature(threadData, omc_logic1_TCWEntTow2_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 960;
}
extern void logic1_raw_eqFunction_3342(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3343(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3344(DATA *data, threadData_t *threadData);


/*
equation index: 964
type: SIMPLE_ASSIGN
cooTow2.PFan = Buildings.Utilities.Math.Functions.spliceFunction(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, cooTow2.FRAir, cooTow2.fanRelPowDer) * cooTow2.PFan_nominal, 0.0, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic1_raw_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  real_array tmp166;
  real_array tmp167;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp168;
  real_array tmp169;
  real_array_create(&tmp166, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp167, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp168, tmp166, tmp167);
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cooTow2.PFan variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp168, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */), tmp169)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* cooTow2.PFan_nominal PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 964;
}

void logic1_raw_eqFunction_965(DATA*, threadData_t*);
void logic1_raw_eqFunction_966(DATA*, threadData_t*);
void logic1_raw_eqFunction_967(DATA*, threadData_t*);
void logic1_raw_eqFunction_968(DATA*, threadData_t*);
void logic1_raw_eqFunction_969(DATA*, threadData_t*);
void logic1_raw_eqFunction_970(DATA*, threadData_t*);
void logic1_raw_eqFunction_971(DATA*, threadData_t*);
void logic1_raw_eqFunction_972(DATA*, threadData_t*);
void logic1_raw_eqFunction_973(DATA*, threadData_t*);
void logic1_raw_eqFunction_974(DATA*, threadData_t*);
void logic1_raw_eqFunction_975(DATA*, threadData_t*);
void logic1_raw_eqFunction_976(DATA*, threadData_t*);
void logic1_raw_eqFunction_977(DATA*, threadData_t*);
void logic1_raw_eqFunction_978(DATA*, threadData_t*);
/*
equation index: 979
indexNonlinear: 10
type: NONLINEAR

vars: {TCWEntTow2.port_a.h_outflow}
eqns: {965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978}
*/
void logic1_raw_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 979 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,979};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 979 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  threadData->lastEquationSolved = 979;
}
extern void logic1_raw_eqFunction_3634(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3635(DATA *data, threadData_t *threadData);


/*
equation index: 982
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * TCWEntTow2.port_a.h_outflow
*/
void logic1_raw_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* cooTow2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, (max(-val7.m_flow, 1e-7) * TCWEntTow2.port_a.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(-val7.m_flow, 1e-7)), chi2.port_a1.h_outflow)
*/
void logic1_raw_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* chi2.vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),1e-7),"1e-7 + max(-val7.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 983;
}
extern void logic1_raw_eqFunction_3642(DATA *data, threadData_t *threadData);


/*
equation index: 985
type: SIMPLE_ASSIGN
chi2.state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val7.m_flow, 1e-7) * TCWEntTow2.port_a.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(-val7.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* chi2.state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),1e-7),"1e-7 + max(-val7.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
TCWEntTow2.T_b_inflow = logic1.TCWEntTow2.Medium.temperature(logic1.TCWEntTow2.Medium.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow2.T_b_inflow variable */) = omc_logic1_TCWEntTow2_Medium_temperature(threadData, omc_logic1_TCWEntTow2_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), _OMC_LIT83));
  threadData->lastEquationSolved = 986;
}
extern void logic1_raw_eqFunction_3648(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3649(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3637(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3638(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3639(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_992(DATA*, threadData_t*);
/*
equation index: 993
indexNonlinear: 11
type: NONLINEAR

vars: {val8_2.dp}
eqns: {992}
*/
void logic1_raw_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 993 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,993};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 993 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */) = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, junCHWSup.port_3.h_outflow, junCHWSup2.vol.ports[3].h_outflow)
*/
void logic1_raw_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junCHWSup2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 994;
}
extern void logic1_raw_eqFunction_3617(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3619(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3620(DATA *data, threadData_t *threadData);


/*
equation index: 998
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, val8_2.port_a.h_outflow, val8_2.port_b.h_outflow)
*/
void logic1_raw_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* val8_2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* val8_2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 998;
}
extern void logic1_raw_eqFunction_3601(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3603(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3604(DATA *data, threadData_t *threadData);


/*
equation index: 1002
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[3] = semiLinear(-val8.m_flow, val8_2.port_b.h_outflow, junCHWRet.port_3.h_outflow)
*/
void logic1_raw_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* val8_2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 1002;
}
extern void logic1_raw_eqFunction_3251(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3252(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3358(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3368(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3478(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3257(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3600(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3256(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3562(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3255(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3260(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3305(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3616(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3304(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3554(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3263(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3272(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3273(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3274(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3277(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3275(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3276(DATA *data, threadData_t *threadData);


/*
equation index: 1025
type: SIMPLE_ASSIGN
pumCHW.preSou.V_flow = chi.m2_flow / Modelica.Fluid.Utilities.regStep(chi.m2_flow, logic1.pumCHW.preSou.Medium.density(logic1.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), logic1.pumCHW.preSou.Medium.density(logic1.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)
*/
void logic1_raw_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* pumCHW.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */), omc_logic1_pumCHW_preSou_Medium_density(threadData, omc_logic1_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT83)), omc_logic1_pumCHW_preSou_Medium_density(threadData, omc_logic1_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2250]] /* pumCHW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(chi.m2_flow, logic1.pumCHW.preSou.Medium.density(logic1.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), logic1.pumCHW.preSou.Medium.density(logic1.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
TCHWChi1Out.T_b_inflow = logic1.TCHWChi1Out.Medium.temperature(logic1.TCHWChi1Out.Medium.setState_phX(chi.vol2.p, junCHWSup.port_3.h_outflow, {}))
*/
void logic1_raw_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* TCHWChi1Out.T_b_inflow variable */) = omc_logic1_TCHWChi1Out_Medium_temperature(threadData, omc_logic1_TCHWChi1Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
TCHWChi1Out.T_a_inflow = logic1.TCHWChi1Out.Medium.temperature(logic1.TCHWChi1Out.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* TCHWChi1Out.T_a_inflow variable */) = omc_logic1_TCHWChi1Out_Medium_temperature(threadData, omc_logic1_TCHWChi1Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1027;
}
extern void logic1_raw_eqFunction_3552(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3553(DATA *data, threadData_t *threadData);


/*
equation index: 1030
type: SIMPLE_ASSIGN
TCHWChi1In.T_b_inflow = logic1.TCHWChi1In.Medium.temperature(logic1.TCHWChi1In.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TCHWChi1In.T_b_inflow variable */) = omc_logic1_TCHWChi1In_Medium_temperature(threadData, omc_logic1_TCHWChi1In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val6.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
TCHWChi1In.T_a_inflow = logic1.TCHWChi1In.Medium.temperature(logic1.TCHWChi1In.Medium.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* TCHWChi1In.T_a_inflow variable */) = omc_logic1_TCHWChi1In_Medium_temperature(threadData, omc_logic1_TCHWChi1In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1031;
}
extern void logic1_raw_eqFunction_3288(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3289(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3290(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3291(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3297(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3300(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3545(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3292(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3295(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3293(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3294(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3296(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3299(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3298(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3675(DATA *data, threadData_t *threadData);


/*
equation index: 1047
type: SIMPLE_ASSIGN
chi.TEvaEnt = logic1.chi.Medium2.temperature(logic1.chi.Medium2.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {1.0}))
*/
void logic1_raw_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* chi.TEvaEnt variable */) = omc_logic1_chi_Medium2_temperature(threadData, omc_logic1_chi_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 1047;
}
extern void logic1_raw_eqFunction_3324(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3330(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3323(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void logic1_raw_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[483])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_495,
    logic1_raw_eqFunction_496,
    logic1_raw_eqFunction_497,
    logic1_raw_eqFunction_498,
    logic1_raw_eqFunction_3133,
    logic1_raw_eqFunction_3134,
    logic1_raw_eqFunction_501,
    logic1_raw_eqFunction_502,
    logic1_raw_eqFunction_503,
    logic1_raw_eqFunction_504,
    logic1_raw_eqFunction_505,
    logic1_raw_eqFunction_506,
    logic1_raw_eqFunction_3625,
    logic1_raw_eqFunction_3626,
    logic1_raw_eqFunction_509,
    logic1_raw_eqFunction_3628,
    logic1_raw_eqFunction_511,
    logic1_raw_eqFunction_512,
    logic1_raw_eqFunction_513,
    logic1_raw_eqFunction_514,
    logic1_raw_eqFunction_3172,
    logic1_raw_eqFunction_3173,
    logic1_raw_eqFunction_518,
    logic1_raw_eqFunction_519,
    logic1_raw_eqFunction_520,
    logic1_raw_eqFunction_521,
    logic1_raw_eqFunction_522,
    logic1_raw_eqFunction_523,
    logic1_raw_eqFunction_524,
    logic1_raw_eqFunction_525,
    logic1_raw_eqFunction_526,
    logic1_raw_eqFunction_527,
    logic1_raw_eqFunction_528,
    logic1_raw_eqFunction_529,
    logic1_raw_eqFunction_3546,
    logic1_raw_eqFunction_531,
    logic1_raw_eqFunction_532,
    logic1_raw_eqFunction_533,
    logic1_raw_eqFunction_534,
    logic1_raw_eqFunction_535,
    logic1_raw_eqFunction_3004,
    logic1_raw_eqFunction_537,
    logic1_raw_eqFunction_538,
    logic1_raw_eqFunction_539,
    logic1_raw_eqFunction_540,
    logic1_raw_eqFunction_3002,
    logic1_raw_eqFunction_542,
    logic1_raw_eqFunction_543,
    logic1_raw_eqFunction_544,
    logic1_raw_eqFunction_545,
    logic1_raw_eqFunction_546,
    logic1_raw_eqFunction_3136,
    logic1_raw_eqFunction_3137,
    logic1_raw_eqFunction_549,
    logic1_raw_eqFunction_550,
    logic1_raw_eqFunction_551,
    logic1_raw_eqFunction_552,
    logic1_raw_eqFunction_3169,
    logic1_raw_eqFunction_3170,
    logic1_raw_eqFunction_555,
    logic1_raw_eqFunction_3188,
    logic1_raw_eqFunction_3189,
    logic1_raw_eqFunction_3192,
    logic1_raw_eqFunction_3191,
    logic1_raw_eqFunction_3190,
    logic1_raw_eqFunction_3193,
    logic1_raw_eqFunction_3205,
    logic1_raw_eqFunction_3194,
    logic1_raw_eqFunction_564,
    logic1_raw_eqFunction_565,
    logic1_raw_eqFunction_566,
    logic1_raw_eqFunction_3207,
    logic1_raw_eqFunction_568,
    logic1_raw_eqFunction_569,
    logic1_raw_eqFunction_3204,
    logic1_raw_eqFunction_3206,
    logic1_raw_eqFunction_3208,
    logic1_raw_eqFunction_573,
    logic1_raw_eqFunction_3210,
    logic1_raw_eqFunction_575,
    logic1_raw_eqFunction_576,
    logic1_raw_eqFunction_577,
    logic1_raw_eqFunction_578,
    logic1_raw_eqFunction_3197,
    logic1_raw_eqFunction_580,
    logic1_raw_eqFunction_3215,
    logic1_raw_eqFunction_3216,
    logic1_raw_eqFunction_583,
    logic1_raw_eqFunction_2997,
    logic1_raw_eqFunction_3212,
    logic1_raw_eqFunction_2992,
    logic1_raw_eqFunction_587,
    logic1_raw_eqFunction_588,
    logic1_raw_eqFunction_589,
    logic1_raw_eqFunction_590,
    logic1_raw_eqFunction_592,
    logic1_raw_eqFunction_593,
    logic1_raw_eqFunction_3217,
    logic1_raw_eqFunction_595,
    logic1_raw_eqFunction_596,
    logic1_raw_eqFunction_597,
    logic1_raw_eqFunction_598,
    logic1_raw_eqFunction_599,
    logic1_raw_eqFunction_600,
    logic1_raw_eqFunction_601,
    logic1_raw_eqFunction_602,
    logic1_raw_eqFunction_617,
    logic1_raw_eqFunction_3670,
    logic1_raw_eqFunction_3671,
    logic1_raw_eqFunction_620,
    logic1_raw_eqFunction_621,
    logic1_raw_eqFunction_3679,
    logic1_raw_eqFunction_3680,
    logic1_raw_eqFunction_624,
    logic1_raw_eqFunction_3674,
    logic1_raw_eqFunction_626,
    logic1_raw_eqFunction_3684,
    logic1_raw_eqFunction_3685,
    logic1_raw_eqFunction_3686,
    logic1_raw_eqFunction_630,
    logic1_raw_eqFunction_631,
    logic1_raw_eqFunction_2990,
    logic1_raw_eqFunction_633,
    logic1_raw_eqFunction_634,
    logic1_raw_eqFunction_635,
    logic1_raw_eqFunction_636,
    logic1_raw_eqFunction_3164,
    logic1_raw_eqFunction_638,
    logic1_raw_eqFunction_639,
    logic1_raw_eqFunction_640,
    logic1_raw_eqFunction_641,
    logic1_raw_eqFunction_3166,
    logic1_raw_eqFunction_3544,
    logic1_raw_eqFunction_2987,
    logic1_raw_eqFunction_645,
    logic1_raw_eqFunction_3558,
    logic1_raw_eqFunction_3559,
    logic1_raw_eqFunction_648,
    logic1_raw_eqFunction_649,
    logic1_raw_eqFunction_650,
    logic1_raw_eqFunction_651,
    logic1_raw_eqFunction_652,
    logic1_raw_eqFunction_653,
    logic1_raw_eqFunction_654,
    logic1_raw_eqFunction_655,
    logic1_raw_eqFunction_656,
    logic1_raw_eqFunction_657,
    logic1_raw_eqFunction_2975,
    logic1_raw_eqFunction_2976,
    logic1_raw_eqFunction_2977,
    logic1_raw_eqFunction_2978,
    logic1_raw_eqFunction_662,
    logic1_raw_eqFunction_663,
    logic1_raw_eqFunction_664,
    logic1_raw_eqFunction_2981,
    logic1_raw_eqFunction_2982,
    logic1_raw_eqFunction_667,
    logic1_raw_eqFunction_2985,
    logic1_raw_eqFunction_669,
    logic1_raw_eqFunction_670,
    logic1_raw_eqFunction_671,
    logic1_raw_eqFunction_2966,
    logic1_raw_eqFunction_2967,
    logic1_raw_eqFunction_674,
    logic1_raw_eqFunction_2973,
    logic1_raw_eqFunction_676,
    logic1_raw_eqFunction_677,
    logic1_raw_eqFunction_678,
    logic1_raw_eqFunction_679,
    logic1_raw_eqFunction_680,
    logic1_raw_eqFunction_681,
    logic1_raw_eqFunction_682,
    logic1_raw_eqFunction_683,
    logic1_raw_eqFunction_684,
    logic1_raw_eqFunction_3710,
    logic1_raw_eqFunction_3716,
    logic1_raw_eqFunction_3719,
    logic1_raw_eqFunction_3720,
    logic1_raw_eqFunction_3721,
    logic1_raw_eqFunction_690,
    logic1_raw_eqFunction_691,
    logic1_raw_eqFunction_692,
    logic1_raw_eqFunction_3712,
    logic1_raw_eqFunction_3714,
    logic1_raw_eqFunction_3715,
    logic1_raw_eqFunction_3713,
    logic1_raw_eqFunction_3711,
    logic1_raw_eqFunction_698,
    logic1_raw_eqFunction_3722,
    logic1_raw_eqFunction_700,
    logic1_raw_eqFunction_701,
    logic1_raw_eqFunction_702,
    logic1_raw_eqFunction_2957,
    logic1_raw_eqFunction_2968,
    logic1_raw_eqFunction_2969,
    logic1_raw_eqFunction_2958,
    logic1_raw_eqFunction_2956,
    logic1_raw_eqFunction_708,
    logic1_raw_eqFunction_2964,
    logic1_raw_eqFunction_710,
    logic1_raw_eqFunction_711,
    logic1_raw_eqFunction_712,
    logic1_raw_eqFunction_713,
    logic1_raw_eqFunction_714,
    logic1_raw_eqFunction_715,
    logic1_raw_eqFunction_716,
    logic1_raw_eqFunction_717,
    logic1_raw_eqFunction_718,
    logic1_raw_eqFunction_3727,
    logic1_raw_eqFunction_3734,
    logic1_raw_eqFunction_3737,
    logic1_raw_eqFunction_3738,
    logic1_raw_eqFunction_3739,
    logic1_raw_eqFunction_724,
    logic1_raw_eqFunction_725,
    logic1_raw_eqFunction_726,
    logic1_raw_eqFunction_3729,
    logic1_raw_eqFunction_3731,
    logic1_raw_eqFunction_3732,
    logic1_raw_eqFunction_3733,
    logic1_raw_eqFunction_3730,
    logic1_raw_eqFunction_3728,
    logic1_raw_eqFunction_733,
    logic1_raw_eqFunction_3740,
    logic1_raw_eqFunction_735,
    logic1_raw_eqFunction_736,
    logic1_raw_eqFunction_737,
    logic1_raw_eqFunction_2948,
    logic1_raw_eqFunction_2959,
    logic1_raw_eqFunction_2960,
    logic1_raw_eqFunction_2970,
    logic1_raw_eqFunction_2949,
    logic1_raw_eqFunction_2947,
    logic1_raw_eqFunction_744,
    logic1_raw_eqFunction_2954,
    logic1_raw_eqFunction_746,
    logic1_raw_eqFunction_747,
    logic1_raw_eqFunction_748,
    logic1_raw_eqFunction_749,
    logic1_raw_eqFunction_750,
    logic1_raw_eqFunction_751,
    logic1_raw_eqFunction_752,
    logic1_raw_eqFunction_753,
    logic1_raw_eqFunction_754,
    logic1_raw_eqFunction_3752,
    logic1_raw_eqFunction_3753,
    logic1_raw_eqFunction_3754,
    logic1_raw_eqFunction_3751,
    logic1_raw_eqFunction_3750,
    logic1_raw_eqFunction_3763,
    logic1_raw_eqFunction_3766,
    logic1_raw_eqFunction_3767,
    logic1_raw_eqFunction_3768,
    logic1_raw_eqFunction_764,
    logic1_raw_eqFunction_3741,
    logic1_raw_eqFunction_766,
    logic1_raw_eqFunction_3723,
    logic1_raw_eqFunction_768,
    logic1_raw_eqFunction_769,
    logic1_raw_eqFunction_3706,
    logic1_raw_eqFunction_771,
    logic1_raw_eqFunction_772,
    logic1_raw_eqFunction_773,
    logic1_raw_eqFunction_774,
    logic1_raw_eqFunction_775,
    logic1_raw_eqFunction_3780,
    logic1_raw_eqFunction_778,
    logic1_raw_eqFunction_3783,
    logic1_raw_eqFunction_3784,
    logic1_raw_eqFunction_781,
    logic1_raw_eqFunction_3787,
    logic1_raw_eqFunction_3788,
    logic1_raw_eqFunction_784,
    logic1_raw_eqFunction_3791,
    logic1_raw_eqFunction_3792,
    logic1_raw_eqFunction_802,
    logic1_raw_eqFunction_3809,
    logic1_raw_eqFunction_3810,
    logic1_raw_eqFunction_3811,
    logic1_raw_eqFunction_3812,
    logic1_raw_eqFunction_807,
    logic1_raw_eqFunction_808,
    logic1_raw_eqFunction_3829,
    logic1_raw_eqFunction_3827,
    logic1_raw_eqFunction_811,
    logic1_raw_eqFunction_3830,
    logic1_raw_eqFunction_3831,
    logic1_raw_eqFunction_814,
    logic1_raw_eqFunction_3828,
    logic1_raw_eqFunction_3822,
    logic1_raw_eqFunction_3820,
    logic1_raw_eqFunction_818,
    logic1_raw_eqFunction_3823,
    logic1_raw_eqFunction_3824,
    logic1_raw_eqFunction_3813,
    logic1_raw_eqFunction_3814,
    logic1_raw_eqFunction_3815,
    logic1_raw_eqFunction_3785,
    logic1_raw_eqFunction_3835,
    logic1_raw_eqFunction_3836,
    logic1_raw_eqFunction_3789,
    logic1_raw_eqFunction_3833,
    logic1_raw_eqFunction_3837,
    logic1_raw_eqFunction_3838,
    logic1_raw_eqFunction_831,
    logic1_raw_eqFunction_3841,
    logic1_raw_eqFunction_3860,
    logic1_raw_eqFunction_3861,
    logic1_raw_eqFunction_3862,
    logic1_raw_eqFunction_3854,
    logic1_raw_eqFunction_3855,
    logic1_raw_eqFunction_3856,
    logic1_raw_eqFunction_3848,
    logic1_raw_eqFunction_3770,
    logic1_raw_eqFunction_3771,
    logic1_raw_eqFunction_3772,
    logic1_raw_eqFunction_3773,
    logic1_raw_eqFunction_3774,
    logic1_raw_eqFunction_3775,
    logic1_raw_eqFunction_3776,
    logic1_raw_eqFunction_847,
    logic1_raw_eqFunction_3867,
    logic1_raw_eqFunction_3870,
    logic1_raw_eqFunction_3871,
    logic1_raw_eqFunction_3872,
    logic1_raw_eqFunction_3873,
    logic1_raw_eqFunction_3874,
    logic1_raw_eqFunction_3875,
    logic1_raw_eqFunction_855,
    logic1_raw_eqFunction_856,
    logic1_raw_eqFunction_857,
    logic1_raw_eqFunction_3756,
    logic1_raw_eqFunction_3761,
    logic1_raw_eqFunction_3762,
    logic1_raw_eqFunction_3758,
    logic1_raw_eqFunction_3759,
    logic1_raw_eqFunction_3760,
    logic1_raw_eqFunction_3849,
    logic1_raw_eqFunction_3757,
    logic1_raw_eqFunction_3842,
    logic1_raw_eqFunction_3843,
    logic1_raw_eqFunction_3863,
    logic1_raw_eqFunction_3745,
    logic1_raw_eqFunction_3746,
    logic1_raw_eqFunction_3747,
    logic1_raw_eqFunction_872,
    logic1_raw_eqFunction_3821,
    logic1_raw_eqFunction_3850,
    logic1_raw_eqFunction_3755,
    logic1_raw_eqFunction_3744,
    logic1_raw_eqFunction_3817,
    logic1_raw_eqFunction_3818,
    logic1_raw_eqFunction_3844,
    logic1_raw_eqFunction_880,
    logic1_raw_eqFunction_881,
    logic1_raw_eqFunction_3748,
    logic1_raw_eqFunction_3769,
    logic1_raw_eqFunction_884,
    logic1_raw_eqFunction_885,
    logic1_raw_eqFunction_886,
    logic1_raw_eqFunction_2942,
    logic1_raw_eqFunction_2950,
    logic1_raw_eqFunction_2951,
    logic1_raw_eqFunction_2961,
    logic1_raw_eqFunction_2943,
    logic1_raw_eqFunction_918,
    logic1_raw_eqFunction_3310,
    logic1_raw_eqFunction_3371,
    logic1_raw_eqFunction_3507,
    logic1_raw_eqFunction_3379,
    logic1_raw_eqFunction_3381,
    logic1_raw_eqFunction_3378,
    logic1_raw_eqFunction_3382,
    logic1_raw_eqFunction_3502,
    logic1_raw_eqFunction_3503,
    logic1_raw_eqFunction_928,
    logic1_raw_eqFunction_3373,
    logic1_raw_eqFunction_930,
    logic1_raw_eqFunction_931,
    logic1_raw_eqFunction_3377,
    logic1_raw_eqFunction_3374,
    logic1_raw_eqFunction_934,
    logic1_raw_eqFunction_3372,
    logic1_raw_eqFunction_936,
    logic1_raw_eqFunction_3341,
    logic1_raw_eqFunction_3353,
    logic1_raw_eqFunction_3354,
    logic1_raw_eqFunction_3355,
    logic1_raw_eqFunction_3350,
    logic1_raw_eqFunction_3351,
    logic1_raw_eqFunction_3352,
    logic1_raw_eqFunction_944,
    logic1_raw_eqFunction_3385,
    logic1_raw_eqFunction_3387,
    logic1_raw_eqFunction_947,
    logic1_raw_eqFunction_3398,
    logic1_raw_eqFunction_3490,
    logic1_raw_eqFunction_3397,
    logic1_raw_eqFunction_3396,
    logic1_raw_eqFunction_3389,
    logic1_raw_eqFunction_3390,
    logic1_raw_eqFunction_3392,
    logic1_raw_eqFunction_3391,
    logic1_raw_eqFunction_3393,
    logic1_raw_eqFunction_957,
    logic1_raw_eqFunction_3395,
    logic1_raw_eqFunction_3388,
    logic1_raw_eqFunction_960,
    logic1_raw_eqFunction_3342,
    logic1_raw_eqFunction_3343,
    logic1_raw_eqFunction_3344,
    logic1_raw_eqFunction_964,
    logic1_raw_eqFunction_979,
    logic1_raw_eqFunction_3634,
    logic1_raw_eqFunction_3635,
    logic1_raw_eqFunction_982,
    logic1_raw_eqFunction_983,
    logic1_raw_eqFunction_3642,
    logic1_raw_eqFunction_985,
    logic1_raw_eqFunction_986,
    logic1_raw_eqFunction_3648,
    logic1_raw_eqFunction_3649,
    logic1_raw_eqFunction_3637,
    logic1_raw_eqFunction_3638,
    logic1_raw_eqFunction_3639,
    logic1_raw_eqFunction_993,
    logic1_raw_eqFunction_994,
    logic1_raw_eqFunction_3617,
    logic1_raw_eqFunction_3619,
    logic1_raw_eqFunction_3620,
    logic1_raw_eqFunction_998,
    logic1_raw_eqFunction_3601,
    logic1_raw_eqFunction_3603,
    logic1_raw_eqFunction_3604,
    logic1_raw_eqFunction_1002,
    logic1_raw_eqFunction_3251,
    logic1_raw_eqFunction_3252,
    logic1_raw_eqFunction_3358,
    logic1_raw_eqFunction_3368,
    logic1_raw_eqFunction_3478,
    logic1_raw_eqFunction_3257,
    logic1_raw_eqFunction_3600,
    logic1_raw_eqFunction_3256,
    logic1_raw_eqFunction_3562,
    logic1_raw_eqFunction_3255,
    logic1_raw_eqFunction_3260,
    logic1_raw_eqFunction_3305,
    logic1_raw_eqFunction_3616,
    logic1_raw_eqFunction_3304,
    logic1_raw_eqFunction_3554,
    logic1_raw_eqFunction_3263,
    logic1_raw_eqFunction_3272,
    logic1_raw_eqFunction_3273,
    logic1_raw_eqFunction_3274,
    logic1_raw_eqFunction_3277,
    logic1_raw_eqFunction_3275,
    logic1_raw_eqFunction_3276,
    logic1_raw_eqFunction_1025,
    logic1_raw_eqFunction_1026,
    logic1_raw_eqFunction_1027,
    logic1_raw_eqFunction_3552,
    logic1_raw_eqFunction_3553,
    logic1_raw_eqFunction_1030,
    logic1_raw_eqFunction_1031,
    logic1_raw_eqFunction_3288,
    logic1_raw_eqFunction_3289,
    logic1_raw_eqFunction_3290,
    logic1_raw_eqFunction_3291,
    logic1_raw_eqFunction_3297,
    logic1_raw_eqFunction_3300,
    logic1_raw_eqFunction_3545,
    logic1_raw_eqFunction_3292,
    logic1_raw_eqFunction_3295,
    logic1_raw_eqFunction_3293,
    logic1_raw_eqFunction_3294,
    logic1_raw_eqFunction_3296,
    logic1_raw_eqFunction_3299,
    logic1_raw_eqFunction_3298,
    logic1_raw_eqFunction_3675,
    logic1_raw_eqFunction_1047,
    logic1_raw_eqFunction_3324,
    logic1_raw_eqFunction_3330,
    logic1_raw_eqFunction_3323
  };
  
  for (int id = 0; id < 483; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif