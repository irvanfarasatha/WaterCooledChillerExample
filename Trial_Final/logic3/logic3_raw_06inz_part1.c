#include "logic3_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 497
type: SIMPLE_ASSIGN
vol.dynBal.medium.u = -84437.5 + vol.ports[2].h_outflow
*/
void logic3_raw_eqFunction_497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* vol.ports[2].h_outflow variable */);
  threadData->lastEquationSolved = 497;
}

/*
equation index: 498
type: SIMPLE_ASSIGN
vol.dynBal.U = vol.dynBal.m * vol.dynBal.medium.u
*/
void logic3_raw_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 498;
}
extern void logic3_raw_eqFunction_3160(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3159(DATA *data, threadData_t *threadData);


/*
equation index: 501
type: SIMPLE_ASSIGN
TCHWLeaCoi.T = TCHWLeaCoi.T_start
*/
void logic3_raw_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* TCHWLeaCoi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* TCHWLeaCoi.T_start PARAM */);
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
valByp.Kv_SI = valByp.m_flow_nominal / sqrt(valByp.dpValve_nominal)
*/
void logic3_raw_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  modelica_real tmp73;
  tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* valByp.dpValve_nominal PARAM */);
  if(!(tmp73 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.dpValve_nominal) was %g should be >= 0", tmp73);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2844]] /* valByp.m_flow_nominal PARAM */),sqrt(tmp73),"sqrt(valByp.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
valByp.Kv = 1.1384199576606166e6 * valByp.Kv_SI / valByp.rhoStd
*/
void logic3_raw_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* valByp.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* valByp.rhoStd PARAM */),"valByp.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 503;
}

/*
equation index: 504
type: SIMPLE_ASSIGN
valByp.Cv = 83036.13671167512 * valByp.Kv_SI / (valByp.rhoStd * 0.0631)
*/
void logic3_raw_eqFunction_504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2829]] /* valByp.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* valByp.rhoStd PARAM */)) * (0.0631),"valByp.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 504;
}

/*
equation index: 505
type: SIMPLE_ASSIGN
valByp.Av = valByp.Kv_SI / sqrt(valByp.rhoStd)
*/
void logic3_raw_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  modelica_real tmp74;
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2848]] /* valByp.rhoStd PARAM */);
  if(!(tmp74 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.rhoStd) was %g should be >= 0", tmp74);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* valByp.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2831]] /* valByp.Kv_SI PARAM */),sqrt(tmp74),"sqrt(valByp.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 505;
}
extern void logic3_raw_eqFunction_3145(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3146(DATA *data, threadData_t *threadData);


/*
equation index: 508
type: SIMPLE_ASSIGN
TCWEntTow.T = TCWEntTow.T_start
*/
void logic3_raw_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* TCWEntTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* TCWEntTow.T_start PARAM */);
  threadData->lastEquationSolved = 508;
}

/*
equation index: 509
type: SIMPLE_ASSIGN
TCWLeaTow.T = TCWLeaTow.T_start
*/
void logic3_raw_eqFunction_509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* TCWLeaTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* TCWLeaTow.T_start PARAM */);
  threadData->lastEquationSolved = 509;
}

/*
equation index: 510
type: SIMPLE_ASSIGN
TCHWEntChi.T = TCHWEntChi.T_start
*/
void logic3_raw_eqFunction_510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* TCHWEntChi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* TCHWEntChi.T_start PARAM */);
  threadData->lastEquationSolved = 510;
}

/*
equation index: 511
type: SIMPLE_ASSIGN
TAirSup.T = TAirSup.T_start
*/
void logic3_raw_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TAirSup.T_start PARAM */);
  threadData->lastEquationSolved = 511;
}

/*
equation index: 512
type: SIMPLE_ASSIGN
TCHWChi1Out.T = TCHWChi1Out.T_start
*/
void logic3_raw_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWChi1Out.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* TCHWChi1Out.T_start PARAM */);
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
TCHWChi1In.T = TCHWChi1In.T_start
*/
void logic3_raw_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWChi1In.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* TCHWChi1In.T_start PARAM */);
  threadData->lastEquationSolved = 513;
}
extern void logic3_raw_eqFunction_3639(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3637(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3638(DATA *data, threadData_t *threadData);


/*
equation index: 517
type: SIMPLE_ASSIGN
val6.Kv_SI = val6.m_flow_nominal / sqrt(val6.dpValve_nominal)
*/
void logic3_raw_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  modelica_real tmp75;
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* val6.dpValve_nominal PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* val6.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val6.m_flow_nominal PARAM */),sqrt(tmp75),"sqrt(val6.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 517;
}

/*
equation index: 518
type: SIMPLE_ASSIGN
val6.Kv = 1.1384199576606166e6 * val6.Kv_SI / val6.rhoStd
*/
void logic3_raw_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* val6.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* val6.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2754]] /* val6.rhoStd PARAM */),"val6.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
val6.Cv = 83036.13671167512 * val6.Kv_SI / (val6.rhoStd * 0.0631)
*/
void logic3_raw_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2737]] /* val6.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* val6.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2754]] /* val6.rhoStd PARAM */)) * (0.0631),"val6.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
val6.Av = val6.Kv_SI / sqrt(val6.rhoStd)
*/
void logic3_raw_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  modelica_real tmp76;
  tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2754]] /* val6.rhoStd PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* val6.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2739]] /* val6.Kv_SI PARAM */),sqrt(tmp76),"sqrt(val6.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 520;
}
extern void logic3_raw_eqFunction_3184(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3185(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_523(DATA*, threadData_t*);
/*
equation index: 524
indexNonlinear: 5
type: NONLINEAR

vars: {val6.dp}
eqns: {523}
*/
void logic3_raw_eqFunction_524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,524};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 524 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,524};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 524 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  threadData->lastEquationSolved = 524;
}

/*
equation index: 525
type: SIMPLE_ASSIGN
chi.sta2_start.p = chi.p2_start
*/
void logic3_raw_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
chi.sta2_start.T = chi.T2_start
*/
void logic3_raw_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* chi.sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
chi.h2_outflow_start = logic3.chi.Medium2.specificEnthalpy(chi.sta2_start)
*/
void logic3_raw_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  logic3_chi_Medium2_ThermodynamicState tmp77;
  logic3_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp77, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.sta2_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* chi.sta2_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.h2_outflow_start PARAM */) = omc_logic3_chi_Medium2_specificEnthalpy(threadData, tmp77);
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
$START.val6.port_b.h_outflow = chi.h2_outflow_start
*/
void logic3_raw_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  ((modelica_real *)((data->modelData->realVarsData[1226] /* val6.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[1226] /* val6.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1226] /* val6.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
chi.sta1_start.p = chi.p1_start
*/
void logic3_raw_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi.sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 529;
}

/*
equation index: 530
type: SIMPLE_ASSIGN
chi.sta1_start.T = chi.T1_start
*/
void logic3_raw_eqFunction_530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,530};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 530;
}

/*
equation index: 531
type: SIMPLE_ASSIGN
chi.h1_outflow_start = logic3.chi.Medium1.specificEnthalpy(chi.sta1_start)
*/
void logic3_raw_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  logic3_chi_Medium1_ThermodynamicState tmp78;
  logic3_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi.sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* chi.h1_outflow_start PARAM */) = omc_logic3_chi_Medium1_specificEnthalpy(threadData, tmp78);
  threadData->lastEquationSolved = 531;
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$START.TCWLeaTow.port_a.h_outflow = chi.h1_outflow_start
*/
void logic3_raw_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  ((modelica_real *)((data->modelData->realVarsData[328] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* chi.h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[328] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[328] /* TCWLeaTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 532;
}

/*
equation index: 533
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T = chi.vol2.dynBal.T_start
*/
void logic3_raw_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* chi.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T_degC = -273.15 + chi.vol2.dynBal.medium.T
*/
void logic3_raw_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* chi.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* chi.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 534;
}

/*
equation index: 535
type: SIMPLE_ASSIGN
val6.port_b.h_outflow = 4184.0 * chi.vol2.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* chi.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 535;
}
extern void logic3_raw_eqFunction_3558(DATA *data, threadData_t *threadData);


/*
equation index: 537
type: SIMPLE_ASSIGN
chi.vol2.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, junCHWSup.port_3.h_outflow, val6.port_b.h_outflow)
*/
void logic3_raw_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* chi.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.port_3.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
chi.vol2.dynBal.U = chi.vol2.dynBal.m * val6.port_b.h_outflow
*/
void logic3_raw_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* chi.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* chi.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T = chi.vol1.dynBal.T_start
*/
void logic3_raw_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* chi.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T_degC = -273.15 + chi.vol1.dynBal.medium.T
*/
void logic3_raw_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* chi.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* chi.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 540;
}

/*
equation index: 541
type: SIMPLE_ASSIGN
TCWLeaTow.port_a.h_outflow = 4184.0 * chi.vol1.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* chi.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 541;
}
extern void logic3_raw_eqFunction_3016(DATA *data, threadData_t *threadData);


/*
equation index: 543
type: SIMPLE_ASSIGN
TCWLeaTow.T_b_inflow = logic3.TCWLeaTow.Medium.temperature(logic3.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {}))
*/
void logic3_raw_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.T_b_inflow variable */) = omc_logic3_TCWLeaTow_Medium_temperature(threadData, omc_logic3_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: SIMPLE_ASSIGN
chi.vol1.dynBal.U = chi.vol1.dynBal.m * TCWLeaTow.port_a.h_outflow
*/
void logic3_raw_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* chi.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* chi.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 544;
}

/*
equation index: 545
type: SIMPLE_ASSIGN
expVesChi.m = expVesChi.V_start * expVesChi.rho_start
*/
void logic3_raw_eqFunction_545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* expVesChi.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1339]] /* expVesChi.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* expVesChi.rho_start PARAM */));
  threadData->lastEquationSolved = 545;
}

/*
equation index: 546
type: SIMPLE_ASSIGN
expVesChi.H = expVesChi.m * logic3.expVesChi.Medium.specificInternalEnergy(logic3.expVesChi.Medium.setState_pTX(expVesChi.p_start, expVesChi.T_start, {}))
*/
void logic3_raw_eqFunction_546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* expVesChi.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* expVesChi.m STATE(1) */)) * (omc_logic3_expVesChi_Medium_specificInternalEnergy(threadData, omc_logic3_expVesChi_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* expVesChi.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 546;
}
extern void logic3_raw_eqFunction_3014(DATA *data, threadData_t *threadData);


/*
equation index: 548
type: SIMPLE_ASSIGN
TCWEntTow.port_b.h_outflow = (max(val5.m_flow, 1e-7) * TCWLeaTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(val5.m_flow, 1e-7))
*/
void logic3_raw_eqFunction_548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */),1e-7),"1e-7 + max(val5.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 548;
}

/*
equation index: 549
type: SIMPLE_ASSIGN
val1.Kv_SI = val1.m_flow_nominal / sqrt(val1.dpValve_nominal)
*/
void logic3_raw_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* val1.dpValve_nominal PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val1.m_flow_nominal PARAM */),sqrt(tmp79),"sqrt(val1.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 549;
}

/*
equation index: 550
type: SIMPLE_ASSIGN
val1.Kv = 1.1384199576606166e6 * val1.Kv_SI / val1.rhoStd
*/
void logic3_raw_eqFunction_550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* val1.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val1.rhoStd PARAM */),"val1.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 550;
}

/*
equation index: 551
type: SIMPLE_ASSIGN
val1.Cv = 83036.13671167512 * val1.Kv_SI / (val1.rhoStd * 0.0631)
*/
void logic3_raw_eqFunction_551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2689]] /* val1.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val1.rhoStd PARAM */)) * (0.0631),"val1.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 551;
}

/*
equation index: 552
type: SIMPLE_ASSIGN
val1.Av = val1.Kv_SI / sqrt(val1.rhoStd)
*/
void logic3_raw_eqFunction_552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,552};
  modelica_real tmp80;
  tmp80 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2708]] /* val1.rhoStd PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* val1.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2691]] /* val1.Kv_SI PARAM */),sqrt(tmp80),"sqrt(val1.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 552;
}
extern void logic3_raw_eqFunction_3148(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3149(DATA *data, threadData_t *threadData);


/*
equation index: 555
type: SIMPLE_ASSIGN
val5.Kv_SI = val5.m_flow_nominal / sqrt(val5.dpValve_nominal)
*/
void logic3_raw_eqFunction_555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,555};
  modelica_real tmp81;
  tmp81 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* val5.dpValve_nominal PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* val5.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val5.m_flow_nominal PARAM */),sqrt(tmp81),"sqrt(val5.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 555;
}

/*
equation index: 556
type: SIMPLE_ASSIGN
val5.Kv = 1.1384199576606166e6 * val5.Kv_SI / val5.rhoStd
*/
void logic3_raw_eqFunction_556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,556};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2715]] /* val5.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* val5.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val5.rhoStd PARAM */),"val5.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 556;
}

/*
equation index: 557
type: SIMPLE_ASSIGN
val5.Cv = 83036.13671167512 * val5.Kv_SI / (val5.rhoStd * 0.0631)
*/
void logic3_raw_eqFunction_557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,557};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2714]] /* val5.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* val5.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val5.rhoStd PARAM */)) * (0.0631),"val5.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 557;
}

/*
equation index: 558
type: SIMPLE_ASSIGN
val5.Av = val5.Kv_SI / sqrt(val5.rhoStd)
*/
void logic3_raw_eqFunction_558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,558};
  modelica_real tmp82;
  tmp82 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2731]] /* val5.rhoStd PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* val5.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2716]] /* val5.Kv_SI PARAM */),sqrt(tmp82),"sqrt(val5.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 558;
}
extern void logic3_raw_eqFunction_3181(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3182(DATA *data, threadData_t *threadData);


/*
equation index: 561
type: SIMPLE_ASSIGN
val5.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val5.m_flow, val5.k, val5.m_flow_turbulent), val5.dp_nominal_pos * val5.m_flow / val5.m_flow_nominal_pos)
*/
void logic3_raw_eqFunction_561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* val5.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* val5.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2730]] /* val5.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2723]] /* val5.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val5.m_flow_nominal_pos PARAM */),"val5.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 561;
}
extern void logic3_raw_eqFunction_3200(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3201(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3204(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3203(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3202(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3205(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3217(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3206(DATA *data, threadData_t *threadData);


/*
equation index: 570
type: SIMPLE_ASSIGN
TCWEntTow.T_a_inflow = logic3.TCWEntTow.Medium.temperature(logic3.TCWEntTow.Medium.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.T_a_inflow variable */) = omc_logic3_TCWEntTow_Medium_temperature(threadData, omc_logic3_TCWEntTow_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 570;
}

/*
equation index: 571
type: SIMPLE_ASSIGN
pumCW.eff.hydDer[1] = 0.0
*/
void logic3_raw_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2439]] /* pumCW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 571;
}

/*
equation index: 572
type: SIMPLE_ASSIGN
pumCW.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, pumCW.VMachine_flow, pumCW.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW.eff.hydDer, 1.0, 0.05))
*/
void logic3_raw_eqFunction_572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,572};
  real_array tmp83;
  real_array tmp84;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp85;
  real_array tmp86;
  real_array tmp87;
  real_array tmp88;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp89;
  real_array tmp90;
  real_array_create(&tmp83, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp84, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp85, tmp83, tmp84);
  real_array_create(&tmp86, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2439]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp87, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2462]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp88, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2463]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp89, tmp87, tmp88);
  real_array_create(&tmp90, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2439]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* pumCW.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp85, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCW.VMachine_flow variable */), tmp86, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp89, 0.012615873967693397, tmp90, 1.0, 0.05));
  threadData->lastEquationSolved = 572;
}
extern void logic3_raw_eqFunction_3219(DATA *data, threadData_t *threadData);


/*
equation index: 574
type: SIMPLE_ASSIGN
pumCW.eff.motDer[1] = 0.0
*/
void logic3_raw_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2441]] /* pumCW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 574;
}

/*
equation index: 575
type: SIMPLE_ASSIGN
pumCW.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, pumCW.VMachine_flow, pumCW.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, 0.012615873967693397, pumCW.eff.motDer, 1.0, 0.05))
*/
void logic3_raw_eqFunction_575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,575};
  real_array tmp91;
  real_array tmp92;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp93;
  real_array tmp94;
  real_array tmp95;
  real_array tmp96;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp97;
  real_array tmp98;
  real_array_create(&tmp91, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp92, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp93, tmp91, tmp92);
  real_array_create(&tmp94, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2441]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp95, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2464]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2465]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp97, tmp95, tmp96);
  real_array_create(&tmp98, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2441]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* pumCW.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp93, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCW.VMachine_flow variable */), tmp94, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp97, 0.012615873967693397, tmp98, 1.0, 0.05));
  threadData->lastEquationSolved = 575;
}
extern void logic3_raw_eqFunction_3216(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3218(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3220(DATA *data, threadData_t *threadData);


/*
equation index: 579
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCW.VMachine_flow) + -2.5231747935386794e-5 > 1.2615873967693397e-5) then pumCW.heaDis.QThe_flow else if noEvent(abs(pumCW.VMachine_flow) + -2.5231747935386794e-5 < -1.2615873967693397e-5) then 0.0 else 0.25 * (2.0 - 79265.21797544822 * abs(pumCW.VMachine_flow)) * ((79265.21797544822 * abs(pumCW.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCW.heaDis.QThe_flow + 0.5 * pumCW.heaDis.QThe_flow), 0.0)
*/
void logic3_raw_eqFunction_579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,579};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  tmp99 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCW.VMachine_flow variable */)) + -2.5231747935386794e-5,1.2615873967693397e-5);
  tmp104 = (modelica_boolean)tmp99;
  if(tmp104)
  {
    tmp105 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* pumCW.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp100 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCW.VMachine_flow variable */)) + -2.5231747935386794e-5,-1.2615873967693397e-5);
    tmp102 = (modelica_boolean)tmp100;
    if(tmp102)
    {
      tmp103 = 0.0;
    }
    else
    {
      tmp101 = (79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCW.VMachine_flow variable */))) + -2.0;
      tmp103 = (0.25) * (((2.0 - ((79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCW.VMachine_flow variable */))))) * ((tmp101 * tmp101) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* pumCW.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* pumCW.heaDis.QThe_flow variable */));
    }
    tmp105 = tmp103;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCW.PToMed.u1 variable */) = homotopy(tmp105, 0.0);
  threadData->lastEquationSolved = 579;
}
extern void logic3_raw_eqFunction_3222(DATA *data, threadData_t *threadData);


/*
equation index: 581
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T = pumCW.vol.dynBal.T_start
*/
void logic3_raw_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* pumCW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2529]] /* pumCW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 581;
}

/*
equation index: 582
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T_degC = -273.15 + pumCW.vol.dynBal.medium.T
*/
void logic3_raw_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* pumCW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* pumCW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 582;
}

/*
equation index: 583
type: SIMPLE_ASSIGN
TCWLeaTow.port_b.h_outflow = 4184.0 * pumCW.vol.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* pumCW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 583;
}

/*
equation index: 584
type: SIMPLE_ASSIGN
pumCW.preSou.V_flow = val5.m_flow / Modelica.Fluid.Utilities.regStep(val5.m_flow, logic3.pumCW.preSou.Medium.density(logic3.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), logic3.pumCW.preSou.Medium.density(logic3.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)
*/
void logic3_raw_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* pumCW.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */), omc_logic3_pumCW_preSou_Medium_density(threadData, omc_logic3_pumCW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT83)), omc_logic3_pumCW_preSou_Medium_density(threadData, omc_logic3_pumCW_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2514]] /* pumCW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(val5.m_flow, logic3.pumCW.preSou.Medium.density(logic3.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), logic3.pumCW.preSou.Medium.density(logic3.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 584;
}
extern void logic3_raw_eqFunction_3209(DATA *data, threadData_t *threadData);


/*
equation index: 586
type: SIMPLE_ASSIGN
TCWLeaTow.T_a_inflow = logic3.TCWLeaTow.Medium.temperature(logic3.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.T_a_inflow variable */) = omc_logic3_TCWLeaTow_Medium_temperature(threadData, omc_logic3_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 586;
}
extern void logic3_raw_eqFunction_3227(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3228(DATA *data, threadData_t *threadData);


/*
equation index: 589
type: SIMPLE_ASSIGN
chi.TConEnt = logic3.chi.Medium1.temperature(logic3.chi.Medium1.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {1.0}))
*/
void logic3_raw_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.TConEnt variable */) = omc_logic3_chi_Medium1_temperature(threadData, omc_logic3_chi_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 589;
}
extern void logic3_raw_eqFunction_3009(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3224(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3004(DATA *data, threadData_t *threadData);


/*
equation index: 593
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_a.h_outflow, TCWLeaTow.port_b.h_outflow)
*/
void logic3_raw_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* pumCW.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 593;
}

/*
equation index: 594
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.U = pumCW.vol.dynBal.m * TCWLeaTow.port_b.h_outflow
*/
void logic3_raw_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* pumCW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* pumCW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 594;
}

/*
equation index: 595
type: ARRAY_CALL_ASSIGN

cooTow.fanRelPowDer = Buildings.Utilities.Math.Functions.splineDerivatives(cooTow.fanRelPow.r_V, cooTow.fanRelPow.r_P, Buildings.Utilities.Math.Functions.isMonotonic(cooTow.fanRelPow.r_P, false))
*/
void logic3_raw_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  real_array tmp106;
  real_array tmp107;
  real_array tmp108;
  real_array tmp109;
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp107, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp108, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp109, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp106, tmp107, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp108, 0 /* false */)), tmp109);
  threadData->lastEquationSolved = 595;
}

/*
equation index: 596
type: SIMPLE_ASSIGN
cooTow.PFan = Buildings.Utilities.Math.Functions.spliceFunction(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, cooTow.FRAir, cooTow.fanRelPowDer) * cooTow.PFan_nominal, 0.0, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic3_raw_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  real_array tmp110;
  real_array tmp111;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp112;
  real_array tmp113;
  real_array_create(&tmp110, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp111, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp112, tmp110, tmp111);
  real_array_create(&tmp113, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1072]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.PFan variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp112, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */), tmp113)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1050]] /* cooTow.PFan_nominal PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 596;
}

void logic3_raw_eqFunction_597(DATA*, threadData_t*);
/*
equation index: 598
indexNonlinear: 6
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {597}
*/
void logic3_raw_eqFunction_598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,598};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 598 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,598};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 598 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 598;
}

/*
equation index: 599
type: SIMPLE_ASSIGN
cooTow.mRef_flow = cooTow.m_flow_nominal / cooTow.FRWat0
*/
void logic3_raw_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* cooTow.mRef_flow PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */),"cooTow.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 599;
}
extern void logic3_raw_eqFunction_3229(DATA *data, threadData_t *threadData);


/*
equation index: 601
type: SIMPLE_ASSIGN
cooTow.sta_start.p = cooTow.p_start
*/
void logic3_raw_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* cooTow.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 601;
}

/*
equation index: 602
type: SIMPLE_ASSIGN
cooTow.sta_start.T = cooTow.T_start
*/
void logic3_raw_eqFunction_602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 602;
}

/*
equation index: 603
type: SIMPLE_ASSIGN
cooTow.h_outflow_start = logic3.cooTow.Medium.specificEnthalpy(cooTow.sta_start)
*/
void logic3_raw_eqFunction_603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,603};
  logic3_cooTow_Medium_ThermodynamicState tmp114;
  logic3_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp114, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1104]] /* cooTow.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* cooTow.h_outflow_start PARAM */) = omc_logic3_cooTow_Medium_specificEnthalpy(threadData, tmp114);
  threadData->lastEquationSolved = 603;
}

/*
equation index: 604
type: SIMPLE_ASSIGN
$START.TCWEntTow.port_a.h_outflow = cooTow.h_outflow_start
*/
void logic3_raw_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  ((modelica_real *)((data->modelData->realVarsData[312] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1079]] /* cooTow.h_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = ((modelica_real *)((data->modelData->realVarsData[312] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[312] /* TCWEntTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 604;
}

/*
equation index: 605
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T = 0.0
*/
void logic3_raw_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 605;
}

/*
equation index: 606
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T_degC = $DER.cooTow.vol.dynBal.medium.T
*/
void logic3_raw_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 606;
}

/*
equation index: 607
type: SIMPLE_ASSIGN
$DER.TCWEntTow.port_a.h_outflow = 4184.0 * $DER.cooTow.vol.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* der(TCWEntTow.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 607;
}

/*
equation index: 608
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * $DER.TCWEntTow.port_a.h_outflow
*/
void logic3_raw_eqFunction_608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* der(cooTow.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* der(TCWEntTow.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 608;
}

void logic3_raw_eqFunction_609(DATA*, threadData_t*);
void logic3_raw_eqFunction_610(DATA*, threadData_t*);
void logic3_raw_eqFunction_611(DATA*, threadData_t*);
void logic3_raw_eqFunction_612(DATA*, threadData_t*);
void logic3_raw_eqFunction_613(DATA*, threadData_t*);
void logic3_raw_eqFunction_614(DATA*, threadData_t*);
void logic3_raw_eqFunction_615(DATA*, threadData_t*);
void logic3_raw_eqFunction_616(DATA*, threadData_t*);
void logic3_raw_eqFunction_617(DATA*, threadData_t*);
void logic3_raw_eqFunction_618(DATA*, threadData_t*);
void logic3_raw_eqFunction_619(DATA*, threadData_t*);
void logic3_raw_eqFunction_620(DATA*, threadData_t*);
void logic3_raw_eqFunction_621(DATA*, threadData_t*);
void logic3_raw_eqFunction_622(DATA*, threadData_t*);
/*
equation index: 623
indexNonlinear: 7
type: NONLINEAR

vars: {TCWEntTow.port_a.h_outflow}
eqns: {609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622}
*/
void logic3_raw_eqFunction_623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,623};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 623 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,623};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 623 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  threadData->lastEquationSolved = 623;
}
extern void logic3_raw_eqFunction_3686(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3687(DATA *data, threadData_t *threadData);


/*
equation index: 626
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * TCWEntTow.port_a.h_outflow
*/
void logic3_raw_eqFunction_626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* cooTow.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 626;
}

/*
equation index: 627
type: SIMPLE_ASSIGN
TCWEntTow.T_b_inflow = logic3.TCWEntTow.Medium.temperature(logic3.TCWEntTow.Medium.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_a.h_outflow, {}))
*/
void logic3_raw_eqFunction_627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.T_b_inflow variable */) = omc_logic3_TCWEntTow_Medium_temperature(threadData, omc_logic3_TCWEntTow_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), _OMC_LIT83));
  threadData->lastEquationSolved = 627;
}
extern void logic3_raw_eqFunction_3695(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3696(DATA *data, threadData_t *threadData);


/*
equation index: 630
type: SIMPLE_ASSIGN
chi.vol1.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, (max(-val5.m_flow, 1e-7) * TCWEntTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(-val5.m_flow, 1e-7)), TCWLeaTow.port_a.h_outflow)
*/
void logic3_raw_eqFunction_630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* chi.vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),1e-7),"1e-7 + max(-val5.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 630;
}
extern void logic3_raw_eqFunction_3690(DATA *data, threadData_t *threadData);


/*
equation index: 632
type: SIMPLE_ASSIGN
chi.state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val5.m_flow, 1e-7) * TCWEntTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(-val5.m_flow, 1e-7))
*/
void logic3_raw_eqFunction_632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* chi.state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),1e-7),"1e-7 + max(-val5.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 632;
}
extern void logic3_raw_eqFunction_3700(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3701(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3702(DATA *data, threadData_t *threadData);


/*
equation index: 636
type: SIMPLE_ASSIGN
expVesCHW.m = expVesCHW.V_start * expVesCHW.rho_start
*/
void logic3_raw_eqFunction_636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1330]] /* expVesCHW.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1335]] /* expVesCHW.rho_start PARAM */));
  threadData->lastEquationSolved = 636;
}

/*
equation index: 637
type: SIMPLE_ASSIGN
expVesCHW.H = expVesCHW.m * logic3.expVesCHW.Medium.specificInternalEnergy(logic3.expVesCHW.Medium.setState_pTX(expVesCHW.p_start, expVesCHW.T_start, {}))
*/
void logic3_raw_eqFunction_637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* expVesCHW.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */)) * (omc_logic3_expVesCHW_Medium_specificInternalEnergy(threadData, omc_logic3_expVesCHW_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* expVesCHW.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 637;
}
extern void logic3_raw_eqFunction_3002(DATA *data, threadData_t *threadData);


/*
equation index: 639
type: SIMPLE_ASSIGN
pumCHW.eff.hydDer[1] = 0.0
*/
void logic3_raw_eqFunction_639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2183]] /* pumCHW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 639;
}

/*
equation index: 640
type: SIMPLE_ASSIGN
pumCHW.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, pumCHW.VMachine_flow, pumCHW.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW.eff.hydDer, 1.0, 0.05))
*/
void logic3_raw_eqFunction_640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,640};
  real_array tmp115;
  real_array tmp116;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp117;
  real_array tmp118;
  real_array tmp119;
  real_array tmp120;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp121;
  real_array tmp122;
  real_array_create(&tmp115, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp117, tmp115, tmp116);
  real_array_create(&tmp118, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2183]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp119, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2206]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp120, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2207]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp121, tmp119, tmp120);
  real_array_create(&tmp122, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2183]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* pumCHW.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp117, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* pumCHW.VMachine_flow variable */), tmp118, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp121, 0.025231747935386795, tmp122, 1.0, 0.05));
  threadData->lastEquationSolved = 640;
}

/*
equation index: 641
type: SIMPLE_ASSIGN
pumCHW.eff.motDer[1] = 0.0
*/
void logic3_raw_eqFunction_641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 641;
}

/*
equation index: 642
type: SIMPLE_ASSIGN
pumCHW.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, pumCHW.VMachine_flow, pumCHW.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, 0.025231747935386795, pumCHW.eff.motDer, 1.0, 0.05))
*/
void logic3_raw_eqFunction_642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,642};
  real_array tmp123;
  real_array tmp124;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp125;
  real_array tmp126;
  real_array tmp127;
  real_array tmp128;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp129;
  real_array tmp130;
  real_array_create(&tmp123, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2208]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp124, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp125, tmp123, tmp124);
  real_array_create(&tmp126, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp127, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2208]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2209]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp129, tmp127, tmp128);
  real_array_create(&tmp130, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2185]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* pumCHW.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp125, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* pumCHW.VMachine_flow variable */), tmp126, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp129, 0.025231747935386795, tmp130, 1.0, 0.05));
  threadData->lastEquationSolved = 642;
}
extern void logic3_raw_eqFunction_3176(DATA *data, threadData_t *threadData);


/*
equation index: 644
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T = pumCHW.vol.dynBal.T_start
*/
void logic3_raw_eqFunction_644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* pumCHW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2273]] /* pumCHW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 644;
}

/*
equation index: 645
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T_degC = -273.15 + pumCHW.vol.dynBal.medium.T
*/
void logic3_raw_eqFunction_645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* pumCHW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* pumCHW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 645;
}

/*
equation index: 646
type: SIMPLE_ASSIGN
pumCHW.port_a.h_outflow = 4184.0 * pumCHW.vol.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* pumCHW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 646;
}

/*
equation index: 647
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, pumCHW.port_a.h_outflow, junCHWRet.port_3.h_outflow)
*/
void logic3_raw_eqFunction_647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* junCHWRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 647;
}
extern void logic3_raw_eqFunction_3178(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3556(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2999(DATA *data, threadData_t *threadData);


/*
equation index: 651
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, val6.port_b.h_outflow, pumCHW.port_a.h_outflow)
*/
void logic3_raw_eqFunction_651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* pumCHW.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 651;
}
extern void logic3_raw_eqFunction_3570(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3571(DATA *data, threadData_t *threadData);


/*
equation index: 654
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.U = pumCHW.vol.dynBal.m * pumCHW.port_a.h_outflow
*/
void logic3_raw_eqFunction_654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* pumCHW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* pumCHW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 654;
}

/*
equation index: 655
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta2_start.T = cooCoi.ele[4].T2_start
*/
void logic3_raw_eqFunction_655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[4].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[507]] /* cooCoi.ele[4].T2_start PARAM */);
  threadData->lastEquationSolved = 655;
}

/*
equation index: 656
type: ARRAY_CALL_ASSIGN

cooCoi.ele[4].sta2_start.X = cooCoi.ele[4].X2_start
*/
void logic3_raw_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  real_array tmp131;
  real_array tmp132;
  real_array_create(&tmp131, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[522]] /* cooCoi.ele[4].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp132, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp131, tmp132);
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
cooCoi.ele[4].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[4].sta2_start.T) * (1.0 - cooCoi.ele[4].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[4].sta2_start.T)) * cooCoi.ele[4].sta2_start.X[1]
*/
void logic3_raw_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* cooCoi.ele[4].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[4].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[739]] /* cooCoi.ele[4].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 657;
}

/*
equation index: 658
type: SIMPLE_ASSIGN
$START.cooCoi.port_a2.h_outflow = cooCoi.ele[4].h2_outflow_start
*/
void logic3_raw_eqFunction_658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,658};
  ((modelica_real *)((data->modelData->realVarsData[699] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[547]] /* cooCoi.ele[4].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[699] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[699] /* cooCoi.port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 658;
}

/*
equation index: 659
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.p = cooCoi.ele[4].p1_start
*/
void logic3_raw_eqFunction_659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,659};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* cooCoi.ele[4].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 659;
}

/*
equation index: 660
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.T = cooCoi.ele[4].T1_start
*/
void logic3_raw_eqFunction_660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* cooCoi.ele[4].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[503]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 660;
}

/*
equation index: 661
type: SIMPLE_ASSIGN
cooCoi.ele[4].h1_outflow_start = logic3.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[4].sta1_start)
*/
void logic3_raw_eqFunction_661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,661};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp133;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp133, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[719]] /* cooCoi.ele[4].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[715]] /* cooCoi.ele[4].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[4].h1_outflow_start PARAM */) = omc_logic3_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp133);
  threadData->lastEquationSolved = 661;
}

/*
equation index: 662
type: SIMPLE_ASSIGN
$START.cooCoi.port_b1.h_outflow = cooCoi.ele[4].h1_outflow_start
*/
void logic3_raw_eqFunction_662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,662};
  ((modelica_real *)((data->modelData->realVarsData[700] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[543]] /* cooCoi.ele[4].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[700] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[700] /* cooCoi.port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 662;
}

/*
equation index: 663
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic3_raw_eqFunction_663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 663;
}
extern void logic3_raw_eqFunction_2987(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2988(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2989(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2990(DATA *data, threadData_t *threadData);


/*
equation index: 668
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T = 293.15
*/
void logic3_raw_eqFunction_668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 668;
}

/*
equation index: 669
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol2.dynBal.medium.T
*/
void logic3_raw_eqFunction_669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 669;
}

/*
equation index: 670
type: SIMPLE_ASSIGN
cooCoi.port_a2.h_outflow = 1006.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC * cooCoi.ele[4].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC) * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 670;
}
extern void logic3_raw_eqFunction_2993(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2994(DATA *data, threadData_t *threadData);


/*
equation index: 673
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.u = -84437.5 + cooCoi.port_a2.h_outflow
*/
void logic3_raw_eqFunction_673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 673;
}
extern void logic3_raw_eqFunction_2997(DATA *data, threadData_t *threadData);


/*
equation index: 675
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T = cooCoi.ele[4].vol1.dynBal.T_start
*/
void logic3_raw_eqFunction_675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 675;
}

/*
equation index: 676
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol1.dynBal.medium.T
*/
void logic3_raw_eqFunction_676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 676;
}

/*
equation index: 677
type: SIMPLE_ASSIGN
cooCoi.port_b1.h_outflow = 4184.0 * cooCoi.ele[4].vol1.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 677;
}
extern void logic3_raw_eqFunction_2978(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2979(DATA *data, threadData_t *threadData);


/*
equation index: 680
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.U = cooCoi.ele[4].vol1.dynBal.m * cooCoi.port_b1.h_outflow
*/
void logic3_raw_eqFunction_680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* cooCoi.ele[4].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 680;
}
extern void logic3_raw_eqFunction_2985(DATA *data, threadData_t *threadData);


/*
equation index: 682
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta2_start.T = cooCoi.ele[3].T2_start
*/
void logic3_raw_eqFunction_682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,682};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* cooCoi.ele[3].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* cooCoi.ele[3].T2_start PARAM */);
  threadData->lastEquationSolved = 682;
}

/*
equation index: 683
type: ARRAY_CALL_ASSIGN

cooCoi.ele[3].sta2_start.X = cooCoi.ele[3].X2_start
*/
void logic3_raw_eqFunction_683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,683};
  real_array tmp134;
  real_array tmp135;
  real_array_create(&tmp134, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[520]] /* cooCoi.ele[3].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp134, tmp135);
  threadData->lastEquationSolved = 683;
}

/*
equation index: 684
type: SIMPLE_ASSIGN
cooCoi.ele[3].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[3].sta2_start.T) * (1.0 - cooCoi.ele[3].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[3].sta2_start.T)) * cooCoi.ele[3].sta2_start.X[1]
*/
void logic3_raw_eqFunction_684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* cooCoi.ele[3].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* cooCoi.ele[3].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[738]] /* cooCoi.ele[3].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 684;
}

/*
equation index: 685
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_a2.h_outflow = cooCoi.ele[3].h2_outflow_start
*/
void logic3_raw_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  ((modelica_real *)((data->modelData->realVarsData[531] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[546]] /* cooCoi.ele[3].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[531] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[531] /* cooCoi.ele[3].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 685;
}

/*
equation index: 686
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.p = cooCoi.ele[3].p1_start
*/
void logic3_raw_eqFunction_686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,686};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* cooCoi.ele[3].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[570]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 686;
}

/*
equation index: 687
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.T = cooCoi.ele[3].T1_start
*/
void logic3_raw_eqFunction_687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* cooCoi.ele[3].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[502]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 687;
}

/*
equation index: 688
type: SIMPLE_ASSIGN
cooCoi.ele[3].h1_outflow_start = logic3.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[3].sta1_start)
*/
void logic3_raw_eqFunction_688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,688};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp136;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp136, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[718]] /* cooCoi.ele[3].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[714]] /* cooCoi.ele[3].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[3].h1_outflow_start PARAM */) = omc_logic3_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp136);
  threadData->lastEquationSolved = 688;
}

/*
equation index: 689
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_b1.h_outflow = cooCoi.ele[3].h1_outflow_start
*/
void logic3_raw_eqFunction_689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,689};
  ((modelica_real *)((data->modelData->realVarsData[533] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[542]] /* cooCoi.ele[3].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[533] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[533] /* cooCoi.ele[3].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 689;
}

/*
equation index: 690
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic3_raw_eqFunction_690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 690;
}
extern void logic3_raw_eqFunction_3726(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3735(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3736(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3737(DATA *data, threadData_t *threadData);


/*
equation index: 696
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T = 293.15
*/
void logic3_raw_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 696;
}

/*
equation index: 697
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol2.dynBal.medium.T
*/
void logic3_raw_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 697;
}

/*
equation index: 698
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_a2.h_outflow = 1006.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC * cooCoi.ele[3].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC) * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 698;
}
extern void logic3_raw_eqFunction_3728(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3730(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3731(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3727(DATA *data, threadData_t *threadData);


/*
equation index: 704
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[3].port_a2.h_outflow
*/
void logic3_raw_eqFunction_704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 704;
}
extern void logic3_raw_eqFunction_3738(DATA *data, threadData_t *threadData);


/*
equation index: 706
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T = cooCoi.ele[3].vol1.dynBal.T_start
*/
void logic3_raw_eqFunction_706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 706;
}

/*
equation index: 707
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol1.dynBal.medium.T
*/
void logic3_raw_eqFunction_707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 707;
}

/*
equation index: 708
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_b1.h_outflow = 4184.0 * cooCoi.ele[3].vol1.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 708;
}
extern void logic3_raw_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2980(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2981(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2970(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2968(DATA *data, threadData_t *threadData);


/*
equation index: 714
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.U = cooCoi.ele[3].vol1.dynBal.m * cooCoi.ele[3].port_b1.h_outflow
*/
void logic3_raw_eqFunction_714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* cooCoi.ele[3].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 714;
}
extern void logic3_raw_eqFunction_2976(DATA *data, threadData_t *threadData);


/*
equation index: 716
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta2_start.T = cooCoi.ele[2].T2_start
*/
void logic3_raw_eqFunction_716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[2].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[505]] /* cooCoi.ele[2].T2_start PARAM */);
  threadData->lastEquationSolved = 716;
}

/*
equation index: 717
type: ARRAY_CALL_ASSIGN

cooCoi.ele[2].sta2_start.X = cooCoi.ele[2].X2_start
*/
void logic3_raw_eqFunction_717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,717};
  real_array tmp137;
  real_array tmp138;
  real_array_create(&tmp137, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[518]] /* cooCoi.ele[2].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp138, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp137, tmp138);
  threadData->lastEquationSolved = 717;
}

/*
equation index: 718
type: SIMPLE_ASSIGN
cooCoi.ele[2].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[2].sta2_start.T) * (1.0 - cooCoi.ele[2].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[2].sta2_start.T)) * cooCoi.ele[2].sta2_start.X[1]
*/
void logic3_raw_eqFunction_718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* cooCoi.ele[2].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[2].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[737]] /* cooCoi.ele[2].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 718;
}

/*
equation index: 719
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_a2.h_outflow = cooCoi.ele[2].h2_outflow_start
*/
void logic3_raw_eqFunction_719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,719};
  ((modelica_real *)((data->modelData->realVarsData[530] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[545]] /* cooCoi.ele[2].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[530] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[530] /* cooCoi.ele[2].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 719;
}

/*
equation index: 720
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.p = cooCoi.ele[2].p1_start
*/
void logic3_raw_eqFunction_720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* cooCoi.ele[2].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[569]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 720;
}

/*
equation index: 721
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.T = cooCoi.ele[2].T1_start
*/
void logic3_raw_eqFunction_721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* cooCoi.ele[2].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[501]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 721;
}

/*
equation index: 722
type: SIMPLE_ASSIGN
cooCoi.ele[2].h1_outflow_start = logic3.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[2].sta1_start)
*/
void logic3_raw_eqFunction_722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,722};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp139;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp139, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[717]] /* cooCoi.ele[2].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[713]] /* cooCoi.ele[2].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[2].h1_outflow_start PARAM */) = omc_logic3_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp139);
  threadData->lastEquationSolved = 722;
}

/*
equation index: 723
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_b1.h_outflow = cooCoi.ele[2].h1_outflow_start
*/
void logic3_raw_eqFunction_723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,723};
  ((modelica_real *)((data->modelData->realVarsData[532] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* cooCoi.ele[2].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[532] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[532] /* cooCoi.ele[2].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 723;
}

/*
equation index: 724
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic3_raw_eqFunction_724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 724;
}
extern void logic3_raw_eqFunction_3743(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3753(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3755(DATA *data, threadData_t *threadData);


/*
equation index: 730
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T = 293.15
*/
void logic3_raw_eqFunction_730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 730;
}

/*
equation index: 731
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol2.dynBal.medium.T
*/
void logic3_raw_eqFunction_731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 731;
}

/*
equation index: 732
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_a2.h_outflow = 1006.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC * cooCoi.ele[2].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC) * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 732;
}
extern void logic3_raw_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3747(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3749(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3744(DATA *data, threadData_t *threadData);


/*
equation index: 739
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[2].port_a2.h_outflow
*/
void logic3_raw_eqFunction_739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 739;
}
extern void logic3_raw_eqFunction_3756(DATA *data, threadData_t *threadData);


/*
equation index: 741
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T = cooCoi.ele[2].vol1.dynBal.T_start
*/
void logic3_raw_eqFunction_741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 741;
}

/*
equation index: 742
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol1.dynBal.medium.T
*/
void logic3_raw_eqFunction_742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 742;
}

/*
equation index: 743
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_b1.h_outflow = 4184.0 * cooCoi.ele[2].vol1.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 743;
}
extern void logic3_raw_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2971(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2972(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2982(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2959(DATA *data, threadData_t *threadData);


/*
equation index: 750
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.U = cooCoi.ele[2].vol1.dynBal.m * cooCoi.ele[2].port_b1.h_outflow
*/
void logic3_raw_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* cooCoi.ele[2].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 750;
}
extern void logic3_raw_eqFunction_2966(DATA *data, threadData_t *threadData);


/*
equation index: 752
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta2_start.T = cooCoi.ele[1].T2_start
*/
void logic3_raw_eqFunction_752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* cooCoi.ele[1].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[504]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 752;
}

/*
equation index: 753
type: ARRAY_CALL_ASSIGN

cooCoi.ele[1].sta2_start.X = cooCoi.ele[1].X2_start
*/
void logic3_raw_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  real_array tmp140;
  real_array tmp141;
  real_array_create(&tmp140, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[516]] /* cooCoi.ele[1].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp141, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp140, tmp141);
  threadData->lastEquationSolved = 753;
}

/*
equation index: 754
type: SIMPLE_ASSIGN
cooCoi.ele[1].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[1].sta2_start.T) * (1.0 - cooCoi.ele[1].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].sta2_start.T)) * cooCoi.ele[1].sta2_start.X[1]
*/
void logic3_raw_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[1].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* cooCoi.ele[1].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* cooCoi.ele[1].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[740]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 754;
}

/*
equation index: 755
type: SIMPLE_ASSIGN
$START.TAirSup.port_b.h_outflow = cooCoi.ele[1].h2_outflow_start
*/
void logic3_raw_eqFunction_755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,755};
  ((modelica_real *)((data->modelData->realVarsData[272] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[544]] /* cooCoi.ele[1].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TAirSup.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[272] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[272] /* TAirSup.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TAirSup.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 755;
}

/*
equation index: 756
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.p = cooCoi.ele[1].p1_start
*/
void logic3_raw_eqFunction_756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,756};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* cooCoi.ele[1].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 756;
}

/*
equation index: 757
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.T = cooCoi.ele[1].T1_start
*/
void logic3_raw_eqFunction_757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,757};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* cooCoi.ele[1].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[500]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 757;
}

/*
equation index: 758
type: SIMPLE_ASSIGN
cooCoi.ele[1].h1_outflow_start = logic3.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[1].sta1_start)
*/
void logic3_raw_eqFunction_758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,758};
  logic3_cooCoi_ele_Medium1_ThermodynamicState tmp142;
  logic3_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp142, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[716]] /* cooCoi.ele[1].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[712]] /* cooCoi.ele[1].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[1].h1_outflow_start PARAM */) = omc_logic3_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp142);
  threadData->lastEquationSolved = 758;
}

/*
equation index: 759
type: SIMPLE_ASSIGN
$START.TCHWEntChi.port_b.h_outflow = cooCoi.ele[1].h1_outflow_start
*/
void logic3_raw_eqFunction_759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,759};
  ((modelica_real *)((data->modelData->realVarsData[300] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* cooCoi.ele[1].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* TCHWEntChi.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[300] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[300] /* TCHWEntChi.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 759;
}

/*
equation index: 760
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.Xi[1] = cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
void logic3_raw_eqFunction_760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[888]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 760;
}
extern void logic3_raw_eqFunction_3768(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3769(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3770(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3767(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3766(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3782(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3783(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3784(DATA *data, threadData_t *threadData);


/*
equation index: 770
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.p = cooCoi.ele[1].vol2.dynBal.p_start
*/
void logic3_raw_eqFunction_770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[912]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 770;
}
extern void logic3_raw_eqFunction_3757(DATA *data, threadData_t *threadData);


/*
equation index: 772
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mXi[1] = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 772;
}
extern void logic3_raw_eqFunction_3739(DATA *data, threadData_t *threadData);


/*
equation index: 774
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.U = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.u
*/
void logic3_raw_eqFunction_774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* cooCoi.ele[2].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 774;
}

/*
equation index: 775
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mXi[1] = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 775;
}
extern void logic3_raw_eqFunction_3722(DATA *data, threadData_t *threadData);


/*
equation index: 777
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.U = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.u
*/
void logic3_raw_eqFunction_777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[3].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 777;
}

/*
equation index: 778
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mXi[1] = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 778;
}

/*
equation index: 779
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.m = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)));
  threadData->lastEquationSolved = 779;
}

/*
equation index: 780
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.U = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.u
*/
void logic3_raw_eqFunction_780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* cooCoi.ele[4].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 780;
}

/*
equation index: 781
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mXi[1] = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 781;
}
extern void logic3_raw_eqFunction_3796(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_783(DATA*, threadData_t*);
/*
equation index: 784
indexNonlinear: 8
type: NONLINEAR

vars: {cooCoi.m2_flow}
eqns: {783}
*/
void logic3_raw_eqFunction_784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,784};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 784 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,784};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 784 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 784;
}
extern void logic3_raw_eqFunction_3799(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3800(DATA *data, threadData_t *threadData);


/*
equation index: 787
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.m2_flow, cooCoi.ele[4].vol2.dynBal.medium.Xi[1], junOut.vol.dynBal.medium.Xi[1])
*/
void logic3_raw_eqFunction_787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* junOut.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 787;
}
extern void logic3_raw_eqFunction_3803(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3804(DATA *data, threadData_t *threadData);


/*
equation index: 790
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m2_flow, cooCoi.port_a2.h_outflow, junOut.vol.ports[3].h_outflow)
*/
void logic3_raw_eqFunction_790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* junOut.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* junOut.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 790;
}
extern void logic3_raw_eqFunction_3807(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3808(DATA *data, threadData_t *threadData);


/*
equation index: 808
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void logic3_raw_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 808 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,808};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 808 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 808;
}

/*
equation index: 809
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].vol2.dynBal.medium.Xi[1], cooCoi.ele[4].vol2.dynBal.medium.Xi[1])
*/
void logic3_raw_eqFunction_809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 809;
}

/*
equation index: 810
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].port_a2.h_outflow, cooCoi.port_a2.h_outflow)
*/
void logic3_raw_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 810;
}

/*
equation index: 811
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].vol2.dynBal.medium.Xi[1], cooCoi.ele[3].vol2.dynBal.medium.Xi[1])
*/
void logic3_raw_eqFunction_811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 811;
}

/*
equation index: 812
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].port_a2.h_outflow, cooCoi.ele[3].port_a2.h_outflow)
*/
void logic3_raw_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 812;
}
extern void logic3_raw_eqFunction_3835(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3833(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3834(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3832(DATA *data, threadData_t *threadData);


/*
equation index: 817
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[1].m2_flow, cooCoi.ele[1].vol2.dynBal.medium.Xi[1], cooCoi.ele[2].vol2.dynBal.medium.Xi[1])
*/
void logic3_raw_eqFunction_817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 817;
}
extern void logic3_raw_eqFunction_3825(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3826(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3827(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3838(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3839(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3840(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3847(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3844(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3801(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3805(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3853(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3854(DATA *data, threadData_t *threadData);


/*
equation index: 837
type: SIMPLE_ASSIGN
cooCoi.hA.hA_2 = cooCoi.hA.hA_nominal_a * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_a, cooCoi.hA.n_a, 0.1)
*/
void logic3_raw_eqFunction_837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.hA.hA_2 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* cooCoi.hA.hA_nominal_a PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.hA.fm_a variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1009]] /* cooCoi.hA.n_a PARAM */), 0.1));
  threadData->lastEquationSolved = 837;
}
extern void logic3_raw_eqFunction_3857(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3876(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3877(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3878(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3870(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3871(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3872(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3864(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3786(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3787(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3788(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3789(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3790(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3791(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3792(DATA *data, threadData_t *threadData);


/*
equation index: 853
type: SIMPLE_ASSIGN
fanSup.preSou.V_flow = 55.989691542288554 / Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)
*/
void logic3_raw_eqFunction_853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* fanSup.preSou.V_flow variable */) = DIVISION_SIM(55.989691542288554,omc_Modelica_Fluid_Utilities_regStep(threadData, 55.989691542288554, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1579]] /* fanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 853;
}
extern void logic3_raw_eqFunction_3883(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3886(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3887(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3888(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3889(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3890(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3891(DATA *data, threadData_t *threadData);


/*
equation index: 861
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T = cooCoi.ele[1].vol2.dynBal.T_start
*/
void logic3_raw_eqFunction_861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[884]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 861;
}

/*
equation index: 862
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol2.dynBal.medium.T
*/
void logic3_raw_eqFunction_862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 862;
}

/*
equation index: 863
type: SIMPLE_ASSIGN
TAirSup.port_b.h_outflow = 1006.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC * cooCoi.ele[1].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC) * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void logic3_raw_eqFunction_863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TAirSup.port_b.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 863;
}
extern void logic3_raw_eqFunction_3772(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3777(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3778(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3774(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3776(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3865(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3859(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3879(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3763(DATA *data, threadData_t *threadData);


/*
equation index: 878
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[1].m2_flow, TAirSup.port_b.h_outflow, cooCoi.ele[2].port_a2.h_outflow)
*/
void logic3_raw_eqFunction_878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TAirSup.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 878;
}
extern void logic3_raw_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3866(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3860(DATA *data, threadData_t *threadData);


/*
equation index: 886
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.u = -84437.5 + TAirSup.port_b.h_outflow
*/
void logic3_raw_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TAirSup.port_b.h_outflow variable */);
  threadData->lastEquationSolved = 886;
}

/*
equation index: 887
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.U = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.u
*/
void logic3_raw_eqFunction_887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* cooCoi.ele[1].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 887;
}
extern void logic3_raw_eqFunction_3764(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3785(DATA *data, threadData_t *threadData);


/*
equation index: 890
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T = cooCoi.ele[1].vol1.dynBal.T_start
*/
void logic3_raw_eqFunction_890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 890;
}

/*
equation index: 891
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol1.dynBal.medium.T
*/
void logic3_raw_eqFunction_891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 891;
}

/*
equation index: 892
type: SIMPLE_ASSIGN
TCHWEntChi.port_b.h_outflow = 4184.0 * cooCoi.ele[1].vol1.dynBal.medium.T_degC
*/
void logic3_raw_eqFunction_892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* TCHWEntChi.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 892;
}
extern void logic3_raw_eqFunction_2954(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2962(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2963(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2973(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_2955(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_898(DATA*, threadData_t*);
void logic3_raw_eqFunction_899(DATA*, threadData_t*);
void logic3_raw_eqFunction_900(DATA*, threadData_t*);
void logic3_raw_eqFunction_901(DATA*, threadData_t*);
void logic3_raw_eqFunction_902(DATA*, threadData_t*);
void logic3_raw_eqFunction_903(DATA*, threadData_t*);
void logic3_raw_eqFunction_904(DATA*, threadData_t*);
void logic3_raw_eqFunction_905(DATA*, threadData_t*);
void logic3_raw_eqFunction_906(DATA*, threadData_t*);
void logic3_raw_eqFunction_907(DATA*, threadData_t*);
void logic3_raw_eqFunction_908(DATA*, threadData_t*);
void logic3_raw_eqFunction_909(DATA*, threadData_t*);
void logic3_raw_eqFunction_910(DATA*, threadData_t*);
void logic3_raw_eqFunction_911(DATA*, threadData_t*);
void logic3_raw_eqFunction_912(DATA*, threadData_t*);
void logic3_raw_eqFunction_913(DATA*, threadData_t*);
void logic3_raw_eqFunction_914(DATA*, threadData_t*);
void logic3_raw_eqFunction_915(DATA*, threadData_t*);
void logic3_raw_eqFunction_916(DATA*, threadData_t*);
void logic3_raw_eqFunction_917(DATA*, threadData_t*);
void logic3_raw_eqFunction_918(DATA*, threadData_t*);
void logic3_raw_eqFunction_919(DATA*, threadData_t*);
void logic3_raw_eqFunction_920(DATA*, threadData_t*);
void logic3_raw_eqFunction_923(DATA*, threadData_t*);
void logic3_raw_eqFunction_922(DATA*, threadData_t*);
void logic3_raw_eqFunction_921(DATA*, threadData_t*);
/*
equation index: 924
indexNonlinear: 9
type: NONLINEAR

vars: {junCHWRet.vol.p, cooCoi.m1_flow, cooCoi.rep1.y[4]}
eqns: {898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 923, 922, 921}
*/
void logic3_raw_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 924 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */);
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */);
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,924};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 924 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[2];
  threadData->lastEquationSolved = 924;
}
extern void logic3_raw_eqFunction_3322(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3383(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3519(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3391(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3393(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3390(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3394(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3514(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3515(DATA *data, threadData_t *threadData);


/*
equation index: 934
type: SIMPLE_ASSIGN
TCWEntTow2.port_b.h_outflow = (max(val7.m_flow, 1e-7) * chi2.port_a1.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(val7.m_flow, 1e-7))
*/
void logic3_raw_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.port_a1.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */),1e-7),"1e-7 + max(val7.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 934;
}
extern void logic3_raw_eqFunction_3385(DATA *data, threadData_t *threadData);


/*
equation index: 936
type: SIMPLE_ASSIGN
pumCW2.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, pumCW2.VMachine_flow, pumCW2.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, 0.012615873967693397, pumCW2.eff.motDer, 1.0, 0.05))
*/
void logic3_raw_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  real_array tmp143;
  real_array tmp144;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp145;
  real_array tmp146;
  real_array tmp147;
  real_array tmp148;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp149;
  real_array tmp150;
  real_array_create(&tmp143, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp144, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp145, tmp143, tmp144);
  real_array_create(&tmp146, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp147, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp148, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp149, tmp147, tmp148);
  real_array_create(&tmp150, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2569]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* pumCW2.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp145, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW2.VMachine_flow variable */), tmp146, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp149, 0.012615873967693397, tmp150, 1.0, 0.05));
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
pumCW2.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, pumCW2.VMachine_flow, pumCW2.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW2.eff.hydDer, 1.0, 0.05))
*/
void logic3_raw_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  real_array tmp151;
  real_array tmp152;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp153;
  real_array tmp154;
  real_array tmp155;
  real_array tmp156;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp157;
  real_array tmp158;
  real_array_create(&tmp151, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2590]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp152, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp153, tmp151, tmp152);
  real_array_create(&tmp154, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp155, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2590]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp156, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp157, tmp155, tmp156);
  real_array_create(&tmp158, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2567]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* pumCW2.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp153, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW2.VMachine_flow variable */), tmp154, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp157, 0.012615873967693397, tmp158, 1.0, 0.05));
  threadData->lastEquationSolved = 937;
}
extern void logic3_raw_eqFunction_3389(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3386(DATA *data, threadData_t *threadData);


/*
equation index: 940
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, chi2.port_a1.h_outflow, TWCLeaTow2.port_b.h_outflow)
*/
void logic3_raw_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* pumCW2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.port_a1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* TWCLeaTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 940;
}
extern void logic3_raw_eqFunction_3384(DATA *data, threadData_t *threadData);


/*
equation index: 942
type: SIMPLE_ASSIGN
cooTow2.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val7.m_flow, cooTow2.preDro.k, cooTow2.preDro.m_flow_turbulent), 104510.0 * val7.m_flow / cooTow2.preDro.m_flow_nominal_pos)
*/
void logic3_raw_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cooTow2.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* cooTow2.preDro.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* cooTow2.preDro.m_flow_turbulent PARAM */)), DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */),"cooTow2.preDro.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 942;
}
extern void logic3_raw_eqFunction_3353(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3365(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3366(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3367(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3362(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3363(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3364(DATA *data, threadData_t *threadData);


/*
equation index: 950
type: SIMPLE_ASSIGN
val7.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val7.m_flow, val7.k, val7.m_flow_turbulent), val7.dp_nominal_pos * val7.m_flow / val7.m_flow_nominal_pos)
*/
void logic3_raw_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val7.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val7.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2776]] /* val7.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2769]] /* val7.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */),"val7.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 950;
}
extern void logic3_raw_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3399(DATA *data, threadData_t *threadData);


/*
equation index: 953
type: SIMPLE_ASSIGN
pumCW2.preSou.V_flow = val7.m_flow / Modelica.Fluid.Utilities.regStep(val7.m_flow, logic3.pumCW2.preSou.Medium.density(logic3.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), logic3.pumCW2.preSou.Medium.density(logic3.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)
*/
void logic3_raw_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* pumCW2.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), omc_logic3_pumCW2_preSou_Medium_density(threadData, omc_logic3_pumCW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT83)), omc_logic3_pumCW2_preSou_Medium_density(threadData, omc_logic3_pumCW2_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1352]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* pumCW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(val7.m_flow, logic3.pumCW2.preSou.Medium.density(logic3.pumCW2.preSou.Medium.setState_phX(cooTow2.vol.p, TWCLeaTow2.port_b.h_outflow, {})), logic3.pumCW2.preSou.Medium.density(logic3.pumCW2.preSou.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {})), pumCW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 953;
}
extern void logic3_raw_eqFunction_3410(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3502(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3409(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3408(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3401(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3402(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3404(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3403(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3405(DATA *data, threadData_t *threadData);


/*
equation index: 963
type: SIMPLE_ASSIGN
pumCW2.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCW2.VMachine_flow) + -2.5231747935386794e-5 > 1.2615873967693397e-5) then pumCW2.heaDis.QThe_flow else if noEvent(abs(pumCW2.VMachine_flow) + -2.5231747935386794e-5 < -1.2615873967693397e-5) then 0.0 else 0.25 * (2.0 - 79265.21797544822 * abs(pumCW2.VMachine_flow)) * ((79265.21797544822 * abs(pumCW2.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCW2.heaDis.QThe_flow + 0.5 * pumCW2.heaDis.QThe_flow), 0.0)
*/
void logic3_raw_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  modelica_boolean tmp159;
  modelica_boolean tmp160;
  modelica_real tmp161;
  modelica_boolean tmp162;
  modelica_real tmp163;
  modelica_boolean tmp164;
  modelica_real tmp165;
  tmp159 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW2.VMachine_flow variable */)) + -2.5231747935386794e-5,1.2615873967693397e-5);
  tmp164 = (modelica_boolean)tmp159;
  if(tmp164)
  {
    tmp165 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* pumCW2.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp160 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW2.VMachine_flow variable */)) + -2.5231747935386794e-5,-1.2615873967693397e-5);
    tmp162 = (modelica_boolean)tmp160;
    if(tmp162)
    {
      tmp163 = 0.0;
    }
    else
    {
      tmp161 = (79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW2.VMachine_flow variable */))) + -2.0;
      tmp163 = (0.25) * (((2.0 - ((79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW2.VMachine_flow variable */))))) * ((tmp161 * tmp161) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* pumCW2.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* pumCW2.heaDis.QThe_flow variable */));
    }
    tmp165 = tmp163;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* pumCW2.PToMed.u1 variable */) = homotopy(tmp165, 0.0);
  threadData->lastEquationSolved = 963;
}
extern void logic3_raw_eqFunction_3407(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3400(DATA *data, threadData_t *threadData);


/*
equation index: 966
type: SIMPLE_ASSIGN
TCWEntTow2.T_a_inflow = logic3.TCWEntTow2.Medium.temperature(logic3.TCWEntTow2.Medium.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.T_a_inflow variable */) = omc_logic3_TCWEntTow2_Medium_temperature(threadData, omc_logic3_TCWEntTow2_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 966;
}
extern void logic3_raw_eqFunction_3354(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3355(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3356(DATA *data, threadData_t *threadData);


/*
equation index: 970
type: SIMPLE_ASSIGN
cooTow2.PFan = Buildings.Utilities.Math.Functions.spliceFunction(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, cooTow2.FRAir, cooTow2.fanRelPowDer) * cooTow2.PFan_nominal, 0.0, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic3_raw_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  real_array tmp166;
  real_array tmp167;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp168;
  real_array tmp169;
  real_array_create(&tmp166, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp167, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp168, tmp166, tmp167);
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.PFan variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp168, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */), tmp169)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* cooTow2.PFan_nominal PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 970;
}

void logic3_raw_eqFunction_971(DATA*, threadData_t*);
void logic3_raw_eqFunction_972(DATA*, threadData_t*);
void logic3_raw_eqFunction_973(DATA*, threadData_t*);
void logic3_raw_eqFunction_974(DATA*, threadData_t*);
void logic3_raw_eqFunction_975(DATA*, threadData_t*);
void logic3_raw_eqFunction_976(DATA*, threadData_t*);
void logic3_raw_eqFunction_977(DATA*, threadData_t*);
void logic3_raw_eqFunction_978(DATA*, threadData_t*);
void logic3_raw_eqFunction_979(DATA*, threadData_t*);
void logic3_raw_eqFunction_980(DATA*, threadData_t*);
void logic3_raw_eqFunction_981(DATA*, threadData_t*);
void logic3_raw_eqFunction_982(DATA*, threadData_t*);
void logic3_raw_eqFunction_983(DATA*, threadData_t*);
void logic3_raw_eqFunction_984(DATA*, threadData_t*);
/*
equation index: 985
indexNonlinear: 10
type: NONLINEAR

vars: {TCWEntTow2.port_a.h_outflow}
eqns: {971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984}
*/
void logic3_raw_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 985 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,985};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 985 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  threadData->lastEquationSolved = 985;
}
extern void logic3_raw_eqFunction_3650(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3651(DATA *data, threadData_t *threadData);


/*
equation index: 988
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * TCWEntTow2.port_a.h_outflow
*/
void logic3_raw_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* cooTow2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, (max(-val7.m_flow, 1e-7) * TCWEntTow2.port_a.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(-val7.m_flow, 1e-7)), chi2.port_a1.h_outflow)
*/
void logic3_raw_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* chi2.vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),1e-7),"1e-7 + max(-val7.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 989;
}
extern void logic3_raw_eqFunction_3658(DATA *data, threadData_t *threadData);


/*
equation index: 991
type: SIMPLE_ASSIGN
chi2.state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val7.m_flow, 1e-7) * TCWEntTow2.port_a.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(-val7.m_flow, 1e-7))
*/
void logic3_raw_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* chi2.state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),1e-7),"1e-7 + max(-val7.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
TCWEntTow2.T_b_inflow = logic3.TCWEntTow2.Medium.temperature(logic3.TCWEntTow2.Medium.setState_phX(TCWEntTow2.port_a.p, TCWEntTow2.port_a.h_outflow, {}))
*/
void logic3_raw_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.T_b_inflow variable */) = omc_logic3_TCWEntTow2_Medium_temperature(threadData, omc_logic3_TCWEntTow2_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWEntTow2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), _OMC_LIT83));
  threadData->lastEquationSolved = 992;
}
extern void logic3_raw_eqFunction_3664(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3665(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3653(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3654(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3655(DATA *data, threadData_t *threadData);


void logic3_raw_eqFunction_998(DATA*, threadData_t*);
/*
equation index: 999
indexNonlinear: 11
type: NONLINEAR

vars: {val8_2.dp}
eqns: {998}
*/
void logic3_raw_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 999 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,999};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 999 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */) = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, junCHWSup.port_3.h_outflow, junCHWSup2.vol.ports[3].h_outflow)
*/
void logic3_raw_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* junCHWSup2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.port_3.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junCHWSup2.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1000;
}
extern void logic3_raw_eqFunction_3629(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3631(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3632(DATA *data, threadData_t *threadData);


/*
equation index: 1004
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, val8_2.port_a.h_outflow, val8_2.port_b.h_outflow)
*/
void logic3_raw_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* val8_2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* val8_2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1004;
}
extern void logic3_raw_eqFunction_3613(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3615(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3616(DATA *data, threadData_t *threadData);


/*
equation index: 1008
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[3] = semiLinear(-val8.m_flow, val8_2.port_b.h_outflow, junCHWRet.port_3.h_outflow)
*/
void logic3_raw_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* val8_2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 1008;
}
extern void logic3_raw_eqFunction_3336(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3342(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3335(DATA *data, threadData_t *threadData);


/*
equation index: 1012
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.port_b1.h_outflow, cooCoi.ele[3].port_b1.h_outflow)
*/
void logic3_raw_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[700]] /* cooCoi.port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1012;
}
extern void logic3_raw_eqFunction_3331(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3333(DATA *data, threadData_t *threadData);


/*
equation index: 1015
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[3].port_b1.h_outflow, cooCoi.ele[2].port_b1.h_outflow)
*/
void logic3_raw_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[3].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1015;
}
extern void logic3_raw_eqFunction_3317(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3628(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3316(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3566(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3275(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3284(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3285(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3286(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3289(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3287(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3288(DATA *data, threadData_t *threadData);


/*
equation index: 1027
type: SIMPLE_ASSIGN
TCHWChi1Out.T_b_inflow = logic3.TCHWChi1Out.Medium.temperature(logic3.TCHWChi1Out.Medium.setState_phX(chi.vol2.p, junCHWSup.port_3.h_outflow, {}))
*/
void logic3_raw_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* TCHWChi1Out.T_b_inflow variable */) = omc_logic3_TCHWChi1Out_Medium_temperature(threadData, omc_logic3_TCHWChi1Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.port_3.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
TCHWChi1Out.T_a_inflow = logic3.TCHWChi1Out.Medium.temperature(logic3.TCHWChi1Out.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* TCHWChi1Out.T_a_inflow variable */) = omc_logic3_TCHWChi1Out_Medium_temperature(threadData, omc_logic3_TCHWChi1Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1028;
}
extern void logic3_raw_eqFunction_3564(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3565(DATA *data, threadData_t *threadData);


/*
equation index: 1031
type: SIMPLE_ASSIGN
TCHWChi1In.T_b_inflow = logic3.TCHWChi1In.Medium.temperature(logic3.TCHWChi1In.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {}))
*/
void logic3_raw_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* TCHWChi1In.T_b_inflow variable */) = omc_logic3_TCHWChi1In_Medium_temperature(threadData, omc_logic3_TCHWChi1In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val6.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1031;
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
TCHWChi1In.T_a_inflow = logic3.TCHWChi1In.Medium.temperature(logic3.TCHWChi1In.Medium.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {}))
*/
void logic3_raw_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* TCHWChi1In.T_a_inflow variable */) = omc_logic3_TCHWChi1In_Medium_temperature(threadData, omc_logic3_TCHWChi1In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1032;
}
extern void logic3_raw_eqFunction_3300(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3301(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3302(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3303(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3309(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3312(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3557(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3304(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3307(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3305(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3306(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3308(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3311(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3310(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3691(DATA *data, threadData_t *threadData);


/*
equation index: 1048
type: SIMPLE_ASSIGN
chi.TEvaEnt = logic3.chi.Medium2.temperature(logic3.chi.Medium2.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {1.0}))
*/
void logic3_raw_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* chi.TEvaEnt variable */) = omc_logic3_chi_Medium2_temperature(threadData, omc_logic3_chi_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 1048;
}
extern void logic3_raw_eqFunction_3274(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3273(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3370(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3380(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3490(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_3269(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void logic3_raw_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[485])(DATA*, threadData_t*) = {
    logic3_raw_eqFunction_497,
    logic3_raw_eqFunction_498,
    logic3_raw_eqFunction_3160,
    logic3_raw_eqFunction_3159,
    logic3_raw_eqFunction_501,
    logic3_raw_eqFunction_502,
    logic3_raw_eqFunction_503,
    logic3_raw_eqFunction_504,
    logic3_raw_eqFunction_505,
    logic3_raw_eqFunction_3145,
    logic3_raw_eqFunction_3146,
    logic3_raw_eqFunction_508,
    logic3_raw_eqFunction_509,
    logic3_raw_eqFunction_510,
    logic3_raw_eqFunction_511,
    logic3_raw_eqFunction_512,
    logic3_raw_eqFunction_513,
    logic3_raw_eqFunction_3639,
    logic3_raw_eqFunction_3637,
    logic3_raw_eqFunction_3638,
    logic3_raw_eqFunction_517,
    logic3_raw_eqFunction_518,
    logic3_raw_eqFunction_519,
    logic3_raw_eqFunction_520,
    logic3_raw_eqFunction_3184,
    logic3_raw_eqFunction_3185,
    logic3_raw_eqFunction_524,
    logic3_raw_eqFunction_525,
    logic3_raw_eqFunction_526,
    logic3_raw_eqFunction_527,
    logic3_raw_eqFunction_528,
    logic3_raw_eqFunction_529,
    logic3_raw_eqFunction_530,
    logic3_raw_eqFunction_531,
    logic3_raw_eqFunction_532,
    logic3_raw_eqFunction_533,
    logic3_raw_eqFunction_534,
    logic3_raw_eqFunction_535,
    logic3_raw_eqFunction_3558,
    logic3_raw_eqFunction_537,
    logic3_raw_eqFunction_538,
    logic3_raw_eqFunction_539,
    logic3_raw_eqFunction_540,
    logic3_raw_eqFunction_541,
    logic3_raw_eqFunction_3016,
    logic3_raw_eqFunction_543,
    logic3_raw_eqFunction_544,
    logic3_raw_eqFunction_545,
    logic3_raw_eqFunction_546,
    logic3_raw_eqFunction_3014,
    logic3_raw_eqFunction_548,
    logic3_raw_eqFunction_549,
    logic3_raw_eqFunction_550,
    logic3_raw_eqFunction_551,
    logic3_raw_eqFunction_552,
    logic3_raw_eqFunction_3148,
    logic3_raw_eqFunction_3149,
    logic3_raw_eqFunction_555,
    logic3_raw_eqFunction_556,
    logic3_raw_eqFunction_557,
    logic3_raw_eqFunction_558,
    logic3_raw_eqFunction_3181,
    logic3_raw_eqFunction_3182,
    logic3_raw_eqFunction_561,
    logic3_raw_eqFunction_3200,
    logic3_raw_eqFunction_3201,
    logic3_raw_eqFunction_3204,
    logic3_raw_eqFunction_3203,
    logic3_raw_eqFunction_3202,
    logic3_raw_eqFunction_3205,
    logic3_raw_eqFunction_3217,
    logic3_raw_eqFunction_3206,
    logic3_raw_eqFunction_570,
    logic3_raw_eqFunction_571,
    logic3_raw_eqFunction_572,
    logic3_raw_eqFunction_3219,
    logic3_raw_eqFunction_574,
    logic3_raw_eqFunction_575,
    logic3_raw_eqFunction_3216,
    logic3_raw_eqFunction_3218,
    logic3_raw_eqFunction_3220,
    logic3_raw_eqFunction_579,
    logic3_raw_eqFunction_3222,
    logic3_raw_eqFunction_581,
    logic3_raw_eqFunction_582,
    logic3_raw_eqFunction_583,
    logic3_raw_eqFunction_584,
    logic3_raw_eqFunction_3209,
    logic3_raw_eqFunction_586,
    logic3_raw_eqFunction_3227,
    logic3_raw_eqFunction_3228,
    logic3_raw_eqFunction_589,
    logic3_raw_eqFunction_3009,
    logic3_raw_eqFunction_3224,
    logic3_raw_eqFunction_3004,
    logic3_raw_eqFunction_593,
    logic3_raw_eqFunction_594,
    logic3_raw_eqFunction_595,
    logic3_raw_eqFunction_596,
    logic3_raw_eqFunction_598,
    logic3_raw_eqFunction_599,
    logic3_raw_eqFunction_3229,
    logic3_raw_eqFunction_601,
    logic3_raw_eqFunction_602,
    logic3_raw_eqFunction_603,
    logic3_raw_eqFunction_604,
    logic3_raw_eqFunction_605,
    logic3_raw_eqFunction_606,
    logic3_raw_eqFunction_607,
    logic3_raw_eqFunction_608,
    logic3_raw_eqFunction_623,
    logic3_raw_eqFunction_3686,
    logic3_raw_eqFunction_3687,
    logic3_raw_eqFunction_626,
    logic3_raw_eqFunction_627,
    logic3_raw_eqFunction_3695,
    logic3_raw_eqFunction_3696,
    logic3_raw_eqFunction_630,
    logic3_raw_eqFunction_3690,
    logic3_raw_eqFunction_632,
    logic3_raw_eqFunction_3700,
    logic3_raw_eqFunction_3701,
    logic3_raw_eqFunction_3702,
    logic3_raw_eqFunction_636,
    logic3_raw_eqFunction_637,
    logic3_raw_eqFunction_3002,
    logic3_raw_eqFunction_639,
    logic3_raw_eqFunction_640,
    logic3_raw_eqFunction_641,
    logic3_raw_eqFunction_642,
    logic3_raw_eqFunction_3176,
    logic3_raw_eqFunction_644,
    logic3_raw_eqFunction_645,
    logic3_raw_eqFunction_646,
    logic3_raw_eqFunction_647,
    logic3_raw_eqFunction_3178,
    logic3_raw_eqFunction_3556,
    logic3_raw_eqFunction_2999,
    logic3_raw_eqFunction_651,
    logic3_raw_eqFunction_3570,
    logic3_raw_eqFunction_3571,
    logic3_raw_eqFunction_654,
    logic3_raw_eqFunction_655,
    logic3_raw_eqFunction_656,
    logic3_raw_eqFunction_657,
    logic3_raw_eqFunction_658,
    logic3_raw_eqFunction_659,
    logic3_raw_eqFunction_660,
    logic3_raw_eqFunction_661,
    logic3_raw_eqFunction_662,
    logic3_raw_eqFunction_663,
    logic3_raw_eqFunction_2987,
    logic3_raw_eqFunction_2988,
    logic3_raw_eqFunction_2989,
    logic3_raw_eqFunction_2990,
    logic3_raw_eqFunction_668,
    logic3_raw_eqFunction_669,
    logic3_raw_eqFunction_670,
    logic3_raw_eqFunction_2993,
    logic3_raw_eqFunction_2994,
    logic3_raw_eqFunction_673,
    logic3_raw_eqFunction_2997,
    logic3_raw_eqFunction_675,
    logic3_raw_eqFunction_676,
    logic3_raw_eqFunction_677,
    logic3_raw_eqFunction_2978,
    logic3_raw_eqFunction_2979,
    logic3_raw_eqFunction_680,
    logic3_raw_eqFunction_2985,
    logic3_raw_eqFunction_682,
    logic3_raw_eqFunction_683,
    logic3_raw_eqFunction_684,
    logic3_raw_eqFunction_685,
    logic3_raw_eqFunction_686,
    logic3_raw_eqFunction_687,
    logic3_raw_eqFunction_688,
    logic3_raw_eqFunction_689,
    logic3_raw_eqFunction_690,
    logic3_raw_eqFunction_3726,
    logic3_raw_eqFunction_3732,
    logic3_raw_eqFunction_3735,
    logic3_raw_eqFunction_3736,
    logic3_raw_eqFunction_3737,
    logic3_raw_eqFunction_696,
    logic3_raw_eqFunction_697,
    logic3_raw_eqFunction_698,
    logic3_raw_eqFunction_3728,
    logic3_raw_eqFunction_3730,
    logic3_raw_eqFunction_3731,
    logic3_raw_eqFunction_3729,
    logic3_raw_eqFunction_3727,
    logic3_raw_eqFunction_704,
    logic3_raw_eqFunction_3738,
    logic3_raw_eqFunction_706,
    logic3_raw_eqFunction_707,
    logic3_raw_eqFunction_708,
    logic3_raw_eqFunction_2969,
    logic3_raw_eqFunction_2980,
    logic3_raw_eqFunction_2981,
    logic3_raw_eqFunction_2970,
    logic3_raw_eqFunction_2968,
    logic3_raw_eqFunction_714,
    logic3_raw_eqFunction_2976,
    logic3_raw_eqFunction_716,
    logic3_raw_eqFunction_717,
    logic3_raw_eqFunction_718,
    logic3_raw_eqFunction_719,
    logic3_raw_eqFunction_720,
    logic3_raw_eqFunction_721,
    logic3_raw_eqFunction_722,
    logic3_raw_eqFunction_723,
    logic3_raw_eqFunction_724,
    logic3_raw_eqFunction_3743,
    logic3_raw_eqFunction_3750,
    logic3_raw_eqFunction_3753,
    logic3_raw_eqFunction_3754,
    logic3_raw_eqFunction_3755,
    logic3_raw_eqFunction_730,
    logic3_raw_eqFunction_731,
    logic3_raw_eqFunction_732,
    logic3_raw_eqFunction_3745,
    logic3_raw_eqFunction_3747,
    logic3_raw_eqFunction_3748,
    logic3_raw_eqFunction_3749,
    logic3_raw_eqFunction_3746,
    logic3_raw_eqFunction_3744,
    logic3_raw_eqFunction_739,
    logic3_raw_eqFunction_3756,
    logic3_raw_eqFunction_741,
    logic3_raw_eqFunction_742,
    logic3_raw_eqFunction_743,
    logic3_raw_eqFunction_2960,
    logic3_raw_eqFunction_2971,
    logic3_raw_eqFunction_2972,
    logic3_raw_eqFunction_2982,
    logic3_raw_eqFunction_2961,
    logic3_raw_eqFunction_2959,
    logic3_raw_eqFunction_750,
    logic3_raw_eqFunction_2966,
    logic3_raw_eqFunction_752,
    logic3_raw_eqFunction_753,
    logic3_raw_eqFunction_754,
    logic3_raw_eqFunction_755,
    logic3_raw_eqFunction_756,
    logic3_raw_eqFunction_757,
    logic3_raw_eqFunction_758,
    logic3_raw_eqFunction_759,
    logic3_raw_eqFunction_760,
    logic3_raw_eqFunction_3768,
    logic3_raw_eqFunction_3769,
    logic3_raw_eqFunction_3770,
    logic3_raw_eqFunction_3767,
    logic3_raw_eqFunction_3766,
    logic3_raw_eqFunction_3779,
    logic3_raw_eqFunction_3782,
    logic3_raw_eqFunction_3783,
    logic3_raw_eqFunction_3784,
    logic3_raw_eqFunction_770,
    logic3_raw_eqFunction_3757,
    logic3_raw_eqFunction_772,
    logic3_raw_eqFunction_3739,
    logic3_raw_eqFunction_774,
    logic3_raw_eqFunction_775,
    logic3_raw_eqFunction_3722,
    logic3_raw_eqFunction_777,
    logic3_raw_eqFunction_778,
    logic3_raw_eqFunction_779,
    logic3_raw_eqFunction_780,
    logic3_raw_eqFunction_781,
    logic3_raw_eqFunction_3796,
    logic3_raw_eqFunction_784,
    logic3_raw_eqFunction_3799,
    logic3_raw_eqFunction_3800,
    logic3_raw_eqFunction_787,
    logic3_raw_eqFunction_3803,
    logic3_raw_eqFunction_3804,
    logic3_raw_eqFunction_790,
    logic3_raw_eqFunction_3807,
    logic3_raw_eqFunction_3808,
    logic3_raw_eqFunction_808,
    logic3_raw_eqFunction_809,
    logic3_raw_eqFunction_810,
    logic3_raw_eqFunction_811,
    logic3_raw_eqFunction_812,
    logic3_raw_eqFunction_3835,
    logic3_raw_eqFunction_3833,
    logic3_raw_eqFunction_3834,
    logic3_raw_eqFunction_3832,
    logic3_raw_eqFunction_817,
    logic3_raw_eqFunction_3825,
    logic3_raw_eqFunction_3826,
    logic3_raw_eqFunction_3827,
    logic3_raw_eqFunction_3838,
    logic3_raw_eqFunction_3839,
    logic3_raw_eqFunction_3840,
    logic3_raw_eqFunction_3836,
    logic3_raw_eqFunction_3845,
    logic3_raw_eqFunction_3846,
    logic3_raw_eqFunction_3847,
    logic3_raw_eqFunction_3843,
    logic3_raw_eqFunction_3844,
    logic3_raw_eqFunction_3801,
    logic3_raw_eqFunction_3851,
    logic3_raw_eqFunction_3852,
    logic3_raw_eqFunction_3805,
    logic3_raw_eqFunction_3849,
    logic3_raw_eqFunction_3853,
    logic3_raw_eqFunction_3854,
    logic3_raw_eqFunction_837,
    logic3_raw_eqFunction_3857,
    logic3_raw_eqFunction_3876,
    logic3_raw_eqFunction_3877,
    logic3_raw_eqFunction_3878,
    logic3_raw_eqFunction_3870,
    logic3_raw_eqFunction_3871,
    logic3_raw_eqFunction_3872,
    logic3_raw_eqFunction_3864,
    logic3_raw_eqFunction_3786,
    logic3_raw_eqFunction_3787,
    logic3_raw_eqFunction_3788,
    logic3_raw_eqFunction_3789,
    logic3_raw_eqFunction_3790,
    logic3_raw_eqFunction_3791,
    logic3_raw_eqFunction_3792,
    logic3_raw_eqFunction_853,
    logic3_raw_eqFunction_3883,
    logic3_raw_eqFunction_3886,
    logic3_raw_eqFunction_3887,
    logic3_raw_eqFunction_3888,
    logic3_raw_eqFunction_3889,
    logic3_raw_eqFunction_3890,
    logic3_raw_eqFunction_3891,
    logic3_raw_eqFunction_861,
    logic3_raw_eqFunction_862,
    logic3_raw_eqFunction_863,
    logic3_raw_eqFunction_3772,
    logic3_raw_eqFunction_3777,
    logic3_raw_eqFunction_3778,
    logic3_raw_eqFunction_3774,
    logic3_raw_eqFunction_3775,
    logic3_raw_eqFunction_3776,
    logic3_raw_eqFunction_3865,
    logic3_raw_eqFunction_3773,
    logic3_raw_eqFunction_3858,
    logic3_raw_eqFunction_3859,
    logic3_raw_eqFunction_3879,
    logic3_raw_eqFunction_3761,
    logic3_raw_eqFunction_3762,
    logic3_raw_eqFunction_3763,
    logic3_raw_eqFunction_878,
    logic3_raw_eqFunction_3837,
    logic3_raw_eqFunction_3866,
    logic3_raw_eqFunction_3771,
    logic3_raw_eqFunction_3760,
    logic3_raw_eqFunction_3829,
    logic3_raw_eqFunction_3830,
    logic3_raw_eqFunction_3860,
    logic3_raw_eqFunction_886,
    logic3_raw_eqFunction_887,
    logic3_raw_eqFunction_3764,
    logic3_raw_eqFunction_3785,
    logic3_raw_eqFunction_890,
    logic3_raw_eqFunction_891,
    logic3_raw_eqFunction_892,
    logic3_raw_eqFunction_2954,
    logic3_raw_eqFunction_2962,
    logic3_raw_eqFunction_2963,
    logic3_raw_eqFunction_2973,
    logic3_raw_eqFunction_2955,
    logic3_raw_eqFunction_924,
    logic3_raw_eqFunction_3322,
    logic3_raw_eqFunction_3383,
    logic3_raw_eqFunction_3519,
    logic3_raw_eqFunction_3391,
    logic3_raw_eqFunction_3393,
    logic3_raw_eqFunction_3390,
    logic3_raw_eqFunction_3394,
    logic3_raw_eqFunction_3514,
    logic3_raw_eqFunction_3515,
    logic3_raw_eqFunction_934,
    logic3_raw_eqFunction_3385,
    logic3_raw_eqFunction_936,
    logic3_raw_eqFunction_937,
    logic3_raw_eqFunction_3389,
    logic3_raw_eqFunction_3386,
    logic3_raw_eqFunction_940,
    logic3_raw_eqFunction_3384,
    logic3_raw_eqFunction_942,
    logic3_raw_eqFunction_3353,
    logic3_raw_eqFunction_3365,
    logic3_raw_eqFunction_3366,
    logic3_raw_eqFunction_3367,
    logic3_raw_eqFunction_3362,
    logic3_raw_eqFunction_3363,
    logic3_raw_eqFunction_3364,
    logic3_raw_eqFunction_950,
    logic3_raw_eqFunction_3397,
    logic3_raw_eqFunction_3399,
    logic3_raw_eqFunction_953,
    logic3_raw_eqFunction_3410,
    logic3_raw_eqFunction_3502,
    logic3_raw_eqFunction_3409,
    logic3_raw_eqFunction_3408,
    logic3_raw_eqFunction_3401,
    logic3_raw_eqFunction_3402,
    logic3_raw_eqFunction_3404,
    logic3_raw_eqFunction_3403,
    logic3_raw_eqFunction_3405,
    logic3_raw_eqFunction_963,
    logic3_raw_eqFunction_3407,
    logic3_raw_eqFunction_3400,
    logic3_raw_eqFunction_966,
    logic3_raw_eqFunction_3354,
    logic3_raw_eqFunction_3355,
    logic3_raw_eqFunction_3356,
    logic3_raw_eqFunction_970,
    logic3_raw_eqFunction_985,
    logic3_raw_eqFunction_3650,
    logic3_raw_eqFunction_3651,
    logic3_raw_eqFunction_988,
    logic3_raw_eqFunction_989,
    logic3_raw_eqFunction_3658,
    logic3_raw_eqFunction_991,
    logic3_raw_eqFunction_992,
    logic3_raw_eqFunction_3664,
    logic3_raw_eqFunction_3665,
    logic3_raw_eqFunction_3653,
    logic3_raw_eqFunction_3654,
    logic3_raw_eqFunction_3655,
    logic3_raw_eqFunction_999,
    logic3_raw_eqFunction_1000,
    logic3_raw_eqFunction_3629,
    logic3_raw_eqFunction_3631,
    logic3_raw_eqFunction_3632,
    logic3_raw_eqFunction_1004,
    logic3_raw_eqFunction_3613,
    logic3_raw_eqFunction_3615,
    logic3_raw_eqFunction_3616,
    logic3_raw_eqFunction_1008,
    logic3_raw_eqFunction_3336,
    logic3_raw_eqFunction_3342,
    logic3_raw_eqFunction_3335,
    logic3_raw_eqFunction_1012,
    logic3_raw_eqFunction_3331,
    logic3_raw_eqFunction_3333,
    logic3_raw_eqFunction_1015,
    logic3_raw_eqFunction_3317,
    logic3_raw_eqFunction_3628,
    logic3_raw_eqFunction_3316,
    logic3_raw_eqFunction_3566,
    logic3_raw_eqFunction_3275,
    logic3_raw_eqFunction_3284,
    logic3_raw_eqFunction_3285,
    logic3_raw_eqFunction_3286,
    logic3_raw_eqFunction_3289,
    logic3_raw_eqFunction_3287,
    logic3_raw_eqFunction_3288,
    logic3_raw_eqFunction_1027,
    logic3_raw_eqFunction_1028,
    logic3_raw_eqFunction_3564,
    logic3_raw_eqFunction_3565,
    logic3_raw_eqFunction_1031,
    logic3_raw_eqFunction_1032,
    logic3_raw_eqFunction_3300,
    logic3_raw_eqFunction_3301,
    logic3_raw_eqFunction_3302,
    logic3_raw_eqFunction_3303,
    logic3_raw_eqFunction_3309,
    logic3_raw_eqFunction_3312,
    logic3_raw_eqFunction_3557,
    logic3_raw_eqFunction_3304,
    logic3_raw_eqFunction_3307,
    logic3_raw_eqFunction_3305,
    logic3_raw_eqFunction_3306,
    logic3_raw_eqFunction_3308,
    logic3_raw_eqFunction_3311,
    logic3_raw_eqFunction_3310,
    logic3_raw_eqFunction_3691,
    logic3_raw_eqFunction_1048,
    logic3_raw_eqFunction_3274,
    logic3_raw_eqFunction_3273,
    logic3_raw_eqFunction_3370,
    logic3_raw_eqFunction_3380,
    logic3_raw_eqFunction_3490,
    logic3_raw_eqFunction_3269
  };
  
  for (int id = 0; id < 485; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif