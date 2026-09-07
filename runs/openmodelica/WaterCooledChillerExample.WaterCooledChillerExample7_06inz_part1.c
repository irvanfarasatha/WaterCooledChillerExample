#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 428
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.T = $START.cooCoi.ele[3].mas.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* cooCoi.ele[3].mas.T STATE(1,cooCoi.ele[3].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* cooCoi.ele[3].mas.T STATE(1,cooCoi.ele[3].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.T = $START.cooCoi.ele[4].mas.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* cooCoi.ele[4].mas.T STATE(1,cooCoi.ele[4].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[13] /* cooCoi.ele[4].mas.T STATE(1,cooCoi.ele[4].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
$START.val5.port_a.h_outflow = cooTow.h_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  ((modelica_real *)((data->modelData->realVarsData[1728] /* val5.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* cooTow.h_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = ((modelica_real *)((data->modelData->realVarsData[1728] /* val5.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1728] /* val5.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
$START.val6.port_b.h_outflow = chi.h2_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  ((modelica_real *)((data->modelData->realVarsData[1737] /* val6.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* chi.h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[1737] /* val6.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1737] /* val6.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
$START.TAirSup.port_b.h_outflow = cooCoi.ele[1].h2_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  ((modelica_real *)((data->modelData->realVarsData[284] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* cooCoi.ele[1].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[284] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[284] /* TAirSup.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
$START.TCHWEntChi.port_b.h_outflow = cooCoi.ele[1].h1_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  ((modelica_real *)((data->modelData->realVarsData[292] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* cooCoi.ele[1].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[292] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[292] /* TCHWEntChi.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
$START.TCWLeaTow.port_a.h_outflow = chi.h1_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  ((modelica_real *)((data->modelData->realVarsData[304] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* chi.h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[304] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[304] /* TCWLeaTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
$PRE.weaData.conTim1.tNext = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->simulationInfo->realVarsPre[1887] /* weaData.conTim1.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 435;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
$whenCondition2 = weaData.conTim1.canRepeatWeatherFile and weaData.add.y > $PRE.weaData.conTim1.tNext
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  modelica_boolean tmp54;
  tmp54 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* weaData.add.y variable */),(data->simulationInfo->realVarsPre[1887] /* weaData.conTim1.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1105]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) && tmp54);
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
$PRE.weaData.conTim.tNext = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->realVarsPre[1886] /* weaData.conTim.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 437;
}

/*
equation index: 438
type: SIMPLE_ASSIGN
$whenCondition1 = weaData.conTim.canRepeatWeatherFile and weaBus.cloTim > $PRE.weaData.conTim.tNext
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,438};
  modelica_boolean tmp55;
  tmp55 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* weaBus.cloTim variable */),(data->simulationInfo->realVarsPre[1886] /* weaData.conTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1104]] /* weaData.conTim.canRepeatWeatherFile PARAM */) && tmp55);
  threadData->lastEquationSolved = 438;
}

/*
equation index: 439
type: SIMPLE_ASSIGN
$START.val7.port_a.h_outflow = cooTow2.h_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  ((modelica_real *)((data->modelData->realVarsData[1744] /* val7.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* cooTow2.h_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = ((modelica_real *)((data->modelData->realVarsData[1744] /* val7.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1744] /* val7.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
$START.chi2.port_a1.h_outflow = chi2.h1_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  ((modelica_real *)((data->modelData->realVarsData[400] /* chi2.port_a1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[219]] /* chi2.h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[400] /* chi2.port_a1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[400] /* chi2.port_a1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
$START.chi2.port_a2.h_outflow = chi2.h2_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  ((modelica_real *)((data->modelData->realVarsData[401] /* chi2.port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[220]] /* chi2.h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[401] /* chi2.port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[401] /* chi2.port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
val8Rel.Kv_SI = 4.761904761904762 / sqrt(val8Rel.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  modelica_real tmp56;
  tmp56 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3469]] /* val8Rel.dpValve_nominal PARAM */);
  if(!(tmp56 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8Rel.dpValve_nominal) was %g should be >= 0", tmp56);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3464]] /* val8Rel.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp56),"sqrt(val8Rel.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
val8Rel.Kv = 1.1384199576606166e6 * val8Rel.Kv_SI / val8Rel.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3463]] /* val8Rel.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3464]] /* val8Rel.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3479]] /* val8Rel.rhoStd PARAM */),"val8Rel.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
val8Rel.Cv = 83036.13671167512 * val8Rel.Kv_SI / (val8Rel.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3462]] /* val8Rel.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3464]] /* val8Rel.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3479]] /* val8Rel.rhoStd PARAM */)) * (0.0631),"val8Rel.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
val8Rel.Av = val8Rel.Kv_SI / sqrt(val8Rel.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  modelica_real tmp57;
  tmp57 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3479]] /* val8Rel.rhoStd PARAM */);
  if(!(tmp57 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8Rel.rhoStd) was %g should be >= 0", tmp57);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3461]] /* val8Rel.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3464]] /* val8Rel.Kv_SI PARAM */),sqrt(tmp57),"sqrt(val8Rel.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 445;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4726(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4727(DATA *data, threadData_t *threadData);


/*
equation index: 448
type: SIMPLE_ASSIGN
val8_2Rel.Kv_SI = 4.761904761904762 / sqrt(val8_2Rel.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  modelica_real tmp58;
  tmp58 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3538]] /* val8_2Rel.dpValve_nominal PARAM */);
  if(!(tmp58 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2Rel.dpValve_nominal) was %g should be >= 0", tmp58);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3533]] /* val8_2Rel.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp58),"sqrt(val8_2Rel.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
val8_2Rel.Kv = 1.1384199576606166e6 * val8_2Rel.Kv_SI / val8_2Rel.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3532]] /* val8_2Rel.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3533]] /* val8_2Rel.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3548]] /* val8_2Rel.rhoStd PARAM */),"val8_2Rel.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 449;
}

/*
equation index: 450
type: SIMPLE_ASSIGN
val8_2Rel.Cv = 83036.13671167512 * val8_2Rel.Kv_SI / (val8_2Rel.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,450};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3531]] /* val8_2Rel.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3533]] /* val8_2Rel.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3548]] /* val8_2Rel.rhoStd PARAM */)) * (0.0631),"val8_2Rel.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 450;
}

/*
equation index: 451
type: SIMPLE_ASSIGN
val8_2Rel.Av = val8_2Rel.Kv_SI / sqrt(val8_2Rel.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  modelica_real tmp59;
  tmp59 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3548]] /* val8_2Rel.rhoStd PARAM */);
  if(!(tmp59 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2Rel.rhoStd) was %g should be >= 0", tmp59);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3530]] /* val8_2Rel.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3533]] /* val8_2Rel.Kv_SI PARAM */),sqrt(tmp59),"sqrt(val8_2Rel.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 451;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4724(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4725(DATA *data, threadData_t *threadData);


/*
equation index: 454
type: SIMPLE_ASSIGN
val8Sto.Kv_SI = 4.761904761904762 / sqrt(val8Sto.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,454};
  modelica_real tmp60;
  tmp60 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3492]] /* val8Sto.dpValve_nominal PARAM */);
  if(!(tmp60 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8Sto.dpValve_nominal) was %g should be >= 0", tmp60);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3487]] /* val8Sto.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp60),"sqrt(val8Sto.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 454;
}

/*
equation index: 455
type: SIMPLE_ASSIGN
val8Sto.Kv = 1.1384199576606166e6 * val8Sto.Kv_SI / val8Sto.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3486]] /* val8Sto.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3487]] /* val8Sto.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3502]] /* val8Sto.rhoStd PARAM */),"val8Sto.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 455;
}

/*
equation index: 456
type: SIMPLE_ASSIGN
val8Sto.Cv = 83036.13671167512 * val8Sto.Kv_SI / (val8Sto.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3485]] /* val8Sto.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3487]] /* val8Sto.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3502]] /* val8Sto.rhoStd PARAM */)) * (0.0631),"val8Sto.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 456;
}

/*
equation index: 457
type: SIMPLE_ASSIGN
val8Sto.Av = val8Sto.Kv_SI / sqrt(val8Sto.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  modelica_real tmp61;
  tmp61 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3502]] /* val8Sto.rhoStd PARAM */);
  if(!(tmp61 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8Sto.rhoStd) was %g should be >= 0", tmp61);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3484]] /* val8Sto.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3487]] /* val8Sto.Kv_SI PARAM */),sqrt(tmp61),"sqrt(val8Sto.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 457;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4722(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4723(DATA *data, threadData_t *threadData);


/*
equation index: 460
type: SIMPLE_ASSIGN
val8_2Sto.Kv_SI = 4.761904761904762 / sqrt(val8_2Sto.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  modelica_real tmp62;
  tmp62 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3561]] /* val8_2Sto.dpValve_nominal PARAM */);
  if(!(tmp62 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2Sto.dpValve_nominal) was %g should be >= 0", tmp62);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3556]] /* val8_2Sto.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp62),"sqrt(val8_2Sto.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
val8_2Sto.Kv = 1.1384199576606166e6 * val8_2Sto.Kv_SI / val8_2Sto.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3555]] /* val8_2Sto.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3556]] /* val8_2Sto.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3571]] /* val8_2Sto.rhoStd PARAM */),"val8_2Sto.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
val8_2Sto.Cv = 83036.13671167512 * val8_2Sto.Kv_SI / (val8_2Sto.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3554]] /* val8_2Sto.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3556]] /* val8_2Sto.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3571]] /* val8_2Sto.rhoStd PARAM */)) * (0.0631),"val8_2Sto.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 462;
}

/*
equation index: 463
type: SIMPLE_ASSIGN
val8_2Sto.Av = val8_2Sto.Kv_SI / sqrt(val8_2Sto.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,463};
  modelica_real tmp63;
  tmp63 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3571]] /* val8_2Sto.rhoStd PARAM */);
  if(!(tmp63 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2Sto.rhoStd) was %g should be >= 0", tmp63);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3553]] /* val8_2Sto.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3556]] /* val8_2Sto.Kv_SI PARAM */),sqrt(tmp63),"sqrt(val8_2Sto.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 463;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4720(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4721(DATA *data, threadData_t *threadData);


/*
equation index: 466
type: SIMPLE_ASSIGN
val8_2.Kv_SI = 4.761904761904762 / sqrt(val8_2.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,466};
  modelica_real tmp64;
  tmp64 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3515]] /* val8_2.dpValve_nominal PARAM */);
  if(!(tmp64 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2.dpValve_nominal) was %g should be >= 0", tmp64);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3510]] /* val8_2.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp64),"sqrt(val8_2.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 466;
}

/*
equation index: 467
type: SIMPLE_ASSIGN
val8_2.Kv = 1.1384199576606166e6 * val8_2.Kv_SI / val8_2.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3509]] /* val8_2.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3510]] /* val8_2.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3525]] /* val8_2.rhoStd PARAM */),"val8_2.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 467;
}

/*
equation index: 468
type: SIMPLE_ASSIGN
val8_2.Cv = 83036.13671167512 * val8_2.Kv_SI / (val8_2.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,468};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3508]] /* val8_2.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3510]] /* val8_2.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3525]] /* val8_2.rhoStd PARAM */)) * (0.0631),"val8_2.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 468;
}

/*
equation index: 469
type: SIMPLE_ASSIGN
val8_2.Av = val8_2.Kv_SI / sqrt(val8_2.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  modelica_real tmp65;
  tmp65 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3525]] /* val8_2.rhoStd PARAM */);
  if(!(tmp65 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2.rhoStd) was %g should be >= 0", tmp65);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3507]] /* val8_2.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3510]] /* val8_2.Kv_SI PARAM */),sqrt(tmp65),"sqrt(val8_2.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 469;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4718(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4719(DATA *data, threadData_t *threadData);


/*
equation index: 472
type: SIMPLE_ASSIGN
pumTanRet.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* pumTanRet.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 472;
}

/*
equation index: 473
type: SIMPLE_ASSIGN
pumTanRet.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2596]] /* pumTanRet.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 473;
}

/*
equation index: 474
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.medium.T = pumTanRet.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* pumTanRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* pumTanRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 474;
}

/*
equation index: 475
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.medium.T_degC = -273.15 + pumTanRet.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* pumTanRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* pumTanRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 475;
}

/*
equation index: 476
type: SIMPLE_ASSIGN
val8Rel.port_b.h_outflow = 4184.0 * pumTanRet.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* pumTanRet.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 476;
}

/*
equation index: 477
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.U = pumTanRet.vol.dynBal.m * val8Rel.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* pumTanRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* pumTanRet.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1759]] /* val8Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 477;
}

/*
equation index: 478
type: SIMPLE_ASSIGN
pumTanSup.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* pumTanSup.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 478;
}

/*
equation index: 479
type: SIMPLE_ASSIGN
pumTanSup.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2725]] /* pumTanSup.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 479;
}

/*
equation index: 480
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.medium.T = pumTanSup.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* pumTanSup.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* pumTanSup.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 480;
}

/*
equation index: 481
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.medium.T_degC = -273.15 + pumTanSup.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* pumTanSup.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* pumTanSup.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 481;
}

/*
equation index: 482
type: SIMPLE_ASSIGN
val8_2Rel.port_a.h_outflow = 4184.0 * pumTanSup.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1292]] /* pumTanSup.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 482;
}

/*
equation index: 483
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.U = pumTanSup.vol.dynBal.m * val8_2Rel.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* pumTanSup.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* pumTanSup.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* val8_2Rel.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 483;
}

/*
equation index: 484
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.T = junCHWSup2.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* junCHWSup2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1834]] /* junCHWSup2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 484;
}

/*
equation index: 485
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.T_degC = -273.15 + junCHWSup2.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* junCHWSup2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* junCHWSup2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 485;
}

/*
equation index: 486
type: SIMPLE_ASSIGN
val8Rel.port_a.h_outflow = 4184.0 * junCHWSup2.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* junCHWSup2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 486;
}

/*
equation index: 487
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.U = junCHWSup2.vol.dynBal.m * val8Rel.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* junCHWSup2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* junCHWSup2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1758]] /* val8Rel.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.T = junCHWRet2.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* junCHWRet2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1668]] /* junCHWRet2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 488;
}

/*
equation index: 489
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.T_degC = -273.15 + junCHWRet2.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* junCHWRet2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* junCHWRet2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 489;
}

/*
equation index: 490
type: SIMPLE_ASSIGN
val8_2Rel.port_b.h_outflow = 4184.0 * junCHWRet2.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* junCHWRet2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 490;
}

/*
equation index: 491
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.U = junCHWRet2.vol.dynBal.m * val8_2Rel.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* junCHWRet2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* junCHWRet2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 491;
}

/*
equation index: 492
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[6].TFlu_nominal + tan.indTanHex.hANatCyl[6].TSur_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2997]] /* tan.indTanHex.hANatCyl[6].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 492;
}

/*
equation index: 493
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2937]] /* tan.indTanHex.hANatCyl[6].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 493;
}

/*
equation index: 494
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* tan.indTanHex.hANatCyl[6].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 494;
}

/*
equation index: 495
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3015]] /* tan.indTanHex.hANatCyl[6].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 495;
}

/*
equation index: 496
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[6].TSur_nominal + tan.indTanHex.hANatCyl[6].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3003]] /* tan.indTanHex.hANatCyl[6].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 496;
}

/*
equation index: 497
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].nu_nominal = tan.indTanHex.hANatCyl[6].mu_nominal / tan.indTanHex.hANatCyl[6].rho_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3009]] /* tan.indTanHex.hANatCyl[6].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3003]] /* tan.indTanHex.hANatCyl[6].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3015]] /* tan.indTanHex.hANatCyl[6].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[6].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 497;
}

/*
equation index: 498
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[6].B_nominal * (tan.indTanHex.hANatCyl[6].TSur_nominal - tan.indTanHex.hANatCyl[6].TFlu_nominal) * tan.indTanHex.hANatCyl[6].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[6].nu_nominal ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  modelica_real tmp66;
  modelica_real tmp67;
  tmp66 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* tan.indTanHex.hANatCyl[6].ChaLen PARAM */);
  tmp67 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3009]] /* tan.indTanHex.hANatCyl[6].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2949]] /* tan.indTanHex.hANatCyl[6].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2937]] /* tan.indTanHex.hANatCyl[6].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2979]] /* tan.indTanHex.hANatCyl[6].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2973]] /* tan.indTanHex.hANatCyl[6].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp66 * tmp66 * tmp66),(tmp67 * tmp67),"tan.indTanHex.hANatCyl[6].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 498;
}

/*
equation index: 499
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Ra_nominal = tan.indTanHex.hANatCyl[6].Gr_nominal * tan.indTanHex.hANatCyl[6].Pr_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* tan.indTanHex.hANatCyl[6].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2949]] /* tan.indTanHex.hANatCyl[6].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* tan.indTanHex.hANatCyl[6].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 499;
}

/*
equation index: 500
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[6].k_nominal, tan.indTanHex.hANatCyl[6].Pr_nominal, tan.indTanHex.hANatCyl[6].Ra_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2955]] /* tan.indTanHex.hANatCyl[6].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2997]] /* tan.indTanHex.hANatCyl[6].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2961]] /* tan.indTanHex.hANatCyl[6].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2967]] /* tan.indTanHex.hANatCyl[6].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 500;
}

/*
equation index: 501
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].h_nominal = tan.indTanHex.hANatCyl[6].Nusselt_nominal * tan.indTanHex.hANatCyl[6].k_nominal / tan.indTanHex.hANatCyl[6].ChaLen
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2991]] /* tan.indTanHex.hANatCyl[6].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2955]] /* tan.indTanHex.hANatCyl[6].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2997]] /* tan.indTanHex.hANatCyl[6].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2943]] /* tan.indTanHex.hANatCyl[6].ChaLen PARAM */),"tan.indTanHex.hANatCyl[6].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[6].A = tan.indTanHex.hANatCyl[6].hA_nominal / tan.indTanHex.hANatCyl[6].h_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2931]] /* tan.indTanHex.hANatCyl[6].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2985]] /* tan.indTanHex.hANatCyl[6].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2991]] /* tan.indTanHex.hANatCyl[6].h_nominal PARAM */),"tan.indTanHex.hANatCyl[6].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[5].TFlu_nominal + tan.indTanHex.hANatCyl[5].TSur_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2996]] /* tan.indTanHex.hANatCyl[5].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 503;
}

/*
equation index: 504
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* tan.indTanHex.hANatCyl[5].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 504;
}

/*
equation index: 505
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* tan.indTanHex.hANatCyl[5].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 505;
}

/*
equation index: 506
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3014]] /* tan.indTanHex.hANatCyl[5].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 506;
}

/*
equation index: 507
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[5].TSur_nominal + tan.indTanHex.hANatCyl[5].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* tan.indTanHex.hANatCyl[5].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 507;
}

/*
equation index: 508
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].nu_nominal = tan.indTanHex.hANatCyl[5].mu_nominal / tan.indTanHex.hANatCyl[5].rho_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3008]] /* tan.indTanHex.hANatCyl[5].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3002]] /* tan.indTanHex.hANatCyl[5].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3014]] /* tan.indTanHex.hANatCyl[5].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[5].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 508;
}

/*
equation index: 509
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[5].B_nominal * (tan.indTanHex.hANatCyl[5].TSur_nominal - tan.indTanHex.hANatCyl[5].TFlu_nominal) * tan.indTanHex.hANatCyl[5].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[5].nu_nominal ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  modelica_real tmp68;
  modelica_real tmp69;
  tmp68 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* tan.indTanHex.hANatCyl[5].ChaLen PARAM */);
  tmp69 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3008]] /* tan.indTanHex.hANatCyl[5].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2948]] /* tan.indTanHex.hANatCyl[5].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2936]] /* tan.indTanHex.hANatCyl[5].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2978]] /* tan.indTanHex.hANatCyl[5].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2972]] /* tan.indTanHex.hANatCyl[5].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp68 * tmp68 * tmp68),(tmp69 * tmp69),"tan.indTanHex.hANatCyl[5].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 509;
}

/*
equation index: 510
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Ra_nominal = tan.indTanHex.hANatCyl[5].Gr_nominal * tan.indTanHex.hANatCyl[5].Pr_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2966]] /* tan.indTanHex.hANatCyl[5].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2948]] /* tan.indTanHex.hANatCyl[5].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* tan.indTanHex.hANatCyl[5].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 510;
}

/*
equation index: 511
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[5].k_nominal, tan.indTanHex.hANatCyl[5].Pr_nominal, tan.indTanHex.hANatCyl[5].Ra_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2954]] /* tan.indTanHex.hANatCyl[5].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2996]] /* tan.indTanHex.hANatCyl[5].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2960]] /* tan.indTanHex.hANatCyl[5].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2966]] /* tan.indTanHex.hANatCyl[5].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 511;
}

/*
equation index: 512
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].h_nominal = tan.indTanHex.hANatCyl[5].Nusselt_nominal * tan.indTanHex.hANatCyl[5].k_nominal / tan.indTanHex.hANatCyl[5].ChaLen
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2990]] /* tan.indTanHex.hANatCyl[5].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2954]] /* tan.indTanHex.hANatCyl[5].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2996]] /* tan.indTanHex.hANatCyl[5].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2942]] /* tan.indTanHex.hANatCyl[5].ChaLen PARAM */),"tan.indTanHex.hANatCyl[5].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[5].A = tan.indTanHex.hANatCyl[5].hA_nominal / tan.indTanHex.hANatCyl[5].h_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2930]] /* tan.indTanHex.hANatCyl[5].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2984]] /* tan.indTanHex.hANatCyl[5].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2990]] /* tan.indTanHex.hANatCyl[5].h_nominal PARAM */),"tan.indTanHex.hANatCyl[5].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 513;
}

/*
equation index: 514
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[4].TFlu_nominal + tan.indTanHex.hANatCyl[4].TSur_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2995]] /* tan.indTanHex.hANatCyl[4].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 514;
}

/*
equation index: 515
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,515};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2935]] /* tan.indTanHex.hANatCyl[4].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 515;
}

/*
equation index: 516
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* tan.indTanHex.hANatCyl[4].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 516;
}

/*
equation index: 517
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3013]] /* tan.indTanHex.hANatCyl[4].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 517;
}

/*
equation index: 518
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[4].TSur_nominal + tan.indTanHex.hANatCyl[4].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3001]] /* tan.indTanHex.hANatCyl[4].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].nu_nominal = tan.indTanHex.hANatCyl[4].mu_nominal / tan.indTanHex.hANatCyl[4].rho_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3007]] /* tan.indTanHex.hANatCyl[4].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3001]] /* tan.indTanHex.hANatCyl[4].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3013]] /* tan.indTanHex.hANatCyl[4].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[4].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[4].B_nominal * (tan.indTanHex.hANatCyl[4].TSur_nominal - tan.indTanHex.hANatCyl[4].TFlu_nominal) * tan.indTanHex.hANatCyl[4].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[4].nu_nominal ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  modelica_real tmp70;
  modelica_real tmp71;
  tmp70 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* tan.indTanHex.hANatCyl[4].ChaLen PARAM */);
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3007]] /* tan.indTanHex.hANatCyl[4].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2947]] /* tan.indTanHex.hANatCyl[4].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2935]] /* tan.indTanHex.hANatCyl[4].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2977]] /* tan.indTanHex.hANatCyl[4].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2971]] /* tan.indTanHex.hANatCyl[4].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp70 * tmp70 * tmp70),(tmp71 * tmp71),"tan.indTanHex.hANatCyl[4].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 520;
}

/*
equation index: 521
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Ra_nominal = tan.indTanHex.hANatCyl[4].Gr_nominal * tan.indTanHex.hANatCyl[4].Pr_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* tan.indTanHex.hANatCyl[4].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2947]] /* tan.indTanHex.hANatCyl[4].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* tan.indTanHex.hANatCyl[4].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 521;
}

/*
equation index: 522
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[4].k_nominal, tan.indTanHex.hANatCyl[4].Pr_nominal, tan.indTanHex.hANatCyl[4].Ra_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* tan.indTanHex.hANatCyl[4].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2995]] /* tan.indTanHex.hANatCyl[4].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2959]] /* tan.indTanHex.hANatCyl[4].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2965]] /* tan.indTanHex.hANatCyl[4].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 522;
}

/*
equation index: 523
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].h_nominal = tan.indTanHex.hANatCyl[4].Nusselt_nominal * tan.indTanHex.hANatCyl[4].k_nominal / tan.indTanHex.hANatCyl[4].ChaLen
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2989]] /* tan.indTanHex.hANatCyl[4].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2953]] /* tan.indTanHex.hANatCyl[4].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2995]] /* tan.indTanHex.hANatCyl[4].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2941]] /* tan.indTanHex.hANatCyl[4].ChaLen PARAM */),"tan.indTanHex.hANatCyl[4].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 523;
}

/*
equation index: 524
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[4].A = tan.indTanHex.hANatCyl[4].hA_nominal / tan.indTanHex.hANatCyl[4].h_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* tan.indTanHex.hANatCyl[4].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2983]] /* tan.indTanHex.hANatCyl[4].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2989]] /* tan.indTanHex.hANatCyl[4].h_nominal PARAM */),"tan.indTanHex.hANatCyl[4].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 524;
}

/*
equation index: 525
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[3].TFlu_nominal + tan.indTanHex.hANatCyl[3].TSur_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* tan.indTanHex.hANatCyl[3].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* tan.indTanHex.hANatCyl[3].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* tan.indTanHex.hANatCyl[3].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3012]] /* tan.indTanHex.hANatCyl[3].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[3].TSur_nominal + tan.indTanHex.hANatCyl[3].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3000]] /* tan.indTanHex.hANatCyl[3].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 529;
}

/*
equation index: 530
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].nu_nominal = tan.indTanHex.hANatCyl[3].mu_nominal / tan.indTanHex.hANatCyl[3].rho_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3006]] /* tan.indTanHex.hANatCyl[3].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3000]] /* tan.indTanHex.hANatCyl[3].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3012]] /* tan.indTanHex.hANatCyl[3].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[3].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 530;
}

/*
equation index: 531
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[3].B_nominal * (tan.indTanHex.hANatCyl[3].TSur_nominal - tan.indTanHex.hANatCyl[3].TFlu_nominal) * tan.indTanHex.hANatCyl[3].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[3].nu_nominal ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  modelica_real tmp72;
  modelica_real tmp73;
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* tan.indTanHex.hANatCyl[3].ChaLen PARAM */);
  tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3006]] /* tan.indTanHex.hANatCyl[3].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* tan.indTanHex.hANatCyl[3].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2934]] /* tan.indTanHex.hANatCyl[3].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2976]] /* tan.indTanHex.hANatCyl[3].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2970]] /* tan.indTanHex.hANatCyl[3].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp72 * tmp72 * tmp72),(tmp73 * tmp73),"tan.indTanHex.hANatCyl[3].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 531;
}

/*
equation index: 532
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Ra_nominal = tan.indTanHex.hANatCyl[3].Gr_nominal * tan.indTanHex.hANatCyl[3].Pr_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* tan.indTanHex.hANatCyl[3].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2946]] /* tan.indTanHex.hANatCyl[3].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* tan.indTanHex.hANatCyl[3].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 532;
}

/*
equation index: 533
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[3].k_nominal, tan.indTanHex.hANatCyl[3].Pr_nominal, tan.indTanHex.hANatCyl[3].Ra_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* tan.indTanHex.hANatCyl[3].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* tan.indTanHex.hANatCyl[3].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2958]] /* tan.indTanHex.hANatCyl[3].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2964]] /* tan.indTanHex.hANatCyl[3].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].h_nominal = tan.indTanHex.hANatCyl[3].Nusselt_nominal * tan.indTanHex.hANatCyl[3].k_nominal / tan.indTanHex.hANatCyl[3].ChaLen
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2988]] /* tan.indTanHex.hANatCyl[3].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2952]] /* tan.indTanHex.hANatCyl[3].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2994]] /* tan.indTanHex.hANatCyl[3].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2940]] /* tan.indTanHex.hANatCyl[3].ChaLen PARAM */),"tan.indTanHex.hANatCyl[3].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 534;
}

/*
equation index: 535
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[3].A = tan.indTanHex.hANatCyl[3].hA_nominal / tan.indTanHex.hANatCyl[3].h_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2928]] /* tan.indTanHex.hANatCyl[3].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2982]] /* tan.indTanHex.hANatCyl[3].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2988]] /* tan.indTanHex.hANatCyl[3].h_nominal PARAM */),"tan.indTanHex.hANatCyl[3].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 535;
}

/*
equation index: 536
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[2].TFlu_nominal + tan.indTanHex.hANatCyl[2].TSur_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2993]] /* tan.indTanHex.hANatCyl[2].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 536;
}

/*
equation index: 537
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2933]] /* tan.indTanHex.hANatCyl[2].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* tan.indTanHex.hANatCyl[2].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3011]] /* tan.indTanHex.hANatCyl[2].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[2].TSur_nominal + tan.indTanHex.hANatCyl[2].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2999]] /* tan.indTanHex.hANatCyl[2].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 540;
}

/*
equation index: 541
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].nu_nominal = tan.indTanHex.hANatCyl[2].mu_nominal / tan.indTanHex.hANatCyl[2].rho_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,541};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3005]] /* tan.indTanHex.hANatCyl[2].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2999]] /* tan.indTanHex.hANatCyl[2].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3011]] /* tan.indTanHex.hANatCyl[2].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[2].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 541;
}

/*
equation index: 542
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[2].B_nominal * (tan.indTanHex.hANatCyl[2].TSur_nominal - tan.indTanHex.hANatCyl[2].TFlu_nominal) * tan.indTanHex.hANatCyl[2].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[2].nu_nominal ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,542};
  modelica_real tmp74;
  modelica_real tmp75;
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* tan.indTanHex.hANatCyl[2].ChaLen PARAM */);
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3005]] /* tan.indTanHex.hANatCyl[2].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2945]] /* tan.indTanHex.hANatCyl[2].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2933]] /* tan.indTanHex.hANatCyl[2].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2975]] /* tan.indTanHex.hANatCyl[2].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2969]] /* tan.indTanHex.hANatCyl[2].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp74 * tmp74 * tmp74),(tmp75 * tmp75),"tan.indTanHex.hANatCyl[2].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 542;
}

/*
equation index: 543
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Ra_nominal = tan.indTanHex.hANatCyl[2].Gr_nominal * tan.indTanHex.hANatCyl[2].Pr_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* tan.indTanHex.hANatCyl[2].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2945]] /* tan.indTanHex.hANatCyl[2].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* tan.indTanHex.hANatCyl[2].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[2].k_nominal, tan.indTanHex.hANatCyl[2].Pr_nominal, tan.indTanHex.hANatCyl[2].Ra_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* tan.indTanHex.hANatCyl[2].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2993]] /* tan.indTanHex.hANatCyl[2].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2957]] /* tan.indTanHex.hANatCyl[2].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2963]] /* tan.indTanHex.hANatCyl[2].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 544;
}

/*
equation index: 545
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].h_nominal = tan.indTanHex.hANatCyl[2].Nusselt_nominal * tan.indTanHex.hANatCyl[2].k_nominal / tan.indTanHex.hANatCyl[2].ChaLen
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2987]] /* tan.indTanHex.hANatCyl[2].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2951]] /* tan.indTanHex.hANatCyl[2].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2993]] /* tan.indTanHex.hANatCyl[2].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2939]] /* tan.indTanHex.hANatCyl[2].ChaLen PARAM */),"tan.indTanHex.hANatCyl[2].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 545;
}

/*
equation index: 546
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[2].A = tan.indTanHex.hANatCyl[2].hA_nominal / tan.indTanHex.hANatCyl[2].h_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,546};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2927]] /* tan.indTanHex.hANatCyl[2].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2981]] /* tan.indTanHex.hANatCyl[2].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2987]] /* tan.indTanHex.hANatCyl[2].h_nominal PARAM */),"tan.indTanHex.hANatCyl[2].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 546;
}

/*
equation index: 547
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].k_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.thermalConductivity(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[1].TFlu_nominal + tan.indTanHex.hANatCyl[1].TSur_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2992]] /* tan.indTanHex.hANatCyl[1].k_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_thermalConductivity(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 547;
}

/*
equation index: 548
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].B_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.isobaricExpansionCoefficientWater(0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* tan.indTanHex.hANatCyl[1].B_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_isobaricExpansionCoefficientWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 548;
}

/*
equation index: 549
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Pr_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.prandtlNumberWater(0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* tan.indTanHex.hANatCyl[1].Pr_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_prandtlNumberWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 549;
}

/*
equation index: 550
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].rho_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.Medium.setState_pTX(3e5, 0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal), {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* tan.indTanHex.hANatCyl[1].rho_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_Medium_setState__pTX(threadData, 3e5, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)), _OMC_LIT75));
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].mu_nominal = Buildings.Fluid.HeatExchangers.BaseClasses.dynamicViscosityWater(0.5 * (tan.indTanHex.hANatCyl[1].TSur_nominal + tan.indTanHex.hANatCyl[1].TFlu_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2998]] /* tan.indTanHex.hANatCyl[1].mu_nominal PARAM */) = omc_Buildings_Fluid_HeatExchangers_BaseClasses_dynamicViscosityWater(threadData, (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)));
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].nu_nominal = tan.indTanHex.hANatCyl[1].mu_nominal / tan.indTanHex.hANatCyl[1].rho_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3004]] /* tan.indTanHex.hANatCyl[1].nu_nominal PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2998]] /* tan.indTanHex.hANatCyl[1].mu_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3010]] /* tan.indTanHex.hANatCyl[1].rho_nominal PARAM */),"tan.indTanHex.hANatCyl[1].rho_nominal",equationIndexes);
  threadData->lastEquationSolved = 552;
}

/*
equation index: 553
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Gr_nominal = 9.80665 * tan.indTanHex.hANatCyl[1].B_nominal * (tan.indTanHex.hANatCyl[1].TSur_nominal - tan.indTanHex.hANatCyl[1].TFlu_nominal) * tan.indTanHex.hANatCyl[1].ChaLen ^ 3.0 / tan.indTanHex.hANatCyl[1].nu_nominal ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,553};
  modelica_real tmp76;
  modelica_real tmp77;
  tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* tan.indTanHex.hANatCyl[1].ChaLen PARAM */);
  tmp77 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3004]] /* tan.indTanHex.hANatCyl[1].nu_nominal PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2944]] /* tan.indTanHex.hANatCyl[1].Gr_nominal PARAM */) = (9.80665) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2932]] /* tan.indTanHex.hANatCyl[1].B_nominal PARAM */)) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2974]] /* tan.indTanHex.hANatCyl[1].TSur_nominal PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2968]] /* tan.indTanHex.hANatCyl[1].TFlu_nominal PARAM */)) * (DIVISION_SIM((tmp76 * tmp76 * tmp76),(tmp77 * tmp77),"tan.indTanHex.hANatCyl[1].nu_nominal ^ 2.0",equationIndexes))));
  threadData->lastEquationSolved = 553;
}

/*
equation index: 554
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Ra_nominal = tan.indTanHex.hANatCyl[1].Gr_nominal * tan.indTanHex.hANatCyl[1].Pr_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,554};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* tan.indTanHex.hANatCyl[1].Ra_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2944]] /* tan.indTanHex.hANatCyl[1].Gr_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* tan.indTanHex.hANatCyl[1].Pr_nominal PARAM */));
  threadData->lastEquationSolved = 554;
}

/*
equation index: 555
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].Nusselt_nominal = WaterCooledChillerExample.WaterCooledChillerExample7.tan.indTanHex.hANatCyl.nusselt(tan.indTanHex.hANatCyl[1].k_nominal, tan.indTanHex.hANatCyl[1].Pr_nominal, tan.indTanHex.hANatCyl[1].Ra_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2950]] /* tan.indTanHex.hANatCyl[1].Nusselt_nominal PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_tan_indTanHex_hANatCyl_nusselt(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2992]] /* tan.indTanHex.hANatCyl[1].k_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2956]] /* tan.indTanHex.hANatCyl[1].Pr_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2962]] /* tan.indTanHex.hANatCyl[1].Ra_nominal PARAM */));
  threadData->lastEquationSolved = 555;
}

/*
equation index: 556
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].h_nominal = tan.indTanHex.hANatCyl[1].Nusselt_nominal * tan.indTanHex.hANatCyl[1].k_nominal / tan.indTanHex.hANatCyl[1].ChaLen
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* tan.indTanHex.hANatCyl[1].h_nominal PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2950]] /* tan.indTanHex.hANatCyl[1].Nusselt_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2992]] /* tan.indTanHex.hANatCyl[1].k_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2938]] /* tan.indTanHex.hANatCyl[1].ChaLen PARAM */),"tan.indTanHex.hANatCyl[1].ChaLen",equationIndexes));
  threadData->lastEquationSolved = 556;
}

/*
equation index: 557
type: SIMPLE_ASSIGN
tan.indTanHex.hANatCyl[1].A = tan.indTanHex.hANatCyl[1].hA_nominal / tan.indTanHex.hANatCyl[1].h_nominal
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2926]] /* tan.indTanHex.hANatCyl[1].A PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2980]] /* tan.indTanHex.hANatCyl[1].hA_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2986]] /* tan.indTanHex.hANatCyl[1].h_nominal PARAM */),"tan.indTanHex.hANatCyl[1].h_nominal",equationIndexes);
  threadData->lastEquationSolved = 557;
}

/*
equation index: 558
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[6].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[6].T_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,558};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3045]] /* tan.indTanHex.hAPipIns[6].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3021]] /* tan.indTanHex.hAPipIns[6].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[6].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 558;
}

/*
equation index: 559
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[5].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[5].T_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3044]] /* tan.indTanHex.hAPipIns[5].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3020]] /* tan.indTanHex.hAPipIns[5].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[5].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 559;
}

/*
equation index: 560
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[4].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[4].T_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3043]] /* tan.indTanHex.hAPipIns[4].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3019]] /* tan.indTanHex.hAPipIns[4].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[4].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 560;
}

/*
equation index: 561
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[3].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[3].T_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3042]] /* tan.indTanHex.hAPipIns[3].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3018]] /* tan.indTanHex.hAPipIns[3].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[3].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 561;
}

/*
equation index: 562
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[2].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[2].T_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3041]] /* tan.indTanHex.hAPipIns[2].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3017]] /* tan.indTanHex.hAPipIns[2].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[2].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 562;
}

/*
equation index: 563
type: SIMPLE_ASSIGN
tan.indTanHex.hAPipIns[1].s = 0.014 / (1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[1].T_nominal))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3040]] /* tan.indTanHex.hAPipIns[1].s PARAM */) = DIVISION_SIM(0.014,1.0 + (0.014) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3016]] /* tan.indTanHex.hAPipIns[1].T_nominal PARAM */)),"1.0 + 0.014 * (-273.15 + tan.indTanHex.hAPipIns[1].T_nominal)",equationIndexes);
  threadData->lastEquationSolved = 563;
}

/*
equation index: 564
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.T = tan.vol[4].dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* tan.vol[4].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3257]] /* tan.vol[4].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 564;
}

/*
equation index: 565
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.T_degC = -273.15 + tan.vol[4].dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* tan.vol[4].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* tan.vol[4].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 565;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
tan.vol[4].ports[3].h_outflow = 4184.0 * tan.vol[4].dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* tan.vol[4].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 566;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4685(DATA *data, threadData_t *threadData);


/*
equation index: 568
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.U = tan.vol[4].dynBal.m * tan.vol[4].ports[3].h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* tan.vol[4].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* tan.vol[4].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1710]] /* tan.vol[4].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 568;
}

/*
equation index: 569
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.T = tan.vol[3].dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* tan.vol[3].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3256]] /* tan.vol[3].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 569;
}

/*
equation index: 570
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.T_degC = -273.15 + tan.vol[3].dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* tan.vol[3].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* tan.vol[3].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 570;
}

/*
equation index: 571
type: SIMPLE_ASSIGN
tan.vol[3].ports[3].h_outflow = 4184.0 * tan.vol[3].dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* tan.vol[3].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 571;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4681(DATA *data, threadData_t *threadData);


/*
equation index: 573
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.U = tan.vol[3].dynBal.m * tan.vol[3].ports[3].h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* tan.vol[3].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* tan.vol[3].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1709]] /* tan.vol[3].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 573;
}

/*
equation index: 574
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.T = tan.vol[2].dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* tan.vol[2].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3255]] /* tan.vol[2].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 574;
}

/*
equation index: 575
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.T_degC = -273.15 + tan.vol[2].dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* tan.vol[2].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* tan.vol[2].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 575;
}

/*
equation index: 576
type: SIMPLE_ASSIGN
tan.vol[2].ports[3].h_outflow = 4184.0 * tan.vol[2].dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* tan.vol[2].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 576;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4677(DATA *data, threadData_t *threadData);


/*
equation index: 578
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.U = tan.vol[2].dynBal.m * tan.vol[2].ports[3].h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* tan.vol[2].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* tan.vol[2].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1708]] /* tan.vol[2].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 578;
}

/*
equation index: 579
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.T = tan.vol[1].dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* tan.vol[1].dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3254]] /* tan.vol[1].dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 579;
}

/*
equation index: 580
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.T_degC = -273.15 + tan.vol[1].dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* tan.vol[1].dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* tan.vol[1].dynBal.medium.T variable */);
  threadData->lastEquationSolved = 580;
}

/*
equation index: 581
type: SIMPLE_ASSIGN
tan.vol[1].ports[3].h_outflow = 4184.0 * tan.vol[1].dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* tan.vol[1].dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 581;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4673(DATA *data, threadData_t *threadData);


/*
equation index: 583
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.U = tan.vol[1].dynBal.m * tan.vol[1].ports[3].h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* tan.vol[1].dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* tan.vol[1].dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1707]] /* tan.vol[1].ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 583;
}

/*
equation index: 584
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.T = junCHWRet.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* junCHWRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1585]] /* junCHWRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 584;
}

/*
equation index: 585
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.T_degC = -273.15 + junCHWRet.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* junCHWRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 585;
}

/*
equation index: 586
type: SIMPLE_ASSIGN
junCHWRet.port_3.h_outflow = 4184.0 * junCHWRet.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 586;
}

/*
equation index: 587
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.U = junCHWRet.vol.dynBal.m * junCHWRet.port_3.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* junCHWRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 587;
}

/*
equation index: 588
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.T = junCHWSup.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1751]] /* junCHWSup.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 588;
}

/*
equation index: 589
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.T_degC = -273.15 + junCHWSup.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* junCHWSup.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
junCHWSup.port_3.h_outflow = 4184.0 * junCHWSup.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* junCHWSup.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 590;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.U = junCHWSup.vol.dynBal.m * junCHWSup.port_3.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* junCHWSup.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 591;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4665(DATA *data, threadData_t *threadData);


/*
equation index: 593
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.T = chi2.vol2.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* chi2.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 593;
}

/*
equation index: 594
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.T_degC = -273.15 + chi2.vol2.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* chi2.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* chi2.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 594;
}

/*
equation index: 595
type: SIMPLE_ASSIGN
chi2.port_a2.h_outflow = 4184.0 * chi2.vol2.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* chi2.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 595;
}

/*
equation index: 596
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.U = chi2.vol2.dynBal.m * chi2.port_a2.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* chi2.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* chi2.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* chi2.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 596;
}

/*
equation index: 597
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.T = chi2.vol1.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* chi2.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 597;
}

/*
equation index: 598
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.T_degC = -273.15 + chi2.vol1.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* chi2.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* chi2.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 598;
}

/*
equation index: 599
type: SIMPLE_ASSIGN
chi2.port_a1.h_outflow = 4184.0 * chi2.vol1.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* chi2.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 599;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4637(DATA *data, threadData_t *threadData);


/*
equation index: 601
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.U = chi2.vol1.dynBal.m * chi2.port_a1.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* chi2.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* chi2.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 601;
}

/*
equation index: 602
type: SIMPLE_ASSIGN
TWCLeaTow2.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TWCLeaTow2.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 602;
}

/*
equation index: 603
type: SIMPLE_ASSIGN
TWCLeaTow2.T = TWCLeaTow2.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* TWCLeaTow2.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TWCLeaTow2.T_start PARAM */);
  threadData->lastEquationSolved = 603;
}

/*
equation index: 604
type: SIMPLE_ASSIGN
val7.Kv_SI = 15.873015873015873 / sqrt(val7.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  modelica_real tmp78;
  tmp78 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3421]] /* val7.dpValve_nominal PARAM */);
  if(!(tmp78 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val7.dpValve_nominal) was %g should be >= 0", tmp78);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */) = DIVISION_SIM(15.873015873015873,sqrt(tmp78),"sqrt(val7.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 604;
}

/*
equation index: 605
type: SIMPLE_ASSIGN
val7.Kv = 1.1384199576606166e6 * val7.Kv_SI / val7.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3415]] /* val7.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3431]] /* val7.rhoStd PARAM */),"val7.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 605;
}

/*
equation index: 606
type: SIMPLE_ASSIGN
val7.Cv = 83036.13671167512 * val7.Kv_SI / (val7.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3414]] /* val7.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3431]] /* val7.rhoStd PARAM */)) * (0.0631),"val7.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 606;
}

/*
equation index: 607
type: SIMPLE_ASSIGN
val7.Av = val7.Kv_SI / sqrt(val7.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3431]] /* val7.rhoStd PARAM */);
  if(!(tmp79 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val7.rhoStd) was %g should be >= 0", tmp79);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3413]] /* val7.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3416]] /* val7.Kv_SI PARAM */),sqrt(tmp79),"sqrt(val7.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 607;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4622(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4623(DATA *data, threadData_t *threadData);


/*
equation index: 610
type: SIMPLE_ASSIGN
val7.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, val7.k, val7.m_flow_turbulent), val7.dp_nominal_pos)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* val7.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* val7.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3430]] /* val7.m_flow_turbulent PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3423]] /* val7.dp_nominal_pos PARAM */));
  threadData->lastEquationSolved = 610;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4625(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4626(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4629(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4628(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4627(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4630(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4631(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4632(DATA *data, threadData_t *threadData);


/*
equation index: 619
type: SIMPLE_ASSIGN
expVesChi2.m = expVesChi2.V_start * expVesChi2.rho_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* expVesChi2.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* expVesChi2.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* expVesChi2.rho_start PARAM */));
  threadData->lastEquationSolved = 619;
}

/*
equation index: 620
type: SIMPLE_ASSIGN
expVesChi2.H = expVesChi2.m * WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi2.Medium.specificInternalEnergy(WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi2.Medium.setState_pTX(expVesChi2.p_start, expVesChi2.T_start, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* expVesChi2.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* expVesChi2.m STATE(1) */)) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_specificInternalEnergy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi2_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* expVesChi2.T_start PARAM */), _OMC_LIT88)));
  threadData->lastEquationSolved = 620;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4621(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4648(DATA *data, threadData_t *threadData);


/*
equation index: 623
type: SIMPLE_ASSIGN
cooTow2.T_a = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.setState_phX(val7.port_b.p, val7.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow2.T_a variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* val7.port_b.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 623;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4651(DATA *data, threadData_t *threadData);


/*
equation index: 625
type: SIMPLE_ASSIGN
pumCW2.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* pumCW2.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 625;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5466(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5469(DATA *data, threadData_t *threadData);


/*
equation index: 628
type: SIMPLE_ASSIGN
pumCW2.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,628};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* pumCW2.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 628;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5465(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5467(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5468(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5470(DATA *data, threadData_t *threadData);


/*
equation index: 633
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = homotopy(smooth(1, pumCW2.heaDis.QThe_flow), 0.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* pumCW2.PToMed.u1 variable */) = homotopy((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.heaDis.QThe_flow variable */), 0.0);
  threadData->lastEquationSolved = 633;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5472(DATA *data, threadData_t *threadData);


/*
equation index: 635
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.T = pumCW2.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* pumCW2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 635;
}

/*
equation index: 636
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.T_degC = -273.15 + pumCW2.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* pumCW2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* pumCW2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 636;
}

/*
equation index: 637
type: SIMPLE_ASSIGN
TWCLeaTow2.port_b.h_outflow = 4184.0 * pumCW2.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* pumCW2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 637;
}

/*
equation index: 638
type: SIMPLE_ASSIGN
pumCW2.preSou.V_flow = 15.873015873015873 / Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* pumCW2.preSou.V_flow variable */) = DIVISION_SIM(15.873015873015873,omc_Modelica_Fluid_Utilities_regStep(threadData, 15.873015873015873, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT88)), omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_density(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_pumCW2_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT88)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2537]] /* pumCW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(15.873015873015873, WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.density(WaterCooledChillerExample.WaterCooledChillerExample7.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 638;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4635(DATA *data, threadData_t *threadData);


/*
equation index: 640
type: SIMPLE_ASSIGN
chi2.TConEnt = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.setState_phX(expVesChi2.p_start, TWCLeaTow2.port_b.h_outflow, {1.0}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* chi2.TConEnt variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT75));
  threadData->lastEquationSolved = 640;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4614(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4653(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4611(DATA *data, threadData_t *threadData);


/*
equation index: 644
type: SIMPLE_ASSIGN
TWCLeaTow2.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TWCLeaTow2.Medium.setState_phX(expVesChi2.p_start, TWCLeaTow2.port_b.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TWCLeaTow2.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TWCLeaTow2_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 644;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4644(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4645(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4652(DATA *data, threadData_t *threadData);


/*
equation index: 648
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.U = pumCW2.vol.dynBal.m * TWCLeaTow2.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* pumCW2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* pumCW2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 648;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_649(DATA*, threadData_t*);
/*
equation index: 650
indexNonlinear: 1
type: NONLINEAR

vars: {cooTow2.FRWat0}
eqns: {649}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,650};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 650 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,650};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 650 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  threadData->lastEquationSolved = 650;
}

/*
equation index: 651
type: SIMPLE_ASSIGN
cooTow2.mRef_flow = 15.873015873015873 / cooTow2.FRWat0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,651};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* cooTow2.mRef_flow PARAM */) = DIVISION_SIM(15.873015873015873,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */),"cooTow2.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 651;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4609(DATA *data, threadData_t *threadData);


/*
equation index: 653
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.medium.T = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* der(cooTow2.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 653;
}

/*
equation index: 654
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.medium.T_degC = $DER.cooTow2.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* der(cooTow2.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* der(cooTow2.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
$DER.val7.port_a.h_outflow = 4184.0 * $DER.cooTow2.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(val7.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* der(cooTow2.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * $DER.val7.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* der(val7.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 656;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_657(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_658(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_659(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_660(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_661(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_662(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_663(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_664(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_665(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_666(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_667(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_668(DATA*, threadData_t*);
/*
equation index: 669
indexNonlinear: 2
type: NONLINEAR

vars: {val7.port_a.h_outflow}
eqns: {657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,669};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 669 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,669};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 669 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  threadData->lastEquationSolved = 669;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5238(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5239(DATA *data, threadData_t *threadData);


/*
equation index: 672
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * val7.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* cooTow2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 672;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5253(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5254(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5252(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5256(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5257(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5473(DATA *data, threadData_t *threadData);


/*
equation index: 679
type: SIMPLE_ASSIGN
val8.Kv_SI = 4.761904761904762 / sqrt(val8.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,679};
  modelica_real tmp80;
  tmp80 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3445]] /* val8.dpValve_nominal PARAM */);
  if(!(tmp80 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8.dpValve_nominal) was %g should be >= 0", tmp80);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp80),"sqrt(val8.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 679;
}

/*
equation index: 680
type: SIMPLE_ASSIGN
val8.Kv = 1.1384199576606166e6 * val8.Kv_SI / val8.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3439]] /* val8.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3455]] /* val8.rhoStd PARAM */),"val8.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 680;
}

/*
equation index: 681
type: SIMPLE_ASSIGN
val8.Cv = 83036.13671167512 * val8.Kv_SI / (val8.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3438]] /* val8.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3455]] /* val8.rhoStd PARAM */)) * (0.0631),"val8.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 681;
}

/*
equation index: 682
type: SIMPLE_ASSIGN
val8.Av = val8.Kv_SI / sqrt(val8.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,682};
  modelica_real tmp81;
  tmp81 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3455]] /* val8.rhoStd PARAM */);
  if(!(tmp81 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8.rhoStd) was %g should be >= 0", tmp81);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3437]] /* val8.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3440]] /* val8.Kv_SI PARAM */),sqrt(tmp81),"sqrt(val8.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 682;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4607(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4608(DATA *data, threadData_t *threadData);


/*
equation index: 685
type: SIMPLE_ASSIGN
pumCHW2.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2204]] /* pumCHW2.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 685;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5475(DATA *data, threadData_t *threadData);


/*
equation index: 687
type: SIMPLE_ASSIGN
pumCHW2.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* pumCHW2.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 687;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5474(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5476(DATA *data, threadData_t *threadData);


/*
equation index: 690
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.T = pumCHW2.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCHW2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 690;
}

/*
equation index: 691
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.T_degC = -273.15 + pumCHW2.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* pumCHW2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCHW2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 691;
}

/*
equation index: 692
type: SIMPLE_ASSIGN
pumCHW2.port_b.h_outflow = 4184.0 * pumCHW2.vol.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* pumCHW2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 692;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4658(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4604(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4657(DATA *data, threadData_t *threadData);


/*
equation index: 696
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.U = pumCHW2.vol.dynBal.m * pumCHW2.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* pumCHW2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* pumCHW2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 696;
}

/*
equation index: 697
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.Xi[1] = junOut.vol.dynBal.X_start[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junOut.vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 697;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4580(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4581(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4582(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4588(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4589(DATA *data, threadData_t *threadData);


/*
equation index: 703
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.p = junOut.vol.dynBal.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junOut.vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 703;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4572(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4569(DATA *data, threadData_t *threadData);


void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_706(DATA*, threadData_t*);
/*
equation index: 707
indexNonlinear: 3
type: NONLINEAR

vars: {damOA.m_flow}
eqns: {706}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,707};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 707 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,707};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 707 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  threadData->lastEquationSolved = 707;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4587(DATA *data, threadData_t *threadData);


/*
equation index: 709
type: SIMPLE_ASSIGN
junOut.vol.dynBal.m = 1.1843079200592153e-5 * junOut.vol.dynBal.fluidVolume * junOut.vol.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junOut.vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* junOut.vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 709;
}

/*
equation index: 710
type: SIMPLE_ASSIGN
junOut.vol.dynBal.mXi[1] = junOut.vol.dynBal.m * junOut.vol.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* junOut.vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 710;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4573(DATA *data, threadData_t *threadData);


/*
equation index: 712
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.T = junOut.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* junOut.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junOut.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 712;
}

/*
equation index: 713
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.T_degC = -273.15 + junOut.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* junOut.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 713;
}

/*
equation index: 714
type: SIMPLE_ASSIGN
junOut.vol.ports[3].h_outflow = 1006.0 * junOut.vol.dynBal.medium.T_degC * junOut.vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * junOut.vol.dynBal.medium.T_degC) * junOut.vol.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* junOut.vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 714;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4592(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4599(DATA *data, threadData_t *threadData);


/*
equation index: 717
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.u = -84437.5 + junOut.vol.ports[3].h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */);
  threadData->lastEquationSolved = 717;
}

/*
equation index: 718
type: SIMPLE_ASSIGN
junOut.vol.dynBal.U = junOut.vol.dynBal.m * junOut.vol.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* junOut.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 718;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4600(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4601(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4602(DATA *data, threadData_t *threadData);


/*
equation index: 722
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.Xi[1] = junRet.vol.dynBal.X_start[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junRet.vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 722;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4551(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4552(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4553(DATA *data, threadData_t *threadData);


/*
equation index: 726
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.p = junRet.vol.dynBal.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junRet.vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 726;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4542(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4539(DATA *data, threadData_t *threadData);


void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_729(DATA*, threadData_t*);
/*
equation index: 730
indexNonlinear: 4
type: NONLINEAR

vars: {damEA.m_flow}
eqns: {729}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,730};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 730 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,730};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 730 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  threadData->lastEquationSolved = 730;
}

/*
equation index: 731
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-damEA.m_flow, damOA.port_b.Xi_outflow[1], junRet.vol.dynBal.medium.Xi[1])
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* junRet.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* damOA.port_b.Xi_outflow[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 731;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4574(DATA *data, threadData_t *threadData);


void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_733(DATA*, threadData_t*);
/*
equation index: 734
indexNonlinear: 5
type: NONLINEAR

vars: {damRet.m_flow}
eqns: {733}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,734};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 734 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,734};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 734 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  threadData->lastEquationSolved = 734;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4586(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4577(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4578(DATA *data, threadData_t *threadData);


/*
equation index: 738
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_mXi_flow[3,1] = semiLinear(-damRet.m_flow, junOut.vol.dynBal.medium.Xi[1], junRet.vol.dynBal.medium.Xi[1])
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.ports_mXi_flow[3,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 738;
}

/*
equation index: 739
type: SIMPLE_ASSIGN
junRet.vol.dynBal.m = 1.1843079200592153e-5 * junRet.vol.dynBal.fluidVolume * junRet.vol.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junRet.vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 739;
}

/*
equation index: 740
type: SIMPLE_ASSIGN
junRet.vol.dynBal.mXi[1] = junRet.vol.dynBal.m * junRet.vol.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* junRet.vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 740;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4543(DATA *data, threadData_t *threadData);


/*
equation index: 742
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.T = junRet.vol.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* junRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 742;
}

/*
equation index: 743
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.T_degC = -273.15 + junRet.vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* junRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 743;
}

/*
equation index: 744
type: SIMPLE_ASSIGN
fanRet.port_a.h_outflow = 1006.0 * junRet.vol.dynBal.medium.T_degC * junRet.vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * junRet.vol.dynBal.medium.T_degC) * junRet.vol.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* junRet.vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 744;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4560(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4598(DATA *data, threadData_t *threadData);


/*
equation index: 747
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_H_flow[3] = semiLinear(-damRet.m_flow, junOut.vol.ports[3].h_outflow, fanRet.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* junRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 747;
}

/*
equation index: 748
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_H_flow[2] = semiLinear(-damEA.m_flow, out.ports[1].h_outflow, fanRet.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* out.ports[1].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 748;
}

/*
equation index: 749
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.u = -84437.5 + fanRet.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */);
  threadData->lastEquationSolved = 749;
}

/*
equation index: 750
type: SIMPLE_ASSIGN
junRet.vol.dynBal.U = junRet.vol.dynBal.m * junRet.vol.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* junRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 750;
}

/*
equation index: 751
type: SIMPLE_ASSIGN
fanRet.eff.hydDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* fanRet.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 751;
}

/*
equation index: 752
type: SIMPLE_ASSIGN
fanRet.eff.motDer[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* fanRet.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 752;
}

/*
equation index: 753
type: SIMPLE_ASSIGN
conPIDTAirSup.I.y = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* conPIDTAirSup.I.y STATE(1) */) = 0.0;
  threadData->lastEquationSolved = 753;
}

/*
equation index: 754
type: SIMPLE_ASSIGN
vol.dynBal.medium.Xi[1] = vol.dynBal.X_start[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3607]] /* vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 754;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4556(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4584(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4585(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4555(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4554(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4505(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4506(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4507(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4508(DATA *data, threadData_t *threadData);


/*
equation index: 764
type: SIMPLE_ASSIGN
vol.dynBal.medium.p = vol.dynBal.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3613]] /* vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 764;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4497(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4498(DATA *data, threadData_t *threadData);


/*
equation index: 767
type: SIMPLE_ASSIGN
fanRet.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, fanRet.VMachine_flow, fanRet.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, 11.05583195135434, fanRet.eff.motDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,767};
  real_array tmp82;
  real_array tmp83;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp84;
  real_array tmp85;
  real_array tmp86;
  real_array tmp87;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp88;
  real_array tmp89;
  real_array_create(&tmp82, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp83, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp84, tmp82, tmp83);
  real_array_create(&tmp85, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp86, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp87, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1290]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp88, tmp86, tmp87);
  real_array_create(&tmp89, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* fanRet.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp84, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* fanRet.VMachine_flow variable */), tmp85, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp88, 11.05583195135434, tmp89, 1.0, 0.05));
  threadData->lastEquationSolved = 767;
}

/*
equation index: 768
type: SIMPLE_ASSIGN
fanRet.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, fanRet.VMachine_flow, fanRet.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, 11.05583195135434, fanRet.eff.hydDer, 1.0, 0.05))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,768};
  real_array tmp90;
  real_array tmp91;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp92;
  real_array tmp93;
  real_array tmp94;
  real_array tmp95;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp96;
  real_array tmp97;
  real_array_create(&tmp90, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp91, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp92, tmp90, tmp91);
  real_array_create(&tmp93, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp94, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp95, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp96, tmp94, tmp95);
  real_array_create(&tmp97, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* fanRet.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp92, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* fanRet.VMachine_flow variable */), tmp93, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp96, 11.05583195135434, tmp97, 1.0, 0.05));
  threadData->lastEquationSolved = 768;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4502(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4499(DATA *data, threadData_t *threadData);


/*
equation index: 771
type: SIMPLE_ASSIGN
fanRet.preSou.V_flow = 13.266998341625207 / Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * vol.dynBal.medium.p, 1.1843079200592153e-5 * junRet.vol.dynBal.medium.p, fanRet.preSou.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* fanRet.preSou.V_flow variable */) = DIVISION_SIM(13.266998341625207,omc_Modelica_Fluid_Utilities_regStep(threadData, 13.266998341625207, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* junRet.vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* fanRet.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * vol.dynBal.medium.p, 1.1843079200592153e-5 * junRet.vol.dynBal.medium.p, fanRet.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 771;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4547(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4496(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4544(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4545(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4546(DATA *data, threadData_t *threadData);


/*
equation index: 777
type: SIMPLE_ASSIGN
vol.dynBal.m = 1.1843079200592153e-5 * vol.dynBal.fluidVolume * vol.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* vol.dynBal.m STATE(1) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3610]] /* vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 777;
}

/*
equation index: 778
type: SIMPLE_ASSIGN
vol.dynBal.mXi[1] = vol.dynBal.m * vol.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 778;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4503(DATA *data, threadData_t *threadData);


/*
equation index: 780
type: SIMPLE_ASSIGN
vol.dynBal.medium.T = 293.15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* vol.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 780;
}

/*
equation index: 781
type: SIMPLE_ASSIGN
vol.dynBal.medium.T_degC = -273.15 + vol.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1801]] /* vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 781;
}

/*
equation index: 782
type: SIMPLE_ASSIGN
vol.ports[2].h_outflow = 1006.0 * vol.dynBal.medium.T_degC * vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * vol.dynBal.medium.T_degC) * vol.dynBal.medium.Xi[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* vol.ports[2].h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1802]] /* vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 782;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4511(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4512(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4513(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4520(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4521(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4566(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4596(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4597(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4564(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4565(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4563(DATA *data, threadData_t *threadData);


/*
equation index: 794
type: SIMPLE_ASSIGN
vol.dynBal.medium.u = -84437.5 + vol.ports[2].h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1815]] /* vol.ports[2].h_outflow variable */);
  threadData->lastEquationSolved = 794;
}

/*
equation index: 795
type: SIMPLE_ASSIGN
vol.dynBal.U = vol.dynBal.m * vol.dynBal.medium.u
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1808]] /* vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 795;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4517(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4516(DATA *data, threadData_t *threadData);


/*
equation index: 798
type: SIMPLE_ASSIGN
TCHWLeaCoi.T = TCHWLeaCoi.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWLeaCoi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* TCHWLeaCoi.T_start PARAM */);
  threadData->lastEquationSolved = 798;
}

/*
equation index: 799
type: SIMPLE_ASSIGN
valByp.Kv_SI = 4.761904761904762 / sqrt(valByp.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,799};
  modelica_real tmp98;
  tmp98 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3586]] /* valByp.dpValve_nominal PARAM */);
  if(!(tmp98 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.dpValve_nominal) was %g should be >= 0", tmp98);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp98),"sqrt(valByp.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 799;
}

/*
equation index: 800
type: SIMPLE_ASSIGN
valByp.Kv = 1.1384199576606166e6 * valByp.Kv_SI / valByp.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,800};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3578]] /* valByp.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3596]] /* valByp.rhoStd PARAM */),"valByp.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 800;
}

/*
equation index: 801
type: SIMPLE_ASSIGN
valByp.Cv = 83036.13671167512 * valByp.Kv_SI / (valByp.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,801};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3577]] /* valByp.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3596]] /* valByp.rhoStd PARAM */)) * (0.0631),"valByp.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 801;
}

/*
equation index: 802
type: SIMPLE_ASSIGN
valByp.Av = valByp.Kv_SI / sqrt(valByp.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,802};
  modelica_real tmp99;
  tmp99 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3596]] /* valByp.rhoStd PARAM */);
  if(!(tmp99 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.rhoStd) was %g should be >= 0", tmp99);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3576]] /* valByp.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3579]] /* valByp.Kv_SI PARAM */),sqrt(tmp99),"sqrt(valByp.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 802;
}

/*
equation index: 803
type: SIMPLE_ASSIGN
TCWLeaTow.T = TCWLeaTow.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* TCWLeaTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* TCWLeaTow.T_start PARAM */);
  threadData->lastEquationSolved = 803;
}

/*
equation index: 804
type: SIMPLE_ASSIGN
TCHWEntChi.T = TCHWEntChi.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWEntChi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* TCHWEntChi.T_start PARAM */);
  threadData->lastEquationSolved = 804;
}

/*
equation index: 805
type: SIMPLE_ASSIGN
TAirSup.T = TAirSup.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TAirSup.T_start PARAM */);
  threadData->lastEquationSolved = 805;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5236(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4522(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4523(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4524(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4525(DATA *data, threadData_t *threadData);


/*
equation index: 811
type: SIMPLE_ASSIGN
KMinusU.u = homotopy(smooth(0, if noEvent(conPIDTAirSup.limiter.simplifiedExpr > 1.0) then 1.0 else if noEvent(conPIDTAirSup.limiter.simplifiedExpr < 0.0) then 0.0 else conPIDTAirSup.limiter.simplifiedExpr), conPIDTAirSup.limiter.simplifiedExpr)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,811};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  tmp100 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* conPIDTAirSup.limiter.simplifiedExpr variable */),1.0);
  tmp102 = (modelica_boolean)tmp100;
  if(tmp102)
  {
    tmp103 = 1.0;
  }
  else
  {
    tmp101 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* conPIDTAirSup.limiter.simplifiedExpr variable */),0.0);
    tmp103 = (tmp101?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* conPIDTAirSup.limiter.simplifiedExpr variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* KMinusU.u variable */) = homotopy(tmp103, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[448]] /* conPIDTAirSup.limiter.simplifiedExpr variable */));
  threadData->lastEquationSolved = 811;
}

/*
equation index: 812
type: SIMPLE_ASSIGN
val1.phi = homotopy(Buildings.Fluid.Actuators.BaseClasses.equalPercentage(KMinusU.u, val1.R, val1.l, val1.delta0), val1.l + KMinusU.u * (1.0 - val1.l))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1721]] /* val1.phi variable */) = homotopy(omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* KMinusU.u variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3344]] /* val1.R PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3355]] /* val1.l PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3347]] /* val1.delta0 PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3355]] /* val1.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* KMinusU.u variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3355]] /* val1.l PARAM */)));
  threadData->lastEquationSolved = 812;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4530(DATA *data, threadData_t *threadData);


/*
equation index: 814
type: SIMPLE_ASSIGN
valByp.phi = homotopy(Buildings.Fluid.Actuators.BaseClasses.equalPercentage(KMinusU.y, valByp.R, valByp.l, valByp.delta0), valByp.l + KMinusU.y * (1.0 - valByp.l))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* valByp.phi variable */) = homotopy(omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* KMinusU.y variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3580]] /* valByp.R PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3591]] /* valByp.l PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3583]] /* valByp.delta0 PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3591]] /* valByp.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* KMinusU.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3591]] /* valByp.l PARAM */)));
  threadData->lastEquationSolved = 814;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4532(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4533(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4534(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4535(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4536(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4537(DATA *data, threadData_t *threadData);


/*
equation index: 821
type: SIMPLE_ASSIGN
val6.Kv_SI = 4.761904761904762 / sqrt(val6.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,821};
  modelica_real tmp104;
  tmp104 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3397]] /* val6.dpValve_nominal PARAM */);
  if(!(tmp104 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.dpValve_nominal) was %g should be >= 0", tmp104);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp104),"sqrt(val6.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 821;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
val6.Kv = 1.1384199576606166e6 * val6.Kv_SI / val6.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3391]] /* val6.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3407]] /* val6.rhoStd PARAM */),"val6.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 822;
}

/*
equation index: 823
type: SIMPLE_ASSIGN
val6.Cv = 83036.13671167512 * val6.Kv_SI / (val6.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3390]] /* val6.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3407]] /* val6.rhoStd PARAM */)) * (0.0631),"val6.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 823;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
val6.Av = val6.Kv_SI / sqrt(val6.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,824};
  modelica_real tmp105;
  tmp105 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3407]] /* val6.rhoStd PARAM */);
  if(!(tmp105 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.rhoStd) was %g should be >= 0", tmp105);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3389]] /* val6.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3392]] /* val6.Kv_SI PARAM */),sqrt(tmp105),"sqrt(val6.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 824;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4395(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4396(DATA *data, threadData_t *threadData);


void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_827(DATA*, threadData_t*);
/*
equation index: 828
indexNonlinear: 6
type: NONLINEAR

vars: {val6.dp}
eqns: {827}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 828 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,828};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 828 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 828;
}

/*
equation index: 829
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T = chi.vol2.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* chi.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 829;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T_degC = -273.15 + chi.vol2.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 830;
}

/*
equation index: 831
type: SIMPLE_ASSIGN
val6.port_b.h_outflow = 4184.0 * chi.vol2.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 831;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4664(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4662(DATA *data, threadData_t *threadData);


/*
equation index: 834
type: SIMPLE_ASSIGN
chi.vol2.dynBal.U = chi.vol2.dynBal.m * val6.port_b.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* chi.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* chi.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 834;
}

/*
equation index: 835
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T = chi.vol1.dynBal.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* chi.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* chi.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 835;
}

/*
equation index: 836
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T_degC = -273.15 + chi.vol1.dynBal.medium.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* chi.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 836;
}

/*
equation index: 837
type: SIMPLE_ASSIGN
TCWLeaTow.port_a.h_outflow = 4184.0 * chi.vol1.dynBal.medium.T_degC
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 837;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4374(DATA *data, threadData_t *threadData);


/*
equation index: 839
type: SIMPLE_ASSIGN
TCWLeaTow.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* TCWLeaTow.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 839;
}

/*
equation index: 840
type: SIMPLE_ASSIGN
chi.vol1.dynBal.U = chi.vol1.dynBal.m * TCWLeaTow.port_a.h_outflow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* chi.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 840;
}

/*
equation index: 841
type: SIMPLE_ASSIGN
expVesChi.m = expVesChi.V_start * expVesChi.rho_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* expVesChi.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* expVesChi.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1238]] /* expVesChi.rho_start PARAM */));
  threadData->lastEquationSolved = 841;
}

/*
equation index: 842
type: SIMPLE_ASSIGN
expVesChi.H = expVesChi.m * WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi.Medium.specificInternalEnergy(WaterCooledChillerExample.WaterCooledChillerExample7.expVesChi.Medium.setState_pTX(expVesChi.p_start, expVesChi.T_start, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* expVesChi.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* expVesChi.m STATE(1) */)) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_specificInternalEnergy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_expVesChi_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* expVesChi.T_start PARAM */), _OMC_LIT88)));
  threadData->lastEquationSolved = 842;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4372(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4385(DATA *data, threadData_t *threadData);


/*
equation index: 845
type: SIMPLE_ASSIGN
val1.Kv_SI = 4.761904761904762 / sqrt(val1.dpValve_nominal)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,845};
  modelica_real tmp106;
  tmp106 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3350]] /* val1.dpValve_nominal PARAM */);
  if(!(tmp106 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.dpValve_nominal) was %g should be >= 0", tmp106);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */) = DIVISION_SIM(4.761904761904762,sqrt(tmp106),"sqrt(val1.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 845;
}

/*
equation index: 846
type: SIMPLE_ASSIGN
val1.Kv = 1.1384199576606166e6 * val1.Kv_SI / val1.rhoStd
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,846};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3342]] /* val1.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3360]] /* val1.rhoStd PARAM */),"val1.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 846;
}

/*
equation index: 847
type: SIMPLE_ASSIGN
val1.Cv = 83036.13671167512 * val1.Kv_SI / (val1.rhoStd * 0.0631)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3341]] /* val1.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3360]] /* val1.rhoStd PARAM */)) * (0.0631),"val1.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 847;
}

/*
equation index: 848
type: SIMPLE_ASSIGN
val1.Av = val1.Kv_SI / sqrt(val1.rhoStd)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,848};
  modelica_real tmp107;
  tmp107 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3360]] /* val1.rhoStd PARAM */);
  if(!(tmp107 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.rhoStd) was %g should be >= 0", tmp107);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3340]] /* val1.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3343]] /* val1.Kv_SI PARAM */),sqrt(tmp107),"sqrt(val1.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 848;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4528(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4529(DATA *data, threadData_t *threadData);


void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_851(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_852(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_853(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_854(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_855(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_856(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_857(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_858(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_859(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_860(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_861(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_862(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_863(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_864(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_865(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_866(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_867(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_868(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_869(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_870(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_871(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_872(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_873(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_874(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_880(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_879(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_878(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_877(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_876(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_875(DATA*, threadData_t*);
/*
equation index: 881
indexNonlinear: 7
type: NONLINEAR

vars: {val8_2Sto.dp, pumCHW2.port_a.p, val8.dp, val8_2Rel.dp, val1.dp, val8Sto.m_flow}
eqns: {851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 880, 879, 878, 877, 876, 875}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,881};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 881 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */);
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,881};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 881 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[5];
  threadData->lastEquationSolved = 881;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5027(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5028(DATA *data, threadData_t *threadData);


/*
equation index: 884
type: SIMPLE_ASSIGN
val8_2Sto.port_a.h_outflow = (max(val8_2.m_flow, 1e-7) * val8_2Rel.port_b.h_outflow + 1e-7 * pumCHW2.port_b.h_outflow) / (1e-7 + max(val8_2.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* val8_2Sto.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */),1e-7),"1e-7 + max(val8_2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 884;
}

/*
equation index: 885
type: SIMPLE_ASSIGN
val8_2.port_a.h_outflow = (1e-7 * pumCHW2.port_b.h_outflow + max(val8Sto.m_flow, 1e-7) * val8_2Sto.port_b.h_outflow) / (1e-7 + max(val8Sto.m_flow, 1e-7))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* val8_2.port_a.h_outflow variable */) = DIVISION_SIM((1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.port_b.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */),1e-7),"1e-7 + max(val8Sto.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 885;
}

/*
equation index: 886
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8_2.m_flow, val8_2.port_a.h_outflow, val8_2Rel.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1773]] /* val8_2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* val8_2Rel.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 886;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4993(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4985(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4977(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4969(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4961(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4953(DATA *data, threadData_t *threadData);


/*
equation index: 893
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.ports_H_flow[2] = semiLinear(-val8Sto.m_flow, val8_2Sto.port_a.h_outflow, val8_2Sto.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1587]] /* tan.indTanHex.vol[6].dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* val8_2Sto.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1786]] /* val8_2Sto.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 893;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4952(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_428,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_429,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_430,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_431,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_432,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_433,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_434,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_435,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_436,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_437,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_438,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_439,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_440,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_441,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_442,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_443,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_444,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_445,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4727,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_448,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_449,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_450,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_451,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4724,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4725,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_454,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_455,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_456,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_457,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4722,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4723,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_460,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_461,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_462,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_463,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4720,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4721,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_466,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_467,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_468,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_469,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4718,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4719,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_472,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_473,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_474,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_475,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_476,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_477,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_478,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_479,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_480,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_481,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_482,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_483,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_484,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_485,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_486,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_487,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_488,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_489,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_490,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_491,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_492,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_493,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_494,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_495,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_496,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_497,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_498,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_499,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_500,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_501,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_502,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_503,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_504,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_505,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_506,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_507,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_509,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_510,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_512,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_513,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_514,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_515,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_516,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_517,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_518,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_519,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_520,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_521,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_522,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_523,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_524,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_525,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_526,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_527,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_528,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_529,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_530,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_531,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_532,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_533,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_534,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_535,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_536,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_537,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_538,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_539,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_540,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_541,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_542,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_543,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_544,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_545,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_546,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_547,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_548,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_549,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_550,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_551,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_552,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_553,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_554,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_555,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_556,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_557,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_558,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_559,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_560,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_561,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_562,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_563,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_564,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_565,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_566,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4685,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_568,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_569,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_570,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_571,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4681,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_573,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_574,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_575,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_576,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4677,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_578,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_579,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_580,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_581,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4673,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_583,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_584,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_585,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_586,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_587,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_588,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_589,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_590,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_591,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4665,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_593,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_594,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_595,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_596,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_597,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_598,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_599,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4637,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_601,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_602,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_603,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_604,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_605,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_606,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_607,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4622,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4623,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_610,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4625,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4626,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4629,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4628,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4627,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4630,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4631,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4632,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_619,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_620,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4621,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_623,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4651,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_625,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5466,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5469,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_628,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5465,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5467,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5468,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5470,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_633,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5472,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_635,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_636,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_637,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_638,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4635,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_640,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4614,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4653,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4611,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_644,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4644,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4645,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4652,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_648,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_650,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_651,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4609,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_653,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_654,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_655,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_656,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_669,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5238,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5239,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_672,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5253,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5254,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5252,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5256,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5257,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5473,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_679,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_680,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_681,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_682,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4607,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4608,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_685,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5475,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_687,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5474,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5476,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_690,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_691,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_692,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4658,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4604,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4657,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_696,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_697,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4580,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4581,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4582,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4588,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4589,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_703,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4572,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4569,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_707,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4587,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_709,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_710,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4573,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_712,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_713,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_714,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4592,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4599,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_717,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_718,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4600,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4601,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4602,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_722,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4551,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4552,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4553,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_726,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4542,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4539,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_730,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_731,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4574,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_734,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4586,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4577,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4578,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_738,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_739,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_740,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4543,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_742,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_743,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_744,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4560,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4598,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_747,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_748,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_749,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_750,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_751,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_752,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_753,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_754,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4556,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4584,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4585,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4555,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4554,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4505,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4506,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4507,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4508,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_764,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4497,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4498,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_767,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_768,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4502,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4499,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_771,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4547,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4496,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4544,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4545,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4546,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_777,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_778,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4503,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_780,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_781,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_782,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4511,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4512,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4513,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4520,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4521,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4566,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4596,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4597,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4564,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4565,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4563,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_794,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_795,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4517,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4516,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_798,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_799,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_800,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_801,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_802,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_803,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_804,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_805,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5236,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4522,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4523,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4524,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4525,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_811,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_812,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4530,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_814,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4532,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4533,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4534,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4535,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4536,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4537,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_821,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_822,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_823,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_824,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4395,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4396,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_828,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_829,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_830,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_831,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4664,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4662,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_834,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_835,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_836,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_837,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4374,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_839,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_840,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_841,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_842,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4372,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4385,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_845,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_846,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_847,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_848,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4528,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4529,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_881,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5027,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5028,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_884,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_885,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_886,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4993,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4985,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4977,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4969,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4961,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4953,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_893,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4952
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif