/* Linear Systems */
#include "outputs/WaterCooledChillerExample7_model.h"
#include "outputs/WaterCooledChillerExample7_12jac.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 5385
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_5385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5385;
}
/*
equation index: 5386
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_5386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5386;
}
/*
equation index: 5387
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_5387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5387;
}
/*
equation index: 5388
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_5388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5388;
}
/*
equation index: 5389
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_5389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5389;
}
/*
equation index: 5390
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_5390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5390;
}
/*
equation index: 5391
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_5391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5391;
}

void residualFunc5400(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,5400};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5385(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5386(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5387(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5388(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5389(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5390(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_5391(data, threadData);
  res[0] = -13.266998341625207 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5392;
  threadData->lastEquationSolved = 5400;
}
OMC_DISABLE_OPT
void initializeStaticLSData5400(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* der(cooCoi.ele[1].vol2.dynBal.medium.p) */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 4863
type: SIMPLE_ASSIGN
tan.conWal[1].dT = tan.vol[1].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_4863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* tan.vol[1].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 4863;
}
/*
equation index: 4864
type: SIMPLE_ASSIGN
tan.conWal[1].Q_flow = tan.conWal[1].G * tan.conWal[1].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_4864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */));
  threadData->lastEquationSolved = 4864;
}
/*
equation index: 4865
type: SIMPLE_ASSIGN
tan.conWal[4].dT = tan.vol[4].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_4865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* tan.vol[4].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 4865;
}
/*
equation index: 4866
type: SIMPLE_ASSIGN
tan.conWal[4].Q_flow = tan.conWal[4].G * tan.conWal[4].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_4866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */));
  threadData->lastEquationSolved = 4866;
}
/*
equation index: 4867
type: SIMPLE_ASSIGN
tan.conWal[2].dT = tan.vol[2].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_4867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* tan.vol[2].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 4867;
}
/*
equation index: 4868
type: SIMPLE_ASSIGN
tan.conWal[2].Q_flow = tan.conWal[2].G * tan.conWal[2].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_4868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */));
  threadData->lastEquationSolved = 4868;
}
/*
equation index: 4869
type: SIMPLE_ASSIGN
tan.conWal[3].Q_flow = (-tan.conWal[1].Q_flow) - tan.conWal[2].Q_flow - tan.conWal[4].Q_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */);
  threadData->lastEquationSolved = 4869;
}
/*
equation index: 4870
type: SIMPLE_ASSIGN
tan.conWal[3].dT = tan.conWal[3].Q_flow / tan.conWal[3].G
*/
void outputs_WaterCooledChillerExample7_eqFunction_4870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */),"tan.conWal[3].G",equationIndexes);
  threadData->lastEquationSolved = 4870;
}

void residualFunc4878(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4878};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = xloc[0];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4863(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4864(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4865(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4866(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4867(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4868(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4869(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4870(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* tan.vol[3].T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */);
  threadData->lastEquationSolved = 4871;
  threadData->lastEquationSolved = 4878;
}
OMC_DISABLE_OPT
void initializeStaticLSData4878(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* tan.heaPorSid.T */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 3609
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_3609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3609;
}
/*
equation index: 3610
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_3610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3610;
}
/*
equation index: 3611
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_3611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3611;
}
/*
equation index: 3612
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_3612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3612;
}
/*
equation index: 3613
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_3613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3613;
}
/*
equation index: 3614
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_3614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3614;
}
/*
equation index: 3615
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_3615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3615;
}

void residualFunc3624(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3624};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3609(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3610(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3611(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3612(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3613(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3614(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3615(data, threadData);
  res[0] = -13.266998341625207 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3616;
  threadData->lastEquationSolved = 3624;
}
OMC_DISABLE_OPT
void initializeStaticLSData3624(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* der(cooCoi.ele[1].vol2.dynBal.medium.p) */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 3115
type: SIMPLE_ASSIGN
tan.conWal[1].dT = tan.vol[1].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_3115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* tan.vol[1].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 3115;
}
/*
equation index: 3116
type: SIMPLE_ASSIGN
tan.conWal[1].Q_flow = tan.conWal[1].G * tan.conWal[1].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_3116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */));
  threadData->lastEquationSolved = 3116;
}
/*
equation index: 3117
type: SIMPLE_ASSIGN
tan.conWal[2].dT = tan.vol[2].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_3117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* tan.vol[2].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 3117;
}
/*
equation index: 3118
type: SIMPLE_ASSIGN
tan.conWal[2].Q_flow = tan.conWal[2].G * tan.conWal[2].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_3118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */));
  threadData->lastEquationSolved = 3118;
}
/*
equation index: 3119
type: SIMPLE_ASSIGN
tan.conWal[3].dT = tan.vol[3].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_3119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* tan.vol[3].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 3119;
}
/*
equation index: 3120
type: SIMPLE_ASSIGN
tan.conWal[3].Q_flow = tan.conWal[3].G * tan.conWal[3].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_3120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */));
  threadData->lastEquationSolved = 3120;
}
/*
equation index: 3121
type: SIMPLE_ASSIGN
tan.conWal[4].Q_flow = (-tan.conWal[1].Q_flow) - tan.conWal[2].Q_flow - tan.conWal[3].Q_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_3121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */);
  threadData->lastEquationSolved = 3121;
}
/*
equation index: 3122
type: SIMPLE_ASSIGN
tan.conWal[4].dT = tan.conWal[4].Q_flow / tan.conWal[4].G
*/
void outputs_WaterCooledChillerExample7_eqFunction_3122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */),"tan.conWal[4].G",equationIndexes);
  threadData->lastEquationSolved = 3122;
}

void residualFunc3130(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3130};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = xloc[0];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3115(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3116(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3117(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3118(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3119(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3120(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3121(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3122(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* tan.vol[4].T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */);
  threadData->lastEquationSolved = 3123;
  threadData->lastEquationSolved = 3130;
}
OMC_DISABLE_OPT
void initializeStaticLSData3130(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* tan.heaPorSid.T */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 2552
type: SIMPLE_ASSIGN
tan.indTanHex.dp = 525.0 * val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) = (525.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */));
  threadData->lastEquationSolved = 2552;
}
/*
equation index: 2553
type: SIMPLE_ASSIGN
val8_2Sto.dp = (-0.21) * (-val8Sto.m_flow) * val8_2Sto.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2553;
}
/*
equation index: 2554
type: SIMPLE_ASSIGN
val8Sto.dp = (-0.21) * (-val8Sto.m_flow) * val8Sto.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2554;
}
/*
equation index: 2555
type: SIMPLE_ASSIGN
val8.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 2555;
}
/*
equation index: 2556
type: SIMPLE_ASSIGN
val8.dp = (-0.21) * (-val8.m_flow) * val8.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2556;
}
/*
equation index: 2557
type: SIMPLE_ASSIGN
val8_2.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 2557;
}
/*
equation index: 2558
type: SIMPLE_ASSIGN
val8_2.dp = (-0.21) * (-val8_2.m_flow) * val8_2.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2558;
}
/*
equation index: 2559
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow = pumTanRet.m_flow + val8_2.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 2559;
}
/*
equation index: 2560
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow = (-val8.m_flow) - pumTanRet.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 2560;
}
/*
equation index: 2561
type: SIMPLE_ASSIGN
val8Rel.dp = (-0.21) * (-pumTanRet.m_flow) * val8Rel.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2561;
}
/*
equation index: 2562
type: SIMPLE_ASSIGN
val8_2Rel.dp = (-0.21) * (-pumTanRet.m_flow) * val8_2Rel.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2562;
}
/*
equation index: 2563
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = junCHWRet2.res1.m_flow - -4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_2563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) - (-4.761904761904762);
  threadData->lastEquationSolved = 2563;
}
/*
equation index: 2564
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = junCHWSup2.res2.m_flow - 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) - 4.761904761904762;
  threadData->lastEquationSolved = 2564;
}
/*
equation index: 2565
type: SIMPLE_ASSIGN
pumCHW2.port_a.p = junCHWRet.vol.p - val8_2.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_2565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */);
  threadData->lastEquationSolved = 2565;
}
/*
equation index: 2566
type: SIMPLE_ASSIGN
pumTanSup.port_a.p = junCHWRet.vol.p - val8_2Rel.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  threadData->lastEquationSolved = 2566;
}
/*
equation index: 2567
type: SIMPLE_ASSIGN
tan.vol[4].p = pumTanSup.port_a.p + pumTanCon.k
*/
void outputs_WaterCooledChillerExample7_eqFunction_2567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 2567;
}
/*
equation index: 2568
type: SIMPLE_ASSIGN
pumTanRet.port_b.p = tan.vol[4].p + pumTanCon.k
*/
void outputs_WaterCooledChillerExample7_eqFunction_2568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 2568;
}
/*
equation index: 2569
type: SIMPLE_ASSIGN
junCHWSup.vol.p = pumTanRet.port_b.p - val8Rel.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_2569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */);
  threadData->lastEquationSolved = 2569;
}
/*
equation index: 2570
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_2570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 2570;
}
/*
equation index: 2571
type: SIMPLE_ASSIGN
valByp.m_flow = 4.761904761904762 * valByp.dp / valByp.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) = DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2571;
}
/*
equation index: 2572
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 2572;
}
/*
equation index: 2573
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 2573;
}
/*
equation index: 2574
type: SIMPLE_ASSIGN
val1.dp = (-0.21) * (-val1.m_flow) * val1.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2574;
}
/*
equation index: 2575
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = 19021.8 * cooCoi.m1_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_2575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */) = (19021.8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */));
  threadData->lastEquationSolved = 2575;
}
/*
equation index: 2576
type: SIMPLE_ASSIGN
chi2.vol2.p = junCHWSup.vol.p + val8.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  threadData->lastEquationSolved = 2576;
}
/*
equation index: 2577
type: SIMPLE_ASSIGN
pumCHW2.dpMachine = chi2.vol2.p - pumCHW2.port_a.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_2577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 2577;
}
/*
equation index: 2578
type: SIMPLE_ASSIGN
pumCHW2.dp = val8_2Sto.dp - (pumCHW2.dpMachine + chi2.vol2.p - tan.indTanHex.dp - val8Sto.dp - pumCHW2.port_a.p)
*/
void outputs_WaterCooledChillerExample7_eqFunction_2578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */));
  threadData->lastEquationSolved = 2578;
}

void residualFunc2606(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2606};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = xloc[2];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2552(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2553(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2554(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2555(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2556(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2557(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2558(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2559(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2560(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2561(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2562(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2563(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2564(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2565(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2566(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2567(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2568(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2569(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2570(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2571(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2572(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2573(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2574(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2575(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2576(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2577(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_2578(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */);
  threadData->lastEquationSolved = 2581;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 2580;
  res[2] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  threadData->lastEquationSolved = 2579;
  threadData->lastEquationSolved = 2606;
}
OMC_DISABLE_OPT
void initializeStaticLSData2606(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[3] = {
    -1 /* junCHWRet.vol.p */,
    -1 /* pumTanRet.m_flow */,
    -1 /* val8Sto.m_flow */
  };
  for (int i = 0; i < 3; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 1354
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1354;
}
/*
equation index: 1355
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1355;
}
/*
equation index: 1356
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1356;
}
/*
equation index: 1357
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1357;
}
/*
equation index: 1358
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1358;
}
/*
equation index: 1359
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1359;
}
/*
equation index: 1360
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1360;
}

void residualFunc1369(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1369};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1354(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1355(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1356(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1357(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1358(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1359(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1360(data, threadData);
  res[0] = -13.266998341625207 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1361;
  threadData->lastEquationSolved = 1369;
}
OMC_DISABLE_OPT
void initializeStaticLSData1369(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* der(cooCoi.ele[1].vol2.dynBal.medium.p) */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}



/*
equation index: 923
type: SIMPLE_ASSIGN
tan.conWal[1].dT = tan.vol[1].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* tan.vol[1].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 923;
}
/*
equation index: 924
type: SIMPLE_ASSIGN
tan.conWal[1].Q_flow = tan.conWal[1].G * tan.conWal[1].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */));
  threadData->lastEquationSolved = 924;
}
/*
equation index: 925
type: SIMPLE_ASSIGN
tan.conWal[3].dT = tan.vol[3].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* tan.vol[3].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 925;
}
/*
equation index: 926
type: SIMPLE_ASSIGN
tan.conWal[3].Q_flow = tan.conWal[3].G * tan.conWal[3].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */));
  threadData->lastEquationSolved = 926;
}
/*
equation index: 927
type: SIMPLE_ASSIGN
tan.conWal[2].dT = tan.vol[2].T - tan.heaPorSid.T
*/
void outputs_WaterCooledChillerExample7_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* tan.vol[2].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 927;
}
/*
equation index: 928
type: SIMPLE_ASSIGN
tan.conWal[2].Q_flow = tan.conWal[2].G * tan.conWal[2].dT
*/
void outputs_WaterCooledChillerExample7_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */));
  threadData->lastEquationSolved = 928;
}
/*
equation index: 929
type: SIMPLE_ASSIGN
tan.conWal[4].Q_flow = (-tan.conWal[1].Q_flow) - tan.conWal[2].Q_flow - tan.conWal[3].Q_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */);
  threadData->lastEquationSolved = 929;
}
/*
equation index: 930
type: SIMPLE_ASSIGN
tan.conWal[4].dT = tan.conWal[4].Q_flow / tan.conWal[4].G
*/
void outputs_WaterCooledChillerExample7_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */),"tan.conWal[4].G",equationIndexes);
  threadData->lastEquationSolved = 930;
}

void residualFunc938(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,938};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = xloc[0];
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_923(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_924(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_925(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_926(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_927(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_928(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_929(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_930(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* tan.vol[4].T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */);
  threadData->lastEquationSolved = 931;
  threadData->lastEquationSolved = 938;
}
OMC_DISABLE_OPT
void initializeStaticLSData938(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[1] = {
    -1 /* tan.heaPorSid.T */
  };
  for (int i = 0; i < 1; ++i) {
    if (indices[i] == -1) {
      linearSystemData->nominal[i] = 1.0;
      linearSystemData->min[i]     = -DBL_MAX;
      linearSystemData->max[i]     = DBL_MAX;
    } else {
      linearSystemData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
      linearSystemData->max[i]     = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, indices[i]);
    }
  }
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void outputs_WaterCooledChillerExample7_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[6].equationIndex = 5400;
  linearSystemData[6].size = 1;
  linearSystemData[6].nnz = 0;
  linearSystemData[6].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[6].residualFunc = residualFunc5400;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac29_column;
  linearSystemData[6].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac29;
  linearSystemData[6].jacobianIndex = 9 /*jacInx*/;
  linearSystemData[6].setA = NULL;  //setLinearMatrixA5400;
  linearSystemData[6].setb = NULL;  //setLinearVectorb5400;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData5400;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[5].equationIndex = 4878;
  linearSystemData[5].size = 1;
  linearSystemData[5].nnz = 0;
  linearSystemData[5].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[5].residualFunc = residualFunc4878;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac27_column;
  linearSystemData[5].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac27;
  linearSystemData[5].jacobianIndex = 8 /*jacInx*/;
  linearSystemData[5].setA = NULL;  //setLinearMatrixA4878;
  linearSystemData[5].setb = NULL;  //setLinearVectorb4878;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData4878;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[4].equationIndex = 3624;
  linearSystemData[4].size = 1;
  linearSystemData[4].nnz = 0;
  linearSystemData[4].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[4].residualFunc = residualFunc3624;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac17_column;
  linearSystemData[4].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac17;
  linearSystemData[4].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[4].setA = NULL;  //setLinearMatrixA3624;
  linearSystemData[4].setb = NULL;  //setLinearVectorb3624;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData3624;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 3130;
  linearSystemData[3].size = 1;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc3130;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac14_column;
  linearSystemData[3].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac14;
  linearSystemData[3].jacobianIndex = 4 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA3130;
  linearSystemData[3].setb = NULL;  //setLinearVectorb3130;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData3130;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 2606;
  linearSystemData[2].size = 3;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc2606;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac13_column;
  linearSystemData[2].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac13;
  linearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA2606;
  linearSystemData[2].setb = NULL;  //setLinearVectorb2606;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData2606;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 1369;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc1369;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac9_column;
  linearSystemData[1].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac9;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA1369;
  linearSystemData[1].setb = NULL;  //setLinearVectorb1369;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData1369;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 938;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc938;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacLSJac6_column;
  linearSystemData[0].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac6;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA938;
  linearSystemData[0].setb = NULL;  //setLinearVectorb938;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData938;
}

#if defined(__cplusplus)
}
#endif
