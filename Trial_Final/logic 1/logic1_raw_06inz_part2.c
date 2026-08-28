#include "logic1_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1051
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.port_b1.h_outflow, cooCoi.ele[3].port_b1.h_outflow)
*/
void logic1_raw_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* cooCoi.ele[3].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1051;
}
extern void logic1_raw_eqFunction_3319(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3321(DATA *data, threadData_t *threadData);


/*
equation index: 1054
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[3].port_b1.h_outflow, cooCoi.ele[2].port_b1.h_outflow)
*/
void logic1_raw_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* cooCoi.ele[3].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1054;
}
extern void logic1_raw_eqFunction_3864(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3865(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3866(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3322(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3857(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3859(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3853(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3262(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3261(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3265(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3266(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3268(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3267(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3269(DATA *data, threadData_t *threadData);


/*
equation index: 1072
type: SIMPLE_ASSIGN
pumCHW.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCHW.VMachine_flow) + -5.046349587077359e-5 > 2.5231747935386794e-5) then pumCHW.heaDis.QThe_flow else if noEvent(abs(pumCHW.VMachine_flow) + -5.046349587077359e-5 < -2.5231747935386794e-5) then 0.0 else 0.25 * (2.0 - 39632.60898772411 * abs(pumCHW.VMachine_flow)) * ((39632.60898772411 * abs(pumCHW.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCHW.heaDis.QThe_flow + 0.5 * pumCHW.heaDis.QThe_flow), 0.0)
*/
void logic1_raw_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  modelica_real tmp172;
  modelica_boolean tmp173;
  modelica_real tmp174;
  modelica_boolean tmp175;
  modelica_real tmp176;
  tmp170 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */)) + -5.046349587077359e-5,2.5231747935386794e-5);
  tmp175 = (modelica_boolean)tmp170;
  if(tmp175)
  {
    tmp176 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* pumCHW.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp171 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */)) + -5.046349587077359e-5,-2.5231747935386794e-5);
    tmp173 = (modelica_boolean)tmp171;
    if(tmp173)
    {
      tmp174 = 0.0;
    }
    else
    {
      tmp172 = (39632.60898772411) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */))) + -2.0;
      tmp174 = (0.25) * (((2.0 - ((39632.60898772411) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* pumCHW.VMachine_flow variable */))))) * ((tmp172 * tmp172) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* pumCHW.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* pumCHW.heaDis.QThe_flow variable */));
    }
    tmp176 = tmp174;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* pumCHW.PToMed.u1 variable */) = homotopy(tmp176, 0.0);
  threadData->lastEquationSolved = 1072;
}
extern void logic1_raw_eqFunction_3271(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3560(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3264(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3303(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3311(DATA *data, threadData_t *threadData);


/*
equation index: 1078
type: SIMPLE_ASSIGN
val1.port_b.h_outflow = (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7))
*/
void logic1_raw_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_a_inflow = logic1.TCHWLeaCoi.Medium.temperature(logic1.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, val1.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.T_a_inflow variable */) = omc_logic1_TCHWLeaCoi_Medium_temperature(threadData, omc_logic1_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val1.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
valByp.port_b.h_outflow = (max(val1.m_flow, 1e-7) * val1.port_b.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val1.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(val1.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
TCHWEntChi.port_a.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
TCHWEntChi.T_b_inflow = logic1.TCHWEntChi.Medium.temperature(logic1.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.T_b_inflow variable */) = omc_logic1_TCHWEntChi_Medium_temperature(threadData, omc_logic1_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1082;
}
extern void logic1_raw_eqFunction_3577(DATA *data, threadData_t *threadData);


/*
equation index: 1084
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_a_inflow = logic1.cooCoi.temSen_1.Medium.temperature(logic1.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* cooCoi.temSen_1.T_a_inflow variable */) = omc_logic1_cooCoi_temSen__1_Medium_temperature(threadData, omc_logic1_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWEntChi.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1084;
}
extern void logic1_raw_eqFunction_3576(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3312(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3613(DATA *data, threadData_t *threadData);


/*
equation index: 1088
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, junCHWSup2.vol.ports[3].h_outflow, val8.port_b.h_outflow)
*/
void logic1_raw_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* chi2.vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* val8.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1088;
}
extern void logic1_raw_eqFunction_3515(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3611(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3338(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3339(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3337(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3340(DATA *data, threadData_t *threadData);


void logic1_raw_eqFunction_1095(DATA*, threadData_t*);
/*
equation index: 1096
indexNonlinear: 12
type: NONLINEAR

vars: {val8.dp}
eqns: {1095}
*/
void logic1_raw_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1096 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */);
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1096};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1096 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */) = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  threadData->lastEquationSolved = 1096;
}
extern void logic1_raw_eqFunction_3347(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3348(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3516(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3517(DATA *data, threadData_t *threadData);


/*
equation index: 1101
type: SIMPLE_ASSIGN
pumCHW2.preSou.V_flow = val8.m_flow / Modelica.Fluid.Utilities.regStep(val8.m_flow, logic1.pumCHW2.preSou.Medium.density(logic1.pumCHW2.preSou.Medium.setState_phX(pumCHW2.port_a.p, val8_2.port_a.h_outflow, {})), logic1.pumCHW2.preSou.Medium.density(logic1.pumCHW2.preSou.Medium.setState_phX(chi2.vol2.p, val8.port_b.h_outflow, {})), pumCHW2.preSou.m_flow_small)
*/
void logic1_raw_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */), omc_logic1_pumCHW2_preSou_Medium_density(threadData, omc_logic1_pumCHW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* pumCHW2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* val8_2.port_a.h_outflow variable */), _OMC_LIT83)), omc_logic1_pumCHW2_preSou_Medium_density(threadData, omc_logic1_pumCHW2_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* val8.port_b.h_outflow variable */), _OMC_LIT83)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2378]] /* pumCHW2.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(val8.m_flow, logic1.pumCHW2.preSou.Medium.density(logic1.pumCHW2.preSou.Medium.setState_phX(pumCHW2.port_a.p, val8_2.port_a.h_outflow, {})), logic1.pumCHW2.preSou.Medium.density(logic1.pumCHW2.preSou.Medium.setState_phX(chi2.vol2.p, val8.port_b.h_outflow, {})), pumCHW2.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1101;
}
extern void logic1_raw_eqFunction_3349(DATA *data, threadData_t *threadData);


/*
equation index: 1103
type: SIMPLE_ASSIGN
chi2.TEvaEnt = logic1.chi2.Medium2.temperature(logic1.chi2.Medium2.setState_phX(chi2.vol2.p, val8_2.port_a.h_outflow, {1.0}))
*/
void logic1_raw_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* chi2.TEvaEnt variable */) = omc_logic1_chi2_Medium2_temperature(threadData, omc_logic1_chi2_Medium2_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* val8_2.port_a.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
TCHWChi2Out.T_b_inflow = logic1.TCHWChi2Out.Medium.temperature(logic1.TCHWChi2Out.Medium.setState_phX(chi2.vol2.p, junCHWSup2.vol.ports[3].h_outflow, {}))
*/
void logic1_raw_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* TCHWChi2Out.T_b_inflow variable */) = omc_logic1_TCHWChi2Out_Medium_temperature(threadData, omc_logic1_TCHWChi2Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
TCHWChi2Out.T_a_inflow = logic1.TCHWChi2Out.Medium.temperature(logic1.TCHWChi2Out.Medium.setState_phX(chi2.vol2.p, val8.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* TCHWChi2Out.T_a_inflow variable */) = omc_logic1_TCHWChi2Out_Medium_temperature(threadData, omc_logic1_TCHWChi2Out_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* val8.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1105;
}
extern void logic1_raw_eqFunction_3623(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3624(DATA *data, threadData_t *threadData);


/*
equation index: 1108
type: SIMPLE_ASSIGN
TCHWChi2In.T_b_inflow = logic1.TCHWChi2In.Medium.temperature(logic1.TCHWChi2In.Medium.setState_phX(chi2.vol2.p, val8.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* TCHWChi2In.T_b_inflow variable */) = omc_logic1_TCHWChi2In_Medium_temperature(threadData, omc_logic1_TCHWChi2In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* val8.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
TCHWChi2In.T_a_inflow = logic1.TCHWChi2In.Medium.temperature(logic1.TCHWChi2In.Medium.setState_phX(chi2.vol2.p, val8_2.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* TCHWChi2In.T_a_inflow variable */) = omc_logic1_TCHWChi2In_Medium_temperature(threadData, omc_logic1_TCHWChi2In_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* chi2.vol2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* val8_2.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1109;
}
extern void logic1_raw_eqFunction_3538(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3539(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3360(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3359(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3367(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3332(DATA *data, threadData_t *threadData);


/*
equation index: 1116
type: SIMPLE_ASSIGN
pumCHW2.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, pumCHW2.VMachine_flow, pumCHW2.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.motorEfficiency, 0.025231747935386795, pumCHW2.eff.motDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  real_array tmp177;
  real_array tmp178;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp179;
  real_array tmp180;
  real_array tmp181;
  real_array tmp182;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp183;
  real_array tmp184;
  real_array_create(&tmp177, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2328]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp178, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp179, tmp177, tmp178);
  real_array_create(&tmp180, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp181, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2328]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp182, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp183, tmp181, tmp182);
  real_array_create(&tmp184, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* pumCHW2.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* pumCHW2.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp179, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* pumCHW2.VMachine_flow variable */), tmp180, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp183, 0.025231747935386795, tmp184, 1.0, 0.05));
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
pumCHW2.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, pumCHW2.VMachine_flow, pumCHW2.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(pumCHW2.eff.per.hydraulicEfficiency, 0.025231747935386795, pumCHW2.eff.hydDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  real_array tmp185;
  real_array tmp186;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp187;
  real_array tmp188;
  real_array tmp189;
  real_array tmp190;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp191;
  real_array tmp192;
  real_array_create(&tmp185, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp186, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp187, tmp185, tmp186);
  real_array_create(&tmp188, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp189, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp190, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp191, tmp189, tmp190);
  real_array_create(&tmp192, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* pumCHW2.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp187, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* pumCHW2.VMachine_flow variable */), tmp188, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp191, 0.025231747935386795, tmp192, 1.0, 0.05));
  threadData->lastEquationSolved = 1117;
}
extern void logic1_raw_eqFunction_3336(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3361(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3363(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3362(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3364(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3333(DATA *data, threadData_t *threadData);


/*
equation index: 1124
type: SIMPLE_ASSIGN
pumCHW2.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pumCHW2.VMachine_flow) + -5.046349587077359e-5 > 2.5231747935386794e-5) then pumCHW2.heaDis.QThe_flow else if noEvent(abs(pumCHW2.VMachine_flow) + -5.046349587077359e-5 < -2.5231747935386794e-5) then 0.0 else 0.25 * (2.0 - 39632.60898772411 * abs(pumCHW2.VMachine_flow)) * ((39632.60898772411 * abs(pumCHW2.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pumCHW2.heaDis.QThe_flow + 0.5 * pumCHW2.heaDis.QThe_flow), 0.0)
*/
void logic1_raw_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  modelica_real tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  tmp193 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* pumCHW2.VMachine_flow variable */)) + -5.046349587077359e-5,2.5231747935386794e-5);
  tmp198 = (modelica_boolean)tmp193;
  if(tmp198)
  {
    tmp199 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp194 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* pumCHW2.VMachine_flow variable */)) + -5.046349587077359e-5,-2.5231747935386794e-5);
    tmp196 = (modelica_boolean)tmp194;
    if(tmp196)
    {
      tmp197 = 0.0;
    }
    else
    {
      tmp195 = (39632.60898772411) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* pumCHW2.VMachine_flow variable */))) + -2.0;
      tmp197 = (0.25) * (((2.0 - ((39632.60898772411) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* pumCHW2.VMachine_flow variable */))))) * ((tmp195 * tmp195) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* pumCHW2.heaDis.QThe_flow variable */));
    }
    tmp199 = tmp197;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* pumCHW2.PToMed.u1 variable */) = homotopy(tmp199, 0.0);
  threadData->lastEquationSolved = 1124;
}
extern void logic1_raw_eqFunction_3366(DATA *data, threadData_t *threadData);


/*
equation index: 1126
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.ports_H_flow[2] = semiLinear(-val8.m_flow, val8.port_b.h_outflow, val8_2.port_a.h_outflow)
*/
void logic1_raw_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* pumCHW2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* val8.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* val8_2.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1126;
}
extern void logic1_raw_eqFunction_3594(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3595(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3596(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3471(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3526(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3518(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3519(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3524(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3525(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3612(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3520(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3523(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3521(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3522(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3527(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3529(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3528(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3643(DATA *data, threadData_t *threadData);


/*
equation index: 1145
type: SIMPLE_ASSIGN
chwPump2PID.unmetLoad = max(0.0, roomDemandSignal.y - max(0.0, cooCoi.Q1_flow))
*/
void logic1_raw_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* chwPump2PID.unmetLoad variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* roomDemandSignal.y variable */) - fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */)));
  threadData->lastEquationSolved = 1145;
}
extern void logic1_raw_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3847(DATA *data, threadData_t *threadData);


/*
equation index: 1149
type: SIMPLE_ASSIGN
junCHWSup.res2.port_b.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-cooCoi.m1_flow, 1e-7) * TCHWEntChi.port_b.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-cooCoi.m1_flow, 1e-7))
*/
void logic1_raw_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.res2.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1149;
}
extern void logic1_raw_eqFunction_3589(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3614(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3615(DATA *data, threadData_t *threadData);


/*
equation index: 1153
type: SIMPLE_ASSIGN
valByp.port_a.h_outflow = (max(-cooCoi.m1_flow, 1e-7) * TCHWEntChi.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(-cooCoi.m1_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* valByp.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(-cooCoi.m1_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
junCHWRet.res1.port_b.h_outflow = (max(-valByp.m_flow, 1e-7) * valByp.port_a.h_outflow + max(val1.m_flow, 1e-7) * val1.port_b.h_outflow) / (max(-valByp.m_flow, 1e-7) + max(val1.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* junCHWRet.res1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* valByp.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val1.port_b.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */),1e-7),"max(-valByp.m_flow, 1e-7) + max(val1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1154;
}
extern void logic1_raw_eqFunction_3563(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3598(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3599(DATA *data, threadData_t *threadData);


/*
equation index: 1158
type: SIMPLE_ASSIGN
TCHWLeaCoi.port_a.h_outflow = (max(-valByp.m_flow, 1e-7) * valByp.port_a.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(-valByp.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* valByp.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(-valByp.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_b_inflow = logic1.TCHWLeaCoi.Medium.temperature(logic1.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, TCHWLeaCoi.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* TCHWLeaCoi.T_b_inflow variable */) = omc_logic1_TCHWLeaCoi_Medium_temperature(threadData, omc_logic1_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1159;
}
extern void logic1_raw_eqFunction_3572(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3573(DATA *data, threadData_t *threadData);


/*
equation index: 1162
type: SIMPLE_ASSIGN
$DER.expVesCHW.H = smooth(0, expVesCHW.port_a.m_flow * (if expVesCHW.port_a.m_flow > 0.0 then (max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-val1.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)) else expVesCHW.port_a.h_outflow))
*/
void logic1_raw_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1162};
  modelica_boolean tmp200;
  tmp200 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(expVesCHW.H) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)) * ((tmp200?DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),1e-7),"max(-val1.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */)));
  threadData->lastEquationSolved = 1162;
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)), cooCoi.port_b1.h_outflow)
*/
void logic1_raw_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[694]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1163;
}
extern void logic1_raw_eqFunction_3567(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3568(DATA *data, threadData_t *threadData);


/*
equation index: 1166
type: SIMPLE_ASSIGN
cooCoi.ele[4].state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7))
*/
void logic1_raw_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[4].state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCHWLeaCoi.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1166;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
TCHWEntChi.T_a_inflow = logic1.TCHWEntChi.Medium.temperature(logic1.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* TCHWEntChi.T_a_inflow variable */) = omc_logic1_TCHWEntChi_Medium_temperature(threadData, omc_logic1_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1167;
}
extern void logic1_raw_eqFunction_3583(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3584(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3315(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3317(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3318(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_2941(DATA *data, threadData_t *threadData);


/*
equation index: 1174
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[2].port_b1.h_outflow, TCHWEntChi.port_b.h_outflow)
*/
void logic1_raw_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* cooCoi.ele[2].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1174;
}
extern void logic1_raw_eqFunction_3578(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3579(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3580(DATA *data, threadData_t *threadData);


/*
equation index: 1178
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.U = cooCoi.ele[1].vol1.dynBal.m * TCHWEntChi.port_b.h_outflow
*/
void logic1_raw_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[1].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* cooCoi.ele[1].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_b_inflow = logic1.cooCoi.temSen_1.Medium.temperature(logic1.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_b.h_outflow, {}))
*/
void logic1_raw_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* cooCoi.temSen_1.T_b_inflow variable */) = omc_logic1_cooCoi_temSen__1_Medium_temperature(threadData, omc_logic1_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* TCHWEntChi.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 1179;
}
extern void logic1_raw_eqFunction_3587(DATA *data, threadData_t *threadData);


/*
equation index: 1181
type: SIMPLE_ASSIGN
fanSup.eff.hydDer[1] = 0.0
*/
void logic1_raw_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1500]] /* fanSup.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
fanSup.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, fanSup.VMachine_flow, fanSup.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, 46.65807628524046, fanSup.eff.hydDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  real_array tmp201;
  real_array tmp202;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp203;
  real_array tmp204;
  real_array tmp205;
  real_array tmp206;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp207;
  real_array tmp208;
  real_array_create(&tmp201, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp202, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp203, tmp201, tmp202);
  real_array_create(&tmp204, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1500]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp205, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1523]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp206, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1524]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp207, tmp205, tmp206);
  real_array_create(&tmp208, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1500]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* fanSup.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp203, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* fanSup.VMachine_flow variable */), tmp204, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp207, 46.65807628524046, tmp208, 1.0, 0.05));
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
fanSup.eff.motDer[1] = 0.0
*/
void logic1_raw_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* fanSup.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
fanSup.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, fanSup.VMachine_flow, fanSup.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, 46.65807628524046, fanSup.eff.motDer, 1.0, 0.05))
*/
void logic1_raw_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  real_array tmp209;
  real_array tmp210;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp211;
  real_array tmp212;
  real_array tmp213;
  real_array tmp214;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp215;
  real_array tmp216;
  real_array_create(&tmp209, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp210, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1526]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp211, tmp209, tmp210);
  real_array_create(&tmp212, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp213, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1525]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp214, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1526]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp215, tmp213, tmp214);
  real_array_create(&tmp216, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1502]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* fanSup.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp211, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* fanSup.VMachine_flow variable */), tmp212, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp215, 46.65807628524046, tmp216, 1.0, 0.05));
  threadData->lastEquationSolved = 1184;
}
extern void logic1_raw_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3876(DATA *data, threadData_t *threadData);


/*
equation index: 1187
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* pumCHW2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* pumCW2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* chi2.vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* chi2.vol2.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* junCHWSup.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* junCHWRet.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* junCHWRet2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.mb_flow = 0.0
*/
void logic1_raw_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* junCHWSup2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
cooCoi.ele[1].dp2 = 0.0
*/
void logic1_raw_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* cooCoi.ele[1].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1196;
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void logic1_raw_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* cooCoi.ele[1].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1197;
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
cooCoi.ele[2].dp1 = 0.0
*/
void logic1_raw_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* cooCoi.ele[2].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1198;
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
cooCoi.ele[2].dp2 = 0.0
*/
void logic1_raw_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* cooCoi.ele[2].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1199;
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void logic1_raw_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* cooCoi.ele[2].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1200;
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
cooCoi.ele[3].dp1 = 0.0
*/
void logic1_raw_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* cooCoi.ele[3].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1201;
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
cooCoi.ele[3].dp2 = 0.0
*/
void logic1_raw_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* cooCoi.ele[3].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void logic1_raw_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* cooCoi.ele[3].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1203;
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
cooCoi.ele[4].dp1 = 0.0
*/
void logic1_raw_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* cooCoi.ele[4].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1204;
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
chi.dp1 = 0.0
*/
void logic1_raw_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* chi.dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1205;
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
chi.dp2 = 0.0
*/
void logic1_raw_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* chi.dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1206;
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
chi2.dp1 = 0.0
*/
void logic1_raw_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* chi2.dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1207;
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
chi2.dp2 = 0.0
*/
void logic1_raw_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* chi2.dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.p_bar = 1e-5 * expVesChi2.p_start
*/
void logic1_raw_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* chi2.vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi2.p_start PARAM */));
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
out.medium.p_bar = 1e-5 * weaData.pAtm
*/
void logic1_raw_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* out.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */));
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dp = 0.0
*/
void logic1_raw_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* fanRet.vol.steBal.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.p_bar = 1e-5 * expVesChi.p_start
*/
void logic1_raw_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* chi.vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1336]] /* expVesChi.p_start PARAM */));
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void logic1_raw_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* cooCoi.ele[4].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dp = 0.0
*/
void logic1_raw_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* fanSup.vol.steBal.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
out.medium.d = 1.1843079200592153e-5 * weaData.pAtm
*/
void logic1_raw_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* out.medium.d variable */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */));
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
fanRet.m_flow = 55.989691542288554
*/
void logic1_raw_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* fanRet.m_flow variable */) = 55.989691542288554;
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
fanSup.m_flow = 55.989691542288554
*/
void logic1_raw_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* fanSup.m_flow variable */) = 55.989691542288554;
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
junRet.res1.m_flow = 55.989691542288554
*/
void logic1_raw_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* junRet.res1.m_flow variable */) = 55.989691542288554;
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
vol.ports[1].m_flow = 55.989691542288554
*/
void logic1_raw_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* vol.ports[1].m_flow variable */) = 55.989691542288554;
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
pumCHW.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* pumCHW.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
pumCW.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* pumCW.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
pumCHW2.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* pumCHW2.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
pumCW2.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* pumCW2.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
fanSup.vol.steBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* fanSup.vol.steBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
fanSup.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* fanSup.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* fanSup.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* fanSup.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
fanSup.eff.r_N = 1.0
*/
void logic1_raw_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* fanSup.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
cooCoi.hA.x_w = 1.0
*/
void logic1_raw_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* cooCoi.hA.x_w variable */) = 1.0;
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
cooCoi.hA.x_a = 1.0
*/
void logic1_raw_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* cooCoi.hA.x_a variable */) = 1.0;
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* cooCoi.ele[1].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.dp = 0.0
*/
void logic1_raw_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* cooCoi.ele[1].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* cooCoi.ele[2].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.dp = 0.0
*/
void logic1_raw_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* cooCoi.ele[2].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.dp = 0.0
*/
void logic1_raw_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* cooCoi.ele[2].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* cooCoi.ele[3].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.dp = 0.0
*/
void logic1_raw_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* cooCoi.ele[3].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.dp = 0.0
*/
void logic1_raw_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[3].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* cooCoi.ele[4].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.dp = 0.0
*/
void logic1_raw_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* cooCoi.ele[4].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* pumCHW.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* pumCHW.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
pumCHW.eff.r_N = 1.0
*/
void logic1_raw_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* pumCHW.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1243;
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
cooTow.T_Vol.port.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cooTow.T_Vol.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1244;
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* pumCW.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* pumCW.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
pumCW.eff.r_N = 1.0
*/
void logic1_raw_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* pumCW.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
chi.preDro1.dp = 0.0
*/
void logic1_raw_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* chi.preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
chi.preDro2.dp = 0.0
*/
void logic1_raw_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* chi.preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
weaData.con30mins.y = 1800.0
*/
void logic1_raw_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1297]] /* weaData.con30mins.y variable */) = 1800.0;
  threadData->lastEquationSolved = 1250;
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
vol.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
TRooAir.port.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* TRooAir.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
conPIDTAirSup.Dzero.y = 0.0
*/
void logic1_raw_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* conPIDTAirSup.Dzero.y variable */) = 0.0;
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
fanRet.vol.steBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* fanRet.vol.steBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
fanRet.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* fanRet.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
mFanFlo.y = 55.989691542288554
*/
void logic1_raw_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* mFanFlo.y variable */) = 55.989691542288554;
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* fanRet.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* fanRet.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
fanRet.eff.r_N = 1.0
*/
void logic1_raw_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* fanRet.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
junRet.res1.dp = 0.0
*/
void logic1_raw_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* junRet.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
junRet.res2.dp = 0.0
*/
void logic1_raw_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* junRet.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
junRet.res3.dp = 0.0
*/
void logic1_raw_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* junRet.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
junRet.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* junRet.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
junRet.vol.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* junRet.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1264;
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
junOut.res1.dp = 0.0
*/
void logic1_raw_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* junOut.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1265;
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
junOut.res2.dp = 0.0
*/
void logic1_raw_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* junOut.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1266;
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
junOut.res3.dp = 0.0
*/
void logic1_raw_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[984]] /* junOut.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
junOut.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic1_raw_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* junOut.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
junOut.vol.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* junOut.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
PCHW.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* PCHW.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1270;
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
PCHW.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* PCHW.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1271;
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* pumCHW2.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1272;
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* pumCHW2.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1273;
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
pumCHW2.eff.r_N = 1.0
*/
void logic1_raw_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* pumCHW2.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1274;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
cooTow2.T_Vol.port.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.T_Vol.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* pumCW2.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* pumCW2.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1277;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
pumCW2.eff.r_N = 1.0
*/
void logic1_raw_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* pumCW2.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
chi2.preDro1.dp = 0.0
*/
void logic1_raw_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* chi2.preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1279;
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
chi2.preDro2.dp = 0.0
*/
void logic1_raw_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* chi2.preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1280;
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
junCHWSup.res1.dp = 0.0
*/
void logic1_raw_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* junCHWSup.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1281;
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
junCHWSup.res2.dp = 0.0
*/
void logic1_raw_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* junCHWSup.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1282;
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
junCHWSup.res3.dp = 0.0
*/
void logic1_raw_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* junCHWSup.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1283;
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
junCHWSup.vol.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1284;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
junCHWRet.res1.dp = 0.0
*/
void logic1_raw_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* junCHWRet.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
junCHWRet.res2.dp = 0.0
*/
void logic1_raw_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* junCHWRet.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
junCHWRet.res3.dp = 0.0
*/
void logic1_raw_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* junCHWRet.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1287;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
junCHWRet.vol.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* junCHWRet.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
junCHWRet2.res1.dp = 0.0
*/
void logic1_raw_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* junCHWRet2.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1289;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
junCHWRet2.res2.dp = 0.0
*/
void logic1_raw_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* junCHWRet2.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
junCHWRet2.res3.dp = 0.0
*/
void logic1_raw_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* junCHWRet2.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
junCHWRet2.vol.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWRet2.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1292;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
junCHWSup2.res1.dp = 0.0
*/
void logic1_raw_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[960]] /* junCHWSup2.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
junCHWSup2.res2.dp = 0.0
*/
void logic1_raw_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* junCHWSup2.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1294;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
junCHWSup2.res3.dp = 0.0
*/
void logic1_raw_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* junCHWSup2.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
junCHWSup2.vol.heatPort.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* junCHWSup2.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* cooCoi.ele[1].vol1.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* cooCoi.ele[2].vol1.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* cooCoi.ele[3].vol1.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1299;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* cooCoi.ele[4].vol1.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1300;
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* pumCHW.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1302;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
cooTow.bou.liqGasRat_max = 8.0
*/
void logic1_raw_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* cooTow.bou.liqGasRat_max variable */) = 8.0;
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* pumCW.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1304;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* chi.vol1.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* chi.vol2.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1306;
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* pumCHW2.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1307;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* cooTow2.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
cooTow2.bou.liqGasRat_max = 8.0
*/
void logic1_raw_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cooTow2.bou.liqGasRat_max variable */) = 8.0;
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* pumCW2.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1310;
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* chi2.vol1.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1311;
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* chi2.vol2.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1312;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* junCHWSup.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* junCHWRet.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1314;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
junCHWRet2.port_3.m_flow = 0.0
*/
void logic1_raw_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* junCHWRet2.port_3.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* junCHWRet2.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1316;
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
junCHWSup2.port_3.m_flow = 0.0
*/
void logic1_raw_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[959]] /* junCHWSup2.port_3.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.d = 995.586
*/
void logic1_raw_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* junCHWSup2.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
junCHWSup2.res3.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* junCHWSup2.res3.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
junCHWRet2.res3.port_b.m_flow = 0.0
*/
void logic1_raw_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* junCHWRet2.res3.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1320;
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
junRet.res1.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* junRet.res1.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
fanRet.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* fanRet.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
vol.ports[2].m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* vol.ports[2].m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
vol.dynBal.ports[2].m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* vol.dynBal.ports[2].m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
fanRet.vol.steBal.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* fanRet.vol.steBal.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
fanRet.vol.ports[2].m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* fanRet.vol.ports[2].m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
fanRet.senMasFlo.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* fanRet.senMasFlo.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
cooCoi.port_b2.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[695]] /* cooCoi.port_b2.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
cooCoi.ele[1].port_b2.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* cooCoi.ele[1].port_b2.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.ports[2].m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* cooCoi.ele[1].vol2.ports[2].m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.ports[2].m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cooCoi.ele[1].vol2.dynBal.ports[2].m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
fanSup.vol.steBal.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* fanSup.vol.steBal.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
fanSup.vol.ports[2].m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* fanSup.vol.ports[2].m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
fanSup.senMasFlo.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* fanSup.senMasFlo.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
junCHWSup2.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* junCHWSup2.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
junCHWRet2.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* junCHWRet2.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
junCHWRet.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
junCHWSup.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* junCHWSup.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1338;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
junOut.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* junOut.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
junRet.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* junRet.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
fanSup.preSou.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* fanSup.preSou.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
fanRet.preSou.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* fanRet.preSou.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
fanRet.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* fanRet.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
TAirSup.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* TAirSup.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
fanSup.port_b.m_flow = -55.989691542288554
*/
void logic1_raw_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* fanSup.port_b.m_flow variable */) = -55.989691542288554;
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
fanSup.vol.heaFloSen.port_b.Q_flow = 0.0
*/
void logic1_raw_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* fanSup.vol.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
pumCW2.rho_inlet.y = 995.586
*/
void logic1_raw_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* pumCW2.rho_inlet.y variable */) = 995.586;
  threadData->lastEquationSolved = 1347;
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
pumCHW2.rho_inlet.y = 995.586
*/
void logic1_raw_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* pumCHW2.rho_inlet.y variable */) = 995.586;
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
pumCW.rho_inlet.y = 995.586
*/
void logic1_raw_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* pumCW.rho_inlet.y variable */) = 995.586;
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
pumCHW.rho_inlet.y = 995.586
*/
void logic1_raw_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* pumCHW.rho_inlet.y variable */) = 995.586;
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
expVesChi2.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* expVesChi2.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
expVesChi.port_a.m_flow = 0.0
*/
void logic1_raw_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* expVesChi.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1352;
}
extern void logic1_raw_eqFunction_3000(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3001(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3149(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3491(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_3492(DATA *data, threadData_t *threadData);


/*
equation index: 1358
type: SIMPLE_ASSIGN
pumCW2.eff.preDer3[4] = 0.0
*/
void logic1_raw_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* pumCW2.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1358;
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
pumCW2.eff.preDer3[3] = 0.0
*/
void logic1_raw_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2604]] /* pumCW2.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
pumCW2.eff.preDer3[2] = 0.0
*/
void logic1_raw_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* pumCW2.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
pumCW2.eff.preDer3[1] = 0.0
*/
void logic1_raw_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2602]] /* pumCW2.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
pumCW2.eff.preDer2[3] = 0.0
*/
void logic1_raw_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2601]] /* pumCW2.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
pumCW2.eff.preDer2[2] = 0.0
*/
void logic1_raw_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2600]] /* pumCW2.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
pumCW2.eff.preDer2[1] = 0.0
*/
void logic1_raw_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2599]] /* pumCW2.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: ARRAY_CALL_ASSIGN

pumCW2.eff.preDer1 = Buildings.Utilities.Math.Functions.splineDerivatives({0.0, 0.025231747935386795}, {429984.0, 214.99200000000005}, Buildings.Utilities.Math.Functions.isMonotonic({429984.0, 214.99200000000005}, false))
*/
void logic1_raw_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  real_array tmp217;
  real_array_create(&tmp217, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2597]] /* pumCW2.eff.preDer1[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT84, _OMC_LIT85, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT85, 0 /* false */)), tmp217);
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
cooTow2.TWatOut_nominal = cooTow2.TAirInWB_nominal + cooTow2.TApp_nominal
*/
void logic1_raw_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow2.TWatOut_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* cooTow2.TAirInWB_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
cooTow2.TWatIn0 = cooTow2.TWatOut_nominal + cooTow2.TRan_nominal
*/
void logic1_raw_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* cooTow2.TWatIn0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow2.TWatOut_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow2.TRan_nominal PARAM */);
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer3[4] = 0.0
*/
void logic1_raw_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2349]] /* pumCHW2.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1368;
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer3[3] = 0.0
*/
void logic1_raw_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2348]] /* pumCHW2.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1369;
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer3[2] = 0.0
*/
void logic1_raw_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2347]] /* pumCHW2.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1370;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer3[1] = 0.0
*/
void logic1_raw_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2346]] /* pumCHW2.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer2[3] = 0.0
*/
void logic1_raw_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2345]] /* pumCHW2.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer2[2] = 0.0
*/
void logic1_raw_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2344]] /* pumCHW2.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
pumCHW2.eff.preDer2[1] = 0.0
*/
void logic1_raw_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2343]] /* pumCHW2.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1374;
}

/*
equation index: 1375
type: ARRAY_CALL_ASSIGN

pumCHW2.eff.preDer1 = Buildings.Utilities.Math.Functions.splineDerivatives({0.0, 0.05046349587077359}, {650948.0, 325.47400000000005}, Buildings.Utilities.Math.Functions.isMonotonic({650948.0, 325.47400000000005}, false))
*/
void logic1_raw_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1375};
  real_array tmp218;
  real_array_create(&tmp218, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2341]] /* pumCHW2.eff.preDer1[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT86, _OMC_LIT87, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT87, 0 /* false */)), tmp218);
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
fanRet.eff.preDer3[4] = 0.0
*/
void logic1_raw_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1376};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1409]] /* fanRet.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
fanRet.eff.preDer3[3] = 0.0
*/
void logic1_raw_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1408]] /* fanRet.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
fanRet.eff.preDer3[2] = 0.0
*/
void logic1_raw_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1407]] /* fanRet.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1378;
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
fanRet.eff.preDer3[1] = 0.0
*/
void logic1_raw_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1406]] /* fanRet.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
fanRet.eff.preDer2[3] = 0.0
*/
void logic1_raw_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1405]] /* fanRet.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
fanRet.eff.preDer2[2] = 0.0
*/
void logic1_raw_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1404]] /* fanRet.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
fanRet.eff.preDer2[1] = 0.0
*/
void logic1_raw_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanRet.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: ARRAY_CALL_ASSIGN

fanRet.eff.preDer1 = Buildings.Utilities.Math.Functions.splineDerivatives({0.0, 93.31615257048092}, {498.0, 0.24900000000000003}, Buildings.Utilities.Math.Functions.isMonotonic({498.0, 0.24900000000000003}, false))
*/
void logic1_raw_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  real_array tmp219;
  real_array_create(&tmp219, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanRet.eff.preDer1[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT88, _OMC_LIT89, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT89, 0 /* false */)), tmp219);
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
pumCW.eff.preDer3[4] = 0.0
*/
void logic1_raw_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2477]] /* pumCW.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
pumCW.eff.preDer3[3] = 0.0
*/
void logic1_raw_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2476]] /* pumCW.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
pumCW.eff.preDer3[2] = 0.0
*/
void logic1_raw_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2475]] /* pumCW.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
pumCW.eff.preDer3[1] = 0.0
*/
void logic1_raw_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2474]] /* pumCW.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
pumCW.eff.preDer2[3] = 0.0
*/
void logic1_raw_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2473]] /* pumCW.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
pumCW.eff.preDer2[2] = 0.0
*/
void logic1_raw_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2472]] /* pumCW.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
pumCW.eff.preDer2[1] = 0.0
*/
void logic1_raw_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2471]] /* pumCW.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: ARRAY_CALL_ASSIGN

pumCW.eff.preDer1 = Buildings.Utilities.Math.Functions.splineDerivatives({0.0, 0.025231747935386795}, {429984.0, 214.99200000000005}, Buildings.Utilities.Math.Functions.isMonotonic({429984.0, 214.99200000000005}, false))
*/
void logic1_raw_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  real_array tmp220;
  real_array_create(&tmp220, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2469]] /* pumCW.eff.preDer1[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT84, _OMC_LIT85, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT85, 0 /* false */)), tmp220);
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
cooTow.TWatOut_nominal = cooTow.TAirInWB_nominal + cooTow.TApp_nominal
*/
void logic1_raw_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* cooTow.TWatOut_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* cooTow.TAirInWB_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
cooTow.TWatIn0 = cooTow.TWatOut_nominal + cooTow.TRan_nominal
*/
void logic1_raw_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1047]] /* cooTow.TWatIn0 PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1048]] /* cooTow.TWatOut_nominal PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* cooTow.TRan_nominal PARAM */);
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
pumCHW.eff.preDer3[4] = 0.0
*/
void logic1_raw_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2221]] /* pumCHW.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
pumCHW.eff.preDer3[3] = 0.0
*/
void logic1_raw_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2220]] /* pumCHW.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
pumCHW.eff.preDer3[2] = 0.0
*/
void logic1_raw_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2219]] /* pumCHW.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1396;
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
pumCHW.eff.preDer3[1] = 0.0
*/
void logic1_raw_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2218]] /* pumCHW.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1397;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
pumCHW.eff.preDer2[3] = 0.0
*/
void logic1_raw_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2217]] /* pumCHW.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
pumCHW.eff.preDer2[2] = 0.0
*/
void logic1_raw_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2216]] /* pumCHW.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
pumCHW.eff.preDer2[1] = 0.0
*/
void logic1_raw_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1400};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2215]] /* pumCHW.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1400;
}

/*
equation index: 1401
type: ARRAY_CALL_ASSIGN

pumCHW.eff.preDer1 = Buildings.Utilities.Math.Functions.splineDerivatives({0.0, 0.05046349587077359}, {650948.0, 325.47400000000005}, Buildings.Utilities.Math.Functions.isMonotonic({650948.0, 325.47400000000005}, false))
*/
void logic1_raw_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  real_array tmp221;
  real_array_create(&tmp221, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2213]] /* pumCHW.eff.preDer1[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT86, _OMC_LIT87, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT87, 0 /* false */)), tmp221);
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta2_start.p = cooCoi.ele[4].p2_start
*/
void logic1_raw_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[744]] /* cooCoi.ele[4].sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* cooCoi.ele[4].p2_start PARAM */);
  threadData->lastEquationSolved = 1402;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta2_start.p = cooCoi.ele[3].p2_start
*/
void logic1_raw_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[743]] /* cooCoi.ele[3].sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* cooCoi.ele[3].p2_start PARAM */);
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta2_start.p = cooCoi.ele[2].p2_start
*/
void logic1_raw_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[742]] /* cooCoi.ele[2].sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* cooCoi.ele[2].p2_start PARAM */);
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta2_start.p = cooCoi.ele[1].p2_start
*/
void logic1_raw_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[741]] /* cooCoi.ele[1].sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* cooCoi.ele[1].p2_start PARAM */);
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
cooCoi.hA.s_w = 1.0
*/
void logic1_raw_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1005]] /* cooCoi.hA.s_w PARAM */) = 1.0;
  threadData->lastEquationSolved = 1406;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
fanSup.eff.preDer3[4] = 0.0
*/
void logic1_raw_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1546]] /* fanSup.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
fanSup.eff.preDer3[3] = 0.0
*/
void logic1_raw_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1545]] /* fanSup.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
fanSup.eff.preDer3[2] = 0.0
*/
void logic1_raw_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1544]] /* fanSup.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
fanSup.eff.preDer3[1] = 0.0
*/
void logic1_raw_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1543]] /* fanSup.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
fanSup.eff.preDer2[3] = 0.0
*/
void logic1_raw_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1542]] /* fanSup.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
fanSup.eff.preDer2[2] = 0.0
*/
void logic1_raw_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1541]] /* fanSup.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
fanSup.eff.preDer2[1] = 0.0
*/
void logic1_raw_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1540]] /* fanSup.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1413;
}

/*
equation index: 1414
type: ARRAY_CALL_ASSIGN

fanSup.eff.preDer1 = Buildings.Utilities.Math.Functions.splineDerivatives({0.0, 93.31615257048092}, {498.0, 0.24900000000000003}, Buildings.Utilities.Math.Functions.isMonotonic({498.0, 0.24900000000000003}, false))
*/
void logic1_raw_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1414};
  real_array tmp222;
  real_array_create(&tmp222, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1538]] /* fanSup.eff.preDer1[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT88, _OMC_LIT89, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT89, 0 /* false */)), tmp222);
  threadData->lastEquationSolved = 1414;
}

/*
equation index: 1532
type: ALGORITHM

  assert(cooTow.tau > 2.220446049250313e-16, "The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau = " + String(cooTow.tau, 6, 0, true) + "
");
  assert(cooTow.tau > 2.220446049250313e-16, "The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau = " + String(cooTow.tau, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  modelica_boolean tmp223;
  static const MMC_DEFSTRINGLIT(tmp224,216,"The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau = ");
  modelica_string tmp225;
  modelica_metatype tmpMeta226;
  modelica_metatype tmpMeta227;
  static int tmp228 = 0;
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,214,"The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau = ");
  modelica_string tmp231;
  modelica_metatype tmpMeta232;
  modelica_metatype tmpMeta233;
  static int tmp234 = 0;
  {
    tmp223 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.tau PARAM */),2.220446049250313e-16);
    if(!tmp223)
    {
      tmp225 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.tau PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta226 = stringAppend(MMC_REFSTRINGLIT(tmp224),tmp225);
      tmpMeta227 = stringAppend(tmpMeta226,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooTow.tau > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",81,3,85,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",81,3,85,40,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        }
      }
    }
  }

  {
    tmp229 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.tau PARAM */),2.220446049250313e-16);
    if(!tmp229)
    {
      tmp231 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.tau PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta232 = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      tmpMeta233 = stringAppend(tmpMeta232,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooTow.tau > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",86,3,90,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",86,3,90,40,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta233));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1531
type: ALGORITHM

  assert(damRet.kThetaSqRt_default > 0.0, "Flow coefficient must be strictly positive.");
*/
void logic1_raw_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  modelica_boolean tmp235;
  static const MMC_DEFSTRINGLIT(tmp236,43,"Flow coefficient must be strictly positive.");
  static int tmp237 = 0;
  {
    tmp235 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* damRet.kThetaSqRt_default PARAM */),0.0);
    if(!tmp235)
    {
      {
        const char* assert_cond = "(damRet.kThetaSqRt_default > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Dampers/Exponential.mo",21,4,21,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp236)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Dampers/Exponential.mo",21,4,21,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp236)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1530
type: ALGORITHM

  assert(damEA.kThetaSqRt_default > 0.0, "Flow coefficient must be strictly positive.");
*/
void logic1_raw_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1530};
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,43,"Flow coefficient must be strictly positive.");
  static int tmp240 = 0;
  {
    tmp238 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* damEA.kThetaSqRt_default PARAM */),0.0);
    if(!tmp238)
    {
      {
        const char* assert_cond = "(damEA.kThetaSqRt_default > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Dampers/Exponential.mo",21,4,21,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp239)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Dampers/Exponential.mo",21,4,21,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp239)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1530;
}

/*
equation index: 1529
type: ALGORITHM

  assert(damOA.kThetaSqRt_default > 0.0, "Flow coefficient must be strictly positive.");
*/
void logic1_raw_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1529};
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,43,"Flow coefficient must be strictly positive.");
  static int tmp243 = 0;
  {
    tmp241 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* damOA.kThetaSqRt_default PARAM */),0.0);
    if(!tmp241)
    {
      {
        const char* assert_cond = "(damOA.kThetaSqRt_default > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Dampers/Exponential.mo",21,4,21,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp242)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Dampers/Exponential.mo",21,4,21,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp242)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1529;
}

/*
equation index: 1528
type: ALGORITHM

  assert(cooTow2.tau > 2.220446049250313e-16, "The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau = " + String(cooTow2.tau, 6, 0, true) + "
");
  assert(cooTow2.tau > 2.220446049250313e-16, "The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau = " + String(cooTow2.tau, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1528};
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,216,"The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau = ");
  modelica_string tmp246;
  modelica_metatype tmpMeta247;
  modelica_metatype tmpMeta248;
  static int tmp249 = 0;
  modelica_boolean tmp250;
  static const MMC_DEFSTRINGLIT(tmp251,214,"The parameter tau, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau = ");
  modelica_string tmp252;
  modelica_metatype tmpMeta253;
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  {
    tmp244 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.tau PARAM */),2.220446049250313e-16);
    if(!tmp244)
    {
      tmp246 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.tau PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta247 = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      tmpMeta248 = stringAppend(tmpMeta247,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooTow2.tau > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",81,3,85,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",81,3,85,40,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        }
      }
    }
  }

  {
    tmp250 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.tau PARAM */),2.220446049250313e-16);
    if(!tmp250)
    {
      tmp252 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.tau PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta253 = stringAppend(MMC_REFSTRINGLIT(tmp251),tmp252);
      tmpMeta254 = stringAppend(tmpMeta253,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooTow2.tau > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",86,3,90,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/TwoPortHeatMassExchanger.mo",86,3,90,40,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1528;
}

/*
equation index: 1527
type: ALGORITHM

  assert(true, "If Medium.nXi > 1, then substance 'water' must be present for one component.'Air'.
Check medium model.");
*/
void logic1_raw_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1527};
  static const MMC_DEFSTRINGLIT(tmp256,102,"If Medium.nXi > 1, then substance 'water' must be present for one component.'Air'.\nCheck medium model.");
  static int tmp257 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",114,3,117,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp256)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",114,3,117,34,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp256)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1527;
}

/*
equation index: 1526
type: ALGORITHM

  assert(fanSup.nominalValuesDefineDefaultPressureCurve, "*** Warning: You are using a flow or pressure controlled mover with the
             default pressure curve.
             This leads to approximate calculations of the electrical power
             consumption. Add the correct pressure curve in the record per
             to obtain an accurate computation.
             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
*/
void logic1_raw_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  static const MMC_DEFSTRINGLIT(tmp258,401,"*** Warning: You are using a flow or pressure controlled mover with the\n             default pressure curve.\n             This leads to approximate calculations of the electrical power\n             consumption. Add the correct pressure curve in the record per\n             to obtain an accurate computation.\n             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
  static int tmp259 = 0;
  if(!tmp259)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[437]] /* fanSup.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(fanSup.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp258)));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp258)));
        }
      }
      tmp259 = 1;
    }
  }
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1525
type: ALGORITHM

  assert(true, "In logic1.cooCoi.ele[1].vol2.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  static const MMC_DEFSTRINGLIT(tmp260,160,"In logic1.cooCoi.ele[1].vol2.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp261 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp260)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp260)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1524
type: ALGORITHM

  assert(cooCoi.ele[1].preDro1.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1524};
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp264 = 0;
  {
    tmp262 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */),0.0);
    if(!tmp262)
    {
      {
        const char* assert_cond = "(cooCoi.ele[1].preDro1.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp263)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp263)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1524;
}

/*
equation index: 1523
type: ALGORITHM

  assert(cooCoi.ele[1].preDro1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1523};
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp267 = 0;
  {
    tmp265 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp265)
    {
      {
        const char* assert_cond = "(cooCoi.ele[1].preDro1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp266)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp266)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1523;
}

/*
equation index: 1522
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1522};
  static const MMC_DEFSTRINGLIT(tmp268,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp269 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp268)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp268)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1522;
}

/*
equation index: 1521
type: ALGORITHM

  assert(cooCoi.ele[1].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[1].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,218,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  modelica_metatype tmpMeta274;
  static int tmp275 = 0;
  {
    tmp270 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[1].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp270)
    {
      tmp272 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[1].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      tmpMeta274 = stringAppend(tmpMeta273,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[1].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta274));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta274));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1520
type: ALGORITHM

  assert(cooCoi.ele[1].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[1].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,216,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  modelica_metatype tmpMeta280;
  static int tmp281 = 0;
  {
    tmp276 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[1].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp276)
    {
      tmp278 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[745]] /* cooCoi.ele[1].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      tmpMeta280 = stringAppend(tmpMeta279,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[1].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta280));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta280));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1519
type: ALGORITHM

  assert(cooCoi.ele[1].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[1].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,218,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  modelica_metatype tmpMeta286;
  static int tmp287 = 0;
  {
    tmp282 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      tmpMeta286 = stringAppend(tmpMeta285,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[1].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta286));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta286));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1518
type: ALGORITHM

  assert(cooCoi.ele[1].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[1].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,216,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp290;
  modelica_metatype tmpMeta291;
  modelica_metatype tmpMeta292;
  static int tmp293 = 0;
  {
    tmp288 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp288)
    {
      tmp290 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[749]] /* cooCoi.ele[1].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta291 = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      tmpMeta292 = stringAppend(tmpMeta291,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[1].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1517
type: ALGORITHM

  assert(true, "In logic1.cooCoi.ele[2].vol2.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  static const MMC_DEFSTRINGLIT(tmp294,160,"In logic1.cooCoi.ele[2].vol2.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp295 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp294)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp294)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1516
type: ALGORITHM

  assert(cooCoi.ele[2].preDro1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp298 = 0;
  {
    tmp296 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* cooCoi.ele[2].preDro1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp296)
    {
      {
        const char* assert_cond = "(cooCoi.ele[2].preDro1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp297)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp297)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1515
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  static const MMC_DEFSTRINGLIT(tmp299,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp300 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp299)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp299)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1514
type: ALGORITHM

  assert(cooCoi.ele[2].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[2].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,218,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp303;
  modelica_metatype tmpMeta304;
  modelica_metatype tmpMeta305;
  static int tmp306 = 0;
  {
    tmp301 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[2].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp301)
    {
      tmp303 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[2].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta304 = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      tmpMeta305 = stringAppend(tmpMeta304,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[2].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1513
type: ALGORITHM

  assert(cooCoi.ele[2].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[2].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,216,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  modelica_metatype tmpMeta311;
  static int tmp312 = 0;
  {
    tmp307 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[2].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp307)
    {
      tmp309 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[746]] /* cooCoi.ele[2].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta310 = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      tmpMeta311 = stringAppend(tmpMeta310,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[2].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta311));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta311));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1512
type: ALGORITHM

  assert(cooCoi.ele[2].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[2].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1512};
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,218,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp315;
  modelica_metatype tmpMeta316;
  modelica_metatype tmpMeta317;
  static int tmp318 = 0;
  {
    tmp313 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp313)
    {
      tmp315 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta316 = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      tmpMeta317 = stringAppend(tmpMeta316,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[2].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta317));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1512;
}

/*
equation index: 1511
type: ALGORITHM

  assert(cooCoi.ele[2].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[2].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1511};
  modelica_boolean tmp319;
  static const MMC_DEFSTRINGLIT(tmp320,216,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp321;
  modelica_metatype tmpMeta322;
  modelica_metatype tmpMeta323;
  static int tmp324 = 0;
  {
    tmp319 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp319)
    {
      tmp321 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[750]] /* cooCoi.ele[2].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta322 = stringAppend(MMC_REFSTRINGLIT(tmp320),tmp321);
      tmpMeta323 = stringAppend(tmpMeta322,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[2].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta323));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1511;
}

/*
equation index: 1510
type: ALGORITHM

  assert(true, "In logic1.cooCoi.ele[3].vol2.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1510};
  static const MMC_DEFSTRINGLIT(tmp325,160,"In logic1.cooCoi.ele[3].vol2.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp326 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp325)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp325)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1510;
}

/*
equation index: 1509
type: ALGORITHM

  assert(cooCoi.ele[3].preDro1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1509};
  modelica_boolean tmp327;
  static const MMC_DEFSTRINGLIT(tmp328,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp329 = 0;
  {
    tmp327 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* cooCoi.ele[3].preDro1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp327)
    {
      {
        const char* assert_cond = "(cooCoi.ele[3].preDro1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp328)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp328)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1509;
}

/*
equation index: 1508
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  static const MMC_DEFSTRINGLIT(tmp330,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp331 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp330)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp330)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1507
type: ALGORITHM

  assert(cooCoi.ele[3].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[3].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,218,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  modelica_metatype tmpMeta336;
  static int tmp337 = 0;
  {
    tmp332 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[3].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[3].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      tmpMeta336 = stringAppend(tmpMeta335,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[3].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta336));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta336));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1506
type: ALGORITHM

  assert(cooCoi.ele[3].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[3].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,216,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  modelica_metatype tmpMeta342;
  static int tmp343 = 0;
  {
    tmp338 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[3].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp338)
    {
      tmp340 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[747]] /* cooCoi.ele[3].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta341 = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      tmpMeta342 = stringAppend(tmpMeta341,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[3].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta342));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta342));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1505
type: ALGORITHM

  assert(cooCoi.ele[3].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[3].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1505};
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,218,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp346;
  modelica_metatype tmpMeta347;
  modelica_metatype tmpMeta348;
  static int tmp349 = 0;
  {
    tmp344 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp344)
    {
      tmp346 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta347 = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      tmpMeta348 = stringAppend(tmpMeta347,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[3].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta348));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta348));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1505;
}

/*
equation index: 1504
type: ALGORITHM

  assert(cooCoi.ele[3].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[3].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1504};
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,216,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp352;
  modelica_metatype tmpMeta353;
  modelica_metatype tmpMeta354;
  static int tmp355 = 0;
  {
    tmp350 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp350)
    {
      tmp352 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[751]] /* cooCoi.ele[3].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta353 = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      tmpMeta354 = stringAppend(tmpMeta353,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[3].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1504;
}

/*
equation index: 1503
type: ALGORITHM

  assert(true, "In logic1.cooCoi.ele[4].vol2.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  static const MMC_DEFSTRINGLIT(tmp356,160,"In logic1.cooCoi.ele[4].vol2.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp357 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp356)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp356)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1502
type: ALGORITHM

  assert(cooCoi.ele[4].preDro1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp360 = 0;
  {
    tmp358 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[4].preDro1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp358)
    {
      {
        const char* assert_cond = "(cooCoi.ele[4].preDro1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp359)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp359)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1501
type: ALGORITHM

  assert(true, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  static const MMC_DEFSTRINGLIT(tmp361,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp362 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp361)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp361)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1500
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  static const MMC_DEFSTRINGLIT(tmp363,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp364 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp363)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp363)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1499
type: ALGORITHM

  assert(cooCoi.ele[4].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[4].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  modelica_boolean tmp365;
  static const MMC_DEFSTRINGLIT(tmp366,218,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp367;
  modelica_metatype tmpMeta368;
  modelica_metatype tmpMeta369;
  static int tmp370 = 0;
  {
    tmp365 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[4].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp365)
    {
      tmp367 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[4].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta368 = stringAppend(MMC_REFSTRINGLIT(tmp366),tmp367);
      tmpMeta369 = stringAppend(tmpMeta368,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[4].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",163,3,167,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1499;
}

/*
equation index: 1498
type: ALGORITHM

  assert(cooCoi.ele[4].tau1 > 2.220446049250313e-16, "The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau1 = " + String(cooCoi.ele[4].tau1, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1498};
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,216,"The parameter tau1, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau1 = ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  modelica_metatype tmpMeta375;
  static int tmp376 = 0;
  {
    tmp371 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[4].tau1 PARAM */),2.220446049250313e-16);
    if(!tmp371)
    {
      tmp373 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[748]] /* cooCoi.ele[4].tau1 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      tmpMeta375 = stringAppend(tmpMeta374,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[4].tau1 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta375));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",168,3,172,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta375));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1497
type: ALGORITHM

  assert(cooCoi.ele[4].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[4].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1497};
  modelica_boolean tmp377;
  static const MMC_DEFSTRINGLIT(tmp378,218,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set energyDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp379;
  modelica_metatype tmpMeta380;
  modelica_metatype tmpMeta381;
  static int tmp382 = 0;
  {
    tmp377 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp377)
    {
      tmp379 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta380 = stringAppend(MMC_REFSTRINGLIT(tmp378),tmp379);
      tmpMeta381 = stringAppend(tmpMeta380,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[4].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",175,3,179,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta381));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1496
type: ALGORITHM

  assert(cooCoi.ele[4].tau2 > 2.220446049250313e-16, "The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.
 You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.
 Received tau2 = " + String(cooCoi.ele[4].tau2, 6, 0, true) + "
");
*/
void logic1_raw_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,216,"The parameter tau2, or the volume of the model from which tau may be derived, is unreasonably small.\n You need to set massDynamics == Modelica.Fluid.Types.Dynamics.SteadyState to model steady-state.\n Received tau2 = ");
  modelica_string tmp385;
  modelica_metatype tmpMeta386;
  modelica_metatype tmpMeta387;
  static int tmp388 = 0;
  {
    tmp383 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].tau2 PARAM */),2.220446049250313e-16);
    if(!tmp383)
    {
      tmp385 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[752]] /* cooCoi.ele[4].tau2 PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta386 = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      tmpMeta387 = stringAppend(tmpMeta386,(modelica_string) mmc_strings_len1[10]);
      {
        const char* assert_cond = "(cooCoi.ele[4].tau2 > 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta387));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/FourPortHeatMassExchanger.mo",180,3,184,42,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta387));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1495
type: ALGORITHM

  assert(cooCoi.UA_nominal > 0.0, "Parameter UA_nominal is negative. Check heat exchanger parameters.");
*/
void logic1_raw_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1495};
  modelica_boolean tmp389;
  static const MMC_DEFSTRINGLIT(tmp390,66,"Parameter UA_nominal is negative. Check heat exchanger parameters.");
  static int tmp391 = 0;
  {
    tmp389 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[484]] /* cooCoi.UA_nominal PARAM */),0.0);
    if(!tmp389)
    {
      {
        const char* assert_cond = "(cooCoi.UA_nominal > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",187,3,188,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp390)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/DryCoilCounterFlow.mo",187,3,188,74,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp390)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1494
type: ALGORITHM

  assert(pumCHW.nominalValuesDefineDefaultPressureCurve, "*** Warning: You are using a flow or pressure controlled mover with the
             default pressure curve.
             This leads to approximate calculations of the electrical power
             consumption. Add the correct pressure curve in the record per
             to obtain an accurate computation.
             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
*/
void logic1_raw_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1494};
  static const MMC_DEFSTRINGLIT(tmp392,401,"*** Warning: You are using a flow or pressure controlled mover with the\n             default pressure curve.\n             This leads to approximate calculations of the electrical power\n             consumption. Add the correct pressure curve in the record per\n             to obtain an accurate computation.\n             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
  static int tmp393 = 0;
  if(!tmp393)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[680]] /* pumCHW.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(pumCHW.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp392)));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp392)));
        }
      }
      tmp393 = 1;
    }
  }
  threadData->lastEquationSolved = 1494;
}

/*
equation index: 1493
type: ALGORITHM

  assert(cooTow.preDro.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1493};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp396 = 0;
  {
    tmp394 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow.preDro.m_flow_turbulent PARAM */),0.0);
    if(!tmp394)
    {
      {
        const char* assert_cond = "(cooTow.preDro.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp395)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp395)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1493;
}

/*
equation index: 1492
type: ALGORITHM

  assert(cooTow.preDro.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  modelica_boolean tmp397;
  static const MMC_DEFSTRINGLIT(tmp398,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp399 = 0;
  {
    tmp397 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1086]] /* cooTow.preDro.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp397)
    {
      {
        const char* assert_cond = "(cooTow.preDro.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp398)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp398)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1492;
}

/*
equation index: 1491
type: ALGORITHM

  assert(pumCW.nominalValuesDefineDefaultPressureCurve, "*** Warning: You are using a flow or pressure controlled mover with the
             default pressure curve.
             This leads to approximate calculations of the electrical power
             consumption. Add the correct pressure curve in the record per
             to obtain an accurate computation.
             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
*/
void logic1_raw_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1491};
  static const MMC_DEFSTRINGLIT(tmp400,401,"*** Warning: You are using a flow or pressure controlled mover with the\n             default pressure curve.\n             This leads to approximate calculations of the electrical power\n             consumption. Add the correct pressure curve in the record per\n             to obtain an accurate computation.\n             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
  static int tmp401 = 0;
  if(!tmp401)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[758]] /* pumCW.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(pumCW.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp400)));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp400)));
        }
      }
      tmp401 = 1;
    }
  }
  threadData->lastEquationSolved = 1491;
}

/*
equation index: 1490
type: ALGORITHM

  assert(val5.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1490};
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp404 = 0;
  {
    tmp402 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2718]] /* val5.l PARAM */),0.0);
    if(!tmp402)
    {
      {
        const char* assert_cond = "(val5.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp403)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp403)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1490;
}

/*
equation index: 1489
type: ALGORITHM

  assert(val1.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1489};
  modelica_boolean tmp405;
  static const MMC_DEFSTRINGLIT(tmp406,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp407 = 0;
  {
    tmp405 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.l PARAM */),0.0);
    if(!tmp405)
    {
      {
        const char* assert_cond = "(val1.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",22,3,22,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp406)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",22,3,22,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp406)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1489;
}

/*
equation index: 1488
type: ALGORITHM

  assert(val1.l < 1.0 / val1.R, "Wrong parameters in valve model.
  Rangeability R = " + String(val1.R, 6, 0, true) + "
" + "  Leakage flow l = " + String(val1.l, 6, 0, true) + "
" + "  Must have l < 1/R = " + String(1.0 / val1.R, 6, 0, true));
*/
void logic1_raw_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1488};
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,52,"Wrong parameters in valve model.\n  Rangeability R = ");
  modelica_string tmp410;
  modelica_metatype tmpMeta411;
  modelica_metatype tmpMeta412;
  static const MMC_DEFSTRINGLIT(tmp413,19,"  Leakage flow l = ");
  modelica_metatype tmpMeta414;
  modelica_string tmp415;
  modelica_metatype tmpMeta416;
  modelica_metatype tmpMeta417;
  static const MMC_DEFSTRINGLIT(tmp418,22,"  Must have l < 1/R = ");
  modelica_metatype tmpMeta419;
  modelica_string tmp420;
  modelica_metatype tmpMeta421;
  static int tmp422 = 0;
  {
    tmp408 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.l PARAM */),DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* val1.R PARAM */),"val1.R",equationIndexes));
    if(!tmp408)
    {
      tmp410 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* val1.R PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta411 = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      tmpMeta412 = stringAppend(tmpMeta411,(modelica_string) mmc_strings_len1[10]);
      tmpMeta414 = stringAppend(tmpMeta412,MMC_REFSTRINGLIT(tmp413));
      tmp415 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.l PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta416 = stringAppend(tmpMeta414,tmp415);
      tmpMeta417 = stringAppend(tmpMeta416,(modelica_string) mmc_strings_len1[10]);
      tmpMeta419 = stringAppend(tmpMeta417,MMC_REFSTRINGLIT(tmp418));
      tmp420 = modelica_real_to_modelica_string(DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2684]] /* val1.R PARAM */),"val1.R",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta421 = stringAppend(tmpMeta419,tmp420);
      {
        const char* assert_cond = "(val1.l < 1.0 / val1.R)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",23,3,26,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",23,3,26,58,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1488;
}

/*
equation index: 1487
type: ALGORITHM

  assert(chi.preDro1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1487};
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp425 = 0;
  {
    tmp423 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[174]] /* chi.preDro1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp423)
    {
      {
        const char* assert_cond = "(chi.preDro1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp424)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp424)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1487;
}

/*
equation index: 1486
type: ALGORITHM

  assert(chi.preDro2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1486};
  modelica_boolean tmp426;
  static const MMC_DEFSTRINGLIT(tmp427,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp428 = 0;
  {
    tmp426 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[188]] /* chi.preDro2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp426)
    {
      {
        const char* assert_cond = "(chi.preDro2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp427)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp427)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1486;
}

/*
equation index: 1485
type: ALGORITHM

  Buildings.Fluid.Chillers.BaseClasses.warnIfPerformanceOutOfBounds(Buildings.Utilities.Math.Functions.biquadratic(chi.per.capFunT, chi.TEvaLvg_nominal_degC, chi.TConEnt_nominal_degC), "Capacity as function of temperature ", "per.capFunT");
*/
void logic1_raw_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  real_array tmp429;
  static const MMC_DEFSTRINGLIT(tmp430,36,"Capacity as function of temperature ");
  static const MMC_DEFSTRINGLIT(tmp431,11,"per.capFunT");
  real_array_create(&tmp429, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* chi.per.capFunT[1] PARAM */))), 1, (_index_t)6);
  omc_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData, omc_Buildings_Utilities_Math_Functions_biquadratic(threadData, tmp429, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* chi.TEvaLvg_nominal_degC PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* chi.TConEnt_nominal_degC PARAM */)), MMC_REFSTRINGLIT(tmp430), MMC_REFSTRINGLIT(tmp431));
  threadData->lastEquationSolved = 1485;
}

/*
equation index: 1484
type: ALGORITHM

  assert(chi.QEva_flow_nominal < 0.0, "Parameter QEva_flow_nominal must be smaller than zero.");
*/
void logic1_raw_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1484};
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,54,"Parameter QEva_flow_nominal must be smaller than zero.");
  static int tmp434 = 0;
  {
    tmp432 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* chi.QEva_flow_nominal PARAM */),0.0);
    if(!tmp432)
    {
      {
        const char* assert_cond = "(chi.QEva_flow_nominal < 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",93,3,93,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp433)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",93,3,93,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp433)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1484;
}

/*
equation index: 1483
type: ALGORITHM

  assert(chi.Q_flow_small < 0.0, "Parameter Q_flow_small must be smaller than zero.");
*/
void logic1_raw_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1483};
  modelica_boolean tmp435;
  static const MMC_DEFSTRINGLIT(tmp436,49,"Parameter Q_flow_small must be smaller than zero.");
  static int tmp437 = 0;
  {
    tmp435 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* chi.Q_flow_small PARAM */),0.0);
    if(!tmp435)
    {
      {
        const char* assert_cond = "(chi.Q_flow_small < 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",94,3,94,80,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp436)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",94,3,94,80,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp436)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1483;
}

/*
equation index: 1482
type: ALGORITHM

  assert(chi.PLRMinUnl >= chi.PLRMin, "Parameter PLRMinUnl must be bigger or equal to PLRMin");
*/
void logic1_raw_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,53,"Parameter PLRMinUnl must be bigger or equal to PLRMin");
  static int tmp440 = 0;
  {
    tmp438 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* chi.PLRMinUnl PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* chi.PLRMin PARAM */));
    if(!tmp438)
    {
      {
        const char* assert_cond = "(chi.PLRMinUnl >= chi.PLRMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",95,3,95,87,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp439)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",95,3,95,87,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp439)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1482;
}

/*
equation index: 1481
type: ALGORITHM

  assert(chi.PLRMax > chi.PLRMinUnl, "Parameter PLRMax must be bigger than PLRMinUnl");
*/
void logic1_raw_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1481};
  modelica_boolean tmp441;
  static const MMC_DEFSTRINGLIT(tmp442,46,"Parameter PLRMax must be bigger than PLRMinUnl");
  static int tmp443 = 0;
  {
    tmp441 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* chi.PLRMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* chi.PLRMinUnl PARAM */));
    if(!tmp441)
    {
      {
        const char* assert_cond = "(chi.PLRMax > chi.PLRMinUnl)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",96,3,96,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp442)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",96,3,96,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp442)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1481;
}

/*
equation index: 1480
type: ALGORITHM

  assert(val6.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1480};
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp446 = 0;
  {
    tmp444 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2741]] /* val6.l PARAM */),0.0);
    if(!tmp444)
    {
      {
        const char* assert_cond = "(val6.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp445)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp445)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1480;
}

/*
equation index: 1479
type: ALGORITHM

  assert(valByp.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  modelica_boolean tmp447;
  static const MMC_DEFSTRINGLIT(tmp448,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp449 = 0;
  {
    tmp447 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.l PARAM */),0.0);
    if(!tmp447)
    {
      {
        const char* assert_cond = "(valByp.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",22,3,22,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp448)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",22,3,22,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp448)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1479;
}

/*
equation index: 1478
type: ALGORITHM

  assert(valByp.l < 1.0 / valByp.R, "Wrong parameters in valve model.
  Rangeability R = " + String(valByp.R, 6, 0, true) + "
" + "  Leakage flow l = " + String(valByp.l, 6, 0, true) + "
" + "  Must have l < 1/R = " + String(1.0 / valByp.R, 6, 0, true));
*/
void logic1_raw_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,52,"Wrong parameters in valve model.\n  Rangeability R = ");
  modelica_string tmp452;
  modelica_metatype tmpMeta453;
  modelica_metatype tmpMeta454;
  static const MMC_DEFSTRINGLIT(tmp455,19,"  Leakage flow l = ");
  modelica_metatype tmpMeta456;
  modelica_string tmp457;
  modelica_metatype tmpMeta458;
  modelica_metatype tmpMeta459;
  static const MMC_DEFSTRINGLIT(tmp460,22,"  Must have l < 1/R = ");
  modelica_metatype tmpMeta461;
  modelica_string tmp462;
  modelica_metatype tmpMeta463;
  static int tmp464 = 0;
  {
    tmp450 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.l PARAM */),DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* valByp.R PARAM */),"valByp.R",equationIndexes));
    if(!tmp450)
    {
      tmp452 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* valByp.R PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta453 = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      tmpMeta454 = stringAppend(tmpMeta453,(modelica_string) mmc_strings_len1[10]);
      tmpMeta456 = stringAppend(tmpMeta454,MMC_REFSTRINGLIT(tmp455));
      tmp457 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.l PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta458 = stringAppend(tmpMeta456,tmp457);
      tmpMeta459 = stringAppend(tmpMeta458,(modelica_string) mmc_strings_len1[10]);
      tmpMeta461 = stringAppend(tmpMeta459,MMC_REFSTRINGLIT(tmp460));
      tmp462 = modelica_real_to_modelica_string(DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2824]] /* valByp.R PARAM */),"valByp.R",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta463 = stringAppend(tmpMeta461,tmp462);
      {
        const char* assert_cond = "(valByp.l < 1.0 / valByp.R)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",23,3,26,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayEqualPercentage.mo",23,3,26,58,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1477
type: ALGORITHM

  assert(true, "In logic1.vol.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1477};
  static const MMC_DEFSTRINGLIT(tmp465,145,"In logic1.vol.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp466 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp465)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp465)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1477;
}

/*
equation index: 1476
type: ALGORITHM

  assert(true, "If Medium.nXi > 1, then substance 'water' must be present for one component.'Air'.
Check medium model.");
*/
void logic1_raw_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1476};
  static const MMC_DEFSTRINGLIT(tmp467,102,"If Medium.nXi > 1, then substance 'water' must be present for one component.'Air'.\nCheck medium model.");
  static int tmp468 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",114,3,117,34,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp467)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",114,3,117,34,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp467)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1476;
}

/*
equation index: 1475
type: ALGORITHM

  assert(fanRet.nominalValuesDefineDefaultPressureCurve, "*** Warning: You are using a flow or pressure controlled mover with the
             default pressure curve.
             This leads to approximate calculations of the electrical power
             consumption. Add the correct pressure curve in the record per
             to obtain an accurate computation.
             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
*/
void logic1_raw_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1475};
  static const MMC_DEFSTRINGLIT(tmp469,401,"*** Warning: You are using a flow or pressure controlled mover with the\n             default pressure curve.\n             This leads to approximate calculations of the electrical power\n             consumption. Add the correct pressure curve in the record per\n             to obtain an accurate computation.\n             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
  static int tmp470 = 0;
  if(!tmp470)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[401]] /* fanRet.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(fanRet.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp469)));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp469)));
        }
      }
      tmp470 = 1;
    }
  }
  threadData->lastEquationSolved = 1475;
}

/*
equation index: 1474
type: ALGORITHM

  assert(damRet.k0 > damRet.k1, "k0 must be between k1 and 1e6.");
*/
void logic1_raw_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1474};
  modelica_boolean tmp471;
  static const MMC_DEFSTRINGLIT(tmp472,30,"k0 must be between k1 and 1e6.");
  static int tmp473 = 0;
  {
    tmp471 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* damRet.k0 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.k1 PARAM */));
    if(!tmp471)
    {
      {
        const char* assert_cond = "(damRet.k0 > damRet.k1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",61,3,61,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp472)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",61,3,61,52,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp472)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1474;
}

/*
equation index: 1473
type: ALGORITHM

  assert(damRet.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1473};
  modelica_boolean tmp474;
  static const MMC_DEFSTRINGLIT(tmp475,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp476 = 0;
  {
    tmp474 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.m_flow_turbulent PARAM */),0.0);
    if(!tmp474)
    {
      {
        const char* assert_cond = "(damRet.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",62,3,62,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp475)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",62,3,62,77,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp475)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1473;
}

/*
equation index: 1472
type: ALGORITHM

  assert(damRet.k1 >= 0.2, "k1 must be between 0.2 and 0.5.");
*/
void logic1_raw_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1472};
  modelica_boolean tmp477;
  static const MMC_DEFSTRINGLIT(tmp478,31,"k1 must be between 0.2 and 0.5.");
  static int tmp479 = 0;
  {
    tmp477 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.k1 PARAM */),0.2);
    if(!tmp477)
    {
      {
        const char* assert_cond = "(damRet.k1 >= 0.2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",63,3,63,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp478)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",63,3,63,55,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp478)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1472;
}

/*
equation index: 1471
type: ALGORITHM

  assert(damRet.k1 <= 0.5, "k1 must be between 0.2 and 0.5.");
*/
void logic1_raw_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  modelica_boolean tmp480;
  static const MMC_DEFSTRINGLIT(tmp481,31,"k1 must be between 0.2 and 0.5.");
  static int tmp482 = 0;
  {
    tmp480 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1301]] /* damRet.k1 PARAM */),0.5);
    if(!tmp480)
    {
      {
        const char* assert_cond = "(damRet.k1 <= 0.5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",64,3,64,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp481)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",64,3,64,55,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp481)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1470
type: ALGORITHM

  assert(damRet.k0 <= 1e6, "k0 must be between k1 and 1e6.");
*/
void logic1_raw_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1470};
  modelica_boolean tmp483;
  static const MMC_DEFSTRINGLIT(tmp484,30,"k0 must be between k1 and 1e6.");
  static int tmp485 = 0;
  {
    tmp483 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1300]] /* damRet.k0 PARAM */),1e6);
    if(!tmp483)
    {
      {
        const char* assert_cond = "(damRet.k0 <= 1e6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",65,3,65,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp484)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",65,3,65,54,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp484)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1470;
}

/*
equation index: 1469
type: ALGORITHM

  assert(damEA.k0 > damEA.k1, "k0 must be between k1 and 1e6.");
*/
void logic1_raw_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1469};
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,30,"k0 must be between k1 and 1e6.");
  static int tmp488 = 0;
  {
    tmp486 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* damEA.k0 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.k1 PARAM */));
    if(!tmp486)
    {
      {
        const char* assert_cond = "(damEA.k0 > damEA.k1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",61,3,61,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp487)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",61,3,61,52,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp487)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1469;
}

/*
equation index: 1468
type: ALGORITHM

  assert(damEA.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1468};
  modelica_boolean tmp489;
  static const MMC_DEFSTRINGLIT(tmp490,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp491 = 0;
  {
    tmp489 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.m_flow_turbulent PARAM */),0.0);
    if(!tmp489)
    {
      {
        const char* assert_cond = "(damEA.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",62,3,62,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp490)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",62,3,62,77,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp490)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1468;
}

/*
equation index: 1467
type: ALGORITHM

  assert(damEA.k1 >= 0.2, "k1 must be between 0.2 and 0.5.");
*/
void logic1_raw_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,31,"k1 must be between 0.2 and 0.5.");
  static int tmp494 = 0;
  {
    tmp492 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.k1 PARAM */),0.2);
    if(!tmp492)
    {
      {
        const char* assert_cond = "(damEA.k1 >= 0.2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",63,3,63,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp493)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",63,3,63,55,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp493)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1467;
}

/*
equation index: 1466
type: ALGORITHM

  assert(damEA.k1 <= 0.5, "k1 must be between 0.2 and 0.5.");
*/
void logic1_raw_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  modelica_boolean tmp495;
  static const MMC_DEFSTRINGLIT(tmp496,31,"k1 must be between 0.2 and 0.5.");
  static int tmp497 = 0;
  {
    tmp495 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.k1 PARAM */),0.5);
    if(!tmp495)
    {
      {
        const char* assert_cond = "(damEA.k1 <= 0.5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",64,3,64,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp496)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",64,3,64,55,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp496)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1465
type: ALGORITHM

  assert(damEA.k0 <= 1e6, "k0 must be between k1 and 1e6.");
*/
void logic1_raw_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,30,"k0 must be between k1 and 1e6.");
  static int tmp500 = 0;
  {
    tmp498 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* damEA.k0 PARAM */),1e6);
    if(!tmp498)
    {
      {
        const char* assert_cond = "(damEA.k0 <= 1e6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",65,3,65,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp499)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",65,3,65,54,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp499)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1464
type: ALGORITHM

  assert(damOA.k0 > damOA.k1, "k0 must be between k1 and 1e6.");
*/
void logic1_raw_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  modelica_boolean tmp501;
  static const MMC_DEFSTRINGLIT(tmp502,30,"k0 must be between k1 and 1e6.");
  static int tmp503 = 0;
  {
    tmp501 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* damOA.k0 PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.k1 PARAM */));
    if(!tmp501)
    {
      {
        const char* assert_cond = "(damOA.k0 > damOA.k1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",61,3,61,52,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp502)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",61,3,61,52,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp502)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1463
type: ALGORITHM

  assert(damOA.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1463};
  modelica_boolean tmp504;
  static const MMC_DEFSTRINGLIT(tmp505,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp506 = 0;
  {
    tmp504 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.m_flow_turbulent PARAM */),0.0);
    if(!tmp504)
    {
      {
        const char* assert_cond = "(damOA.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",62,3,62,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp505)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",62,3,62,77,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp505)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1463;
}

/*
equation index: 1462
type: ALGORITHM

  assert(damOA.k1 >= 0.2, "k1 must be between 0.2 and 0.5.");
*/
void logic1_raw_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  modelica_boolean tmp507;
  static const MMC_DEFSTRINGLIT(tmp508,31,"k1 must be between 0.2 and 0.5.");
  static int tmp509 = 0;
  {
    tmp507 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.k1 PARAM */),0.2);
    if(!tmp507)
    {
      {
        const char* assert_cond = "(damOA.k1 >= 0.2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",63,3,63,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp508)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",63,3,63,55,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp508)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1462;
}

/*
equation index: 1461
type: ALGORITHM

  assert(damOA.k1 <= 0.5, "k1 must be between 0.2 and 0.5.");
*/
void logic1_raw_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1461};
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,31,"k1 must be between 0.2 and 0.5.");
  static int tmp512 = 0;
  {
    tmp510 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.k1 PARAM */),0.5);
    if(!tmp510)
    {
      {
        const char* assert_cond = "(damOA.k1 <= 0.5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",64,3,64,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp511)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",64,3,64,55,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp511)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1461;
}

/*
equation index: 1460
type: ALGORITHM

  assert(damOA.k0 <= 1e6, "k0 must be between k1 and 1e6.");
*/
void logic1_raw_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  modelica_boolean tmp513;
  static const MMC_DEFSTRINGLIT(tmp514,30,"k0 must be between k1 and 1e6.");
  static int tmp515 = 0;
  {
    tmp513 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* damOA.k0 PARAM */),1e6);
    if(!tmp513)
    {
      {
        const char* assert_cond = "(damOA.k0 <= 1e6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",65,3,65,54,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp514)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/BaseClasses/PartialDamperExponential.mo",65,3,65,54,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp514)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1459
type: ALGORITHM

  assert(junRet.res1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1459};
  modelica_boolean tmp516;
  static const MMC_DEFSTRINGLIT(tmp517,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp518 = 0;
  {
    tmp516 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2077]] /* junRet.res1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp516)
    {
      {
        const char* assert_cond = "(junRet.res1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp517)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp517)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1459;
}

/*
equation index: 1458
type: ALGORITHM

  assert(junRet.res2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1458};
  modelica_boolean tmp519;
  static const MMC_DEFSTRINGLIT(tmp520,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp521 = 0;
  {
    tmp519 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2093]] /* junRet.res2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp519)
    {
      {
        const char* assert_cond = "(junRet.res2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp520)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp520)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1458;
}

/*
equation index: 1457
type: ALGORITHM

  assert(junRet.res3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1457};
  modelica_boolean tmp522;
  static const MMC_DEFSTRINGLIT(tmp523,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp524 = 0;
  {
    tmp522 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2109]] /* junRet.res3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp522)
    {
      {
        const char* assert_cond = "(junRet.res3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp523)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp523)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1457;
}

/*
equation index: 1456
type: ALGORITHM

  assert(true, "In logic1.junRet.vol.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1456};
  static const MMC_DEFSTRINGLIT(tmp525,152,"In logic1.junRet.vol.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp526 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp525)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp525)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1456;
}

/*
equation index: 1455
type: ALGORITHM

  assert(out.x_pTphi.found, "Did not find medium species 'water' in the medium model. Change medium model.");
*/
void logic1_raw_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1455};
  static const MMC_DEFSTRINGLIT(tmp527,77,"Did not find medium species 'water' in the medium model. Change medium model.");
  static int tmp528 = 0;
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[662]] /* out.x_pTphi.found PARAM */))
    {
      {
        const char* assert_cond = "(out.x_pTphi.found)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/X_pTphi.mo",33,3,33,97,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp527)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Utilities/Psychrometrics/X_pTphi.mo",33,3,33,97,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp527)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1455;
}

/*
equation index: 1454
type: ALGORITHM

  assert(junOut.res1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1454};
  modelica_boolean tmp529;
  static const MMC_DEFSTRINGLIT(tmp530,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp531 = 0;
  {
    tmp529 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1978]] /* junOut.res1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp529)
    {
      {
        const char* assert_cond = "(junOut.res1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp530)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp530)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1454;
}

/*
equation index: 1453
type: ALGORITHM

  assert(junOut.res2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1453};
  modelica_boolean tmp532;
  static const MMC_DEFSTRINGLIT(tmp533,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp534 = 0;
  {
    tmp532 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1994]] /* junOut.res2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp532)
    {
      {
        const char* assert_cond = "(junOut.res2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp533)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp533)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1453;
}

/*
equation index: 1452
type: ALGORITHM

  assert(junOut.res3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  modelica_boolean tmp535;
  static const MMC_DEFSTRINGLIT(tmp536,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp537 = 0;
  {
    tmp535 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2010]] /* junOut.res3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp535)
    {
      {
        const char* assert_cond = "(junOut.res3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp536)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp536)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1452;
}

/*
equation index: 1451
type: ALGORITHM

  assert(true, "In logic1.junOut.vol.dynBal:
         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.
         Check medium model.");
*/
void logic1_raw_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1451};
  static const MMC_DEFSTRINGLIT(tmp538,152,"In logic1.junOut.vol.dynBal:\n         If Medium.nXi > 1, then substance 'water' must be present for one component of 'Air'.\n         Check medium model.");
  static int tmp539 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp538)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/ConservationEquation.mo",171,3,175,31,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp538)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1451;
}

/*
equation index: 1450
type: ALGORITHM

  assert(pumCHW2.nominalValuesDefineDefaultPressureCurve, "*** Warning: You are using a flow or pressure controlled mover with the
             default pressure curve.
             This leads to approximate calculations of the electrical power
             consumption. Add the correct pressure curve in the record per
             to obtain an accurate computation.
             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
*/
void logic1_raw_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1450};
  static const MMC_DEFSTRINGLIT(tmp540,401,"*** Warning: You are using a flow or pressure controlled mover with the\n             default pressure curve.\n             This leads to approximate calculations of the electrical power\n             consumption. Add the correct pressure curve in the record per\n             to obtain an accurate computation.\n             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
  static int tmp541 = 0;
  if(!tmp541)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[719]] /* pumCHW2.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(pumCHW2.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp540)));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp540)));
        }
      }
      tmp541 = 1;
    }
  }
  threadData->lastEquationSolved = 1450;
}

/*
equation index: 1449
type: ALGORITHM

  assert(val8.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  modelica_boolean tmp542;
  static const MMC_DEFSTRINGLIT(tmp543,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp544 = 0;
  {
    tmp542 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* val8.l PARAM */),0.0);
    if(!tmp542)
    {
      {
        const char* assert_cond = "(val8.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp543)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp543)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1448
type: ALGORITHM

  assert(cooTow2.preDro.m_flow_turbulent > 0.0, "m_flow_turbulent must be bigger than zero.");
*/
void logic1_raw_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp547 = 0;
  {
    tmp545 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* cooTow2.preDro.m_flow_turbulent PARAM */),0.0);
    if(!tmp545)
    {
      {
        const char* assert_cond = "(cooTow2.preDro.m_flow_turbulent > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp546)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",27,4,27,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp546)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1447
type: ALGORITHM

  assert(cooTow2.preDro.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  modelica_boolean tmp548;
  static const MMC_DEFSTRINGLIT(tmp549,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp550 = 0;
  {
    tmp548 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp548)
    {
      {
        const char* assert_cond = "(cooTow2.preDro.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp549)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp549)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1446
type: ALGORITHM

  assert(pumCW2.nominalValuesDefineDefaultPressureCurve, "*** Warning: You are using a flow or pressure controlled mover with the
             default pressure curve.
             This leads to approximate calculations of the electrical power
             consumption. Add the correct pressure curve in the record per
             to obtain an accurate computation.
             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
*/
void logic1_raw_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1446};
  static const MMC_DEFSTRINGLIT(tmp551,401,"*** Warning: You are using a flow or pressure controlled mover with the\n             default pressure curve.\n             This leads to approximate calculations of the electrical power\n             consumption. Add the correct pressure curve in the record per\n             to obtain an accurate computation.\n             Setting nominalValuesDefineDefaultPressureCurve=true will suppress this warning.");
  static int tmp552 = 0;
  if(!tmp552)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[797]] /* pumCW2.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(pumCW2.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp551)));
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",352,3,361,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp551)));
        }
      }
      tmp552 = 1;
    }
  }
  threadData->lastEquationSolved = 1446;
}

/*
equation index: 1445
type: ALGORITHM

  assert(val7.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1445};
  modelica_boolean tmp553;
  static const MMC_DEFSTRINGLIT(tmp554,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp555 = 0;
  {
    tmp553 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.l PARAM */),0.0);
    if(!tmp553)
    {
      {
        const char* assert_cond = "(val7.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp554)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp554)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1445;
}

/*
equation index: 1444
type: ALGORITHM

  assert(chi2.preDro1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1444};
  modelica_boolean tmp556;
  static const MMC_DEFSTRINGLIT(tmp557,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp558 = 0;
  {
    tmp556 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.preDro1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp556)
    {
      {
        const char* assert_cond = "(chi2.preDro1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp557)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp557)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1444;
}

/*
equation index: 1443
type: ALGORITHM

  assert(chi2.preDro2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  modelica_boolean tmp559;
  static const MMC_DEFSTRINGLIT(tmp560,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp561 = 0;
  {
    tmp559 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* chi2.preDro2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp559)
    {
      {
        const char* assert_cond = "(chi2.preDro2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp560)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp560)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1442
type: ALGORITHM

  Buildings.Fluid.Chillers.BaseClasses.warnIfPerformanceOutOfBounds(Buildings.Utilities.Math.Functions.biquadratic(chi2.per.capFunT, chi2.TEvaLvg_nominal_degC, chi2.TConEnt_nominal_degC), "Capacity as function of temperature ", "per.capFunT");
*/
void logic1_raw_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  real_array tmp562;
  static const MMC_DEFSTRINGLIT(tmp563,36,"Capacity as function of temperature ");
  static const MMC_DEFSTRINGLIT(tmp564,11,"per.capFunT");
  real_array_create(&tmp562, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* chi2.per.capFunT[1] PARAM */))), 1, (_index_t)6);
  omc_Buildings_Fluid_Chillers_BaseClasses_warnIfPerformanceOutOfBounds(threadData, omc_Buildings_Utilities_Math_Functions_biquadratic(threadData, tmp562, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* chi2.TEvaLvg_nominal_degC PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[263]] /* chi2.TConEnt_nominal_degC PARAM */)), MMC_REFSTRINGLIT(tmp563), MMC_REFSTRINGLIT(tmp564));
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1441
type: ALGORITHM

  assert(chi2.QEva_flow_nominal < 0.0, "Parameter QEva_flow_nominal must be smaller than zero.");
*/
void logic1_raw_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  modelica_boolean tmp565;
  static const MMC_DEFSTRINGLIT(tmp566,54,"Parameter QEva_flow_nominal must be smaller than zero.");
  static int tmp567 = 0;
  {
    tmp565 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* chi2.QEva_flow_nominal PARAM */),0.0);
    if(!tmp565)
    {
      {
        const char* assert_cond = "(chi2.QEva_flow_nominal < 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",93,3,93,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp566)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",93,3,93,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp566)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1440
type: ALGORITHM

  assert(chi2.Q_flow_small < 0.0, "Parameter Q_flow_small must be smaller than zero.");
*/
void logic1_raw_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  modelica_boolean tmp568;
  static const MMC_DEFSTRINGLIT(tmp569,49,"Parameter Q_flow_small must be smaller than zero.");
  static int tmp570 = 0;
  {
    tmp568 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* chi2.Q_flow_small PARAM */),0.0);
    if(!tmp568)
    {
      {
        const char* assert_cond = "(chi2.Q_flow_small < 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",94,3,94,80,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp569)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",94,3,94,80,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp569)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1439
type: ALGORITHM

  assert(chi2.PLRMinUnl >= chi2.PLRMin, "Parameter PLRMinUnl must be bigger or equal to PLRMin");
*/
void logic1_raw_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1439};
  modelica_boolean tmp571;
  static const MMC_DEFSTRINGLIT(tmp572,53,"Parameter PLRMinUnl must be bigger or equal to PLRMin");
  static int tmp573 = 0;
  {
    tmp571 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* chi2.PLRMinUnl PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi2.PLRMin PARAM */));
    if(!tmp571)
    {
      {
        const char* assert_cond = "(chi2.PLRMinUnl >= chi2.PLRMin)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",95,3,95,87,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp572)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",95,3,95,87,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp572)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1439;
}

/*
equation index: 1438
type: ALGORITHM

  assert(chi2.PLRMax > chi2.PLRMinUnl, "Parameter PLRMax must be bigger than PLRMinUnl");
*/
void logic1_raw_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  modelica_boolean tmp574;
  static const MMC_DEFSTRINGLIT(tmp575,46,"Parameter PLRMax must be bigger than PLRMinUnl");
  static int tmp576 = 0;
  {
    tmp574 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi2.PLRMax PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* chi2.PLRMinUnl PARAM */));
    if(!tmp574)
    {
      {
        const char* assert_cond = "(chi2.PLRMax > chi2.PLRMinUnl)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",96,3,96,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp575)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Chillers/BaseClasses/PartialElectric.mo",96,3,96,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp575)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1437
type: ALGORITHM

  assert(junCHWSup.res1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1437};
  modelica_boolean tmp577;
  static const MMC_DEFSTRINGLIT(tmp578,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp579 = 0;
  {
    tmp577 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1811]] /* junCHWSup.res1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp577)
    {
      {
        const char* assert_cond = "(junCHWSup.res1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp578)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp578)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1437;
}

/*
equation index: 1436
type: ALGORITHM

  assert(junCHWSup.res2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1436};
  modelica_boolean tmp580;
  static const MMC_DEFSTRINGLIT(tmp581,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp582 = 0;
  {
    tmp580 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1825]] /* junCHWSup.res2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp580)
    {
      {
        const char* assert_cond = "(junCHWSup.res2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp581)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp581)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1436;
}

/*
equation index: 1435
type: ALGORITHM

  assert(junCHWSup.res3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1435};
  modelica_boolean tmp583;
  static const MMC_DEFSTRINGLIT(tmp584,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp585 = 0;
  {
    tmp583 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1839]] /* junCHWSup.res3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp583)
    {
      {
        const char* assert_cond = "(junCHWSup.res3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp584)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp584)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1435;
}

/*
equation index: 1434
type: ALGORITHM

  assert(junCHWRet.res1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1434};
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp588 = 0;
  {
    tmp586 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1645]] /* junCHWRet.res1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp586)
    {
      {
        const char* assert_cond = "(junCHWRet.res1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp587)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp587)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1434;
}

/*
equation index: 1433
type: ALGORITHM

  assert(junCHWRet.res2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  modelica_boolean tmp589;
  static const MMC_DEFSTRINGLIT(tmp590,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp591 = 0;
  {
    tmp589 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1659]] /* junCHWRet.res2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp589)
    {
      {
        const char* assert_cond = "(junCHWRet.res2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp590)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp590)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1433;
}

/*
equation index: 1432
type: ALGORITHM

  assert(junCHWRet.res3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  modelica_boolean tmp592;
  static const MMC_DEFSTRINGLIT(tmp593,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp594 = 0;
  {
    tmp592 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1673]] /* junCHWRet.res3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp592)
    {
      {
        const char* assert_cond = "(junCHWRet.res3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp593)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp593)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1431
type: ALGORITHM

  assert(junCHWRet2.res1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1431};
  modelica_boolean tmp595;
  static const MMC_DEFSTRINGLIT(tmp596,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp597 = 0;
  {
    tmp595 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1728]] /* junCHWRet2.res1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp595)
    {
      {
        const char* assert_cond = "(junCHWRet2.res1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp596)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp596)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1431;
}

/*
equation index: 1430
type: ALGORITHM

  assert(junCHWRet2.res2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  modelica_boolean tmp598;
  static const MMC_DEFSTRINGLIT(tmp599,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp600 = 0;
  {
    tmp598 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1742]] /* junCHWRet2.res2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp598)
    {
      {
        const char* assert_cond = "(junCHWRet2.res2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp599)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp599)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1429
type: ALGORITHM

  assert(junCHWRet2.res3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1429};
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp603 = 0;
  {
    tmp601 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* junCHWRet2.res3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp601)
    {
      {
        const char* assert_cond = "(junCHWRet2.res3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp602)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp602)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1429;
}

/*
equation index: 1428
type: ALGORITHM

  assert(junCHWSup2.res1.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  modelica_boolean tmp604;
  static const MMC_DEFSTRINGLIT(tmp605,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp606 = 0;
  {
    tmp604 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junCHWSup2.res1.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp604)
    {
      {
        const char* assert_cond = "(junCHWSup2.res1.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp605)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp605)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1427
type: ALGORITHM

  assert(junCHWSup2.res2.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1427};
  modelica_boolean tmp607;
  static const MMC_DEFSTRINGLIT(tmp608,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp609 = 0;
  {
    tmp607 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junCHWSup2.res2.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp607)
    {
      {
        const char* assert_cond = "(junCHWSup2.res2.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp608)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp608)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1427;
}

/*
equation index: 1426
type: ALGORITHM

  assert(junCHWSup2.res3.m_flow_nominal_pos > 0.0, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void logic1_raw_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  modelica_boolean tmp610;
  static const MMC_DEFSTRINGLIT(tmp611,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp612 = 0;
  {
    tmp610 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junCHWSup2.res3.m_flow_nominal_pos PARAM */),0.0);
    if(!tmp610)
    {
      {
        const char* assert_cond = "(junCHWSup2.res3.m_flow_nominal_pos > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp611)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/FixedResistances/PressureDrop.mo",30,2,30,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp611)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1426;
}

/*
equation index: 1425
type: ALGORITHM

  assert(val8_2.l > 0.0, "Valve leakage parameter l must be bigger than zero.");
*/
void logic1_raw_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  modelica_boolean tmp613;
  static const MMC_DEFSTRINGLIT(tmp614,51,"Valve leakage parameter l must be bigger than zero.");
  static int tmp615 = 0;
  {
    tmp613 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.l PARAM */),0.0);
    if(!tmp613)
    {
      {
        const char* assert_cond = "(val8_2.l > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp614)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Actuators/Valves/TwoWayLinear.mo",8,3,8,71,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp614)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1424
type: ALGORITHM

  assert(noEvent(0.0 < 202908.0 * max(0.001 * fanSup.vol.steBal.m_flow_small, 55.989691542288554)), "In logic1.fanSup.vol.steBal:
   The heat flow rate equals " + String(0.0, 6, 0, true) + " W and the mass flow rate equals " + String(55.989691542288554, 6, 0, true) + " kg/s,
   which results in a temperature difference " + String(0.0, 6, 0, true) + " K > dTMax=" + String(200.0, 6, 0, true) + " K.
   This may indicate that energy is not conserved for small mass flow rates.
   The implementation may require prescribedHeatFlowRate = false.");
*/
void logic1_raw_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,58,"In logic1.fanSup.vol.steBal:\n   The heat flow rate equals ");
  modelica_string tmp618;
  modelica_metatype tmpMeta619;
  static const MMC_DEFSTRINGLIT(tmp620,33," W and the mass flow rate equals ");
  modelica_metatype tmpMeta621;
  modelica_string tmp622;
  modelica_metatype tmpMeta623;
  static const MMC_DEFSTRINGLIT(tmp624,52," kg/s,\n   which results in a temperature difference ");
  modelica_metatype tmpMeta625;
  modelica_string tmp626;
  modelica_metatype tmpMeta627;
  static const MMC_DEFSTRINGLIT(tmp628,11," K > dTMax=");
  modelica_metatype tmpMeta629;
  modelica_string tmp630;
  modelica_metatype tmpMeta631;
  static const MMC_DEFSTRINGLIT(tmp632,146," K.\n   This may indicate that energy is not conserved for small mass flow rates.\n   The implementation may require prescribedHeatFlowRate = false.");
  modelica_metatype tmpMeta633;
  static int tmp634 = 0;
  {
    tmp616 = Less(0.0,(202908.0) * (fmax((0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1615]] /* fanSup.vol.steBal.m_flow_small PARAM */)),55.989691542288554)));
    if(!tmp616)
    {
      tmp618 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta619 = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      tmpMeta621 = stringAppend(tmpMeta619,MMC_REFSTRINGLIT(tmp620));
      tmp622 = modelica_real_to_modelica_string(55.989691542288554, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta623 = stringAppend(tmpMeta621,tmp622);
      tmpMeta625 = stringAppend(tmpMeta623,MMC_REFSTRINGLIT(tmp624));
      tmp626 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta627 = stringAppend(tmpMeta625,tmp626);
      tmpMeta629 = stringAppend(tmpMeta627,MMC_REFSTRINGLIT(tmp628));
      tmp630 = modelica_real_to_modelica_string(200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta631 = stringAppend(tmpMeta629,tmp630);
      tmpMeta633 = stringAppend(tmpMeta631,MMC_REFSTRINGLIT(tmp632));
      {
        const char* assert_cond = "(noEvent(0.0 < 202908.0 * max(0.001 * fanSup.vol.steBal.m_flow_small, 55.989691542288554)))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",148,5,156,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta633));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",148,5,156,68,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta633));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1423
type: ALGORITHM

  assert(weaData.pAtm > 3100.0, "Pressure out of bounds.
   PIn = " + String(weaData.pAtm, 6, 0, true));
*/
void logic1_raw_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  modelica_boolean tmp635;
  static const MMC_DEFSTRINGLIT(tmp636,33,"Pressure out of bounds.\n   PIn = ");
  modelica_string tmp637;
  modelica_metatype tmpMeta638;
  static int tmp639 = 0;
  {
    tmp635 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */),3100.0);
    if(!tmp635)
    {
      tmp637 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta638 = stringAppend(MMC_REFSTRINGLIT(tmp636),tmp637);
      {
        const char* assert_cond = "(weaData.pAtm > 3100.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",16,3,16,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta638));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",16,3,16,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta638));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1422
type: ALGORITHM

  assert(weaData.pAtm < 1.2e5, "Pressure out of bounds.
   PIn = " + String(weaData.pAtm, 6, 0, true));
*/
void logic1_raw_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  modelica_boolean tmp640;
  static const MMC_DEFSTRINGLIT(tmp641,33,"Pressure out of bounds.\n   PIn = ");
  modelica_string tmp642;
  modelica_metatype tmpMeta643;
  static int tmp644 = 0;
  {
    tmp640 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */),1.2e5);
    if(!tmp640)
    {
      tmp642 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta643 = stringAppend(MMC_REFSTRINGLIT(tmp641),tmp642);
      {
        const char* assert_cond = "(weaData.pAtm < 1.2e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,17,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta643));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,17,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta643));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1421
type: ALGORITHM

  assert(noEvent(0.0 < 202908.0 * max(0.001 * fanRet.vol.steBal.m_flow_small, 55.989691542288554)), "In logic1.fanRet.vol.steBal:
   The heat flow rate equals " + String(0.0, 6, 0, true) + " W and the mass flow rate equals " + String(55.989691542288554, 6, 0, true) + " kg/s,
   which results in a temperature difference " + String(0.0, 6, 0, true) + " K > dTMax=" + String(200.0, 6, 0, true) + " K.
   This may indicate that energy is not conserved for small mass flow rates.
   The implementation may require prescribedHeatFlowRate = false.");
*/
void logic1_raw_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1421};
  modelica_boolean tmp645;
  static const MMC_DEFSTRINGLIT(tmp646,58,"In logic1.fanRet.vol.steBal:\n   The heat flow rate equals ");
  modelica_string tmp647;
  modelica_metatype tmpMeta648;
  static const MMC_DEFSTRINGLIT(tmp649,33," W and the mass flow rate equals ");
  modelica_metatype tmpMeta650;
  modelica_string tmp651;
  modelica_metatype tmpMeta652;
  static const MMC_DEFSTRINGLIT(tmp653,52," kg/s,\n   which results in a temperature difference ");
  modelica_metatype tmpMeta654;
  modelica_string tmp655;
  modelica_metatype tmpMeta656;
  static const MMC_DEFSTRINGLIT(tmp657,11," K > dTMax=");
  modelica_metatype tmpMeta658;
  modelica_string tmp659;
  modelica_metatype tmpMeta660;
  static const MMC_DEFSTRINGLIT(tmp661,146," K.\n   This may indicate that energy is not conserved for small mass flow rates.\n   The implementation may require prescribedHeatFlowRate = false.");
  modelica_metatype tmpMeta662;
  static int tmp663 = 0;
  {
    tmp645 = Less(0.0,(202908.0) * (fmax((0.001) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1478]] /* fanRet.vol.steBal.m_flow_small PARAM */)),55.989691542288554)));
    if(!tmp645)
    {
      tmp647 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta648 = stringAppend(MMC_REFSTRINGLIT(tmp646),tmp647);
      tmpMeta650 = stringAppend(tmpMeta648,MMC_REFSTRINGLIT(tmp649));
      tmp651 = modelica_real_to_modelica_string(55.989691542288554, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta652 = stringAppend(tmpMeta650,tmp651);
      tmpMeta654 = stringAppend(tmpMeta652,MMC_REFSTRINGLIT(tmp653));
      tmp655 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta656 = stringAppend(tmpMeta654,tmp655);
      tmpMeta658 = stringAppend(tmpMeta656,MMC_REFSTRINGLIT(tmp657));
      tmp659 = modelica_real_to_modelica_string(200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta660 = stringAppend(tmpMeta658,tmp659);
      tmpMeta662 = stringAppend(tmpMeta660,MMC_REFSTRINGLIT(tmp661));
      {
        const char* assert_cond = "(noEvent(0.0 < 202908.0 * max(0.001 * fanRet.vol.steBal.m_flow_small, 55.989691542288554)))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",148,5,156,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta662));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/Interfaces/StaticTwoPortConservationEquation.mo",148,5,156,68,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta662));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1421;
}

/*
equation index: 1420
type: ALGORITHM

  assert(weaData.conTim1.canRepeatWeatherFile or time - weaData.conTim1.weaDatEndTim < 1800.0, "In logic1.weaData.conTim1: Insufficient weather data provided for the desired simulation period.
    Based on the provided weather file the following start time " + String(weaData.conTim1.weaDatStaTim, 6, 0, true) + " and end time " + String(weaData.conTim1.weaDatEndTim, 6, 0, true) + " (last time stamp + average increment) for the weather data were determined");
*/
void logic1_raw_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  modelica_boolean tmp664;
  static const MMC_DEFSTRINGLIT(tmp665,161,"In logic1.weaData.conTim1: Insufficient weather data provided for the desired simulation period.\n    Based on the provided weather file the following start time ");
  modelica_string tmp666;
  modelica_metatype tmpMeta667;
  static const MMC_DEFSTRINGLIT(tmp668,14," and end time ");
  modelica_metatype tmpMeta669;
  modelica_string tmp670;
  modelica_metatype tmpMeta671;
  static const MMC_DEFSTRINGLIT(tmp672,75," (last time stamp + average increment) for the weather data were determined");
  modelica_metatype tmpMeta673;
  static int tmp674 = 0;
  {
    tmp664 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* weaData.conTim1.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) || tmp664))
    {
      tmp666 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2899]] /* weaData.conTim1.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta667 = stringAppend(MMC_REFSTRINGLIT(tmp665),tmp666);
      tmpMeta669 = stringAppend(tmpMeta667,MMC_REFSTRINGLIT(tmp668));
      tmp670 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2898]] /* weaData.conTim1.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta671 = stringAppend(tmpMeta669,tmp670);
      tmpMeta673 = stringAppend(tmpMeta671,MMC_REFSTRINGLIT(tmp672));
      {
        const char* assert_cond = "(weaData.conTim1.canRepeatWeatherFile or time - weaData.conTim1.weaDatEndTim < 1800.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",35,3,39,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta673));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",35,3,39,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta673));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1419
type: ALGORITHM

  assert(weaData.conTim.canRepeatWeatherFile or time - weaData.conTim.weaDatEndTim < 1800.0, "In logic1.weaData.conTim: Insufficient weather data provided for the desired simulation period.
    Based on the provided weather file the following start time " + String(weaData.conTim.weaDatStaTim, 6, 0, true) + " and end time " + String(weaData.conTim.weaDatEndTim, 6, 0, true) + " (last time stamp + average increment) for the weather data were determined");
*/
void logic1_raw_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1419};
  modelica_boolean tmp675;
  static const MMC_DEFSTRINGLIT(tmp676,160,"In logic1.weaData.conTim: Insufficient weather data provided for the desired simulation period.\n    Based on the provided weather file the following start time ");
  modelica_string tmp677;
  modelica_metatype tmpMeta678;
  static const MMC_DEFSTRINGLIT(tmp679,14," and end time ");
  modelica_metatype tmpMeta680;
  modelica_string tmp681;
  modelica_metatype tmpMeta682;
  static const MMC_DEFSTRINGLIT(tmp683,75," (last time stamp + average increment) for the weather data were determined");
  modelica_metatype tmpMeta684;
  static int tmp685 = 0;
  {
    tmp675 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* weaData.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */) || tmp675))
    {
      tmp677 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* weaData.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta678 = stringAppend(MMC_REFSTRINGLIT(tmp676),tmp677);
      tmpMeta680 = stringAppend(tmpMeta678,MMC_REFSTRINGLIT(tmp679));
      tmp681 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* weaData.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta682 = stringAppend(tmpMeta680,tmp681);
      tmpMeta684 = stringAppend(tmpMeta682,MMC_REFSTRINGLIT(tmp683));
      {
        const char* assert_cond = "(weaData.conTim.canRepeatWeatherFile or time - weaData.conTim.weaDatEndTim < 1800.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",35,3,39,26,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta684));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",35,3,39,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta684));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1419;
}

/*
equation index: 1418
type: ALGORITHM

  assert(abs(1.0 - Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, 1.0, cooTow2.fanRelPowDer)) < 1e-4, "The fan relative power consumption must be one for y=1.
   Obtained fanRelPow(1) = " + String(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, 1.0, cooTow2.fanRelPowDer), 6, 0, true) + "
   You need to choose different values for the parameter fanRelPow." + "
   To increase the fan power, change fraPFan_nominal or PFan_nominal.");
*/
void logic1_raw_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  real_array tmp686;
  real_array tmp687;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp688;
  real_array tmp689;
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,83,"The fan relative power consumption must be one for y=1.\n   Obtained fanRelPow(1) = ");
  modelica_string tmp692;
  real_array tmp693;
  real_array tmp694;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp695;
  real_array tmp696;
  modelica_metatype tmpMeta697;
  static const MMC_DEFSTRINGLIT(tmp698,68,"\n   You need to choose different values for the parameter fanRelPow.");
  modelica_metatype tmpMeta699;
  static const MMC_DEFSTRINGLIT(tmp700,70,"\n   To increase the fan power, change fraPFan_nominal or PFan_nominal.");
  modelica_metatype tmpMeta701;
  static int tmp702 = 0;
  {
    real_array_create(&tmp686, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
    real_array_create(&tmp687, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
    Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp688, tmp686, tmp687);
    real_array_create(&tmp689, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
    tmp690 = Less(fabs(1.0 - omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp688, 1.0, tmp689)),1e-4);
    if(!tmp690)
    {
      real_array_create(&tmp693, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
      real_array_create(&tmp694, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
      Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp695, tmp693, tmp694);
      real_array_create(&tmp696, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
      tmp692 = modelica_real_to_modelica_string(omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp695, 1.0, tmp696), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta697 = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      tmpMeta699 = stringAppend(tmpMeta697,MMC_REFSTRINGLIT(tmp698));
      tmpMeta701 = stringAppend(tmpMeta699,MMC_REFSTRINGLIT(tmp700));
      {
        const char* assert_cond = "(abs(1.0 - Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, 1.0, cooTow2.fanRelPowDer)) < 1e-4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",98,3,101,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta701));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",98,3,101,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta701));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1418;
}

/*
equation index: 1417
type: ALGORITHM

  assert(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, cooTow2.yMin, cooTow2.fanRelPowDer) > -1e-4, "The fan relative power consumption must be non-negative for y=0.
   Obtained fanRelPow(0) = " + String(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, cooTow2.yMin, cooTow2.fanRelPowDer), 6, 0, true) + "
   You need to choose different values for the parameter fanRelPow.");
*/
void logic1_raw_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  real_array tmp703;
  real_array tmp704;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp705;
  real_array tmp706;
  modelica_boolean tmp707;
  static const MMC_DEFSTRINGLIT(tmp708,92,"The fan relative power consumption must be non-negative for y=0.\n   Obtained fanRelPow(0) = ");
  modelica_string tmp709;
  real_array tmp710;
  real_array tmp711;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp712;
  real_array tmp713;
  modelica_metatype tmpMeta714;
  static const MMC_DEFSTRINGLIT(tmp715,68,"\n   You need to choose different values for the parameter fanRelPow.");
  modelica_metatype tmpMeta716;
  static int tmp717 = 0;
  {
    real_array_create(&tmp703, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
    real_array_create(&tmp704, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
    Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp705, tmp703, tmp704);
    real_array_create(&tmp706, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
    tmp707 = Greater(omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp705, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */), tmp706),-1e-4);
    if(!tmp707)
    {
      real_array_create(&tmp710, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1143]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
      real_array_create(&tmp711, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1138]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
      Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp712, tmp710, tmp711);
      real_array_create(&tmp713, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
      tmp709 = modelica_real_to_modelica_string(omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp712, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */), tmp713), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta714 = stringAppend(MMC_REFSTRINGLIT(tmp708),tmp709);
      tmpMeta716 = stringAppend(tmpMeta714,MMC_REFSTRINGLIT(tmp715));
      {
        const char* assert_cond = "(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow2.fanRelPow, cooTow2.yMin, cooTow2.fanRelPowDer) > -1e-4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",94,3,97,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta716));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",94,3,97,77,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta716));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1416
type: ALGORITHM

  assert(abs(1.0 - Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, 1.0, cooTow.fanRelPowDer)) < 1e-4, "The fan relative power consumption must be one for y=1.
   Obtained fanRelPow(1) = " + String(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, 1.0, cooTow.fanRelPowDer), 6, 0, true) + "
   You need to choose different values for the parameter fanRelPow." + "
   To increase the fan power, change fraPFan_nominal or PFan_nominal.");
*/
void logic1_raw_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  real_array tmp718;
  real_array tmp719;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp720;
  real_array tmp721;
  modelica_boolean tmp722;
  static const MMC_DEFSTRINGLIT(tmp723,83,"The fan relative power consumption must be one for y=1.\n   Obtained fanRelPow(1) = ");
  modelica_string tmp724;
  real_array tmp725;
  real_array tmp726;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp727;
  real_array tmp728;
  modelica_metatype tmpMeta729;
  static const MMC_DEFSTRINGLIT(tmp730,68,"\n   You need to choose different values for the parameter fanRelPow.");
  modelica_metatype tmpMeta731;
  static const MMC_DEFSTRINGLIT(tmp732,70,"\n   To increase the fan power, change fraPFan_nominal or PFan_nominal.");
  modelica_metatype tmpMeta733;
  static int tmp734 = 0;
  {
    real_array_create(&tmp718, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
    real_array_create(&tmp719, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
    Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp720, tmp718, tmp719);
    real_array_create(&tmp721, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
    tmp722 = Less(fabs(1.0 - omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp720, 1.0, tmp721)),1e-4);
    if(!tmp722)
    {
      real_array_create(&tmp725, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
      real_array_create(&tmp726, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
      Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp727, tmp725, tmp726);
      real_array_create(&tmp728, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
      tmp724 = modelica_real_to_modelica_string(omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp727, 1.0, tmp728), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta729 = stringAppend(MMC_REFSTRINGLIT(tmp723),tmp724);
      tmpMeta731 = stringAppend(tmpMeta729,MMC_REFSTRINGLIT(tmp730));
      tmpMeta733 = stringAppend(tmpMeta731,MMC_REFSTRINGLIT(tmp732));
      {
        const char* assert_cond = "(abs(1.0 - Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, 1.0, cooTow.fanRelPowDer)) < 1e-4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",98,3,101,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta733));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",98,3,101,79,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta733));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1415
type: ALGORITHM

  assert(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, cooTow.yMin, cooTow.fanRelPowDer) > -1e-4, "The fan relative power consumption must be non-negative for y=0.
   Obtained fanRelPow(0) = " + String(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, cooTow.yMin, cooTow.fanRelPowDer), 6, 0, true) + "
   You need to choose different values for the parameter fanRelPow.");
*/
void logic1_raw_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  real_array tmp735;
  real_array tmp736;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp737;
  real_array tmp738;
  modelica_boolean tmp739;
  static const MMC_DEFSTRINGLIT(tmp740,92,"The fan relative power consumption must be non-negative for y=0.\n   Obtained fanRelPow(0) = ");
  modelica_string tmp741;
  real_array tmp742;
  real_array tmp743;
  Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan tmp744;
  real_array tmp745;
  modelica_metatype tmpMeta746;
  static const MMC_DEFSTRINGLIT(tmp747,68,"\n   You need to choose different values for the parameter fanRelPow.");
  modelica_metatype tmpMeta748;
  static int tmp749 = 0;
  {
    real_array_create(&tmp735, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
    real_array_create(&tmp736, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
    Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp737, tmp735, tmp736);
    real_array_create(&tmp738, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
    tmp739 = Greater(omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp737, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */), tmp738),-1e-4);
    if(!tmp739)
    {
      real_array_create(&tmp742, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
      real_array_create(&tmp743, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1055]] /* cooTow.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
      Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_fan_wrap_vars(threadData,tmp744, tmp742, tmp743);
      real_array_create(&tmp745, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1065]] /* cooTow.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
      tmp741 = modelica_real_to_modelica_string(omc_Buildings_Fluid_HeatExchangers_CoolingTowers_BaseClasses_Characteristics_normalizedPower(threadData, tmp744, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */), tmp745), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta746 = stringAppend(MMC_REFSTRINGLIT(tmp740),tmp741);
      tmpMeta748 = stringAppend(tmpMeta746,MMC_REFSTRINGLIT(tmp747));
      {
        const char* assert_cond = "(Buildings.Fluid.HeatExchangers.CoolingTowers.BaseClasses.Characteristics.normalizedPower(cooTow.fanRelPow, cooTow.yMin, cooTow.fanRelPowDer) > -1e-4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",94,3,97,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta748));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/irfan/AppData/Roaming/.openmodelica/libraries/Buildings 6.0.0/Fluid/HeatExchangers/CoolingTowers/YorkCalc.mo",94,3,97,77,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta748));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1415;
}
OMC_DISABLE_OPT
void logic1_raw_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[481])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_1051,
    logic1_raw_eqFunction_3319,
    logic1_raw_eqFunction_3321,
    logic1_raw_eqFunction_1054,
    logic1_raw_eqFunction_3864,
    logic1_raw_eqFunction_3865,
    logic1_raw_eqFunction_3866,
    logic1_raw_eqFunction_3322,
    logic1_raw_eqFunction_3857,
    logic1_raw_eqFunction_3858,
    logic1_raw_eqFunction_3859,
    logic1_raw_eqFunction_3851,
    logic1_raw_eqFunction_3852,
    logic1_raw_eqFunction_3853,
    logic1_raw_eqFunction_3262,
    logic1_raw_eqFunction_3261,
    logic1_raw_eqFunction_3265,
    logic1_raw_eqFunction_3266,
    logic1_raw_eqFunction_3268,
    logic1_raw_eqFunction_3267,
    logic1_raw_eqFunction_3269,
    logic1_raw_eqFunction_1072,
    logic1_raw_eqFunction_3271,
    logic1_raw_eqFunction_3560,
    logic1_raw_eqFunction_3264,
    logic1_raw_eqFunction_3303,
    logic1_raw_eqFunction_3311,
    logic1_raw_eqFunction_1078,
    logic1_raw_eqFunction_1079,
    logic1_raw_eqFunction_1080,
    logic1_raw_eqFunction_1081,
    logic1_raw_eqFunction_1082,
    logic1_raw_eqFunction_3577,
    logic1_raw_eqFunction_1084,
    logic1_raw_eqFunction_3576,
    logic1_raw_eqFunction_3312,
    logic1_raw_eqFunction_3613,
    logic1_raw_eqFunction_1088,
    logic1_raw_eqFunction_3515,
    logic1_raw_eqFunction_3611,
    logic1_raw_eqFunction_3338,
    logic1_raw_eqFunction_3339,
    logic1_raw_eqFunction_3337,
    logic1_raw_eqFunction_3340,
    logic1_raw_eqFunction_1096,
    logic1_raw_eqFunction_3347,
    logic1_raw_eqFunction_3348,
    logic1_raw_eqFunction_3516,
    logic1_raw_eqFunction_3517,
    logic1_raw_eqFunction_1101,
    logic1_raw_eqFunction_3349,
    logic1_raw_eqFunction_1103,
    logic1_raw_eqFunction_1104,
    logic1_raw_eqFunction_1105,
    logic1_raw_eqFunction_3623,
    logic1_raw_eqFunction_3624,
    logic1_raw_eqFunction_1108,
    logic1_raw_eqFunction_1109,
    logic1_raw_eqFunction_3538,
    logic1_raw_eqFunction_3539,
    logic1_raw_eqFunction_3360,
    logic1_raw_eqFunction_3359,
    logic1_raw_eqFunction_3367,
    logic1_raw_eqFunction_3332,
    logic1_raw_eqFunction_1116,
    logic1_raw_eqFunction_1117,
    logic1_raw_eqFunction_3336,
    logic1_raw_eqFunction_3361,
    logic1_raw_eqFunction_3363,
    logic1_raw_eqFunction_3362,
    logic1_raw_eqFunction_3364,
    logic1_raw_eqFunction_3333,
    logic1_raw_eqFunction_1124,
    logic1_raw_eqFunction_3366,
    logic1_raw_eqFunction_1126,
    logic1_raw_eqFunction_3594,
    logic1_raw_eqFunction_3595,
    logic1_raw_eqFunction_3596,
    logic1_raw_eqFunction_3471,
    logic1_raw_eqFunction_3526,
    logic1_raw_eqFunction_3518,
    logic1_raw_eqFunction_3519,
    logic1_raw_eqFunction_3524,
    logic1_raw_eqFunction_3525,
    logic1_raw_eqFunction_3612,
    logic1_raw_eqFunction_3520,
    logic1_raw_eqFunction_3523,
    logic1_raw_eqFunction_3521,
    logic1_raw_eqFunction_3522,
    logic1_raw_eqFunction_3527,
    logic1_raw_eqFunction_3529,
    logic1_raw_eqFunction_3528,
    logic1_raw_eqFunction_3643,
    logic1_raw_eqFunction_1145,
    logic1_raw_eqFunction_3845,
    logic1_raw_eqFunction_3846,
    logic1_raw_eqFunction_3847,
    logic1_raw_eqFunction_1149,
    logic1_raw_eqFunction_3589,
    logic1_raw_eqFunction_3614,
    logic1_raw_eqFunction_3615,
    logic1_raw_eqFunction_1153,
    logic1_raw_eqFunction_1154,
    logic1_raw_eqFunction_3563,
    logic1_raw_eqFunction_3598,
    logic1_raw_eqFunction_3599,
    logic1_raw_eqFunction_1158,
    logic1_raw_eqFunction_1159,
    logic1_raw_eqFunction_3572,
    logic1_raw_eqFunction_3573,
    logic1_raw_eqFunction_1162,
    logic1_raw_eqFunction_1163,
    logic1_raw_eqFunction_3567,
    logic1_raw_eqFunction_3568,
    logic1_raw_eqFunction_1166,
    logic1_raw_eqFunction_1167,
    logic1_raw_eqFunction_3583,
    logic1_raw_eqFunction_3584,
    logic1_raw_eqFunction_3315,
    logic1_raw_eqFunction_3317,
    logic1_raw_eqFunction_3318,
    logic1_raw_eqFunction_2941,
    logic1_raw_eqFunction_1174,
    logic1_raw_eqFunction_3578,
    logic1_raw_eqFunction_3579,
    logic1_raw_eqFunction_3580,
    logic1_raw_eqFunction_1178,
    logic1_raw_eqFunction_1179,
    logic1_raw_eqFunction_3587,
    logic1_raw_eqFunction_1181,
    logic1_raw_eqFunction_1182,
    logic1_raw_eqFunction_1183,
    logic1_raw_eqFunction_1184,
    logic1_raw_eqFunction_3779,
    logic1_raw_eqFunction_3876,
    logic1_raw_eqFunction_1187,
    logic1_raw_eqFunction_1188,
    logic1_raw_eqFunction_1189,
    logic1_raw_eqFunction_1190,
    logic1_raw_eqFunction_1191,
    logic1_raw_eqFunction_1192,
    logic1_raw_eqFunction_1193,
    logic1_raw_eqFunction_1194,
    logic1_raw_eqFunction_1195,
    logic1_raw_eqFunction_1196,
    logic1_raw_eqFunction_1197,
    logic1_raw_eqFunction_1198,
    logic1_raw_eqFunction_1199,
    logic1_raw_eqFunction_1200,
    logic1_raw_eqFunction_1201,
    logic1_raw_eqFunction_1202,
    logic1_raw_eqFunction_1203,
    logic1_raw_eqFunction_1204,
    logic1_raw_eqFunction_1205,
    logic1_raw_eqFunction_1206,
    logic1_raw_eqFunction_1207,
    logic1_raw_eqFunction_1208,
    logic1_raw_eqFunction_1209,
    logic1_raw_eqFunction_1210,
    logic1_raw_eqFunction_1211,
    logic1_raw_eqFunction_1212,
    logic1_raw_eqFunction_1213,
    logic1_raw_eqFunction_1214,
    logic1_raw_eqFunction_1215,
    logic1_raw_eqFunction_1216,
    logic1_raw_eqFunction_1217,
    logic1_raw_eqFunction_1218,
    logic1_raw_eqFunction_1219,
    logic1_raw_eqFunction_1220,
    logic1_raw_eqFunction_1221,
    logic1_raw_eqFunction_1222,
    logic1_raw_eqFunction_1223,
    logic1_raw_eqFunction_1224,
    logic1_raw_eqFunction_1225,
    logic1_raw_eqFunction_1226,
    logic1_raw_eqFunction_1227,
    logic1_raw_eqFunction_1228,
    logic1_raw_eqFunction_1229,
    logic1_raw_eqFunction_1230,
    logic1_raw_eqFunction_1231,
    logic1_raw_eqFunction_1232,
    logic1_raw_eqFunction_1233,
    logic1_raw_eqFunction_1234,
    logic1_raw_eqFunction_1235,
    logic1_raw_eqFunction_1236,
    logic1_raw_eqFunction_1237,
    logic1_raw_eqFunction_1238,
    logic1_raw_eqFunction_1239,
    logic1_raw_eqFunction_1240,
    logic1_raw_eqFunction_1241,
    logic1_raw_eqFunction_1242,
    logic1_raw_eqFunction_1243,
    logic1_raw_eqFunction_1244,
    logic1_raw_eqFunction_1245,
    logic1_raw_eqFunction_1246,
    logic1_raw_eqFunction_1247,
    logic1_raw_eqFunction_1248,
    logic1_raw_eqFunction_1249,
    logic1_raw_eqFunction_1250,
    logic1_raw_eqFunction_1251,
    logic1_raw_eqFunction_1252,
    logic1_raw_eqFunction_1253,
    logic1_raw_eqFunction_1254,
    logic1_raw_eqFunction_1255,
    logic1_raw_eqFunction_1256,
    logic1_raw_eqFunction_1257,
    logic1_raw_eqFunction_1258,
    logic1_raw_eqFunction_1259,
    logic1_raw_eqFunction_1260,
    logic1_raw_eqFunction_1261,
    logic1_raw_eqFunction_1262,
    logic1_raw_eqFunction_1263,
    logic1_raw_eqFunction_1264,
    logic1_raw_eqFunction_1265,
    logic1_raw_eqFunction_1266,
    logic1_raw_eqFunction_1267,
    logic1_raw_eqFunction_1268,
    logic1_raw_eqFunction_1269,
    logic1_raw_eqFunction_1270,
    logic1_raw_eqFunction_1271,
    logic1_raw_eqFunction_1272,
    logic1_raw_eqFunction_1273,
    logic1_raw_eqFunction_1274,
    logic1_raw_eqFunction_1275,
    logic1_raw_eqFunction_1276,
    logic1_raw_eqFunction_1277,
    logic1_raw_eqFunction_1278,
    logic1_raw_eqFunction_1279,
    logic1_raw_eqFunction_1280,
    logic1_raw_eqFunction_1281,
    logic1_raw_eqFunction_1282,
    logic1_raw_eqFunction_1283,
    logic1_raw_eqFunction_1284,
    logic1_raw_eqFunction_1285,
    logic1_raw_eqFunction_1286,
    logic1_raw_eqFunction_1287,
    logic1_raw_eqFunction_1288,
    logic1_raw_eqFunction_1289,
    logic1_raw_eqFunction_1290,
    logic1_raw_eqFunction_1291,
    logic1_raw_eqFunction_1292,
    logic1_raw_eqFunction_1293,
    logic1_raw_eqFunction_1294,
    logic1_raw_eqFunction_1295,
    logic1_raw_eqFunction_1296,
    logic1_raw_eqFunction_1297,
    logic1_raw_eqFunction_1298,
    logic1_raw_eqFunction_1299,
    logic1_raw_eqFunction_1300,
    logic1_raw_eqFunction_1301,
    logic1_raw_eqFunction_1302,
    logic1_raw_eqFunction_1303,
    logic1_raw_eqFunction_1304,
    logic1_raw_eqFunction_1305,
    logic1_raw_eqFunction_1306,
    logic1_raw_eqFunction_1307,
    logic1_raw_eqFunction_1308,
    logic1_raw_eqFunction_1309,
    logic1_raw_eqFunction_1310,
    logic1_raw_eqFunction_1311,
    logic1_raw_eqFunction_1312,
    logic1_raw_eqFunction_1313,
    logic1_raw_eqFunction_1314,
    logic1_raw_eqFunction_1315,
    logic1_raw_eqFunction_1316,
    logic1_raw_eqFunction_1317,
    logic1_raw_eqFunction_1318,
    logic1_raw_eqFunction_1319,
    logic1_raw_eqFunction_1320,
    logic1_raw_eqFunction_1321,
    logic1_raw_eqFunction_1322,
    logic1_raw_eqFunction_1323,
    logic1_raw_eqFunction_1324,
    logic1_raw_eqFunction_1325,
    logic1_raw_eqFunction_1326,
    logic1_raw_eqFunction_1327,
    logic1_raw_eqFunction_1328,
    logic1_raw_eqFunction_1329,
    logic1_raw_eqFunction_1330,
    logic1_raw_eqFunction_1331,
    logic1_raw_eqFunction_1332,
    logic1_raw_eqFunction_1333,
    logic1_raw_eqFunction_1334,
    logic1_raw_eqFunction_1335,
    logic1_raw_eqFunction_1336,
    logic1_raw_eqFunction_1337,
    logic1_raw_eqFunction_1338,
    logic1_raw_eqFunction_1339,
    logic1_raw_eqFunction_1340,
    logic1_raw_eqFunction_1341,
    logic1_raw_eqFunction_1342,
    logic1_raw_eqFunction_1343,
    logic1_raw_eqFunction_1344,
    logic1_raw_eqFunction_1345,
    logic1_raw_eqFunction_1346,
    logic1_raw_eqFunction_1347,
    logic1_raw_eqFunction_1348,
    logic1_raw_eqFunction_1349,
    logic1_raw_eqFunction_1350,
    logic1_raw_eqFunction_1351,
    logic1_raw_eqFunction_1352,
    logic1_raw_eqFunction_3000,
    logic1_raw_eqFunction_3001,
    logic1_raw_eqFunction_3149,
    logic1_raw_eqFunction_3491,
    logic1_raw_eqFunction_3492,
    logic1_raw_eqFunction_1358,
    logic1_raw_eqFunction_1359,
    logic1_raw_eqFunction_1360,
    logic1_raw_eqFunction_1361,
    logic1_raw_eqFunction_1362,
    logic1_raw_eqFunction_1363,
    logic1_raw_eqFunction_1364,
    logic1_raw_eqFunction_1365,
    logic1_raw_eqFunction_1366,
    logic1_raw_eqFunction_1367,
    logic1_raw_eqFunction_1368,
    logic1_raw_eqFunction_1369,
    logic1_raw_eqFunction_1370,
    logic1_raw_eqFunction_1371,
    logic1_raw_eqFunction_1372,
    logic1_raw_eqFunction_1373,
    logic1_raw_eqFunction_1374,
    logic1_raw_eqFunction_1375,
    logic1_raw_eqFunction_1376,
    logic1_raw_eqFunction_1377,
    logic1_raw_eqFunction_1378,
    logic1_raw_eqFunction_1379,
    logic1_raw_eqFunction_1380,
    logic1_raw_eqFunction_1381,
    logic1_raw_eqFunction_1382,
    logic1_raw_eqFunction_1383,
    logic1_raw_eqFunction_1384,
    logic1_raw_eqFunction_1385,
    logic1_raw_eqFunction_1386,
    logic1_raw_eqFunction_1387,
    logic1_raw_eqFunction_1388,
    logic1_raw_eqFunction_1389,
    logic1_raw_eqFunction_1390,
    logic1_raw_eqFunction_1391,
    logic1_raw_eqFunction_1392,
    logic1_raw_eqFunction_1393,
    logic1_raw_eqFunction_1394,
    logic1_raw_eqFunction_1395,
    logic1_raw_eqFunction_1396,
    logic1_raw_eqFunction_1397,
    logic1_raw_eqFunction_1398,
    logic1_raw_eqFunction_1399,
    logic1_raw_eqFunction_1400,
    logic1_raw_eqFunction_1401,
    logic1_raw_eqFunction_1402,
    logic1_raw_eqFunction_1403,
    logic1_raw_eqFunction_1404,
    logic1_raw_eqFunction_1405,
    logic1_raw_eqFunction_1406,
    logic1_raw_eqFunction_1407,
    logic1_raw_eqFunction_1408,
    logic1_raw_eqFunction_1409,
    logic1_raw_eqFunction_1410,
    logic1_raw_eqFunction_1411,
    logic1_raw_eqFunction_1412,
    logic1_raw_eqFunction_1413,
    logic1_raw_eqFunction_1414,
    logic1_raw_eqFunction_1532,
    logic1_raw_eqFunction_1531,
    logic1_raw_eqFunction_1530,
    logic1_raw_eqFunction_1529,
    logic1_raw_eqFunction_1528,
    logic1_raw_eqFunction_1527,
    logic1_raw_eqFunction_1526,
    logic1_raw_eqFunction_1525,
    logic1_raw_eqFunction_1524,
    logic1_raw_eqFunction_1523,
    logic1_raw_eqFunction_1522,
    logic1_raw_eqFunction_1521,
    logic1_raw_eqFunction_1520,
    logic1_raw_eqFunction_1519,
    logic1_raw_eqFunction_1518,
    logic1_raw_eqFunction_1517,
    logic1_raw_eqFunction_1516,
    logic1_raw_eqFunction_1515,
    logic1_raw_eqFunction_1514,
    logic1_raw_eqFunction_1513,
    logic1_raw_eqFunction_1512,
    logic1_raw_eqFunction_1511,
    logic1_raw_eqFunction_1510,
    logic1_raw_eqFunction_1509,
    logic1_raw_eqFunction_1508,
    logic1_raw_eqFunction_1507,
    logic1_raw_eqFunction_1506,
    logic1_raw_eqFunction_1505,
    logic1_raw_eqFunction_1504,
    logic1_raw_eqFunction_1503,
    logic1_raw_eqFunction_1502,
    logic1_raw_eqFunction_1501,
    logic1_raw_eqFunction_1500,
    logic1_raw_eqFunction_1499,
    logic1_raw_eqFunction_1498,
    logic1_raw_eqFunction_1497,
    logic1_raw_eqFunction_1496,
    logic1_raw_eqFunction_1495,
    logic1_raw_eqFunction_1494,
    logic1_raw_eqFunction_1493,
    logic1_raw_eqFunction_1492,
    logic1_raw_eqFunction_1491,
    logic1_raw_eqFunction_1490,
    logic1_raw_eqFunction_1489,
    logic1_raw_eqFunction_1488,
    logic1_raw_eqFunction_1487,
    logic1_raw_eqFunction_1486,
    logic1_raw_eqFunction_1485,
    logic1_raw_eqFunction_1484,
    logic1_raw_eqFunction_1483,
    logic1_raw_eqFunction_1482,
    logic1_raw_eqFunction_1481,
    logic1_raw_eqFunction_1480,
    logic1_raw_eqFunction_1479,
    logic1_raw_eqFunction_1478,
    logic1_raw_eqFunction_1477,
    logic1_raw_eqFunction_1476,
    logic1_raw_eqFunction_1475,
    logic1_raw_eqFunction_1474,
    logic1_raw_eqFunction_1473,
    logic1_raw_eqFunction_1472,
    logic1_raw_eqFunction_1471,
    logic1_raw_eqFunction_1470,
    logic1_raw_eqFunction_1469,
    logic1_raw_eqFunction_1468,
    logic1_raw_eqFunction_1467,
    logic1_raw_eqFunction_1466,
    logic1_raw_eqFunction_1465,
    logic1_raw_eqFunction_1464,
    logic1_raw_eqFunction_1463,
    logic1_raw_eqFunction_1462,
    logic1_raw_eqFunction_1461,
    logic1_raw_eqFunction_1460,
    logic1_raw_eqFunction_1459,
    logic1_raw_eqFunction_1458,
    logic1_raw_eqFunction_1457,
    logic1_raw_eqFunction_1456,
    logic1_raw_eqFunction_1455,
    logic1_raw_eqFunction_1454,
    logic1_raw_eqFunction_1453,
    logic1_raw_eqFunction_1452,
    logic1_raw_eqFunction_1451,
    logic1_raw_eqFunction_1450,
    logic1_raw_eqFunction_1449,
    logic1_raw_eqFunction_1448,
    logic1_raw_eqFunction_1447,
    logic1_raw_eqFunction_1446,
    logic1_raw_eqFunction_1445,
    logic1_raw_eqFunction_1444,
    logic1_raw_eqFunction_1443,
    logic1_raw_eqFunction_1442,
    logic1_raw_eqFunction_1441,
    logic1_raw_eqFunction_1440,
    logic1_raw_eqFunction_1439,
    logic1_raw_eqFunction_1438,
    logic1_raw_eqFunction_1437,
    logic1_raw_eqFunction_1436,
    logic1_raw_eqFunction_1435,
    logic1_raw_eqFunction_1434,
    logic1_raw_eqFunction_1433,
    logic1_raw_eqFunction_1432,
    logic1_raw_eqFunction_1431,
    logic1_raw_eqFunction_1430,
    logic1_raw_eqFunction_1429,
    logic1_raw_eqFunction_1428,
    logic1_raw_eqFunction_1427,
    logic1_raw_eqFunction_1426,
    logic1_raw_eqFunction_1425,
    logic1_raw_eqFunction_1424,
    logic1_raw_eqFunction_1423,
    logic1_raw_eqFunction_1422,
    logic1_raw_eqFunction_1421,
    logic1_raw_eqFunction_1420,
    logic1_raw_eqFunction_1419,
    logic1_raw_eqFunction_1418,
    logic1_raw_eqFunction_1417,
    logic1_raw_eqFunction_1416,
    logic1_raw_eqFunction_1415
  };
  
  for (int id = 0; id < 481; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif