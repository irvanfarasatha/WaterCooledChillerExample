#include "outputs/WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void outputs_WaterCooledChillerExample7_eqFunction_4318(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4319(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4329(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5145(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4308(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5142(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5154(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5156(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5157(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4306(DATA *data, threadData_t *threadData);


/*
equation index: 1322
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[3].port_b1.h_outflow, cooCoi.ele[2].port_b1.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* cooCoi.ele[2].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.U = cooCoi.ele[2].vol1.dynBal.m * cooCoi.ele[2].port_b1.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* cooCoi.ele[2].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1323;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4313(DATA *data, threadData_t *threadData);


/*
equation index: 1325
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.Xi[1] = cooCoi.ele[1].vol2.dynBal.X_start[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* cooCoi.ele[1].vol2.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 1325;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5344(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5345(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5346(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5343(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5342(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5355(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5358(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5359(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5360(DATA *data, threadData_t *threadData);


/*
equation index: 1335
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.p = cooCoi.ele[1].vol2.dynBal.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* cooCoi.ele[1].vol2.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 1335;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5333(DATA *data, threadData_t *threadData);


/*
equation index: 1337
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mXi[1] = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* cooCoi.ele[1].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1337;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5315(DATA *data, threadData_t *threadData);


/*
equation index: 1339
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.U = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* cooCoi.ele[2].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* cooCoi.ele[2].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mXi[1] = cooCoi.ele[2].vol2.dynBal.m * cooCoi.ele[2].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* cooCoi.ele[2].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* cooCoi.ele[2].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1340;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5298(DATA *data, threadData_t *threadData);


/*
equation index: 1342
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.U = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* cooCoi.ele[3].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* cooCoi.ele[3].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mXi[1] = cooCoi.ele[3].vol2.dynBal.m * cooCoi.ele[3].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* cooCoi.ele[3].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* cooCoi.ele[3].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.m = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)));
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.U = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* cooCoi.ele[4].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* cooCoi.ele[4].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mXi[1] = cooCoi.ele[4].vol2.dynBal.m * cooCoi.ele[4].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* cooCoi.ele[4].vol2.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* cooCoi.ele[4].vol2.dynBal.m STATE(1,cooCoi.ele[4].vol2.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1346;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5372(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_1348(DATA*, threadData_t*);
/*
equation index: 1349
indexNonlinear: 7
type: NONLINEAR

vars: {cooCoi.m2_flow}
eqns: {1348}
*/
void outputs_WaterCooledChillerExample7_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1349 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1349};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1349 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  threadData->lastEquationSolved = 1349;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5375(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5376(DATA *data, threadData_t *threadData);


/*
equation index: 1352
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.m2_flow, cooCoi.ele[4].vol2.dynBal.medium.Xi[1], junOut.vol.dynBal.medium.Xi[1])
*/
void outputs_WaterCooledChillerExample7_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* junOut.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
junOut.vol.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m2_flow, cooCoi.port_a2.h_outflow, junOut.vol.ports[3].h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* junOut.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 1353;
}

/*
equation index: 1369
type: LINEAR

<var>$DER.cooCoi.ele[1].vol2.dynBal.medium.p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1369};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) };
  infoStreamPrint(OMC_LOG_DT, 0, "Solving linear system 1369 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);

  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);

  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1369};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1369 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = aux_x[0];

  threadData->lastEquationSolved = 1369;
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].vol2.dynBal.medium.Xi[1], cooCoi.ele[4].vol2.dynBal.medium.Xi[1])
*/
void outputs_WaterCooledChillerExample7_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* cooCoi.ele[4].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* cooCoi.ele[4].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1370;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[3].m2_flow, cooCoi.ele[3].port_a2.h_outflow, cooCoi.port_a2.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* cooCoi.ele[4].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].vol2.dynBal.medium.Xi[1], cooCoi.ele[3].vol2.dynBal.medium.Xi[1])
*/
void outputs_WaterCooledChillerExample7_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* cooCoi.ele[3].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* cooCoi.ele[3].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[2].m2_flow, cooCoi.ele[2].port_a2.h_outflow, cooCoi.ele[3].port_a2.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* cooCoi.ele[3].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 1373;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5427(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5428(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5409(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5408(DATA *data, threadData_t *threadData);


/*
equation index: 1378
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] = semiLinear(-cooCoi.ele[1].m2_flow, cooCoi.ele[1].vol2.dynBal.medium.Xi[1], cooCoi.ele[2].vol2.dynBal.medium.Xi[1])
*/
void outputs_WaterCooledChillerExample7_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* cooCoi.ele[2].vol2.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* cooCoi.ele[2].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1378;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5401(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5402(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5403(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5419(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5420(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5421(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5417(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5411(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5425(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5426(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5410(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5423(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5377(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5415(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5416(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5381(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5413(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5429(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5430(DATA *data, threadData_t *threadData);


/*
equation index: 1398
type: SIMPLE_ASSIGN
cooCoi.hA.hA_2 = cooCoi.hA.hA_nominal_a * Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_a, cooCoi.hA.n_a, 0.1)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* cooCoi.hA.hA_2 variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[898]] /* cooCoi.hA.hA_nominal_a PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* cooCoi.hA.fm_a variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.hA.n_a PARAM */), 0.1));
  threadData->lastEquationSolved = 1398;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5433(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5452(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5453(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5454(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5456(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5457(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5458(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5446(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5447(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5448(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5449(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5450(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5451(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5440(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5443(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5444(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5445(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5362(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5363(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5364(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5365(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5366(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5367(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5368(DATA *data, threadData_t *threadData);


/*
equation index: 1423
type: SIMPLE_ASSIGN
fanSup.preSou.V_flow = 13.266998341625207 / Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* fanSup.preSou.V_flow variable */) = DIVISION_SIM(13.266998341625207,omc_Modelica_Fluid_Utilities_regStep(threadData, 13.266998341625207, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* cooCoi.ele[1].vol2.dynBal.medium.p DUMMY_STATE */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1806]] /* vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanSup.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.medium.p, 1.1843079200592153e-5 * vol.dynBal.medium.p, fanSup.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 1423;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5459(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5462(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5463(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5464(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5465(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5466(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5467(DATA *data, threadData_t *threadData);


/*
equation index: 1431
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T = cooCoi.ele[1].vol2.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* cooCoi.ele[1].vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1431;
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol2.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* cooCoi.ele[1].vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
TAirSup.port_b.h_outflow = 1006.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC * cooCoi.ele[1].vol2.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * cooCoi.ele[1].vol2.dynBal.medium.T_degC) * cooCoi.ele[1].vol2.dynBal.medium.Xi[1]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[1].vol2.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* cooCoi.ele[1].vol2.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1433;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5348(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5353(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5354(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5350(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5351(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5352(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5441(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5349(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5434(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5435(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5455(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5337(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5338(DATA *data, threadData_t *threadData);


/*
equation index: 1447
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.ele[1].m2_flow, TAirSup.port_b.h_outflow, cooCoi.ele[2].port_a2.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* cooCoi.ele[2].vol2.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 1447;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5418(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5442(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5347(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5336(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5405(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5406(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5436(DATA *data, threadData_t *threadData);


/*
equation index: 1455
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.medium.u = -84437.5 + TAirSup.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* TAirSup.port_b.h_outflow variable */);
  threadData->lastEquationSolved = 1455;
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.U = cooCoi.ele[1].vol2.dynBal.m * cooCoi.ele[1].vol2.dynBal.medium.u
*/
void outputs_WaterCooledChillerExample7_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* cooCoi.ele[1].vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* cooCoi.ele[1].vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* cooCoi.ele[1].vol2.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 1456;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5340(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5361(DATA *data, threadData_t *threadData);


/*
equation index: 1459
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T = cooCoi.ele[1].vol1.dynBal.T_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* cooCoi.ele[1].vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 1459;
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.T_degC = -273.15 + cooCoi.ele[1].vol1.dynBal.medium.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* cooCoi.ele[1].vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
TCHWEntChi.port_b.h_outflow = 4184.0 * cooCoi.ele[1].vol1.dynBal.medium.T_degC
*/
void outputs_WaterCooledChillerExample7_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* cooCoi.ele[1].vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 1461;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4301(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4309(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4310(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4320(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5143(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4302(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5140(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5141(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5148(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5437(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5438(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5439(DATA *data, threadData_t *threadData);


/*
equation index: 1474
type: SIMPLE_ASSIGN
junCHWSup.res2.port_b.h_outflow = (max(valByp.m_flow, 1e-7) * valByp.port_b.h_outflow + max(-cooCoi.m1_flow, 1e-7) * TCHWEntChi.port_b.h_outflow) / (max(valByp.m_flow, 1e-7) + max(-cooCoi.m1_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.res2.port_b.h_outflow variable */) = DIVISION_SIM((fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* valByp.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7),"max(valByp.m_flow, 1e-7) + max(-cooCoi.m1_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1474;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5178(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5179(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5180(DATA *data, threadData_t *threadData);


/*
equation index: 1478
type: SIMPLE_ASSIGN
valByp.port_a.h_outflow = (max(-cooCoi.m1_flow, 1e-7) * TCHWEntChi.port_b.h_outflow + max(-junCHWSup.res2.m_flow, 1e-7) * junCHWSup.port_3.h_outflow) / (max(-cooCoi.m1_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* valByp.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* junCHWSup.port_3.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */)),1e-7),"max(-cooCoi.m1_flow, 1e-7) + max(-junCHWSup.res2.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
junCHWRet.res1.port_b.h_outflow = (max(-valByp.m_flow, 1e-7) * valByp.port_a.h_outflow + max(val1.m_flow, 1e-7) * val1.port_b.h_outflow) / (max(-valByp.m_flow, 1e-7) + max(val1.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* junCHWRet.res1.port_b.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* valByp.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1722]] /* val1.port_b.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */),1e-7),"max(-valByp.m_flow, 1e-7) + max(val1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1479;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5182(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5183(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5184(DATA *data, threadData_t *threadData);


/*
equation index: 1483
type: SIMPLE_ASSIGN
TCHWLeaCoi.port_a.h_outflow = (max(-valByp.m_flow, 1e-7) * valByp.port_a.h_outflow + max(-junCHWRet.res1.m_flow, 1e-7) * junCHWRet.port_3.h_outflow) / (max(-valByp.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */) = DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* valByp.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* junCHWRet.port_3.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */)),1e-7),"max(-valByp.m_flow, 1e-7) + max(-junCHWRet.res1.m_flow, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 1483;
}

/*
equation index: 1484
type: SIMPLE_ASSIGN
TCHWLeaCoi.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWLeaCoi.Medium.setState_phX(expVesCHW.p_start, TCHWLeaCoi.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* TCHWLeaCoi.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWLeaCoi_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1484;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5187(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5188(DATA *data, threadData_t *threadData);


/*
equation index: 1487
type: SIMPLE_ASSIGN
$DER.expVesCHW.H = smooth(0, expVesCHW.port_a.m_flow * (if expVesCHW.port_a.m_flow > 0.0 then (max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow + max(cooCoi.m1_flow, 1e-7) * cooCoi.port_b1.h_outflow) / (max(-val1.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)) else expVesCHW.port_a.h_outflow))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1487};
  modelica_boolean tmp153;
  tmp153 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */),0.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* der(expVesCHW.H) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)) * ((tmp153?DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */)) + (fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7) + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */),1e-7),"max(-val1.m_flow, 1e-7) + max(cooCoi.m1_flow, 1e-7)",equationIndexes):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)));
  threadData->lastEquationSolved = 1487;
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)), cooCoi.port_b1.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* cooCoi.ele[4].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)",equationIndexes), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 1488;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5190(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5191(DATA *data, threadData_t *threadData);


/*
equation index: 1491
type: SIMPLE_ASSIGN
cooCoi.ele[4].state_b1_inflow.T = 273.15 + 2.390057361376673e-4 * (max(-expVesCHW.port_a.m_flow, 1e-7) * expVesCHW.port_a.h_outflow + max(-val1.m_flow, 1e-7) * TCHWLeaCoi.port_a.h_outflow) / (max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* cooCoi.ele[4].state_b1_inflow.T variable */) = 273.15 + (2.390057361376673e-4) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* expVesCHW.port_a.h_outflow variable */)) + (fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* TCHWLeaCoi.port_a.h_outflow variable */)),fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* expVesCHW.port_a.m_flow variable */)),1e-7) + fmax((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */)),1e-7),"max(-expVesCHW.port_a.m_flow, 1e-7) + max(-val1.m_flow, 1e-7)",equationIndexes));
  threadData->lastEquationSolved = 1491;
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
TCHWEntChi.T_a_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.TCHWEntChi.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* TCHWEntChi.T_a_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_TCHWEntChi_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1492;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5235(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5236(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5150(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5152(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5153(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4300(DATA *data, threadData_t *threadData);


/*
equation index: 1499
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] = semiLinear(-cooCoi.m1_flow, cooCoi.ele[2].port_b1.h_outflow, TCHWEntChi.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* cooCoi.ele[1].vol1.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1499;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5192(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5193(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5194(DATA *data, threadData_t *threadData);


/*
equation index: 1503
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.U = cooCoi.ele[1].vol1.dynBal.m * TCHWEntChi.port_b.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* cooCoi.ele[1].vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* cooCoi.ele[1].vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
cooCoi.temSen_1.T_b_inflow = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.temSen_1.Medium.setState_phX(junCHWSup.vol.p, TCHWEntChi.port_b.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.temSen_1.T_b_inflow variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_temSen__1_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* TCHWEntChi.port_b.h_outflow variable */), _OMC_LIT88));
  threadData->lastEquationSolved = 1504;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5239(DATA *data, threadData_t *threadData);


/*
equation index: 1506
type: SIMPLE_ASSIGN
fanSup.eff.hydDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanSup.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
fanSup.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, fanSup.VMachine_flow, fanSup.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.hydraulicEfficiency, 11.05583195135434, fanSup.eff.hydDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  real_array tmp154;
  real_array tmp155;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp156;
  real_array tmp157;
  real_array tmp158;
  real_array tmp159;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp160;
  real_array tmp161;
  real_array_create(&tmp154, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp155, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp156, tmp154, tmp155);
  real_array_create(&tmp157, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp158, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1424]] /* fanSup.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp159, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1425]] /* fanSup.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp160, tmp158, tmp159);
  real_array_create(&tmp161, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1401]] /* fanSup.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* fanSup.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp156, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* fanSup.VMachine_flow variable */), tmp157, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp160, 11.05583195135434, tmp161, 1.0, 0.05));
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
fanSup.eff.motDer[1] = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanSup.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
fanSup.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, fanSup.VMachine_flow, fanSup.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanSup.eff.per.motorEfficiency, 11.05583195135434, fanSup.eff.motDer, 1.0, 0.05))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1509};
  real_array tmp162;
  real_array tmp163;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp164;
  real_array tmp165;
  real_array tmp166;
  real_array tmp167;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp168;
  real_array tmp169;
  real_array_create(&tmp162, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp163, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp164, tmp162, tmp163);
  real_array_create(&tmp165, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp166, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1426]] /* fanSup.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp167, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1427]] /* fanSup.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp168, tmp166, tmp167);
  real_array_create(&tmp169, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1403]] /* fanSup.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* fanSup.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp164, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* fanSup.VMachine_flow variable */), tmp165, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp168, 11.05583195135434, tmp169, 1.0, 0.05));
  threadData->lastEquationSolved = 1509;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5371(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5468(DATA *data, threadData_t *threadData);


/*
equation index: 1512
type: ALGORITHM

  weaData.datRea1.tableOnFileRead := $START.weaData.datRea1.tableOnFileRead;
  weaData.datRea1.tableOnFileRead := WaterCooledChillerExample.WaterCooledChillerExample7.weaData.datRea1.readTableData(weaData.datRea1.tableID, false, weaData.datRea1.verboseRead);
*/
void outputs_WaterCooledChillerExample7_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3658]] /* weaData.datRea1.tableOnFileRead PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3658]] /* weaData.datRea1.tableOnFileRead PARAM */);

  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3658]] /* weaData.datRea1.tableOnFileRead PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_weaData_datRea1_readTableData(threadData, (data->simulationInfo->extObjs[1]), 0 /* false */, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1109]] /* weaData.datRea1.verboseRead PARAM */));
  threadData->lastEquationSolved = 1512;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4408(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4409(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4410(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4411(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4412(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4413(DATA *data, threadData_t *threadData);


/*
equation index: 1519
type: ALGORITHM

  weaData.datRea.tableOnFileRead := $START.weaData.datRea.tableOnFileRead;
  weaData.datRea.tableOnFileRead := WaterCooledChillerExample.WaterCooledChillerExample7.weaData.datRea.readTableData(weaData.datRea.tableID, false, weaData.datRea.verboseRead);
*/
void outputs_WaterCooledChillerExample7_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3657]] /* weaData.datRea.tableOnFileRead PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3657]] /* weaData.datRea.tableOnFileRead PARAM */);

  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3657]] /* weaData.datRea.tableOnFileRead PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_weaData_datRea_readTableData(threadData, (data->simulationInfo->extObjs[0]), 0 /* false */, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1107]] /* weaData.datRea.verboseRead PARAM */));
  threadData->lastEquationSolved = 1519;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4426(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4427(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4428(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4429(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4430(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4431(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4432(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4433(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4434(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4435(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4436(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4437(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4438(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4439(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4440(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4441(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4442(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4443(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4444(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4445(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4446(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4447(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4448(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4449(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4450(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4451(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4452(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4453(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4454(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4455(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4456(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4457(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4458(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4459(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4460(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4461(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4462(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4463(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4464(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4465(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4466(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4467(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4489(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4603(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5383(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5384(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4492(DATA *data, threadData_t *threadData);


/*
equation index: 1567
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_H_flow[2] = semiLinear(-damEA.m_flow, out.ports[1].h_outflow, fanRet.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* out.ports[1].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* fanRet.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 1567;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4600(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4601(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4591(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5379(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5380(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4471(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4469(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4470(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4490(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4491(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4468(DATA *data, threadData_t *threadData);


/*
equation index: 1579
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-damEA.m_flow, damOA.port_b.Xi_outflow[1], junRet.vol.dynBal.medium.Xi[1])
*/
void outputs_WaterCooledChillerExample7_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* junRet.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* damOA.port_b.Xi_outflow[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 1579;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4588(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4589(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4516(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4517(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4525(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5339(DATA *data, threadData_t *threadData);


/*
equation index: 1586
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaBus.relHum / ((-0.378035286922501) * weaBus.relHum + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TDryBul - 35.719) - 17.2799))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */) - 35.719,"weaBus.TDryBul - 35.719",equationIndexes) - 17.2799))),"(-0.378035286922501) * weaBus.relHum + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TDryBul - 35.719) - 17.2799)",equationIndexes));
  threadData->lastEquationSolved = 1586;
}

void outputs_WaterCooledChillerExample7_eqFunction_1587(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1588(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1589(DATA*, threadData_t*);
/*
equation index: 1594
indexNonlinear: 8
type: NONLINEAR

vars: {weaBus.TWetBul}
eqns: {1587, 1588, 1589}
*/
void outputs_WaterCooledChillerExample7_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1594};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1594 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1594};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1594 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 1594;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4655(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_1596(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1597(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1598(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1599(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1600(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1601(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1602(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1603(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1604(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1605(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1606(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1607(DATA*, threadData_t*);
/*
equation index: 1608
indexNonlinear: 9
type: NONLINEAR

vars: {val7.port_a.h_outflow}
eqns: {1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607}
*/
void outputs_WaterCooledChillerExample7_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1608};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1608 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1608};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1608 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  threadData->lastEquationSolved = 1608;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5242(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5243(DATA *data, threadData_t *threadData);


/*
equation index: 1611
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * val7.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* cooTow2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1611;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5257(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5258(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5259(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5256(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5260(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5261(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5477(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4488(DATA *data, threadData_t *threadData);


void outputs_WaterCooledChillerExample7_eqFunction_1620(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1621(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1622(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1623(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1624(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1625(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1626(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1627(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1628(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1629(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1630(DATA*, threadData_t*);
void outputs_WaterCooledChillerExample7_eqFunction_1631(DATA*, threadData_t*);
/*
equation index: 1632
indexNonlinear: 10
type: NONLINEAR

vars: {val5.port_a.h_outflow}
eqns: {1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631}
*/
void outputs_WaterCooledChillerExample7_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1632};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1632 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1632};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1632 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  threadData->lastEquationSolved = 1632;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5270(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5271(DATA *data, threadData_t *threadData);


/*
equation index: 1635
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.U = cooTow.vol.dynBal.m * val5.port_a.h_outflow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* cooTow.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1635;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_5273(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5274(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5275(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5272(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5276(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5277(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_5495(DATA *data, threadData_t *threadData);

extern void outputs_WaterCooledChillerExample7_eqFunction_4474(DATA *data, threadData_t *threadData);


/*
equation index: 1644
type: SIMPLE_ASSIGN
weaData.TBlaSkyCom.epsSky = (0.787 + 0.764 * log((-weaData.TBlaSkyCom.TDewPoiK) / (-273.15))) * (1.0 + 0.0224 * weaData.TBlaSkyCom.nOpa10 + (-0.0035) * weaData.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaData.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1644};
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  tmp170 = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1842]] /* weaData.TBlaSkyCom.TDewPoiK variable */)),-273.15,"-273.15",equationIndexes);
  if(!(tmp170 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((-weaData.TBlaSkyCom.TDewPoiK) / (-273.15)) was %g should be > 0", tmp170);
    }
  }tmp171 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* weaData.TBlaSkyCom.nOpa10 variable */);
  tmp172 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* weaData.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* weaData.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * (log(tmp170))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* weaData.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp171 * tmp171)) + (2.8e-4) * ((tmp172 * tmp172 * tmp172)));
  threadData->lastEquationSolved = 1644;
}
extern void outputs_WaterCooledChillerExample7_eqFunction_4477(DATA *data, threadData_t *threadData);


/*
equation index: 1646
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* pumCHW2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1646;
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cooTow2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1647;
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* pumCW2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1648;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
TWCLeaTow2.mNor_flow = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TWCLeaTow2.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* chi2.vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1650;
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* chi2.vol2.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1651;
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* junCHWSup.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1652;
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* junCHWRet.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1653;
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* tan.vol[1].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1654;
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* tan.vol[2].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1655;
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* tan.vol[3].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1656;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* tan.vol[4].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1528]] /* tan.indTanHex.vol[1].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1529]] /* tan.indTanHex.vol[2].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1530]] /* tan.indTanHex.vol[3].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1660;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1531]] /* tan.indTanHex.vol[4].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1532]] /* tan.indTanHex.vol[5].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1662;
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* tan.indTanHex.vol[6].dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1663;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* junCHWRet2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1664;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* junCHWSup2.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* pumTanSup.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.mb_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* pumTanRet.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
cooCoi.ele[1].dp2 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* cooCoi.ele[1].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1669;
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
cooCoi.ele[2].dp1 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[2].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1670;
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
cooCoi.ele[2].dp2 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1671;
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* cooCoi.ele[2].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1672;
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
cooCoi.ele[3].dp1 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[3].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1673;
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
cooCoi.ele[3].dp2 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1674;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[587]] /* cooCoi.ele[3].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
cooCoi.ele[4].dp1 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[4].dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
chi.dp1 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* chi.dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
chi.dp2 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* chi.dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
chi2.dp1 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* chi2.dp1 variable */) = 0.0;
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
chi2.dp2 = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* chi2.dp2 variable */) = 0.0;
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
tan.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* tan.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.p_bar = 1e-5 * expVesChi2.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* chi2.vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1246]] /* expVesChi2.p_start PARAM */));
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
out.medium.p_bar = 1e-5 * weaData.pAtm
*/
void outputs_WaterCooledChillerExample7_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* out.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */));
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
fanRet.vol.steBal.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* fanRet.vol.steBal.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.p_bar = 1e-5 * expVesChi.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* chi.vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* expVesChi.p_start PARAM */));
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.p_bar = 1e-5 * expVesCHW.p_start
*/
void outputs_WaterCooledChillerExample7_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[588]] /* cooCoi.ele[4].vol1.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */));
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
fanSup.vol.steBal.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* fanSup.vol.steBal.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
tan.conBot.dT = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* tan.conBot.dT variable */) = 0.0;
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
tan.conTop.dT = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* tan.conTop.dT variable */) = 0.0;
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
out.medium.d = 1.1843079200592153e-5 * weaData.pAtm
*/
void outputs_WaterCooledChillerExample7_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* out.medium.d variable */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */));
  threadData->lastEquationSolved = 1690;
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
pumCW2.senMasFlo.m_flow = 15.873015873015873
*/
void outputs_WaterCooledChillerExample7_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* pumCW2.senMasFlo.m_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1691;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
pumCHW2.senMasFlo.m_flow = 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* pumCHW2.senMasFlo.m_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
fanRet.m_flow = 13.266998341625207
*/
void outputs_WaterCooledChillerExample7_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* fanRet.m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
pumCW.senMasFlo.m_flow = 15.873015873015873
*/
void outputs_WaterCooledChillerExample7_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* pumCW.senMasFlo.m_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1694;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
pumCHW.senMasFlo.m_flow = 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* pumCHW.senMasFlo.m_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
fanSup.m_flow = 13.266998341625207
*/
void outputs_WaterCooledChillerExample7_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* fanSup.m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1696;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
chi2.m1_flow = 15.873015873015873
*/
void outputs_WaterCooledChillerExample7_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* chi2.m1_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
chi2.m2_flow = 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* chi2.m2_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1698;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
junRet.res1.m_flow = 13.266998341625207
*/
void outputs_WaterCooledChillerExample7_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* junRet.res1.m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
chi.m1_flow = 15.873015873015873
*/
void outputs_WaterCooledChillerExample7_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* chi.m1_flow variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1700;
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
chi.m2_flow = 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* chi.m2_flow variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1701;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
vol.ports[1].m_flow = 13.266998341625207
*/
void outputs_WaterCooledChillerExample7_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1816]] /* vol.ports[1].m_flow variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
pumCHW.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* pumCHW.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
pumCW.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* pumCW.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1704;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
pumCHW2.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* pumCHW2.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
pumCW2.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* pumCW2.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1706;
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
tan.heaPorVol[1].Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* tan.heaPorVol[1].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1707;
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
tan.heaPorVol[2].Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* tan.heaPorVol[2].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1708;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
tan.heaPorVol[3].Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* tan.heaPorVol[3].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
tan.heaPorVol[4].Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* tan.heaPorVol[4].Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1710;
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
tan.heaPorSid.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* tan.heaPorSid.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1711;
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
pumTanSup.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* pumTanSup.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1712;
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
pumTanRet.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* pumTanRet.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1713;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
fanSup.vol.steBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* fanSup.vol.steBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
fanSup.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* fanSup.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1715;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* fanSup.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* fanSup.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1717;
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
fanSup.eff.r_N = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* fanSup.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1718;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
cooCoi.hA.x_w = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* cooCoi.hA.x_w variable */) = 1.0;
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
cooCoi.hA.x_a = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* cooCoi.hA.x_a variable */) = 1.0;
  threadData->lastEquationSolved = 1720;
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* cooCoi.ele[1].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1721;
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1722;
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* cooCoi.ele[2].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1723;
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* cooCoi.ele[2].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1724;
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
cooCoi.ele[2].preDro2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1725;
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* cooCoi.ele[3].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1726;
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* cooCoi.ele[3].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1727;
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
cooCoi.ele[3].preDro2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1728;
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* cooCoi.ele[4].vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1729;
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
cooCoi.ele[4].preDro1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* cooCoi.ele[4].preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1730;
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* pumCHW.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1731;
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* pumCHW.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
pumCHW.eff.r_N = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* pumCHW.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1733;
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
cooTow.T_Vol.port.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cooTow.T_Vol.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1734;
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* pumCW.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1735;
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* pumCW.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1736;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
pumCW.eff.r_N = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* pumCW.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
chi.preDro1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* chi.preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1738;
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
chi.preDro2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* chi.preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1739;
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
weaData.con30mins.y = 1800.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* weaData.con30mins.y variable */) = 1800.0;
  threadData->lastEquationSolved = 1740;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
pumCWCon.y = 15.873015873015873
*/
void outputs_WaterCooledChillerExample7_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* pumCWCon.y variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
pumCHWCon.y = 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* pumCHWCon.y variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
vol.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1743;
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
TRooAir.port.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* TRooAir.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1744;
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
conPIDTAirSup.Dzero.y = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* conPIDTAirSup.Dzero.y variable */) = 0.0;
  threadData->lastEquationSolved = 1745;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
fanRet.vol.steBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* fanRet.vol.steBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1746;
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
fanRet.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* fanRet.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1747;
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
mFanFlo.y = 13.266998341625207
*/
void outputs_WaterCooledChillerExample7_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* mFanFlo.y variable */) = 13.266998341625207;
  threadData->lastEquationSolved = 1748;
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1749;
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* fanRet.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1750;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
fanRet.eff.r_N = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* fanRet.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
junRet.res1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* junRet.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
junRet.res2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* junRet.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1753;
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
junRet.res3.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* junRet.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
junRet.vol.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* junRet.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1755;
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
junRet.vol.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* junRet.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
junOut.res1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* junOut.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
junOut.res2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* junOut.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
junOut.res3.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* junOut.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
junOut.vol.dynBal.mWat_flow_internal = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junOut.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 1760;
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
junOut.vol.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* junOut.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
PCHW.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* PCHW.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
PCHW.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* PCHW.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1763;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* pumCHW2.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1765;
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
pumCHW2.eff.r_N = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* pumCHW2.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
cooTow2.T_Vol.port.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow2.T_Vol.port.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
pumCWcon2.y = 15.873015873015873
*/
void outputs_WaterCooledChillerExample7_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* pumCWcon2.y variable */) = 15.873015873015873;
  threadData->lastEquationSolved = 1768;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_a.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* pumCW2.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_b.m_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* pumCW2.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1770;
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
pumCW2.eff.r_N = 1.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* pumCW2.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 1771;
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
pumCHWcon2.y = 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* pumCHWcon2.y variable */) = 4.761904761904762;
  threadData->lastEquationSolved = 1772;
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
chi2.preDro1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* chi2.preDro1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1773;
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
chi2.preDro2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* chi2.preDro2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
junCHWSup.res1.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* junCHWSup.res1.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1775;
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
junCHWSup.res2.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* junCHWSup.res2.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
junCHWSup.res3.dp = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* junCHWSup.res3.dp variable */) = 0.0;
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
junCHWSup.vol.heatPort.Q_flow = 0.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* junCHWSup.vol.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 1778;
}
OMC_DISABLE_OPT
void outputs_WaterCooledChillerExample7_functionInitialEquations_3(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    outputs_WaterCooledChillerExample7_eqFunction_4318,
    outputs_WaterCooledChillerExample7_eqFunction_4319,
    outputs_WaterCooledChillerExample7_eqFunction_4329,
    outputs_WaterCooledChillerExample7_eqFunction_5145,
    outputs_WaterCooledChillerExample7_eqFunction_4308,
    outputs_WaterCooledChillerExample7_eqFunction_5142,
    outputs_WaterCooledChillerExample7_eqFunction_5154,
    outputs_WaterCooledChillerExample7_eqFunction_5156,
    outputs_WaterCooledChillerExample7_eqFunction_5157,
    outputs_WaterCooledChillerExample7_eqFunction_4306,
    outputs_WaterCooledChillerExample7_eqFunction_1322,
    outputs_WaterCooledChillerExample7_eqFunction_1323,
    outputs_WaterCooledChillerExample7_eqFunction_4313,
    outputs_WaterCooledChillerExample7_eqFunction_1325,
    outputs_WaterCooledChillerExample7_eqFunction_5344,
    outputs_WaterCooledChillerExample7_eqFunction_5345,
    outputs_WaterCooledChillerExample7_eqFunction_5346,
    outputs_WaterCooledChillerExample7_eqFunction_5343,
    outputs_WaterCooledChillerExample7_eqFunction_5342,
    outputs_WaterCooledChillerExample7_eqFunction_5355,
    outputs_WaterCooledChillerExample7_eqFunction_5358,
    outputs_WaterCooledChillerExample7_eqFunction_5359,
    outputs_WaterCooledChillerExample7_eqFunction_5360,
    outputs_WaterCooledChillerExample7_eqFunction_1335,
    outputs_WaterCooledChillerExample7_eqFunction_5333,
    outputs_WaterCooledChillerExample7_eqFunction_1337,
    outputs_WaterCooledChillerExample7_eqFunction_5315,
    outputs_WaterCooledChillerExample7_eqFunction_1339,
    outputs_WaterCooledChillerExample7_eqFunction_1340,
    outputs_WaterCooledChillerExample7_eqFunction_5298,
    outputs_WaterCooledChillerExample7_eqFunction_1342,
    outputs_WaterCooledChillerExample7_eqFunction_1343,
    outputs_WaterCooledChillerExample7_eqFunction_1344,
    outputs_WaterCooledChillerExample7_eqFunction_1345,
    outputs_WaterCooledChillerExample7_eqFunction_1346,
    outputs_WaterCooledChillerExample7_eqFunction_5372,
    outputs_WaterCooledChillerExample7_eqFunction_1349,
    outputs_WaterCooledChillerExample7_eqFunction_5375,
    outputs_WaterCooledChillerExample7_eqFunction_5376,
    outputs_WaterCooledChillerExample7_eqFunction_1352,
    outputs_WaterCooledChillerExample7_eqFunction_1353,
    outputs_WaterCooledChillerExample7_eqFunction_1369,
    outputs_WaterCooledChillerExample7_eqFunction_1370,
    outputs_WaterCooledChillerExample7_eqFunction_1371,
    outputs_WaterCooledChillerExample7_eqFunction_1372,
    outputs_WaterCooledChillerExample7_eqFunction_1373,
    outputs_WaterCooledChillerExample7_eqFunction_5427,
    outputs_WaterCooledChillerExample7_eqFunction_5428,
    outputs_WaterCooledChillerExample7_eqFunction_5409,
    outputs_WaterCooledChillerExample7_eqFunction_5408,
    outputs_WaterCooledChillerExample7_eqFunction_1378,
    outputs_WaterCooledChillerExample7_eqFunction_5401,
    outputs_WaterCooledChillerExample7_eqFunction_5402,
    outputs_WaterCooledChillerExample7_eqFunction_5403,
    outputs_WaterCooledChillerExample7_eqFunction_5419,
    outputs_WaterCooledChillerExample7_eqFunction_5420,
    outputs_WaterCooledChillerExample7_eqFunction_5421,
    outputs_WaterCooledChillerExample7_eqFunction_5417,
    outputs_WaterCooledChillerExample7_eqFunction_5411,
    outputs_WaterCooledChillerExample7_eqFunction_5425,
    outputs_WaterCooledChillerExample7_eqFunction_5426,
    outputs_WaterCooledChillerExample7_eqFunction_5410,
    outputs_WaterCooledChillerExample7_eqFunction_5423,
    outputs_WaterCooledChillerExample7_eqFunction_5377,
    outputs_WaterCooledChillerExample7_eqFunction_5415,
    outputs_WaterCooledChillerExample7_eqFunction_5416,
    outputs_WaterCooledChillerExample7_eqFunction_5381,
    outputs_WaterCooledChillerExample7_eqFunction_5413,
    outputs_WaterCooledChillerExample7_eqFunction_5429,
    outputs_WaterCooledChillerExample7_eqFunction_5430,
    outputs_WaterCooledChillerExample7_eqFunction_1398,
    outputs_WaterCooledChillerExample7_eqFunction_5433,
    outputs_WaterCooledChillerExample7_eqFunction_5452,
    outputs_WaterCooledChillerExample7_eqFunction_5453,
    outputs_WaterCooledChillerExample7_eqFunction_5454,
    outputs_WaterCooledChillerExample7_eqFunction_5456,
    outputs_WaterCooledChillerExample7_eqFunction_5457,
    outputs_WaterCooledChillerExample7_eqFunction_5458,
    outputs_WaterCooledChillerExample7_eqFunction_5446,
    outputs_WaterCooledChillerExample7_eqFunction_5447,
    outputs_WaterCooledChillerExample7_eqFunction_5448,
    outputs_WaterCooledChillerExample7_eqFunction_5449,
    outputs_WaterCooledChillerExample7_eqFunction_5450,
    outputs_WaterCooledChillerExample7_eqFunction_5451,
    outputs_WaterCooledChillerExample7_eqFunction_5440,
    outputs_WaterCooledChillerExample7_eqFunction_5443,
    outputs_WaterCooledChillerExample7_eqFunction_5444,
    outputs_WaterCooledChillerExample7_eqFunction_5445,
    outputs_WaterCooledChillerExample7_eqFunction_5362,
    outputs_WaterCooledChillerExample7_eqFunction_5363,
    outputs_WaterCooledChillerExample7_eqFunction_5364,
    outputs_WaterCooledChillerExample7_eqFunction_5365,
    outputs_WaterCooledChillerExample7_eqFunction_5366,
    outputs_WaterCooledChillerExample7_eqFunction_5367,
    outputs_WaterCooledChillerExample7_eqFunction_5368,
    outputs_WaterCooledChillerExample7_eqFunction_1423,
    outputs_WaterCooledChillerExample7_eqFunction_5459,
    outputs_WaterCooledChillerExample7_eqFunction_5462,
    outputs_WaterCooledChillerExample7_eqFunction_5463,
    outputs_WaterCooledChillerExample7_eqFunction_5464,
    outputs_WaterCooledChillerExample7_eqFunction_5465,
    outputs_WaterCooledChillerExample7_eqFunction_5466,
    outputs_WaterCooledChillerExample7_eqFunction_5467,
    outputs_WaterCooledChillerExample7_eqFunction_1431,
    outputs_WaterCooledChillerExample7_eqFunction_1432,
    outputs_WaterCooledChillerExample7_eqFunction_1433,
    outputs_WaterCooledChillerExample7_eqFunction_5348,
    outputs_WaterCooledChillerExample7_eqFunction_5353,
    outputs_WaterCooledChillerExample7_eqFunction_5354,
    outputs_WaterCooledChillerExample7_eqFunction_5350,
    outputs_WaterCooledChillerExample7_eqFunction_5351,
    outputs_WaterCooledChillerExample7_eqFunction_5352,
    outputs_WaterCooledChillerExample7_eqFunction_5441,
    outputs_WaterCooledChillerExample7_eqFunction_5349,
    outputs_WaterCooledChillerExample7_eqFunction_5434,
    outputs_WaterCooledChillerExample7_eqFunction_5435,
    outputs_WaterCooledChillerExample7_eqFunction_5455,
    outputs_WaterCooledChillerExample7_eqFunction_5337,
    outputs_WaterCooledChillerExample7_eqFunction_5338,
    outputs_WaterCooledChillerExample7_eqFunction_1447,
    outputs_WaterCooledChillerExample7_eqFunction_5418,
    outputs_WaterCooledChillerExample7_eqFunction_5442,
    outputs_WaterCooledChillerExample7_eqFunction_5347,
    outputs_WaterCooledChillerExample7_eqFunction_5336,
    outputs_WaterCooledChillerExample7_eqFunction_5405,
    outputs_WaterCooledChillerExample7_eqFunction_5406,
    outputs_WaterCooledChillerExample7_eqFunction_5436,
    outputs_WaterCooledChillerExample7_eqFunction_1455,
    outputs_WaterCooledChillerExample7_eqFunction_1456,
    outputs_WaterCooledChillerExample7_eqFunction_5340,
    outputs_WaterCooledChillerExample7_eqFunction_5361,
    outputs_WaterCooledChillerExample7_eqFunction_1459,
    outputs_WaterCooledChillerExample7_eqFunction_1460,
    outputs_WaterCooledChillerExample7_eqFunction_1461,
    outputs_WaterCooledChillerExample7_eqFunction_4301,
    outputs_WaterCooledChillerExample7_eqFunction_4309,
    outputs_WaterCooledChillerExample7_eqFunction_4310,
    outputs_WaterCooledChillerExample7_eqFunction_4320,
    outputs_WaterCooledChillerExample7_eqFunction_5143,
    outputs_WaterCooledChillerExample7_eqFunction_4302,
    outputs_WaterCooledChillerExample7_eqFunction_5140,
    outputs_WaterCooledChillerExample7_eqFunction_5141,
    outputs_WaterCooledChillerExample7_eqFunction_5148,
    outputs_WaterCooledChillerExample7_eqFunction_5437,
    outputs_WaterCooledChillerExample7_eqFunction_5438,
    outputs_WaterCooledChillerExample7_eqFunction_5439,
    outputs_WaterCooledChillerExample7_eqFunction_1474,
    outputs_WaterCooledChillerExample7_eqFunction_5178,
    outputs_WaterCooledChillerExample7_eqFunction_5179,
    outputs_WaterCooledChillerExample7_eqFunction_5180,
    outputs_WaterCooledChillerExample7_eqFunction_1478,
    outputs_WaterCooledChillerExample7_eqFunction_1479,
    outputs_WaterCooledChillerExample7_eqFunction_5182,
    outputs_WaterCooledChillerExample7_eqFunction_5183,
    outputs_WaterCooledChillerExample7_eqFunction_5184,
    outputs_WaterCooledChillerExample7_eqFunction_1483,
    outputs_WaterCooledChillerExample7_eqFunction_1484,
    outputs_WaterCooledChillerExample7_eqFunction_5187,
    outputs_WaterCooledChillerExample7_eqFunction_5188,
    outputs_WaterCooledChillerExample7_eqFunction_1487,
    outputs_WaterCooledChillerExample7_eqFunction_1488,
    outputs_WaterCooledChillerExample7_eqFunction_5190,
    outputs_WaterCooledChillerExample7_eqFunction_5191,
    outputs_WaterCooledChillerExample7_eqFunction_1491,
    outputs_WaterCooledChillerExample7_eqFunction_1492,
    outputs_WaterCooledChillerExample7_eqFunction_5235,
    outputs_WaterCooledChillerExample7_eqFunction_5236,
    outputs_WaterCooledChillerExample7_eqFunction_5150,
    outputs_WaterCooledChillerExample7_eqFunction_5152,
    outputs_WaterCooledChillerExample7_eqFunction_5153,
    outputs_WaterCooledChillerExample7_eqFunction_4300,
    outputs_WaterCooledChillerExample7_eqFunction_1499,
    outputs_WaterCooledChillerExample7_eqFunction_5192,
    outputs_WaterCooledChillerExample7_eqFunction_5193,
    outputs_WaterCooledChillerExample7_eqFunction_5194,
    outputs_WaterCooledChillerExample7_eqFunction_1503,
    outputs_WaterCooledChillerExample7_eqFunction_1504,
    outputs_WaterCooledChillerExample7_eqFunction_5239,
    outputs_WaterCooledChillerExample7_eqFunction_1506,
    outputs_WaterCooledChillerExample7_eqFunction_1507,
    outputs_WaterCooledChillerExample7_eqFunction_1508,
    outputs_WaterCooledChillerExample7_eqFunction_1509,
    outputs_WaterCooledChillerExample7_eqFunction_5371,
    outputs_WaterCooledChillerExample7_eqFunction_5468,
    outputs_WaterCooledChillerExample7_eqFunction_1512,
    outputs_WaterCooledChillerExample7_eqFunction_4408,
    outputs_WaterCooledChillerExample7_eqFunction_4409,
    outputs_WaterCooledChillerExample7_eqFunction_4410,
    outputs_WaterCooledChillerExample7_eqFunction_4411,
    outputs_WaterCooledChillerExample7_eqFunction_4412,
    outputs_WaterCooledChillerExample7_eqFunction_4413,
    outputs_WaterCooledChillerExample7_eqFunction_1519,
    outputs_WaterCooledChillerExample7_eqFunction_4426,
    outputs_WaterCooledChillerExample7_eqFunction_4427,
    outputs_WaterCooledChillerExample7_eqFunction_4428,
    outputs_WaterCooledChillerExample7_eqFunction_4429,
    outputs_WaterCooledChillerExample7_eqFunction_4430,
    outputs_WaterCooledChillerExample7_eqFunction_4431,
    outputs_WaterCooledChillerExample7_eqFunction_4432,
    outputs_WaterCooledChillerExample7_eqFunction_4433,
    outputs_WaterCooledChillerExample7_eqFunction_4434,
    outputs_WaterCooledChillerExample7_eqFunction_4435,
    outputs_WaterCooledChillerExample7_eqFunction_4436,
    outputs_WaterCooledChillerExample7_eqFunction_4437,
    outputs_WaterCooledChillerExample7_eqFunction_4438,
    outputs_WaterCooledChillerExample7_eqFunction_4439,
    outputs_WaterCooledChillerExample7_eqFunction_4440,
    outputs_WaterCooledChillerExample7_eqFunction_4441,
    outputs_WaterCooledChillerExample7_eqFunction_4442,
    outputs_WaterCooledChillerExample7_eqFunction_4443,
    outputs_WaterCooledChillerExample7_eqFunction_4444,
    outputs_WaterCooledChillerExample7_eqFunction_4445,
    outputs_WaterCooledChillerExample7_eqFunction_4446,
    outputs_WaterCooledChillerExample7_eqFunction_4447,
    outputs_WaterCooledChillerExample7_eqFunction_4448,
    outputs_WaterCooledChillerExample7_eqFunction_4449,
    outputs_WaterCooledChillerExample7_eqFunction_4450,
    outputs_WaterCooledChillerExample7_eqFunction_4451,
    outputs_WaterCooledChillerExample7_eqFunction_4452,
    outputs_WaterCooledChillerExample7_eqFunction_4453,
    outputs_WaterCooledChillerExample7_eqFunction_4454,
    outputs_WaterCooledChillerExample7_eqFunction_4455,
    outputs_WaterCooledChillerExample7_eqFunction_4456,
    outputs_WaterCooledChillerExample7_eqFunction_4457,
    outputs_WaterCooledChillerExample7_eqFunction_4458,
    outputs_WaterCooledChillerExample7_eqFunction_4459,
    outputs_WaterCooledChillerExample7_eqFunction_4460,
    outputs_WaterCooledChillerExample7_eqFunction_4461,
    outputs_WaterCooledChillerExample7_eqFunction_4462,
    outputs_WaterCooledChillerExample7_eqFunction_4463,
    outputs_WaterCooledChillerExample7_eqFunction_4464,
    outputs_WaterCooledChillerExample7_eqFunction_4465,
    outputs_WaterCooledChillerExample7_eqFunction_4466,
    outputs_WaterCooledChillerExample7_eqFunction_4467,
    outputs_WaterCooledChillerExample7_eqFunction_4489,
    outputs_WaterCooledChillerExample7_eqFunction_4603,
    outputs_WaterCooledChillerExample7_eqFunction_5383,
    outputs_WaterCooledChillerExample7_eqFunction_5384,
    outputs_WaterCooledChillerExample7_eqFunction_4492,
    outputs_WaterCooledChillerExample7_eqFunction_1567,
    outputs_WaterCooledChillerExample7_eqFunction_4600,
    outputs_WaterCooledChillerExample7_eqFunction_4601,
    outputs_WaterCooledChillerExample7_eqFunction_4591,
    outputs_WaterCooledChillerExample7_eqFunction_5379,
    outputs_WaterCooledChillerExample7_eqFunction_5380,
    outputs_WaterCooledChillerExample7_eqFunction_4471,
    outputs_WaterCooledChillerExample7_eqFunction_4469,
    outputs_WaterCooledChillerExample7_eqFunction_4470,
    outputs_WaterCooledChillerExample7_eqFunction_4490,
    outputs_WaterCooledChillerExample7_eqFunction_4491,
    outputs_WaterCooledChillerExample7_eqFunction_4468,
    outputs_WaterCooledChillerExample7_eqFunction_1579,
    outputs_WaterCooledChillerExample7_eqFunction_4588,
    outputs_WaterCooledChillerExample7_eqFunction_4589,
    outputs_WaterCooledChillerExample7_eqFunction_4516,
    outputs_WaterCooledChillerExample7_eqFunction_4517,
    outputs_WaterCooledChillerExample7_eqFunction_4525,
    outputs_WaterCooledChillerExample7_eqFunction_5339,
    outputs_WaterCooledChillerExample7_eqFunction_1586,
    outputs_WaterCooledChillerExample7_eqFunction_1594,
    outputs_WaterCooledChillerExample7_eqFunction_4655,
    outputs_WaterCooledChillerExample7_eqFunction_1608,
    outputs_WaterCooledChillerExample7_eqFunction_5242,
    outputs_WaterCooledChillerExample7_eqFunction_5243,
    outputs_WaterCooledChillerExample7_eqFunction_1611,
    outputs_WaterCooledChillerExample7_eqFunction_5257,
    outputs_WaterCooledChillerExample7_eqFunction_5258,
    outputs_WaterCooledChillerExample7_eqFunction_5259,
    outputs_WaterCooledChillerExample7_eqFunction_5256,
    outputs_WaterCooledChillerExample7_eqFunction_5260,
    outputs_WaterCooledChillerExample7_eqFunction_5261,
    outputs_WaterCooledChillerExample7_eqFunction_5477,
    outputs_WaterCooledChillerExample7_eqFunction_4488,
    outputs_WaterCooledChillerExample7_eqFunction_1632,
    outputs_WaterCooledChillerExample7_eqFunction_5270,
    outputs_WaterCooledChillerExample7_eqFunction_5271,
    outputs_WaterCooledChillerExample7_eqFunction_1635,
    outputs_WaterCooledChillerExample7_eqFunction_5273,
    outputs_WaterCooledChillerExample7_eqFunction_5274,
    outputs_WaterCooledChillerExample7_eqFunction_5275,
    outputs_WaterCooledChillerExample7_eqFunction_5272,
    outputs_WaterCooledChillerExample7_eqFunction_5276,
    outputs_WaterCooledChillerExample7_eqFunction_5277,
    outputs_WaterCooledChillerExample7_eqFunction_5495,
    outputs_WaterCooledChillerExample7_eqFunction_4474,
    outputs_WaterCooledChillerExample7_eqFunction_1644,
    outputs_WaterCooledChillerExample7_eqFunction_4477,
    outputs_WaterCooledChillerExample7_eqFunction_1646,
    outputs_WaterCooledChillerExample7_eqFunction_1647,
    outputs_WaterCooledChillerExample7_eqFunction_1648,
    outputs_WaterCooledChillerExample7_eqFunction_1649,
    outputs_WaterCooledChillerExample7_eqFunction_1650,
    outputs_WaterCooledChillerExample7_eqFunction_1651,
    outputs_WaterCooledChillerExample7_eqFunction_1652,
    outputs_WaterCooledChillerExample7_eqFunction_1653,
    outputs_WaterCooledChillerExample7_eqFunction_1654,
    outputs_WaterCooledChillerExample7_eqFunction_1655,
    outputs_WaterCooledChillerExample7_eqFunction_1656,
    outputs_WaterCooledChillerExample7_eqFunction_1657,
    outputs_WaterCooledChillerExample7_eqFunction_1658,
    outputs_WaterCooledChillerExample7_eqFunction_1659,
    outputs_WaterCooledChillerExample7_eqFunction_1660,
    outputs_WaterCooledChillerExample7_eqFunction_1661,
    outputs_WaterCooledChillerExample7_eqFunction_1662,
    outputs_WaterCooledChillerExample7_eqFunction_1663,
    outputs_WaterCooledChillerExample7_eqFunction_1664,
    outputs_WaterCooledChillerExample7_eqFunction_1665,
    outputs_WaterCooledChillerExample7_eqFunction_1666,
    outputs_WaterCooledChillerExample7_eqFunction_1667,
    outputs_WaterCooledChillerExample7_eqFunction_1668,
    outputs_WaterCooledChillerExample7_eqFunction_1669,
    outputs_WaterCooledChillerExample7_eqFunction_1670,
    outputs_WaterCooledChillerExample7_eqFunction_1671,
    outputs_WaterCooledChillerExample7_eqFunction_1672,
    outputs_WaterCooledChillerExample7_eqFunction_1673,
    outputs_WaterCooledChillerExample7_eqFunction_1674,
    outputs_WaterCooledChillerExample7_eqFunction_1675,
    outputs_WaterCooledChillerExample7_eqFunction_1676,
    outputs_WaterCooledChillerExample7_eqFunction_1677,
    outputs_WaterCooledChillerExample7_eqFunction_1678,
    outputs_WaterCooledChillerExample7_eqFunction_1679,
    outputs_WaterCooledChillerExample7_eqFunction_1680,
    outputs_WaterCooledChillerExample7_eqFunction_1681,
    outputs_WaterCooledChillerExample7_eqFunction_1682,
    outputs_WaterCooledChillerExample7_eqFunction_1683,
    outputs_WaterCooledChillerExample7_eqFunction_1684,
    outputs_WaterCooledChillerExample7_eqFunction_1685,
    outputs_WaterCooledChillerExample7_eqFunction_1686,
    outputs_WaterCooledChillerExample7_eqFunction_1687,
    outputs_WaterCooledChillerExample7_eqFunction_1688,
    outputs_WaterCooledChillerExample7_eqFunction_1689,
    outputs_WaterCooledChillerExample7_eqFunction_1690,
    outputs_WaterCooledChillerExample7_eqFunction_1691,
    outputs_WaterCooledChillerExample7_eqFunction_1692,
    outputs_WaterCooledChillerExample7_eqFunction_1693,
    outputs_WaterCooledChillerExample7_eqFunction_1694,
    outputs_WaterCooledChillerExample7_eqFunction_1695,
    outputs_WaterCooledChillerExample7_eqFunction_1696,
    outputs_WaterCooledChillerExample7_eqFunction_1697,
    outputs_WaterCooledChillerExample7_eqFunction_1698,
    outputs_WaterCooledChillerExample7_eqFunction_1699,
    outputs_WaterCooledChillerExample7_eqFunction_1700,
    outputs_WaterCooledChillerExample7_eqFunction_1701,
    outputs_WaterCooledChillerExample7_eqFunction_1702,
    outputs_WaterCooledChillerExample7_eqFunction_1703,
    outputs_WaterCooledChillerExample7_eqFunction_1704,
    outputs_WaterCooledChillerExample7_eqFunction_1705,
    outputs_WaterCooledChillerExample7_eqFunction_1706,
    outputs_WaterCooledChillerExample7_eqFunction_1707,
    outputs_WaterCooledChillerExample7_eqFunction_1708,
    outputs_WaterCooledChillerExample7_eqFunction_1709,
    outputs_WaterCooledChillerExample7_eqFunction_1710,
    outputs_WaterCooledChillerExample7_eqFunction_1711,
    outputs_WaterCooledChillerExample7_eqFunction_1712,
    outputs_WaterCooledChillerExample7_eqFunction_1713,
    outputs_WaterCooledChillerExample7_eqFunction_1714,
    outputs_WaterCooledChillerExample7_eqFunction_1715,
    outputs_WaterCooledChillerExample7_eqFunction_1716,
    outputs_WaterCooledChillerExample7_eqFunction_1717,
    outputs_WaterCooledChillerExample7_eqFunction_1718,
    outputs_WaterCooledChillerExample7_eqFunction_1719,
    outputs_WaterCooledChillerExample7_eqFunction_1720,
    outputs_WaterCooledChillerExample7_eqFunction_1721,
    outputs_WaterCooledChillerExample7_eqFunction_1722,
    outputs_WaterCooledChillerExample7_eqFunction_1723,
    outputs_WaterCooledChillerExample7_eqFunction_1724,
    outputs_WaterCooledChillerExample7_eqFunction_1725,
    outputs_WaterCooledChillerExample7_eqFunction_1726,
    outputs_WaterCooledChillerExample7_eqFunction_1727,
    outputs_WaterCooledChillerExample7_eqFunction_1728,
    outputs_WaterCooledChillerExample7_eqFunction_1729,
    outputs_WaterCooledChillerExample7_eqFunction_1730,
    outputs_WaterCooledChillerExample7_eqFunction_1731,
    outputs_WaterCooledChillerExample7_eqFunction_1732,
    outputs_WaterCooledChillerExample7_eqFunction_1733,
    outputs_WaterCooledChillerExample7_eqFunction_1734,
    outputs_WaterCooledChillerExample7_eqFunction_1735,
    outputs_WaterCooledChillerExample7_eqFunction_1736,
    outputs_WaterCooledChillerExample7_eqFunction_1737,
    outputs_WaterCooledChillerExample7_eqFunction_1738,
    outputs_WaterCooledChillerExample7_eqFunction_1739,
    outputs_WaterCooledChillerExample7_eqFunction_1740,
    outputs_WaterCooledChillerExample7_eqFunction_1741,
    outputs_WaterCooledChillerExample7_eqFunction_1742,
    outputs_WaterCooledChillerExample7_eqFunction_1743,
    outputs_WaterCooledChillerExample7_eqFunction_1744,
    outputs_WaterCooledChillerExample7_eqFunction_1745,
    outputs_WaterCooledChillerExample7_eqFunction_1746,
    outputs_WaterCooledChillerExample7_eqFunction_1747,
    outputs_WaterCooledChillerExample7_eqFunction_1748,
    outputs_WaterCooledChillerExample7_eqFunction_1749,
    outputs_WaterCooledChillerExample7_eqFunction_1750,
    outputs_WaterCooledChillerExample7_eqFunction_1751,
    outputs_WaterCooledChillerExample7_eqFunction_1752,
    outputs_WaterCooledChillerExample7_eqFunction_1753,
    outputs_WaterCooledChillerExample7_eqFunction_1754,
    outputs_WaterCooledChillerExample7_eqFunction_1755,
    outputs_WaterCooledChillerExample7_eqFunction_1756,
    outputs_WaterCooledChillerExample7_eqFunction_1757,
    outputs_WaterCooledChillerExample7_eqFunction_1758,
    outputs_WaterCooledChillerExample7_eqFunction_1759,
    outputs_WaterCooledChillerExample7_eqFunction_1760,
    outputs_WaterCooledChillerExample7_eqFunction_1761,
    outputs_WaterCooledChillerExample7_eqFunction_1762,
    outputs_WaterCooledChillerExample7_eqFunction_1763,
    outputs_WaterCooledChillerExample7_eqFunction_1764,
    outputs_WaterCooledChillerExample7_eqFunction_1765,
    outputs_WaterCooledChillerExample7_eqFunction_1766,
    outputs_WaterCooledChillerExample7_eqFunction_1767,
    outputs_WaterCooledChillerExample7_eqFunction_1768,
    outputs_WaterCooledChillerExample7_eqFunction_1769,
    outputs_WaterCooledChillerExample7_eqFunction_1770,
    outputs_WaterCooledChillerExample7_eqFunction_1771,
    outputs_WaterCooledChillerExample7_eqFunction_1772,
    outputs_WaterCooledChillerExample7_eqFunction_1773,
    outputs_WaterCooledChillerExample7_eqFunction_1774,
    outputs_WaterCooledChillerExample7_eqFunction_1775,
    outputs_WaterCooledChillerExample7_eqFunction_1776,
    outputs_WaterCooledChillerExample7_eqFunction_1777,
    outputs_WaterCooledChillerExample7_eqFunction_1778
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif