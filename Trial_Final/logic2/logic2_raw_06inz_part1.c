#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 493
type: SIMPLE_ASSIGN
valByp.Kv = 1.1384199576606166e6 * valByp.Kv_SI / valByp.rhoStd
*/
void logic2_raw_eqFunction_493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,493};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* valByp.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* valByp.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* valByp.rhoStd PARAM */),"valByp.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 493;
}

/*
equation index: 494
type: SIMPLE_ASSIGN
valByp.Cv = 83036.13671167512 * valByp.Kv_SI / (valByp.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* valByp.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* valByp.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* valByp.rhoStd PARAM */)) * (0.0631),"valByp.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 494;
}

/*
equation index: 495
type: SIMPLE_ASSIGN
valByp.Av = valByp.Kv_SI / sqrt(valByp.rhoStd)
*/
void logic2_raw_eqFunction_495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,495};
  modelica_real tmp72;
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2838]] /* valByp.rhoStd PARAM */);
  if(!(tmp72 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.rhoStd) was %g should be >= 0", tmp72);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* valByp.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* valByp.Kv_SI PARAM */),sqrt(tmp72),"sqrt(valByp.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 495;
}
extern void logic2_raw_eqFunction_3125(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3126(DATA *data, threadData_t *threadData);


/*
equation index: 498
type: SIMPLE_ASSIGN
TCWEntTow.T = TCWEntTow.T_start
*/
void logic2_raw_eqFunction_498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* TCWEntTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* TCWEntTow.T_start PARAM */);
  threadData->lastEquationSolved = 498;
}

/*
equation index: 499
type: SIMPLE_ASSIGN
TCWLeaTow.T = TCWLeaTow.T_start
*/
void logic2_raw_eqFunction_499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* TCWLeaTow.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* TCWLeaTow.T_start PARAM */);
  threadData->lastEquationSolved = 499;
}

/*
equation index: 500
type: SIMPLE_ASSIGN
TCHWEntChi.T = TCHWEntChi.T_start
*/
void logic2_raw_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* TCHWEntChi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* TCHWEntChi.T_start PARAM */);
  threadData->lastEquationSolved = 500;
}

/*
equation index: 501
type: SIMPLE_ASSIGN
TAirSup.T = TAirSup.T_start
*/
void logic2_raw_eqFunction_501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* TAirSup.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* TAirSup.T_start PARAM */);
  threadData->lastEquationSolved = 501;
}

/*
equation index: 502
type: SIMPLE_ASSIGN
TCHWChi1Out.T = TCHWChi1Out.T_start
*/
void logic2_raw_eqFunction_502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* TCHWChi1Out.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* TCHWChi1Out.T_start PARAM */);
  threadData->lastEquationSolved = 502;
}

/*
equation index: 503
type: SIMPLE_ASSIGN
TCHWChi1In.T = TCHWChi1In.T_start
*/
void logic2_raw_eqFunction_503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* TCHWChi1In.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* TCHWChi1In.T_start PARAM */);
  threadData->lastEquationSolved = 503;
}
extern void logic2_raw_eqFunction_3613(DATA *data, threadData_t *threadData);


/*
equation index: 505
type: SIMPLE_ASSIGN
val6.Kv_SI = val6.m_flow_nominal / sqrt(val6.dpValve_nominal)
*/
void logic2_raw_eqFunction_505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,505};
  modelica_real tmp73;
  tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2734]] /* val6.dpValve_nominal PARAM */);
  if(!(tmp73 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.dpValve_nominal) was %g should be >= 0", tmp73);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* val6.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2740]] /* val6.m_flow_nominal PARAM */),sqrt(tmp73),"sqrt(val6.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 505;
}

/*
equation index: 506
type: SIMPLE_ASSIGN
val6.Kv = 1.1384199576606166e6 * val6.Kv_SI / val6.rhoStd
*/
void logic2_raw_eqFunction_506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2728]] /* val6.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* val6.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* val6.rhoStd PARAM */),"val6.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 506;
}

/*
equation index: 507
type: SIMPLE_ASSIGN
val6.Cv = 83036.13671167512 * val6.Kv_SI / (val6.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,507};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2727]] /* val6.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* val6.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* val6.rhoStd PARAM */)) * (0.0631),"val6.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 507;
}

/*
equation index: 508
type: SIMPLE_ASSIGN
val6.Av = val6.Kv_SI / sqrt(val6.rhoStd)
*/
void logic2_raw_eqFunction_508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,508};
  modelica_real tmp74;
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2744]] /* val6.rhoStd PARAM */);
  if(!(tmp74 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val6.rhoStd) was %g should be >= 0", tmp74);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2726]] /* val6.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2729]] /* val6.Kv_SI PARAM */),sqrt(tmp74),"sqrt(val6.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 508;
}
extern void logic2_raw_eqFunction_3152(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3153(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_511(DATA*, threadData_t*);
/*
equation index: 512
indexNonlinear: 5
type: NONLINEAR

vars: {val6.dp}
eqns: {511}
*/
void logic2_raw_eqFunction_512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,512};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 512 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,512};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 512 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  threadData->lastEquationSolved = 512;
}

/*
equation index: 513
type: SIMPLE_ASSIGN
chi.sta2_start.p = chi.p2_start
*/
void logic2_raw_eqFunction_513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,513};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 513;
}

/*
equation index: 514
type: SIMPLE_ASSIGN
chi.sta2_start.T = chi.T2_start
*/
void logic2_raw_eqFunction_514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* chi.sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 514;
}

/*
equation index: 515
type: SIMPLE_ASSIGN
chi.h2_outflow_start = logic2.chi.Medium2.specificEnthalpy(chi.sta2_start)
*/
void logic2_raw_eqFunction_515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,515};
  logic2_chi_Medium2_ThermodynamicState tmp75;
  logic2_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp75, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[205]] /* chi.sta2_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[204]] /* chi.sta2_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.h2_outflow_start PARAM */) = omc_logic2_chi_Medium2_specificEnthalpy(threadData, tmp75);
  threadData->lastEquationSolved = 515;
}

/*
equation index: 516
type: SIMPLE_ASSIGN
$START.val6.port_b.h_outflow = chi.h2_outflow_start
*/
void logic2_raw_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  ((modelica_real *)((data->modelData->realVarsData[1216] /* val6.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* chi.h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[1216] /* val6.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1216] /* val6.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 516;
}

/*
equation index: 517
type: SIMPLE_ASSIGN
chi.sta1_start.p = chi.p1_start
*/
void logic2_raw_eqFunction_517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi.sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 517;
}

/*
equation index: 518
type: SIMPLE_ASSIGN
chi.sta1_start.T = chi.T1_start
*/
void logic2_raw_eqFunction_518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 518;
}

/*
equation index: 519
type: SIMPLE_ASSIGN
chi.h1_outflow_start = logic2.chi.Medium1.specificEnthalpy(chi.sta1_start)
*/
void logic2_raw_eqFunction_519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,519};
  logic2_chi_Medium1_ThermodynamicState tmp76;
  logic2_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp76, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* chi.sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* chi.sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* chi.h1_outflow_start PARAM */) = omc_logic2_chi_Medium1_specificEnthalpy(threadData, tmp76);
  threadData->lastEquationSolved = 519;
}

/*
equation index: 520
type: SIMPLE_ASSIGN
$START.TCWLeaTow.port_a.h_outflow = chi.h1_outflow_start
*/
void logic2_raw_eqFunction_520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,520};
  ((modelica_real *)((data->modelData->realVarsData[324] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[129]] /* chi.h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[324] /* TCWLeaTow.port_a.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[324] /* TCWLeaTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 520;
}

/*
equation index: 521
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T = chi.vol2.dynBal.T_start
*/
void logic2_raw_eqFunction_521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[237]] /* chi.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 521;
}

/*
equation index: 522
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.T_degC = -273.15 + chi.vol2.dynBal.medium.T
*/
void logic2_raw_eqFunction_522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* chi.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* chi.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 522;
}

/*
equation index: 523
type: SIMPLE_ASSIGN
val6.port_b.h_outflow = 4184.0 * chi.vol2.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* chi.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 523;
}
extern void logic2_raw_eqFunction_3534(DATA *data, threadData_t *threadData);


/*
equation index: 525
type: SIMPLE_ASSIGN
chi.vol2.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, junCHWSup.port_3.h_outflow, val6.port_b.h_outflow)
*/
void logic2_raw_eqFunction_525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* chi.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 525;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
chi.vol2.dynBal.U = chi.vol2.dynBal.m * val6.port_b.h_outflow
*/
void logic2_raw_eqFunction_526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* chi.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 526;
}

/*
equation index: 527
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T = chi.vol1.dynBal.T_start
*/
void logic2_raw_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* chi.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 527;
}

/*
equation index: 528
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.T_degC = -273.15 + chi.vol1.dynBal.medium.T
*/
void logic2_raw_eqFunction_528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* chi.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 528;
}

/*
equation index: 529
type: SIMPLE_ASSIGN
TCWLeaTow.port_a.h_outflow = 4184.0 * chi.vol1.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* chi.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 529;
}
extern void logic2_raw_eqFunction_2996(DATA *data, threadData_t *threadData);


/*
equation index: 531
type: SIMPLE_ASSIGN
TCWLeaTow.T_b_inflow = logic2.TCWLeaTow.Medium.temperature(logic2.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWLeaTow.T_b_inflow variable */) = omc_logic2_TCWLeaTow_Medium_temperature(threadData, omc_logic2_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 531;
}

/*
equation index: 532
type: SIMPLE_ASSIGN
chi.vol1.dynBal.U = chi.vol1.dynBal.m * TCWLeaTow.port_a.h_outflow
*/
void logic2_raw_eqFunction_532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* chi.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* chi.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 532;
}

/*
equation index: 533
type: SIMPLE_ASSIGN
expVesChi.m = expVesChi.V_start * expVesChi.rho_start
*/
void logic2_raw_eqFunction_533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesChi.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1329]] /* expVesChi.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesChi.rho_start PARAM */));
  threadData->lastEquationSolved = 533;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
expVesChi.H = expVesChi.m * logic2.expVesChi.Medium.specificInternalEnergy(logic2.expVesChi.Medium.setState_pTX(expVesChi.p_start, expVesChi.T_start, {}))
*/
void logic2_raw_eqFunction_534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* expVesChi.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* expVesChi.m STATE(1) */)) * (omc_logic2_expVesChi_Medium_specificInternalEnergy(threadData, omc_logic2_expVesChi_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* expVesChi.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1328]] /* expVesChi.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 534;
}
extern void logic2_raw_eqFunction_2994(DATA *data, threadData_t *threadData);


/*
equation index: 536
type: SIMPLE_ASSIGN
TCWEntTow.port_b.h_outflow = (max(val5.m_flow, 1e-7) * TCWLeaTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(val5.m_flow, 1e-7))
*/
void logic2_raw_eqFunction_536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */),1e-7),"1e-7 + max(val5.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 536;
}

/*
equation index: 537
type: SIMPLE_ASSIGN
val1.Kv_SI = val1.m_flow_nominal / sqrt(val1.dpValve_nominal)
*/
void logic2_raw_eqFunction_537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,537};
  modelica_real tmp77;
  tmp77 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2688]] /* val1.dpValve_nominal PARAM */);
  if(!(tmp77 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.dpValve_nominal) was %g should be >= 0", tmp77);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* val1.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2694]] /* val1.m_flow_nominal PARAM */),sqrt(tmp77),"sqrt(val1.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 537;
}

/*
equation index: 538
type: SIMPLE_ASSIGN
val1.Kv = 1.1384199576606166e6 * val1.Kv_SI / val1.rhoStd
*/
void logic2_raw_eqFunction_538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2680]] /* val1.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* val1.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* val1.rhoStd PARAM */),"val1.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 538;
}

/*
equation index: 539
type: SIMPLE_ASSIGN
val1.Cv = 83036.13671167512 * val1.Kv_SI / (val1.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,539};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2679]] /* val1.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* val1.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* val1.rhoStd PARAM */)) * (0.0631),"val1.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 539;
}

/*
equation index: 540
type: SIMPLE_ASSIGN
val1.Av = val1.Kv_SI / sqrt(val1.rhoStd)
*/
void logic2_raw_eqFunction_540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,540};
  modelica_real tmp78;
  tmp78 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2698]] /* val1.rhoStd PARAM */);
  if(!(tmp78 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val1.rhoStd) was %g should be >= 0", tmp78);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* val1.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2681]] /* val1.Kv_SI PARAM */),sqrt(tmp78),"sqrt(val1.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 540;
}
extern void logic2_raw_eqFunction_3128(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3129(DATA *data, threadData_t *threadData);


/*
equation index: 543
type: SIMPLE_ASSIGN
val5.Kv_SI = val5.m_flow_nominal / sqrt(val5.dpValve_nominal)
*/
void logic2_raw_eqFunction_543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,543};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2711]] /* val5.dpValve_nominal PARAM */);
  if(!(tmp79 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.dpValve_nominal) was %g should be >= 0", tmp79);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* val5.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2717]] /* val5.m_flow_nominal PARAM */),sqrt(tmp79),"sqrt(val5.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 543;
}

/*
equation index: 544
type: SIMPLE_ASSIGN
val5.Kv = 1.1384199576606166e6 * val5.Kv_SI / val5.rhoStd
*/
void logic2_raw_eqFunction_544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* val5.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* val5.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* val5.rhoStd PARAM */),"val5.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 544;
}

/*
equation index: 545
type: SIMPLE_ASSIGN
val5.Cv = 83036.13671167512 * val5.Kv_SI / (val5.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,545};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2704]] /* val5.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* val5.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* val5.rhoStd PARAM */)) * (0.0631),"val5.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 545;
}

/*
equation index: 546
type: SIMPLE_ASSIGN
val5.Av = val5.Kv_SI / sqrt(val5.rhoStd)
*/
void logic2_raw_eqFunction_546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,546};
  modelica_real tmp80;
  tmp80 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2721]] /* val5.rhoStd PARAM */);
  if(!(tmp80 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val5.rhoStd) was %g should be >= 0", tmp80);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2703]] /* val5.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2706]] /* val5.Kv_SI PARAM */),sqrt(tmp80),"sqrt(val5.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 546;
}
extern void logic2_raw_eqFunction_3149(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3150(DATA *data, threadData_t *threadData);


/*
equation index: 549
type: SIMPLE_ASSIGN
val5.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val5.m_flow, val5.k, val5.m_flow_turbulent), val5.dp_nominal_pos * val5.m_flow / val5.m_flow_nominal_pos)
*/
void logic2_raw_eqFunction_549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* val5.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val5.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2720]] /* val5.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2713]] /* val5.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.m_flow_nominal_pos PARAM */),"val5.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 549;
}
extern void logic2_raw_eqFunction_3166(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3167(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3170(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3169(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3168(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3171(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3183(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3172(DATA *data, threadData_t *threadData);


/*
equation index: 558
type: SIMPLE_ASSIGN
TCWEntTow.T_a_inflow = logic2.TCWEntTow.Medium.temperature(logic2.TCWEntTow.Medium.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* TCWEntTow.T_a_inflow variable */) = omc_logic2_TCWEntTow_Medium_temperature(threadData, omc_logic2_TCWEntTow_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 558;
}

/*
equation index: 559
type: SIMPLE_ASSIGN
pumCW.eff.hydDer[1] = 0.0
*/
void logic2_raw_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2429]] /* pumCW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 559;
}

/*
equation index: 560
type: SIMPLE_ASSIGN
pumCW.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, pumCW.VMachine_flow, pumCW.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW.eff.hydDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,560};
  real_array tmp81;
  real_array tmp82;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp83;
  real_array tmp84;
  real_array tmp85;
  real_array tmp86;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp87;
  real_array tmp88;
  real_array_create(&tmp81, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2452]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp82, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp83, tmp81, tmp82);
  real_array_create(&tmp84, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2429]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp85, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2452]] /* pumCW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp86, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2453]] /* pumCW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp87, tmp85, tmp86);
  real_array_create(&tmp88, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2429]] /* pumCW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* pumCW.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp83, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCW.VMachine_flow variable */), tmp84, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp87, 0.012615873967693397, tmp88, 1.0, 0.05));
  threadData->lastEquationSolved = 560;
}
extern void logic2_raw_eqFunction_3185(DATA *data, threadData_t *threadData);


/*
equation index: 562
type: SIMPLE_ASSIGN
pumCW.eff.motDer[1] = 0.0
*/
void logic2_raw_eqFunction_562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 562;
}

/*
equation index: 563
type: SIMPLE_ASSIGN
pumCW.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, pumCW.VMachine_flow, pumCW.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW.eff.per.motorEfficiency, 0.012615873967693397, pumCW.eff.motDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  real_array tmp89;
  real_array tmp90;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp91;
  real_array tmp92;
  real_array tmp93;
  real_array tmp94;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp95;
  real_array tmp96;
  real_array_create(&tmp89, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp90, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp91, tmp89, tmp90);
  real_array_create(&tmp92, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp93, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2454]] /* pumCW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp94, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2455]] /* pumCW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp95, tmp93, tmp94);
  real_array_create(&tmp96, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2431]] /* pumCW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* pumCW.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp91, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCW.VMachine_flow variable */), tmp92, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp95, 0.012615873967693397, tmp96, 1.0, 0.05));
  threadData->lastEquationSolved = 563;
}
extern void logic2_raw_eqFunction_3182(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3184(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3186(DATA *data, threadData_t *threadData);


/*
equation index: 567
type: SIMPLE_ASSIGN
pumCW.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCW.VMachine_flow) + -2.5231747935386794e-5 > 1.2615873967693397e-5) then pumCW.heaDis.QThe_flow else if noEvent(abs(pumCW.VMachine_flow) + -2.5231747935386794e-5 < -1.2615873967693397e-5) then 0.0 else 0.25 * (2.0 - 79265.21797544822 * abs(pumCW.VMachine_flow)) * ((79265.21797544822 * abs(pumCW.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCW.heaDis.QThe_flow + 0.5 * pumCW.heaDis.QThe_flow), 0.0)
*/
void logic2_raw_eqFunction_567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,567};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  tmp97 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCW.VMachine_flow variable */)) + -2.5231747935386794e-5,1.2615873967693397e-5);
  tmp102 = (modelica_boolean)tmp97;
  if(tmp102)
  {
    tmp103 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCW.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp98 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCW.VMachine_flow variable */)) + -2.5231747935386794e-5,-1.2615873967693397e-5);
    tmp100 = (modelica_boolean)tmp98;
    if(tmp100)
    {
      tmp101 = 0.0;
    }
    else
    {
      tmp99 = (79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCW.VMachine_flow variable */))) + -2.0;
      tmp101 = (0.25) * (((2.0 - ((79265.21797544822) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* pumCW.VMachine_flow variable */))))) * ((tmp99 * tmp99) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCW.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCW.heaDis.QThe_flow variable */));
    }
    tmp103 = tmp101;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* pumCW.PToMed.u1 variable */) = homotopy(tmp103, 0.0);
  threadData->lastEquationSolved = 567;
}
extern void logic2_raw_eqFunction_3188(DATA *data, threadData_t *threadData);


/*
equation index: 569
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T = pumCW.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2519]] /* pumCW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 569;
}

/*
equation index: 570
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.T_degC = -273.15 + pumCW.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* pumCW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* pumCW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 570;
}

/*
equation index: 571
type: SIMPLE_ASSIGN
TCWLeaTow.port_b.h_outflow = 4184.0 * pumCW.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* pumCW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 571;
}

/*
equation index: 572
type: SIMPLE_ASSIGN
pumCW.preSou.V_flow = val5.m_flow / Modelica.Fluid.Utilities.regStep(val5.m_flow, logic2.pumCW.preSou.Medium.density(logic2.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), logic2.pumCW.preSou.Medium.density(logic2.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)
*/
void logic2_raw_eqFunction_572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* pumCW.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), omc_logic2_pumCW_preSou_Medium_density(threadData, omc_logic2_pumCW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT83)), omc_logic2_pumCW_preSou_Medium_density(threadData, omc_logic2_pumCW_preSou_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2504]] /* pumCW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(val5.m_flow, logic2.pumCW.preSou.Medium.density(logic2.pumCW.preSou.Medium.setState_phX(cooTow.vol.p, TCWLeaTow.port_b.h_outflow, {})), logic2.pumCW.preSou.Medium.density(logic2.pumCW.preSou.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_a.h_outflow, {})), pumCW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 572;
}
extern void logic2_raw_eqFunction_3175(DATA *data, threadData_t *threadData);


/*
equation index: 574
type: SIMPLE_ASSIGN
TCWLeaTow.T_a_inflow = logic2.TCWLeaTow.Medium.temperature(logic2.TCWLeaTow.Medium.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWLeaTow.T_a_inflow variable */) = omc_logic2_TCWLeaTow_Medium_temperature(threadData, omc_logic2_TCWLeaTow_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 574;
}
extern void logic2_raw_eqFunction_3193(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3194(DATA *data, threadData_t *threadData);


/*
equation index: 577
type: SIMPLE_ASSIGN
chi.TConEnt = logic2.chi.Medium1.temperature(logic2.chi.Medium1.setState_phX(expVesChi.p_start, TCWLeaTow.port_b.h_outflow, {1.0}))
*/
void logic2_raw_eqFunction_577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* chi.TConEnt variable */) = omc_logic2_chi_Medium1_temperature(threadData, omc_logic2_chi_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1333]] /* expVesChi.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 577;
}
extern void logic2_raw_eqFunction_2989(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3190(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2984(DATA *data, threadData_t *threadData);


/*
equation index: 581
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_a.h_outflow, TCWLeaTow.port_b.h_outflow)
*/
void logic2_raw_eqFunction_581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* pumCW.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 581;
}

/*
equation index: 582
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.U = pumCW.vol.dynBal.m * TCWLeaTow.port_b.h_outflow
*/
void logic2_raw_eqFunction_582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* pumCW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* pumCW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 582;
}

/*
equation index: 583
type: ARRAY_CALL_ASSIGN

cooTow.fanRelPowDer = Buildings.Utilities.Math.Functions.splineDerivatives(cooTow.fanRelPow.r_V, cooTow.fanRelPow.r_P, Buildings.Utilities.Math.Functions.isMonotonic(cooTow.fanRelPow.r_P, false))
*/
void logic2_raw_eqFunction_583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,583};
  real_array tmp104;
  real_array tmp105;
  real_array tmp106;
  real_array tmp107;
  real_array_create(&tmp104, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp105, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp106, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp107, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp104, tmp105, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp106, 0 /* false */)), tmp107);
  threadData->lastEquationSolved = 583;
}

/*
equation index: 584
type: SIMPLE_ASSIGN
cooTow.PFan = Buildings.Utilities.Math.Functions.spliceFunction(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, cooTow.FRAir, cooTow.fanRelPowDer) * cooTow.PFan_nominal, 0.0, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic2_raw_eqFunction_584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,584};
  real_array tmp108;
  real_array tmp109;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp110;
  real_array tmp111;
  real_array_create(&tmp108, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1057]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp109, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp110, tmp108, tmp109);
  real_array_create(&tmp111, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1062]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cooTow.PFan variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp110, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */), tmp111)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1040]] /* cooTow.PFan_nominal PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 584;
}

void logic2_raw_eqFunction_585(DATA*, threadData_t*);
/*
equation index: 586
indexNonlinear: 6
type: NONLINEAR

vars: {cooTow.FRWat0}
eqns: {585}
*/
void logic2_raw_eqFunction_586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,586};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 586 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,586};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 586 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 586;
}

/*
equation index: 587
type: SIMPLE_ASSIGN
cooTow.mRef_flow = cooTow.m_flow_nominal / cooTow.FRWat0
*/
void logic2_raw_eqFunction_587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* cooTow.mRef_flow PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1071]] /* cooTow.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */),"cooTow.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 587;
}
extern void logic2_raw_eqFunction_3195(DATA *data, threadData_t *threadData);


/*
equation index: 589
type: SIMPLE_ASSIGN
cooTow.sta_start.p = cooTow.p_start
*/
void logic2_raw_eqFunction_589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* cooTow.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1073]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 589;
}

/*
equation index: 590
type: SIMPLE_ASSIGN
cooTow.sta_start.T = cooTow.T_start
*/
void logic2_raw_eqFunction_590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 590;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
cooTow.h_outflow_start = logic2.cooTow.Medium.specificEnthalpy(cooTow.sta_start)
*/
void logic2_raw_eqFunction_591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,591};
  logic2_cooTow_Medium_ThermodynamicState tmp112;
  logic2_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp112, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1094]] /* cooTow.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1093]] /* cooTow.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* cooTow.h_outflow_start PARAM */) = omc_logic2_cooTow_Medium_specificEnthalpy(threadData, tmp112);
  threadData->lastEquationSolved = 591;
}

/*
equation index: 592
type: SIMPLE_ASSIGN
$START.TCWEntTow.port_a.h_outflow = cooTow.h_outflow_start
*/
void logic2_raw_eqFunction_592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,592};
  ((modelica_real *)((data->modelData->realVarsData[308] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1069]] /* cooTow.h_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = ((modelica_real *)((data->modelData->realVarsData[308] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[308] /* TCWEntTow.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 592;
}

/*
equation index: 593
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T = 0.0
*/
void logic2_raw_eqFunction_593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 593;
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.medium.T_degC = $DER.cooTow.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* der(cooTow.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 594;
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$DER.TCWEntTow.port_a.h_outflow = 4184.0 * $DER.cooTow.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* der(TCWEntTow.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* der(cooTow.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 595;
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$DER.cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * $DER.TCWEntTow.port_a.h_outflow
*/
void logic2_raw_eqFunction_596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* der(cooTow.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* der(TCWEntTow.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 596;
}

void logic2_raw_eqFunction_597(DATA*, threadData_t*);
void logic2_raw_eqFunction_598(DATA*, threadData_t*);
void logic2_raw_eqFunction_599(DATA*, threadData_t*);
void logic2_raw_eqFunction_600(DATA*, threadData_t*);
void logic2_raw_eqFunction_601(DATA*, threadData_t*);
void logic2_raw_eqFunction_602(DATA*, threadData_t*);
void logic2_raw_eqFunction_603(DATA*, threadData_t*);
void logic2_raw_eqFunction_604(DATA*, threadData_t*);
void logic2_raw_eqFunction_605(DATA*, threadData_t*);
void logic2_raw_eqFunction_606(DATA*, threadData_t*);
void logic2_raw_eqFunction_607(DATA*, threadData_t*);
void logic2_raw_eqFunction_608(DATA*, threadData_t*);
void logic2_raw_eqFunction_609(DATA*, threadData_t*);
void logic2_raw_eqFunction_610(DATA*, threadData_t*);
/*
equation index: 611
indexNonlinear: 7
type: NONLINEAR

vars: {TCWEntTow.port_a.h_outflow}
eqns: {597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610}
*/
void logic2_raw_eqFunction_611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,611};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 611 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,611};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 611 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  threadData->lastEquationSolved = 611;
}
extern void logic2_raw_eqFunction_3658(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3659(DATA *data, threadData_t *threadData);


/*
equation index: 614
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * TCWEntTow.port_a.h_outflow
*/
void logic2_raw_eqFunction_614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* cooTow.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 614;
}

/*
equation index: 615
type: SIMPLE_ASSIGN
TCWEntTow.T_b_inflow = logic2.TCWEntTow.Medium.temperature(logic2.TCWEntTow.Medium.setState_phX(TCWEntTow.port_a.p, TCWEntTow.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWEntTow.T_b_inflow variable */) = omc_logic2_TCWEntTow_Medium_temperature(threadData, omc_logic2_TCWEntTow_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), _OMC_LIT83));
  threadData->lastEquationSolved = 615;
}
extern void logic2_raw_eqFunction_3667(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3668(DATA *data, threadData_t *threadData);


/*
equation index: 618
type: SIMPLE_ASSIGN
chi.vol1.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, (max(-val5.m_flow, 1e-7) * TCWEntTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(-val5.m_flow, 1e-7)), TCWLeaTow.port_a.h_outflow)
*/
void logic2_raw_eqFunction_618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* chi.vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),1e-7),"1e-7 + max(-val5.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* TCWLeaTow.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 618;
}
extern void logic2_raw_eqFunction_3662(DATA *data, threadData_t *threadData);


/*
equation index: 620
type: SIMPLE_ASSIGN
chi.state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-val5.m_flow, 1e-7) * TCWEntTow.port_a.h_outflow + 1e-7 * expVesChi.port_a.h_outflow) / (1e-7 + max(-val5.m_flow, 1e-7))
*/
void logic2_raw_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* chi.state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* expVesChi.port_a.h_outflow variable */)),1e-7 + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),1e-7),"1e-7 + max(-val5.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 620;
}
extern void logic2_raw_eqFunction_3672(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3673(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3674(DATA *data, threadData_t *threadData);


/*
equation index: 624
type: SIMPLE_ASSIGN
expVesCHW.m = expVesCHW.V_start * expVesCHW.rho_start
*/
void logic2_raw_eqFunction_624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1320]] /* expVesCHW.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1325]] /* expVesCHW.rho_start PARAM */));
  threadData->lastEquationSolved = 624;
}

/*
equation index: 625
type: SIMPLE_ASSIGN
expVesCHW.H = expVesCHW.m * logic2.expVesCHW.Medium.specificInternalEnergy(logic2.expVesCHW.Medium.setState_pTX(expVesCHW.p_start, expVesCHW.T_start, {}))
*/
void logic2_raw_eqFunction_625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* expVesCHW.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* expVesCHW.m STATE(1,expVesCHW.port_a.m_flow) */)) * (omc_logic2_expVesCHW_Medium_specificInternalEnergy(threadData, omc_logic2_expVesCHW_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1319]] /* expVesCHW.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 625;
}
extern void logic2_raw_eqFunction_2982(DATA *data, threadData_t *threadData);


/*
equation index: 627
type: SIMPLE_ASSIGN
pumCHW.eff.hydDer[1] = 0.0
*/
void logic2_raw_eqFunction_627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2173]] /* pumCHW.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 627;
}

/*
equation index: 628
type: SIMPLE_ASSIGN
pumCHW.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, pumCHW.VMachine_flow, pumCHW.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW.eff.hydDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,628};
  real_array tmp113;
  real_array tmp114;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp115;
  real_array tmp116;
  real_array tmp117;
  real_array tmp118;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp119;
  real_array tmp120;
  real_array_create(&tmp113, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2196]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp114, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp115, tmp113, tmp114);
  real_array_create(&tmp116, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2173]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp117, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2196]] /* pumCHW.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp118, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2197]] /* pumCHW.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp119, tmp117, tmp118);
  real_array_create(&tmp120, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2173]] /* pumCHW.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* pumCHW.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp115, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */), tmp116, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp119, 0.025231747935386795, tmp120, 1.0, 0.05));
  threadData->lastEquationSolved = 628;
}

/*
equation index: 629
type: SIMPLE_ASSIGN
pumCHW.eff.motDer[1] = 0.0
*/
void logic2_raw_eqFunction_629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 629;
}

/*
equation index: 630
type: SIMPLE_ASSIGN
pumCHW.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, pumCHW.VMachine_flow, pumCHW.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW.eff.per.motorEfficiency, 0.025231747935386795, pumCHW.eff.motDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,630};
  real_array tmp121;
  real_array tmp122;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp123;
  real_array tmp124;
  real_array tmp125;
  real_array tmp126;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp127;
  real_array tmp128;
  real_array_create(&tmp121, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp122, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp123, tmp121, tmp122);
  real_array_create(&tmp124, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp125, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2198]] /* pumCHW.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp126, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2199]] /* pumCHW.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp127, tmp125, tmp126);
  real_array_create(&tmp128, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2175]] /* pumCHW.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* pumCHW.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp123, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */), tmp124, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp127, 0.025231747935386795, tmp128, 1.0, 0.05));
  threadData->lastEquationSolved = 630;
}
extern void logic2_raw_eqFunction_3207(DATA *data, threadData_t *threadData);


/*
equation index: 632
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T = pumCHW.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2263]] /* pumCHW.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 632;
}

/*
equation index: 633
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.T_degC = -273.15 + pumCHW.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* pumCHW.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* pumCHW.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 633;
}

/*
equation index: 634
type: SIMPLE_ASSIGN
pumCHW.port_a.h_outflow = 4184.0 * pumCHW.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,634};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* pumCHW.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 634;
}

/*
equation index: 635
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, pumCHW.port_a.h_outflow, junCHWRet.port_3.h_outflow)
*/
void logic2_raw_eqFunction_635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* junCHWRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 635;
}
extern void logic2_raw_eqFunction_3209(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3532(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2979(DATA *data, threadData_t *threadData);


/*
equation index: 639
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.ports_H_flow[2] = semiLinear(-chi.m2_flow, val6.port_b.h_outflow, pumCHW.port_a.h_outflow)
*/
void logic2_raw_eqFunction_639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* pumCHW.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 639;
}
extern void logic2_raw_eqFunction_3546(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3547(DATA *data, threadData_t *threadData);


/*
equation index: 642
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.U = pumCHW.vol.dynBal.m * pumCHW.port_a.h_outflow
*/
void logic2_raw_eqFunction_642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* pumCHW.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* pumCHW.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 642;
}

/*
equation index: 643
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta2_start.T = cooCoi.ele[4].T2_start
*/
void logic2_raw_eqFunction_643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[4].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[497]] /* cooCoi.ele[4].T2_start PARAM */);
  threadData->lastEquationSolved = 643;
}

/*
equation index: 644
type: ARRAY_CALL_ASSIGN

cooCoi.ele[4].sta2_start.X = cooCoi.ele[4].X2_start
*/
void logic2_raw_eqFunction_644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,644};
  real_array tmp129;
  real_array tmp130;
  real_array_create(&tmp129, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[512]] /* cooCoi.ele[4].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp130, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp129, tmp130);
  threadData->lastEquationSolved = 644;
}

/*
equation index: 645
type: SIMPLE_ASSIGN
cooCoi.ele[4].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[4].sta2_start.T) * (1.0 - cooCoi.ele[4].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[4].sta2_start.T)) * cooCoi.ele[4].sta2_start.X[1]
*/
void logic2_raw_eqFunction_645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* cooCoi.ele[4].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[4].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* cooCoi.ele[4].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[736]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 645;
}

/*
equation index: 646
type: SIMPLE_ASSIGN
$START.cooCoi.port_a2.h_outflow = cooCoi.ele[4].h2_outflow_start
*/
void logic2_raw_eqFunction_646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,646};
  ((modelica_real *)((data->modelData->realVarsData[693] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[537]] /* cooCoi.ele[4].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[693] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[693] /* cooCoi.port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 646;
}

/*
equation index: 647
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.p = cooCoi.ele[4].p1_start
*/
void logic2_raw_eqFunction_647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* cooCoi.ele[4].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 647;
}

/*
equation index: 648
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.T = cooCoi.ele[4].T1_start
*/
void logic2_raw_eqFunction_648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,648};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[4].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[493]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 648;
}

/*
equation index: 649
type: SIMPLE_ASSIGN
cooCoi.ele[4].h1_outflow_start = logic2.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[4].sta1_start)
*/
void logic2_raw_eqFunction_649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,649};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp131;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp131, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[709]] /* cooCoi.ele[4].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[705]] /* cooCoi.ele[4].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* cooCoi.ele[4].h1_outflow_start PARAM */) = omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp131);
  threadData->lastEquationSolved = 649;
}

/*
equation index: 650
type: SIMPLE_ASSIGN
$START.cooCoi.port_b1.h_outflow = cooCoi.ele[4].h1_outflow_start
*/
void logic2_raw_eqFunction_650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,650};
  ((modelica_real *)((data->modelData->realVarsData[694] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[533]] /* cooCoi.ele[4].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[694] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[694] /* cooCoi.port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 650;
}

/*
equation index: 651
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic2_raw_eqFunction_651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 651;
}
extern void logic2_raw_eqFunction_2967(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2968(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2970(DATA *data, threadData_t *threadData);


/*
equation index: 656
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T = 293.15
*/
void logic2_raw_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 656;
}

/*
equation index: 657
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol2.dynBal.medium.T
*/
void logic2_raw_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* cooCoi.ele[4].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 657;
}

/*
equation index: 658
type: SIMPLE_ASSIGN
cooCoi.port_a2.h_outflow = 1006.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC * cooCoi.ele[4].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[4].vol2.dynBal.medium.T_degC) * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[4].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* cooCoi.ele[4].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 658;
}
extern void logic2_raw_eqFunction_2973(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2974(DATA *data, threadData_t *threadData);


/*
equation index: 661
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.medium.u = -84437.5 + cooCoi.port_a2.h_outflow
*/
void logic2_raw_eqFunction_661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 661;
}
extern void logic2_raw_eqFunction_2977(DATA *data, threadData_t *threadData);


/*
equation index: 663
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T = cooCoi.ele[4].vol1.dynBal.T_start
*/
void logic2_raw_eqFunction_663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* cooCoi.ele[4].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 663;
}

/*
equation index: 664
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[4].vol1.dynBal.medium.T
*/
void logic2_raw_eqFunction_664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[4].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 664;
}

/*
equation index: 665
type: SIMPLE_ASSIGN
cooCoi.port_b1.h_outflow = 4184.0 * cooCoi.ele[4].vol1.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[4].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 665;
}
extern void logic2_raw_eqFunction_2958(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2959(DATA *data, threadData_t *threadData);


/*
equation index: 668
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.U = cooCoi.ele[4].vol1.dynBal.m * cooCoi.port_b1.h_outflow
*/
void logic2_raw_eqFunction_668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* cooCoi.ele[4].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 668;
}
extern void logic2_raw_eqFunction_2965(DATA *data, threadData_t *threadData);


/*
equation index: 670
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta2_start.T = cooCoi.ele[3].T2_start
*/
void logic2_raw_eqFunction_670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,670};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* cooCoi.ele[3].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[496]] /* cooCoi.ele[3].T2_start PARAM */);
  threadData->lastEquationSolved = 670;
}

/*
equation index: 671
type: ARRAY_CALL_ASSIGN

cooCoi.ele[3].sta2_start.X = cooCoi.ele[3].X2_start
*/
void logic2_raw_eqFunction_671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,671};
  real_array tmp132;
  real_array tmp133;
  real_array_create(&tmp132, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[510]] /* cooCoi.ele[3].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp133, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp132, tmp133);
  threadData->lastEquationSolved = 671;
}

/*
equation index: 672
type: SIMPLE_ASSIGN
cooCoi.ele[3].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[3].sta2_start.T) * (1.0 - cooCoi.ele[3].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[3].sta2_start.T)) * cooCoi.ele[3].sta2_start.X[1]
*/
void logic2_raw_eqFunction_672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,672};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* cooCoi.ele[3].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* cooCoi.ele[3].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[728]] /* cooCoi.ele[3].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[734]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 672;
}

/*
equation index: 673
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_a2.h_outflow = cooCoi.ele[3].h2_outflow_start
*/
void logic2_raw_eqFunction_673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,673};
  ((modelica_real *)((data->modelData->realVarsData[525] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[536]] /* cooCoi.ele[3].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[525] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[525] /* cooCoi.ele[3].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 673;
}

/*
equation index: 674
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.p = cooCoi.ele[3].p1_start
*/
void logic2_raw_eqFunction_674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[3].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 674;
}

/*
equation index: 675
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.T = cooCoi.ele[3].T1_start
*/
void logic2_raw_eqFunction_675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* cooCoi.ele[3].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[492]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 675;
}

/*
equation index: 676
type: SIMPLE_ASSIGN
cooCoi.ele[3].h1_outflow_start = logic2.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[3].sta1_start)
*/
void logic2_raw_eqFunction_676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,676};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp134;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp134, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[708]] /* cooCoi.ele[3].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[704]] /* cooCoi.ele[3].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* cooCoi.ele[3].h1_outflow_start PARAM */) = omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp134);
  threadData->lastEquationSolved = 676;
}

/*
equation index: 677
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_b1.h_outflow = cooCoi.ele[3].h1_outflow_start
*/
void logic2_raw_eqFunction_677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,677};
  ((modelica_real *)((data->modelData->realVarsData[527] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[532]] /* cooCoi.ele[3].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[527] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[527] /* cooCoi.ele[3].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 677;
}

/*
equation index: 678
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic2_raw_eqFunction_678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 678;
}
extern void logic2_raw_eqFunction_3698(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3704(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3707(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3708(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3709(DATA *data, threadData_t *threadData);


/*
equation index: 684
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T = 293.15
*/
void logic2_raw_eqFunction_684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 684;
}

/*
equation index: 685
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol2.dynBal.medium.T
*/
void logic2_raw_eqFunction_685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* cooCoi.ele[3].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 685;
}

/*
equation index: 686
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_a2.h_outflow = 1006.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC * cooCoi.ele[3].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[3].vol2.dynBal.medium.T_degC) * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* cooCoi.ele[3].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[3].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 686;
}
extern void logic2_raw_eqFunction_3700(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3702(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3703(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3701(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3699(DATA *data, threadData_t *threadData);


/*
equation index: 692
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[3].port_a2.h_outflow
*/
void logic2_raw_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 692;
}
extern void logic2_raw_eqFunction_3710(DATA *data, threadData_t *threadData);


/*
equation index: 694
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T = cooCoi.ele[3].vol1.dynBal.T_start
*/
void logic2_raw_eqFunction_694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* cooCoi.ele[3].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 694;
}

/*
equation index: 695
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[3].vol1.dynBal.medium.T
*/
void logic2_raw_eqFunction_695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[3].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 695;
}

/*
equation index: 696
type: SIMPLE_ASSIGN
cooCoi.ele[3].port_b1.h_outflow = 4184.0 * cooCoi.ele[3].vol1.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* cooCoi.ele[3].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 696;
}
extern void logic2_raw_eqFunction_2949(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2950(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2948(DATA *data, threadData_t *threadData);


/*
equation index: 702
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.U = cooCoi.ele[3].vol1.dynBal.m * cooCoi.ele[3].port_b1.h_outflow
*/
void logic2_raw_eqFunction_702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* cooCoi.ele[3].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 702;
}
extern void logic2_raw_eqFunction_2956(DATA *data, threadData_t *threadData);


/*
equation index: 704
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta2_start.T = cooCoi.ele[2].T2_start
*/
void logic2_raw_eqFunction_704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,704};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* cooCoi.ele[2].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[495]] /* cooCoi.ele[2].T2_start PARAM */);
  threadData->lastEquationSolved = 704;
}

/*
equation index: 705
type: ARRAY_CALL_ASSIGN

cooCoi.ele[2].sta2_start.X = cooCoi.ele[2].X2_start
*/
void logic2_raw_eqFunction_705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,705};
  real_array tmp135;
  real_array tmp136;
  real_array_create(&tmp135, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* cooCoi.ele[2].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp136, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp135, tmp136);
  threadData->lastEquationSolved = 705;
}

/*
equation index: 706
type: SIMPLE_ASSIGN
cooCoi.ele[2].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[2].sta2_start.T) * (1.0 - cooCoi.ele[2].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[2].sta2_start.T)) * cooCoi.ele[2].sta2_start.X[1]
*/
void logic2_raw_eqFunction_706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* cooCoi.ele[2].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* cooCoi.ele[2].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[727]] /* cooCoi.ele[2].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[732]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 706;
}

/*
equation index: 707
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_a2.h_outflow = cooCoi.ele[2].h2_outflow_start
*/
void logic2_raw_eqFunction_707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,707};
  ((modelica_real *)((data->modelData->realVarsData[524] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[535]] /* cooCoi.ele[2].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[524] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[524] /* cooCoi.ele[2].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 707;
}

/*
equation index: 708
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.p = cooCoi.ele[2].p1_start
*/
void logic2_raw_eqFunction_708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[2].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[559]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 708;
}

/*
equation index: 709
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.T = cooCoi.ele[2].T1_start
*/
void logic2_raw_eqFunction_709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* cooCoi.ele[2].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[491]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 709;
}

/*
equation index: 710
type: SIMPLE_ASSIGN
cooCoi.ele[2].h1_outflow_start = logic2.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[2].sta1_start)
*/
void logic2_raw_eqFunction_710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,710};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp137;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp137, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[707]] /* cooCoi.ele[2].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[703]] /* cooCoi.ele[2].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* cooCoi.ele[2].h1_outflow_start PARAM */) = omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp137);
  threadData->lastEquationSolved = 710;
}

/*
equation index: 711
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_b1.h_outflow = cooCoi.ele[2].h1_outflow_start
*/
void logic2_raw_eqFunction_711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,711};
  ((modelica_real *)((data->modelData->realVarsData[526] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[531]] /* cooCoi.ele[2].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[526] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[526] /* cooCoi.ele[2].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 711;
}

/*
equation index: 712
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.Xi[1] = 0.01
*/
void logic2_raw_eqFunction_712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */) = 0.01;
  threadData->lastEquationSolved = 712;
}
extern void logic2_raw_eqFunction_3715(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3722(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3725(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3726(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3727(DATA *data, threadData_t *threadData);


/*
equation index: 718
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T = 293.15
*/
void logic2_raw_eqFunction_718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 718;
}

/*
equation index: 719
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol2.dynBal.medium.T
*/
void logic2_raw_eqFunction_719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[2].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 719;
}

/*
equation index: 720
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_a2.h_outflow = 1006.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC * cooCoi.ele[2].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[2].vol2.dynBal.medium.T_degC) * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* cooCoi.ele[2].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* cooCoi.ele[2].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 720;
}
extern void logic2_raw_eqFunction_3717(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3719(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3720(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3721(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3718(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3716(DATA *data, threadData_t *threadData);


/*
equation index: 727
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.medium.u = -84437.5 + cooCoi.ele[2].port_a2.h_outflow
*/
void logic2_raw_eqFunction_727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */);
  threadData->lastEquationSolved = 727;
}
extern void logic2_raw_eqFunction_3728(DATA *data, threadData_t *threadData);


/*
equation index: 729
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T = cooCoi.ele[2].vol1.dynBal.T_start
*/
void logic2_raw_eqFunction_729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[771]] /* cooCoi.ele[2].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 729;
}

/*
equation index: 730
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[2].vol1.dynBal.medium.T
*/
void logic2_raw_eqFunction_730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* cooCoi.ele[2].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 730;
}

/*
equation index: 731
type: SIMPLE_ASSIGN
cooCoi.ele[2].port_b1.h_outflow = 4184.0 * cooCoi.ele[2].vol1.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* cooCoi.ele[2].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 731;
}
extern void logic2_raw_eqFunction_2940(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2951(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2952(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2962(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2941(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2939(DATA *data, threadData_t *threadData);


/*
equation index: 738
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.U = cooCoi.ele[2].vol1.dynBal.m * cooCoi.ele[2].port_b1.h_outflow
*/
void logic2_raw_eqFunction_738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* cooCoi.ele[2].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 738;
}
extern void logic2_raw_eqFunction_2946(DATA *data, threadData_t *threadData);


/*
equation index: 740
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta2_start.T = cooCoi.ele[1].T2_start
*/
void logic2_raw_eqFunction_740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,740};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* cooCoi.ele[1].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[494]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 740;
}

/*
equation index: 741
type: ARRAY_CALL_ASSIGN

cooCoi.ele[1].sta2_start.X = cooCoi.ele[1].X2_start
*/
void logic2_raw_eqFunction_741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,741};
  real_array tmp138;
  real_array tmp139;
  real_array_create(&tmp138, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[506]] /* cooCoi.ele[1].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp139, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp138, tmp139);
  threadData->lastEquationSolved = 741;
}

/*
equation index: 742
type: SIMPLE_ASSIGN
cooCoi.ele[1].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[1].sta2_start.T) * (1.0 - cooCoi.ele[1].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].sta2_start.T)) * cooCoi.ele[1].sta2_start.X[1]
*/
void logic2_raw_eqFunction_742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* cooCoi.ele[1].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* cooCoi.ele[1].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[726]] /* cooCoi.ele[1].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[730]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 742;
}

/*
equation index: 743
type: SIMPLE_ASSIGN
$START.TAirSup.port_b.h_outflow = cooCoi.ele[1].h2_outflow_start
*/
void logic2_raw_eqFunction_743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,743};
  ((modelica_real *)((data->modelData->realVarsData[268] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[534]] /* cooCoi.ele[1].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[268] /* TAirSup.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[268] /* TAirSup.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 743;
}

/*
equation index: 744
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.p = cooCoi.ele[1].p1_start
*/
void logic2_raw_eqFunction_744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[1].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[558]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 744;
}

/*
equation index: 745
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.T = cooCoi.ele[1].T1_start
*/
void logic2_raw_eqFunction_745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* cooCoi.ele[1].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[490]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 745;
}

/*
equation index: 746
type: SIMPLE_ASSIGN
cooCoi.ele[1].h1_outflow_start = logic2.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[1].sta1_start)
*/
void logic2_raw_eqFunction_746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,746};
  logic2_cooCoi_ele_Medium1_ThermodynamicState tmp140;
  logic2_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp140, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[706]] /* cooCoi.ele[1].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[702]] /* cooCoi.ele[1].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* cooCoi.ele[1].h1_outflow_start PARAM */) = omc_logic2_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp140);
  threadData->lastEquationSolved = 746;
}

/*
equation index: 747
type: SIMPLE_ASSIGN
$START.TCHWEntChi.port_b.h_outflow = cooCoi.ele[1].h1_outflow_start
*/
void logic2_raw_eqFunction_747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,747};
  ((modelica_real *)((data->modelData->realVarsData[296] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[530]] /* cooCoi.ele[1].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[296] /* TCHWEntChi.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[296] /* TCHWEntChi.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 747;
}

/*
equation index: 748
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.Xi[1] = cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
void logic2_raw_eqFunction_748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[878]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 748;
}
extern void logic2_raw_eqFunction_3740(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3741(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3742(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3739(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3738(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3751(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3755(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3756(DATA *data, threadData_t *threadData);


/*
equation index: 758
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.p = cooCoi.ele[1].vol2.dynBal.p_start
*/
void logic2_raw_eqFunction_758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 758;
}
extern void logic2_raw_eqFunction_3729(DATA *data, threadData_t *threadData);


/*
equation index: 760
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mXi[1] = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 760;
}
extern void logic2_raw_eqFunction_3711(DATA *data, threadData_t *threadData);


/*
equation index: 762
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.U = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.u
*/
void logic2_raw_eqFunction_762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* cooCoi.ele[2].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 762;
}

/*
equation index: 763
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mXi[1] = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 763;
}
extern void logic2_raw_eqFunction_3694(DATA *data, threadData_t *threadData);


/*
equation index: 765
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.U = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.u
*/
void logic2_raw_eqFunction_765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* cooCoi.ele[3].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 765;
}

/*
equation index: 766
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mXi[1] = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 766;
}

/*
equation index: 767
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.m = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)));
  threadData->lastEquationSolved = 767;
}

/*
equation index: 768
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.U = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.u
*/
void logic2_raw_eqFunction_768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* cooCoi.ele[4].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 768;
}

/*
equation index: 769
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mXi[1] = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 769;
}
extern void logic2_raw_eqFunction_3768(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_771(DATA*, threadData_t*);
/*
equation index: 772
indexNonlinear: 8
type: NONLINEAR

vars: {cooCoi.m2_flow}
eqns: {771}
*/
void logic2_raw_eqFunction_772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,772};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 772 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,772};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 772 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 772;
}
extern void logic2_raw_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3772(DATA *data, threadData_t *threadData);


/*
equation index: 775
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.m2_flow, cooCoi.ele[4].vol2.dynBal.medium.Xi[1], junOut.vol.dynBal.medium.Xi[1])
*/
void logic2_raw_eqFunction_775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* junOut.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 775;
}
extern void logic2_raw_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3776(DATA *data, threadData_t *threadData);


/*
equation index: 778
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m2_flow, cooCoi.port_a2.h_outflow, junOut.vol.ports[3].h_outflow)
*/
void logic2_raw_eqFunction_778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 778;
}
extern void logic2_raw_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3780(DATA *data, threadData_t *threadData);


/*
equation index: 796
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void logic2_raw_eqFunction_796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,796};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 796 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,796};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 796 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 796;
}
extern void logic2_raw_eqFunction_3805(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3806(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3807(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3804(DATA *data, threadData_t *threadData);


/*
equation index: 801
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].vol2.dynBal.medium.Xi[1], cooCoi.ele[4].vol2.dynBal.medium.Xi[1])
*/
void logic2_raw_eqFunction_801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 801;
}

/*
equation index: 802
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].port_a2.h_outflow, cooCoi.port_a2.h_outflow)
*/
void logic2_raw_eqFunction_802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 802;
}
extern void logic2_raw_eqFunction_3817(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3815(DATA *data, threadData_t *threadData);


/*
equation index: 805
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].vol2.dynBal.medium.Xi[1], cooCoi.ele[3].vol2.dynBal.medium.Xi[1])
*/
void logic2_raw_eqFunction_805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 805;
}
extern void logic2_raw_eqFunction_3818(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3819(DATA *data, threadData_t *threadData);


/*
equation index: 808
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].port_a2.h_outflow, cooCoi.ele[3].port_a2.h_outflow)
*/
void logic2_raw_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 808;
}
extern void logic2_raw_eqFunction_3816(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3810(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3808(DATA *data, threadData_t *threadData);


/*
equation index: 812
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[1].m2_flow, cooCoi.ele[1].vol2.dynBal.medium.Xi[1], cooCoi.ele[2].vol2.dynBal.medium.Xi[1])
*/
void logic2_raw_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 812;
}
extern void logic2_raw_eqFunction_3811(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3812(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3797(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3798(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3799(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3823(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3824(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3777(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3821(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3825(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3826(DATA *data, threadData_t *threadData);


/*
equation index: 825
type: SIMPLE_ASSIGN
cooCoi.hA.hA_2 = cooCoi.hA.hA_nominal_a * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_a, cooCoi.hA.n_a, 0.1)
*/
void logic2_raw_eqFunction_825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[688]] /* cooCoi.hA.hA_2 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[995]] /* cooCoi.hA.hA_nominal_a PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* cooCoi.hA.fm_a variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooCoi.hA.n_a PARAM */), 0.1));
  threadData->lastEquationSolved = 825;
}
extern void logic2_raw_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3848(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3850(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3842(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3844(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3758(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3759(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3763(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3764(DATA *data, threadData_t *threadData);


/*
equation index: 841
type: SIMPLE_ASSIGN
fanSup.preSou.V_flow = 55.989691542288554 / Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)
*/
void logic2_raw_eqFunction_841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* fanSup.preSou.V_flow variable */) = DIVISION_SIM(55.989691542288554,omc_Modelica_Fluid_Utilities_regStep(threadData, 55.989691542288554, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1569]] /* fanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 841;
}
extern void logic2_raw_eqFunction_3855(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3859(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3860(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3861(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3862(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3863(DATA *data, threadData_t *threadData);


/*
equation index: 849
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T = cooCoi.ele[1].vol2.dynBal.T_start
*/
void logic2_raw_eqFunction_849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[874]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 849;
}

/*
equation index: 850
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol2.dynBal.medium.T
*/
void logic2_raw_eqFunction_850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 850;
}

/*
equation index: 851
type: SIMPLE_ASSIGN
TAirSup.port_b.h_outflow = 1006.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC * cooCoi.ele[1].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC) * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 851;
}
extern void logic2_raw_eqFunction_3744(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3749(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3747(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3831(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3733(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3734(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3735(DATA *data, threadData_t *threadData);


/*
equation index: 866
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[1].m2_flow, TAirSup.port_b.h_outflow, cooCoi.ele[2].port_a2.h_outflow)
*/
void logic2_raw_eqFunction_866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 866;
}
extern void logic2_raw_eqFunction_3809(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3838(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3743(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3801(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3802(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3832(DATA *data, threadData_t *threadData);


/*
equation index: 874
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.u = -84437.5 + TAirSup.port_b.h_outflow
*/
void logic2_raw_eqFunction_874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* TAirSup.port_b.h_outflow variable */);
  threadData->lastEquationSolved = 874;
}

/*
equation index: 875
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.U = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.u
*/
void logic2_raw_eqFunction_875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* cooCoi.ele[1].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 875;
}
extern void logic2_raw_eqFunction_3736(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3757(DATA *data, threadData_t *threadData);


/*
equation index: 878
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T = cooCoi.ele[1].vol1.dynBal.T_start
*/
void logic2_raw_eqFunction_878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[770]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 878;
}

/*
equation index: 879
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol1.dynBal.medium.T
*/
void logic2_raw_eqFunction_879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 879;
}

/*
equation index: 880
type: SIMPLE_ASSIGN
TCHWEntChi.port_b.h_outflow = 4184.0 * cooCoi.ele[1].vol1.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 880;
}
extern void logic2_raw_eqFunction_2934(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2942(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2943(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2953(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_2935(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_886(DATA*, threadData_t*);
void logic2_raw_eqFunction_887(DATA*, threadData_t*);
void logic2_raw_eqFunction_888(DATA*, threadData_t*);
void logic2_raw_eqFunction_889(DATA*, threadData_t*);
void logic2_raw_eqFunction_890(DATA*, threadData_t*);
void logic2_raw_eqFunction_891(DATA*, threadData_t*);
void logic2_raw_eqFunction_892(DATA*, threadData_t*);
void logic2_raw_eqFunction_893(DATA*, threadData_t*);
void logic2_raw_eqFunction_894(DATA*, threadData_t*);
void logic2_raw_eqFunction_895(DATA*, threadData_t*);
void logic2_raw_eqFunction_896(DATA*, threadData_t*);
void logic2_raw_eqFunction_897(DATA*, threadData_t*);
void logic2_raw_eqFunction_898(DATA*, threadData_t*);
void logic2_raw_eqFunction_899(DATA*, threadData_t*);
void logic2_raw_eqFunction_900(DATA*, threadData_t*);
void logic2_raw_eqFunction_901(DATA*, threadData_t*);
void logic2_raw_eqFunction_902(DATA*, threadData_t*);
void logic2_raw_eqFunction_903(DATA*, threadData_t*);
void logic2_raw_eqFunction_904(DATA*, threadData_t*);
void logic2_raw_eqFunction_905(DATA*, threadData_t*);
void logic2_raw_eqFunction_906(DATA*, threadData_t*);
void logic2_raw_eqFunction_907(DATA*, threadData_t*);
void logic2_raw_eqFunction_908(DATA*, threadData_t*);
void logic2_raw_eqFunction_911(DATA*, threadData_t*);
void logic2_raw_eqFunction_910(DATA*, threadData_t*);
void logic2_raw_eqFunction_909(DATA*, threadData_t*);
/*
equation index: 912
indexNonlinear: 9
type: NONLINEAR

vars: {val1.dp, cooCoi.m1_flow, cooCoi.rep1.y[4]}
eqns: {886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 911, 910, 909}
*/
void logic2_raw_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 912 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */);
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,912};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 912 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[2];
  threadData->lastEquationSolved = 912;
}
extern void logic2_raw_eqFunction_3251(DATA *data, threadData_t *threadData);


/*
equation index: 914
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, junCHWSup.port_3.h_outflow, junCHWSup2.vol.ports[3].h_outflow)
*/
void logic2_raw_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junCHWSup2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 914;
}
extern void logic2_raw_eqFunction_3605(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3607(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3608(DATA *data, threadData_t *threadData);


/*
equation index: 918
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, val8_2.port_a.h_outflow, val8_2.port_b.h_outflow)
*/
void logic2_raw_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWRet2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 918;
}
extern void logic2_raw_eqFunction_3589(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3591(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3592(DATA *data, threadData_t *threadData);


/*
equation index: 922
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.ports_H_flow[3] = semiLinear(-val8.m_flow, val8_2.port_b.h_outflow, junCHWRet.port_3.h_outflow)
*/
void logic2_raw_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* junCHWRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 922;
}
extern void logic2_raw_eqFunction_3247(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3248(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3243(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3588(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3242(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3550(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3241(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3246(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3314(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3604(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3313(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3542(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3274(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3275(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3276(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3277(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3280(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3278(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3279(DATA *data, threadData_t *threadData);


/*
equation index: 942
type: SIMPLE_ASSIGN
pumCHW.preSou.V_flow = chi.m2_flow / Modelica.Fluid.Utilities.regStep(chi.m2_flow, logic2.pumCHW.preSou.Medium.density(logic2.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), logic2.pumCHW.preSou.Medium.density(logic2.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)
*/
void logic2_raw_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* pumCHW.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */), omc_logic2_pumCHW_preSou_Medium_density(threadData, omc_logic2_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT83)), omc_logic2_pumCHW_preSou_Medium_density(threadData, omc_logic2_pumCHW_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2248]] /* pumCHW.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(chi.m2_flow, logic2.pumCHW.preSou.Medium.density(logic2.pumCHW.preSou.Medium.setState_phX(junCHWRet.vol.p, pumCHW.port_a.h_outflow, {})), logic2.pumCHW.preSou.Medium.density(logic2.pumCHW.preSou.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {})), pumCHW.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
TCHWChi1Out.T_b_inflow = logic2.TCHWChi1Out.Medium.temperature(logic2.TCHWChi1Out.Medium.setState_phX(chi.vol2.p, junCHWSup.port_3.h_outflow, {}))
*/
void logic2_raw_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* TCHWChi1Out.T_b_inflow variable */) = omc_logic2_TCHWChi1Out_Medium_temperature(threadData, omc_logic2_TCHWChi1Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
TCHWChi1Out.T_a_inflow = logic2.TCHWChi1Out.Medium.temperature(logic2.TCHWChi1Out.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* TCHWChi1Out.T_a_inflow variable */) = omc_logic2_TCHWChi1Out_Medium_temperature(threadData, omc_logic2_TCHWChi1Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 944;
}
extern void logic2_raw_eqFunction_3540(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3541(DATA *data, threadData_t *threadData);


/*
equation index: 947
type: SIMPLE_ASSIGN
TCHWChi1In.T_b_inflow = logic2.TCHWChi1In.Medium.temperature(logic2.TCHWChi1In.Medium.setState_phX(chi.vol2.p, val6.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* TCHWChi1In.T_b_inflow variable */) = omc_logic2_TCHWChi1In_Medium_temperature(threadData, omc_logic2_TCHWChi1In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
TCHWChi1In.T_a_inflow = logic2.TCHWChi1In.Medium.temperature(logic2.TCHWChi1In.Medium.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* TCHWChi1In.T_a_inflow variable */) = omc_logic2_TCHWChi1In_Medium_temperature(threadData, omc_logic2_TCHWChi1In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 948;
}
extern void logic2_raw_eqFunction_3291(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3292(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3293(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3294(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3300(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3303(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3533(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3295(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3298(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3296(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3297(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3299(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3302(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3301(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3663(DATA *data, threadData_t *threadData);


/*
equation index: 964
type: SIMPLE_ASSIGN
chi.TEvaEnt = logic2.chi.Medium2.temperature(logic2.chi.Medium2.setState_phX(chi.vol2.p, pumCHW.port_a.h_outflow, {1.0}))
*/
void logic2_raw_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* chi.TEvaEnt variable */) = omc_logic2_chi_Medium2_temperature(threadData, omc_logic2_chi_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* chi.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.port_a.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 964;
}
extern void logic2_raw_eqFunction_3262(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3265(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3261(DATA *data, threadData_t *threadData);


/*
equation index: 968
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.port_b1.h_outflow, cooCoi.ele[3].port_b1.h_outflow)
*/
void logic2_raw_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 968;
}
extern void logic2_raw_eqFunction_3257(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3259(DATA *data, threadData_t *threadData);


/*
equation index: 971
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[3].port_b1.h_outflow, cooCoi.ele[2].port_b1.h_outflow)
*/
void logic2_raw_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 971;
}
extern void logic2_raw_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3853(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3854(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3260(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3847(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3839(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3840(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3841(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3273(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3272(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3306(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3307(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3309(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3308(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3310(DATA *data, threadData_t *threadData);


/*
equation index: 989
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCHW.VMachine_flow) + -5.046349587077359e-5 > 2.5231747935386794e-5) then pumCHW.heaDis.QThe_flow else if noEvent(abs(pumCHW.VMachine_flow) + -5.046349587077359e-5 < -2.5231747935386794e-5) then 0.0 else 0.25 * (2.0 - 39632.60898772411 * abs(pumCHW.VMachine_flow)) * ((39632.60898772411 * abs(pumCHW.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCHW.heaDis.QThe_flow + 0.5 * pumCHW.heaDis.QThe_flow), 0.0)
*/
void logic2_raw_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  modelica_real tmp145;
  modelica_boolean tmp146;
  modelica_real tmp147;
  tmp141 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */)) + -5.046349587077359e-5,2.5231747935386794e-5);
  tmp146 = (modelica_boolean)tmp141;
  if(tmp146)
  {
    tmp147 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp142 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */)) + -5.046349587077359e-5,-2.5231747935386794e-5);
    tmp144 = (modelica_boolean)tmp142;
    if(tmp144)
    {
      tmp145 = 0.0;
    }
    else
    {
      tmp143 = (39632.60898772411) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */))) + -2.0;
      tmp145 = (0.25) * (((2.0 - ((39632.60898772411) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */))))) * ((tmp143 * tmp143) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* pumCHW.heaDis.QThe_flow variable */));
    }
    tmp147 = tmp145;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* pumCHW.PToMed.u1 variable */) = homotopy(tmp147, 0.0);
  threadData->lastEquationSolved = 989;
}
extern void logic2_raw_eqFunction_3312(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3548(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3266(DATA *data, threadData_t *threadData);


/*
equation index: 993
type: SIMPLE_ASSIGN
val1.port_b.h_outflow = (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7))
*/
void logic2_raw_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_a_inflow = logic2.TCHWLeaCoi.Medium.temperature(logic2.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, val1.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.T_a_inflow variable */) = omc_logic2_TCHWLeaCoi_Medium_temperature(threadData, omc_logic2_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 994;
}

/*
equation index: 995
type: SIMPLE_ASSIGN
valByp.port_b.h_outflow = (max(val1.m_flow, 1e-7) * val1.port_b.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void logic2_raw_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* valByp.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 995;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
TCHWEntChi.port_a.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void logic2_raw_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
TCHWEntChi.T_b_inflow = logic2.TCHWEntChi.Medium.temperature(logic2.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.T_b_inflow variable */) = omc_logic2_TCHWEntChi_Medium_temperature(threadData, omc_logic2_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 997;
}
extern void logic2_raw_eqFunction_3565(DATA *data, threadData_t *threadData);


/*
equation index: 999
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_a_inflow = logic2.cooCoi.temSen_1.Medium.temperature(logic2.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cooCoi.temSen_1.T_a_inflow variable */) = omc_logic2_cooCoi_temSen__1_Medium_temperature(threadData, omc_logic2_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 999;
}
extern void logic2_raw_eqFunction_3564(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3267(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3601(DATA *data, threadData_t *threadData);


/*
equation index: 1003
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, junCHWSup2.vol.ports[3].h_outflow, val8.port_b.h_outflow)
*/
void logic2_raw_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1003;
}
extern void logic2_raw_eqFunction_3503(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3599(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3328(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3329(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3327(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3330(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3322(DATA *data, threadData_t *threadData);


/*
equation index: 1011
type: SIMPLE_ASSIGN
pumCHW2.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, pumCHW2.VMachine_flow, pumCHW2.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, 0.025231747935386795, pumCHW2.eff.motDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  real_array tmp148;
  real_array tmp149;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp150;
  real_array tmp151;
  real_array tmp152;
  real_array tmp153;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp154;
  real_array tmp155;
  real_array_create(&tmp148, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp149, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp150, tmp148, tmp149);
  real_array_create(&tmp151, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp152, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp153, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp154, tmp152, tmp153);
  real_array_create(&tmp155, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* pumCHW2.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp150, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* pumCHW2.VMachine_flow variable */), tmp151, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp154, 0.025231747935386795, tmp155, 1.0, 0.05));
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
pumCHW2.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, pumCHW2.VMachine_flow, pumCHW2.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW2.eff.hydDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  real_array tmp156;
  real_array tmp157;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp158;
  real_array tmp159;
  real_array tmp160;
  real_array tmp161;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp162;
  real_array tmp163;
  real_array_create(&tmp156, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp157, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2325]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp158, tmp156, tmp157);
  real_array_create(&tmp159, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2301]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp160, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp161, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2325]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp162, tmp160, tmp161);
  real_array_create(&tmp163, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2301]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* pumCHW2.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp158, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* pumCHW2.VMachine_flow variable */), tmp159, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp162, 0.025231747935386795, tmp163, 1.0, 0.05));
  threadData->lastEquationSolved = 1012;
}
extern void logic2_raw_eqFunction_3326(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3323(DATA *data, threadData_t *threadData);


/*
equation index: 1015
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, val8.port_b.h_outflow, val8_2.port_a.h_outflow)
*/
void logic2_raw_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* pumCHW2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1015;
}
extern void logic2_raw_eqFunction_3582(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3583(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3359(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3495(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3367(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3369(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3366(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3370(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3490(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3491(DATA *data, threadData_t *threadData);


/*
equation index: 1026
type: SIMPLE_ASSIGN
TCWEntTow2.port_b.h_outflow = (max(val7.m_flow, 1e-7) * chi2.port_a1.h_outflow + 1e-7 * expVesChi2.port_a.h_outflow) / (1e-7 + max(val7.m_flow, 1e-7))
*/
void logic2_raw_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */)) + (1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* expVesChi2.port_a.h_outflow variable */)),1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */),1e-7),"1e-7 + max(val7.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1026;
}
extern void logic2_raw_eqFunction_3361(DATA *data, threadData_t *threadData);


/*
equation index: 1028
type: SIMPLE_ASSIGN
pumCW2.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, pumCW2.VMachine_flow, pumCW2.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.motorEfficiency, 0.012615873967693397, pumCW2.eff.motDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  real_array tmp164;
  real_array tmp165;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp166;
  real_array tmp167;
  real_array tmp168;
  real_array tmp169;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp170;
  real_array tmp171;
  real_array_create(&tmp164, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp165, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp166, tmp164, tmp165);
  real_array_create(&tmp167, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp168, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp170, tmp168, tmp169);
  real_array_create(&tmp171, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW2.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp166, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* pumCW2.VMachine_flow variable */), tmp167, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp170, 0.012615873967693397, tmp171, 1.0, 0.05));
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
pumCW2.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, pumCW2.VMachine_flow, pumCW2.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCW2.eff.per.hydraulicEfficiency, 0.012615873967693397, pumCW2.eff.hydDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  real_array tmp172;
  real_array tmp173;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp174;
  real_array tmp175;
  real_array tmp176;
  real_array tmp177;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp178;
  real_array tmp179;
  real_array_create(&tmp172, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp173, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp174, tmp172, tmp173);
  real_array_create(&tmp175, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp176, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp177, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp178, tmp176, tmp177);
  real_array_create(&tmp179, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* pumCW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* pumCW2.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp174, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* pumCW2.VMachine_flow variable */), tmp175, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp178, 0.012615873967693397, tmp179, 1.0, 0.05));
  threadData->lastEquationSolved = 1029;
}
extern void logic2_raw_eqFunction_3365(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3362(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void logic2_raw_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[481])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_493,
    logic2_raw_eqFunction_494,
    logic2_raw_eqFunction_495,
    logic2_raw_eqFunction_3125,
    logic2_raw_eqFunction_3126,
    logic2_raw_eqFunction_498,
    logic2_raw_eqFunction_499,
    logic2_raw_eqFunction_500,
    logic2_raw_eqFunction_501,
    logic2_raw_eqFunction_502,
    logic2_raw_eqFunction_503,
    logic2_raw_eqFunction_3613,
    logic2_raw_eqFunction_505,
    logic2_raw_eqFunction_506,
    logic2_raw_eqFunction_507,
    logic2_raw_eqFunction_508,
    logic2_raw_eqFunction_3152,
    logic2_raw_eqFunction_3153,
    logic2_raw_eqFunction_512,
    logic2_raw_eqFunction_513,
    logic2_raw_eqFunction_514,
    logic2_raw_eqFunction_515,
    logic2_raw_eqFunction_516,
    logic2_raw_eqFunction_517,
    logic2_raw_eqFunction_518,
    logic2_raw_eqFunction_519,
    logic2_raw_eqFunction_520,
    logic2_raw_eqFunction_521,
    logic2_raw_eqFunction_522,
    logic2_raw_eqFunction_523,
    logic2_raw_eqFunction_3534,
    logic2_raw_eqFunction_525,
    logic2_raw_eqFunction_526,
    logic2_raw_eqFunction_527,
    logic2_raw_eqFunction_528,
    logic2_raw_eqFunction_529,
    logic2_raw_eqFunction_2996,
    logic2_raw_eqFunction_531,
    logic2_raw_eqFunction_532,
    logic2_raw_eqFunction_533,
    logic2_raw_eqFunction_534,
    logic2_raw_eqFunction_2994,
    logic2_raw_eqFunction_536,
    logic2_raw_eqFunction_537,
    logic2_raw_eqFunction_538,
    logic2_raw_eqFunction_539,
    logic2_raw_eqFunction_540,
    logic2_raw_eqFunction_3128,
    logic2_raw_eqFunction_3129,
    logic2_raw_eqFunction_543,
    logic2_raw_eqFunction_544,
    logic2_raw_eqFunction_545,
    logic2_raw_eqFunction_546,
    logic2_raw_eqFunction_3149,
    logic2_raw_eqFunction_3150,
    logic2_raw_eqFunction_549,
    logic2_raw_eqFunction_3166,
    logic2_raw_eqFunction_3167,
    logic2_raw_eqFunction_3170,
    logic2_raw_eqFunction_3169,
    logic2_raw_eqFunction_3168,
    logic2_raw_eqFunction_3171,
    logic2_raw_eqFunction_3183,
    logic2_raw_eqFunction_3172,
    logic2_raw_eqFunction_558,
    logic2_raw_eqFunction_559,
    logic2_raw_eqFunction_560,
    logic2_raw_eqFunction_3185,
    logic2_raw_eqFunction_562,
    logic2_raw_eqFunction_563,
    logic2_raw_eqFunction_3182,
    logic2_raw_eqFunction_3184,
    logic2_raw_eqFunction_3186,
    logic2_raw_eqFunction_567,
    logic2_raw_eqFunction_3188,
    logic2_raw_eqFunction_569,
    logic2_raw_eqFunction_570,
    logic2_raw_eqFunction_571,
    logic2_raw_eqFunction_572,
    logic2_raw_eqFunction_3175,
    logic2_raw_eqFunction_574,
    logic2_raw_eqFunction_3193,
    logic2_raw_eqFunction_3194,
    logic2_raw_eqFunction_577,
    logic2_raw_eqFunction_2989,
    logic2_raw_eqFunction_3190,
    logic2_raw_eqFunction_2984,
    logic2_raw_eqFunction_581,
    logic2_raw_eqFunction_582,
    logic2_raw_eqFunction_583,
    logic2_raw_eqFunction_584,
    logic2_raw_eqFunction_586,
    logic2_raw_eqFunction_587,
    logic2_raw_eqFunction_3195,
    logic2_raw_eqFunction_589,
    logic2_raw_eqFunction_590,
    logic2_raw_eqFunction_591,
    logic2_raw_eqFunction_592,
    logic2_raw_eqFunction_593,
    logic2_raw_eqFunction_594,
    logic2_raw_eqFunction_595,
    logic2_raw_eqFunction_596,
    logic2_raw_eqFunction_611,
    logic2_raw_eqFunction_3658,
    logic2_raw_eqFunction_3659,
    logic2_raw_eqFunction_614,
    logic2_raw_eqFunction_615,
    logic2_raw_eqFunction_3667,
    logic2_raw_eqFunction_3668,
    logic2_raw_eqFunction_618,
    logic2_raw_eqFunction_3662,
    logic2_raw_eqFunction_620,
    logic2_raw_eqFunction_3672,
    logic2_raw_eqFunction_3673,
    logic2_raw_eqFunction_3674,
    logic2_raw_eqFunction_624,
    logic2_raw_eqFunction_625,
    logic2_raw_eqFunction_2982,
    logic2_raw_eqFunction_627,
    logic2_raw_eqFunction_628,
    logic2_raw_eqFunction_629,
    logic2_raw_eqFunction_630,
    logic2_raw_eqFunction_3207,
    logic2_raw_eqFunction_632,
    logic2_raw_eqFunction_633,
    logic2_raw_eqFunction_634,
    logic2_raw_eqFunction_635,
    logic2_raw_eqFunction_3209,
    logic2_raw_eqFunction_3532,
    logic2_raw_eqFunction_2979,
    logic2_raw_eqFunction_639,
    logic2_raw_eqFunction_3546,
    logic2_raw_eqFunction_3547,
    logic2_raw_eqFunction_642,
    logic2_raw_eqFunction_643,
    logic2_raw_eqFunction_644,
    logic2_raw_eqFunction_645,
    logic2_raw_eqFunction_646,
    logic2_raw_eqFunction_647,
    logic2_raw_eqFunction_648,
    logic2_raw_eqFunction_649,
    logic2_raw_eqFunction_650,
    logic2_raw_eqFunction_651,
    logic2_raw_eqFunction_2967,
    logic2_raw_eqFunction_2968,
    logic2_raw_eqFunction_2969,
    logic2_raw_eqFunction_2970,
    logic2_raw_eqFunction_656,
    logic2_raw_eqFunction_657,
    logic2_raw_eqFunction_658,
    logic2_raw_eqFunction_2973,
    logic2_raw_eqFunction_2974,
    logic2_raw_eqFunction_661,
    logic2_raw_eqFunction_2977,
    logic2_raw_eqFunction_663,
    logic2_raw_eqFunction_664,
    logic2_raw_eqFunction_665,
    logic2_raw_eqFunction_2958,
    logic2_raw_eqFunction_2959,
    logic2_raw_eqFunction_668,
    logic2_raw_eqFunction_2965,
    logic2_raw_eqFunction_670,
    logic2_raw_eqFunction_671,
    logic2_raw_eqFunction_672,
    logic2_raw_eqFunction_673,
    logic2_raw_eqFunction_674,
    logic2_raw_eqFunction_675,
    logic2_raw_eqFunction_676,
    logic2_raw_eqFunction_677,
    logic2_raw_eqFunction_678,
    logic2_raw_eqFunction_3698,
    logic2_raw_eqFunction_3704,
    logic2_raw_eqFunction_3707,
    logic2_raw_eqFunction_3708,
    logic2_raw_eqFunction_3709,
    logic2_raw_eqFunction_684,
    logic2_raw_eqFunction_685,
    logic2_raw_eqFunction_686,
    logic2_raw_eqFunction_3700,
    logic2_raw_eqFunction_3702,
    logic2_raw_eqFunction_3703,
    logic2_raw_eqFunction_3701,
    logic2_raw_eqFunction_3699,
    logic2_raw_eqFunction_692,
    logic2_raw_eqFunction_3710,
    logic2_raw_eqFunction_694,
    logic2_raw_eqFunction_695,
    logic2_raw_eqFunction_696,
    logic2_raw_eqFunction_2949,
    logic2_raw_eqFunction_2960,
    logic2_raw_eqFunction_2961,
    logic2_raw_eqFunction_2950,
    logic2_raw_eqFunction_2948,
    logic2_raw_eqFunction_702,
    logic2_raw_eqFunction_2956,
    logic2_raw_eqFunction_704,
    logic2_raw_eqFunction_705,
    logic2_raw_eqFunction_706,
    logic2_raw_eqFunction_707,
    logic2_raw_eqFunction_708,
    logic2_raw_eqFunction_709,
    logic2_raw_eqFunction_710,
    logic2_raw_eqFunction_711,
    logic2_raw_eqFunction_712,
    logic2_raw_eqFunction_3715,
    logic2_raw_eqFunction_3722,
    logic2_raw_eqFunction_3725,
    logic2_raw_eqFunction_3726,
    logic2_raw_eqFunction_3727,
    logic2_raw_eqFunction_718,
    logic2_raw_eqFunction_719,
    logic2_raw_eqFunction_720,
    logic2_raw_eqFunction_3717,
    logic2_raw_eqFunction_3719,
    logic2_raw_eqFunction_3720,
    logic2_raw_eqFunction_3721,
    logic2_raw_eqFunction_3718,
    logic2_raw_eqFunction_3716,
    logic2_raw_eqFunction_727,
    logic2_raw_eqFunction_3728,
    logic2_raw_eqFunction_729,
    logic2_raw_eqFunction_730,
    logic2_raw_eqFunction_731,
    logic2_raw_eqFunction_2940,
    logic2_raw_eqFunction_2951,
    logic2_raw_eqFunction_2952,
    logic2_raw_eqFunction_2962,
    logic2_raw_eqFunction_2941,
    logic2_raw_eqFunction_2939,
    logic2_raw_eqFunction_738,
    logic2_raw_eqFunction_2946,
    logic2_raw_eqFunction_740,
    logic2_raw_eqFunction_741,
    logic2_raw_eqFunction_742,
    logic2_raw_eqFunction_743,
    logic2_raw_eqFunction_744,
    logic2_raw_eqFunction_745,
    logic2_raw_eqFunction_746,
    logic2_raw_eqFunction_747,
    logic2_raw_eqFunction_748,
    logic2_raw_eqFunction_3740,
    logic2_raw_eqFunction_3741,
    logic2_raw_eqFunction_3742,
    logic2_raw_eqFunction_3739,
    logic2_raw_eqFunction_3738,
    logic2_raw_eqFunction_3751,
    logic2_raw_eqFunction_3754,
    logic2_raw_eqFunction_3755,
    logic2_raw_eqFunction_3756,
    logic2_raw_eqFunction_758,
    logic2_raw_eqFunction_3729,
    logic2_raw_eqFunction_760,
    logic2_raw_eqFunction_3711,
    logic2_raw_eqFunction_762,
    logic2_raw_eqFunction_763,
    logic2_raw_eqFunction_3694,
    logic2_raw_eqFunction_765,
    logic2_raw_eqFunction_766,
    logic2_raw_eqFunction_767,
    logic2_raw_eqFunction_768,
    logic2_raw_eqFunction_769,
    logic2_raw_eqFunction_3768,
    logic2_raw_eqFunction_772,
    logic2_raw_eqFunction_3771,
    logic2_raw_eqFunction_3772,
    logic2_raw_eqFunction_775,
    logic2_raw_eqFunction_3775,
    logic2_raw_eqFunction_3776,
    logic2_raw_eqFunction_778,
    logic2_raw_eqFunction_3779,
    logic2_raw_eqFunction_3780,
    logic2_raw_eqFunction_796,
    logic2_raw_eqFunction_3805,
    logic2_raw_eqFunction_3806,
    logic2_raw_eqFunction_3807,
    logic2_raw_eqFunction_3804,
    logic2_raw_eqFunction_801,
    logic2_raw_eqFunction_802,
    logic2_raw_eqFunction_3817,
    logic2_raw_eqFunction_3815,
    logic2_raw_eqFunction_805,
    logic2_raw_eqFunction_3818,
    logic2_raw_eqFunction_3819,
    logic2_raw_eqFunction_808,
    logic2_raw_eqFunction_3816,
    logic2_raw_eqFunction_3810,
    logic2_raw_eqFunction_3808,
    logic2_raw_eqFunction_812,
    logic2_raw_eqFunction_3811,
    logic2_raw_eqFunction_3812,
    logic2_raw_eqFunction_3797,
    logic2_raw_eqFunction_3798,
    logic2_raw_eqFunction_3799,
    logic2_raw_eqFunction_3773,
    logic2_raw_eqFunction_3823,
    logic2_raw_eqFunction_3824,
    logic2_raw_eqFunction_3777,
    logic2_raw_eqFunction_3821,
    logic2_raw_eqFunction_3825,
    logic2_raw_eqFunction_3826,
    logic2_raw_eqFunction_825,
    logic2_raw_eqFunction_3829,
    logic2_raw_eqFunction_3848,
    logic2_raw_eqFunction_3849,
    logic2_raw_eqFunction_3850,
    logic2_raw_eqFunction_3842,
    logic2_raw_eqFunction_3843,
    logic2_raw_eqFunction_3844,
    logic2_raw_eqFunction_3836,
    logic2_raw_eqFunction_3758,
    logic2_raw_eqFunction_3759,
    logic2_raw_eqFunction_3760,
    logic2_raw_eqFunction_3761,
    logic2_raw_eqFunction_3762,
    logic2_raw_eqFunction_3763,
    logic2_raw_eqFunction_3764,
    logic2_raw_eqFunction_841,
    logic2_raw_eqFunction_3855,
    logic2_raw_eqFunction_3858,
    logic2_raw_eqFunction_3859,
    logic2_raw_eqFunction_3860,
    logic2_raw_eqFunction_3861,
    logic2_raw_eqFunction_3862,
    logic2_raw_eqFunction_3863,
    logic2_raw_eqFunction_849,
    logic2_raw_eqFunction_850,
    logic2_raw_eqFunction_851,
    logic2_raw_eqFunction_3744,
    logic2_raw_eqFunction_3749,
    logic2_raw_eqFunction_3750,
    logic2_raw_eqFunction_3746,
    logic2_raw_eqFunction_3747,
    logic2_raw_eqFunction_3748,
    logic2_raw_eqFunction_3837,
    logic2_raw_eqFunction_3745,
    logic2_raw_eqFunction_3830,
    logic2_raw_eqFunction_3831,
    logic2_raw_eqFunction_3851,
    logic2_raw_eqFunction_3733,
    logic2_raw_eqFunction_3734,
    logic2_raw_eqFunction_3735,
    logic2_raw_eqFunction_866,
    logic2_raw_eqFunction_3809,
    logic2_raw_eqFunction_3838,
    logic2_raw_eqFunction_3743,
    logic2_raw_eqFunction_3732,
    logic2_raw_eqFunction_3801,
    logic2_raw_eqFunction_3802,
    logic2_raw_eqFunction_3832,
    logic2_raw_eqFunction_874,
    logic2_raw_eqFunction_875,
    logic2_raw_eqFunction_3736,
    logic2_raw_eqFunction_3757,
    logic2_raw_eqFunction_878,
    logic2_raw_eqFunction_879,
    logic2_raw_eqFunction_880,
    logic2_raw_eqFunction_2934,
    logic2_raw_eqFunction_2942,
    logic2_raw_eqFunction_2943,
    logic2_raw_eqFunction_2953,
    logic2_raw_eqFunction_2935,
    logic2_raw_eqFunction_912,
    logic2_raw_eqFunction_3251,
    logic2_raw_eqFunction_914,
    logic2_raw_eqFunction_3605,
    logic2_raw_eqFunction_3607,
    logic2_raw_eqFunction_3608,
    logic2_raw_eqFunction_918,
    logic2_raw_eqFunction_3589,
    logic2_raw_eqFunction_3591,
    logic2_raw_eqFunction_3592,
    logic2_raw_eqFunction_922,
    logic2_raw_eqFunction_3247,
    logic2_raw_eqFunction_3248,
    logic2_raw_eqFunction_3243,
    logic2_raw_eqFunction_3588,
    logic2_raw_eqFunction_3242,
    logic2_raw_eqFunction_3550,
    logic2_raw_eqFunction_3241,
    logic2_raw_eqFunction_3246,
    logic2_raw_eqFunction_3314,
    logic2_raw_eqFunction_3604,
    logic2_raw_eqFunction_3313,
    logic2_raw_eqFunction_3542,
    logic2_raw_eqFunction_3274,
    logic2_raw_eqFunction_3275,
    logic2_raw_eqFunction_3276,
    logic2_raw_eqFunction_3277,
    logic2_raw_eqFunction_3280,
    logic2_raw_eqFunction_3278,
    logic2_raw_eqFunction_3279,
    logic2_raw_eqFunction_942,
    logic2_raw_eqFunction_943,
    logic2_raw_eqFunction_944,
    logic2_raw_eqFunction_3540,
    logic2_raw_eqFunction_3541,
    logic2_raw_eqFunction_947,
    logic2_raw_eqFunction_948,
    logic2_raw_eqFunction_3291,
    logic2_raw_eqFunction_3292,
    logic2_raw_eqFunction_3293,
    logic2_raw_eqFunction_3294,
    logic2_raw_eqFunction_3300,
    logic2_raw_eqFunction_3303,
    logic2_raw_eqFunction_3533,
    logic2_raw_eqFunction_3295,
    logic2_raw_eqFunction_3298,
    logic2_raw_eqFunction_3296,
    logic2_raw_eqFunction_3297,
    logic2_raw_eqFunction_3299,
    logic2_raw_eqFunction_3302,
    logic2_raw_eqFunction_3301,
    logic2_raw_eqFunction_3663,
    logic2_raw_eqFunction_964,
    logic2_raw_eqFunction_3262,
    logic2_raw_eqFunction_3265,
    logic2_raw_eqFunction_3261,
    logic2_raw_eqFunction_968,
    logic2_raw_eqFunction_3257,
    logic2_raw_eqFunction_3259,
    logic2_raw_eqFunction_971,
    logic2_raw_eqFunction_3852,
    logic2_raw_eqFunction_3853,
    logic2_raw_eqFunction_3854,
    logic2_raw_eqFunction_3260,
    logic2_raw_eqFunction_3845,
    logic2_raw_eqFunction_3846,
    logic2_raw_eqFunction_3847,
    logic2_raw_eqFunction_3839,
    logic2_raw_eqFunction_3840,
    logic2_raw_eqFunction_3841,
    logic2_raw_eqFunction_3273,
    logic2_raw_eqFunction_3272,
    logic2_raw_eqFunction_3306,
    logic2_raw_eqFunction_3307,
    logic2_raw_eqFunction_3309,
    logic2_raw_eqFunction_3308,
    logic2_raw_eqFunction_3310,
    logic2_raw_eqFunction_989,
    logic2_raw_eqFunction_3312,
    logic2_raw_eqFunction_3548,
    logic2_raw_eqFunction_3266,
    logic2_raw_eqFunction_993,
    logic2_raw_eqFunction_994,
    logic2_raw_eqFunction_995,
    logic2_raw_eqFunction_996,
    logic2_raw_eqFunction_997,
    logic2_raw_eqFunction_3565,
    logic2_raw_eqFunction_999,
    logic2_raw_eqFunction_3564,
    logic2_raw_eqFunction_3267,
    logic2_raw_eqFunction_3601,
    logic2_raw_eqFunction_1003,
    logic2_raw_eqFunction_3503,
    logic2_raw_eqFunction_3599,
    logic2_raw_eqFunction_3328,
    logic2_raw_eqFunction_3329,
    logic2_raw_eqFunction_3327,
    logic2_raw_eqFunction_3330,
    logic2_raw_eqFunction_3322,
    logic2_raw_eqFunction_1011,
    logic2_raw_eqFunction_1012,
    logic2_raw_eqFunction_3326,
    logic2_raw_eqFunction_3323,
    logic2_raw_eqFunction_1015,
    logic2_raw_eqFunction_3582,
    logic2_raw_eqFunction_3583,
    logic2_raw_eqFunction_3359,
    logic2_raw_eqFunction_3495,
    logic2_raw_eqFunction_3367,
    logic2_raw_eqFunction_3369,
    logic2_raw_eqFunction_3366,
    logic2_raw_eqFunction_3370,
    logic2_raw_eqFunction_3490,
    logic2_raw_eqFunction_3491,
    logic2_raw_eqFunction_1026,
    logic2_raw_eqFunction_3361,
    logic2_raw_eqFunction_1028,
    logic2_raw_eqFunction_1029,
    logic2_raw_eqFunction_3365,
    logic2_raw_eqFunction_3362
  };
  
  for (int id = 0; id < 481; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif