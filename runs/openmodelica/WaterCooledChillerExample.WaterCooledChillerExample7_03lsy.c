/* Linear Systems */
#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#include "WaterCooledChillerExample.WaterCooledChillerExample7_12jac.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 5381
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5381;
}
/*
equation index: 5382
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5382;
}
/*
equation index: 5383
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5383;
}
/*
equation index: 5384
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 5384;
}
/*
equation index: 5385
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5385;
}
/*
equation index: 5386
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5386;
}
/*
equation index: 5387
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5387;
}

void residualFunc5396(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,5396};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5381(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5382(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5383(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5384(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5385(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5386(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5387(data, threadData);
  res[0] = -13.266998341625207 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 5388;
  threadData->lastEquationSolved = 5396;
}
OMC_DISABLE_OPT
void initializeStaticLSData5396(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 4859
type: SIMPLE_ASSIGN
tan.conWal[1].dT = tan.vol[1].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* tan.vol[1].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 4859;
}
/*
equation index: 4860
type: SIMPLE_ASSIGN
tan.conWal[1].Q_flow = tan.conWal[1].G * tan.conWal[1].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */));
  threadData->lastEquationSolved = 4860;
}
/*
equation index: 4861
type: SIMPLE_ASSIGN
tan.conWal[4].dT = tan.vol[4].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* tan.vol[4].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 4861;
}
/*
equation index: 4862
type: SIMPLE_ASSIGN
tan.conWal[4].Q_flow = tan.conWal[4].G * tan.conWal[4].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */));
  threadData->lastEquationSolved = 4862;
}
/*
equation index: 4863
type: SIMPLE_ASSIGN
tan.conWal[2].dT = tan.vol[2].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* tan.vol[2].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 4863;
}
/*
equation index: 4864
type: SIMPLE_ASSIGN
tan.conWal[2].Q_flow = tan.conWal[2].G * tan.conWal[2].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */));
  threadData->lastEquationSolved = 4864;
}
/*
equation index: 4865
type: SIMPLE_ASSIGN
tan.conWal[3].Q_flow = (-tan.conWal[1].Q_flow) - tan.conWal[2].Q_flow - tan.conWal[4].Q_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */);
  threadData->lastEquationSolved = 4865;
}
/*
equation index: 4866
type: SIMPLE_ASSIGN
tan.conWal[3].dT = tan.conWal[3].Q_flow / tan.conWal[3].G
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */),"tan.conWal[3].G",equationIndexes);
  threadData->lastEquationSolved = 4866;
}

void residualFunc4874(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4874};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = xloc[0];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4859(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4860(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4861(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4862(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4863(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4864(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4865(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4866(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* tan.vol[3].T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */);
  threadData->lastEquationSolved = 4867;
  threadData->lastEquationSolved = 4874;
}
OMC_DISABLE_OPT
void initializeStaticLSData4874(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 3738
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3738;
}
/*
equation index: 3739
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3739;
}
/*
equation index: 3740
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3740;
}
/*
equation index: 3741
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3741;
}
/*
equation index: 3742
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3742;
}
/*
equation index: 3743
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3743;
}
/*
equation index: 3744
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3744;
}

void residualFunc3753(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3753};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3738(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3739(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3740(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3741(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3742(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3743(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3744(data, threadData);
  res[0] = -13.266998341625207 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3745;
  threadData->lastEquationSolved = 3753;
}
OMC_DISABLE_OPT
void initializeStaticLSData3753(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 3181
type: SIMPLE_ASSIGN
tan.conWal[1].dT = tan.vol[1].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* tan.vol[1].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 3181;
}
/*
equation index: 3182
type: SIMPLE_ASSIGN
tan.conWal[1].Q_flow = tan.conWal[1].G * tan.conWal[1].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */));
  threadData->lastEquationSolved = 3182;
}
/*
equation index: 3183
type: SIMPLE_ASSIGN
tan.conWal[4].dT = tan.vol[4].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* tan.vol[4].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 3183;
}
/*
equation index: 3184
type: SIMPLE_ASSIGN
tan.conWal[4].Q_flow = tan.conWal[4].G * tan.conWal[4].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */));
  threadData->lastEquationSolved = 3184;
}
/*
equation index: 3185
type: SIMPLE_ASSIGN
tan.conWal[2].dT = tan.vol[2].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* tan.vol[2].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 3185;
}
/*
equation index: 3186
type: SIMPLE_ASSIGN
tan.conWal[2].Q_flow = tan.conWal[2].G * tan.conWal[2].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */));
  threadData->lastEquationSolved = 3186;
}
/*
equation index: 3187
type: SIMPLE_ASSIGN
tan.conWal[3].Q_flow = (-tan.conWal[1].Q_flow) - tan.conWal[2].Q_flow - tan.conWal[4].Q_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */);
  threadData->lastEquationSolved = 3187;
}
/*
equation index: 3188
type: SIMPLE_ASSIGN
tan.conWal[3].dT = tan.conWal[3].Q_flow / tan.conWal[3].G
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */),"tan.conWal[3].G",equationIndexes);
  threadData->lastEquationSolved = 3188;
}

void residualFunc3196(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3196};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = xloc[0];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3181(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3182(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3183(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3184(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3185(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3186(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3187(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3188(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* tan.vol[3].T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */);
  threadData->lastEquationSolved = 3189;
  threadData->lastEquationSolved = 3196;
}
OMC_DISABLE_OPT
void initializeStaticLSData3196(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 2550
type: SIMPLE_ASSIGN
tan.indTanHex.dp = 525.0 * val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) = (525.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */));
  threadData->lastEquationSolved = 2550;
}
/*
equation index: 2551
type: SIMPLE_ASSIGN
val8_2Sto.dp = (-0.21) * (-val8Sto.m_flow) * val8_2Sto.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2551;
}
/*
equation index: 2552
type: SIMPLE_ASSIGN
val8Sto.dp = (-0.21) * (-val8Sto.m_flow) * val8Sto.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2552;
}
/*
equation index: 2553
type: SIMPLE_ASSIGN
val8_2.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 2553;
}
/*
equation index: 2554
type: SIMPLE_ASSIGN
val8_2.dp = (-0.21) * (-val8_2.m_flow) * val8_2.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2554;
}
/*
equation index: 2555
type: SIMPLE_ASSIGN
val8.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2555(DATA *data, threadData_t *threadData)
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
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2556;
}
/*
equation index: 2557
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow = (-val8.m_flow) - pumTanRet.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 2557;
}
/*
equation index: 2558
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow = pumTanRet.m_flow + val8_2.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 2558;
}
/*
equation index: 2559
type: SIMPLE_ASSIGN
val8_2Rel.dp = (-0.21) * (-pumTanRet.m_flow) * val8_2Rel.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2559;
}
/*
equation index: 2560
type: SIMPLE_ASSIGN
val8Rel.dp = (-0.21) * (-pumTanRet.m_flow) * val8Rel.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2560;
}
/*
equation index: 2561
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = junCHWSup2.res2.m_flow - 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) - 4.761904761904762;
  threadData->lastEquationSolved = 2561;
}
/*
equation index: 2562
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = junCHWRet2.res1.m_flow - -4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) - (-4.761904761904762);
  threadData->lastEquationSolved = 2562;
}
/*
equation index: 2563
type: SIMPLE_ASSIGN
pumTanRet.port_b.p = junCHWSup.vol.p + val8Rel.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */);
  threadData->lastEquationSolved = 2563;
}
/*
equation index: 2564
type: SIMPLE_ASSIGN
chi2.vol2.p = junCHWSup.vol.p + val8.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  threadData->lastEquationSolved = 2564;
}
/*
equation index: 2565
type: SIMPLE_ASSIGN
tan.vol[4].p = pumTanRet.port_b.p - pumTanCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 2565;
}
/*
equation index: 2566
type: SIMPLE_ASSIGN
pumTanSup.port_a.p = tan.vol[4].p - pumTanCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 2566;
}
/*
equation index: 2567
type: SIMPLE_ASSIGN
junCHWRet.vol.p = pumTanSup.port_a.p + val8_2Rel.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  threadData->lastEquationSolved = 2567;
}
/*
equation index: 2568
type: SIMPLE_ASSIGN
pumCHW2.port_a.p = junCHWRet.vol.p - val8_2.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */);
  threadData->lastEquationSolved = 2568;
}
/*
equation index: 2569
type: SIMPLE_ASSIGN
pumCHW2.dpMachine = chi2.vol2.p - pumCHW2.port_a.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 2569;
}
/*
equation index: 2570
type: SIMPLE_ASSIGN
pumCHW2.dp = val8_2Sto.dp - (pumCHW2.dpMachine + chi2.vol2.p - tan.indTanHex.dp - val8Sto.dp - pumCHW2.port_a.p)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */));
  threadData->lastEquationSolved = 2570;
}
/*
equation index: 2571
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 2571;
}
/*
equation index: 2572
type: SIMPLE_ASSIGN
valByp.m_flow = 4.761904761904762 * valByp.dp / valByp.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) = DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2572;
}
/*
equation index: 2573
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 2573;
}
/*
equation index: 2574
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 2574;
}
/*
equation index: 2575
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = 19021.8 * cooCoi.m1_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */) = (19021.8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */));
  threadData->lastEquationSolved = 2575;
}
/*
equation index: 2576
type: SIMPLE_ASSIGN
val1.dp = (-0.21) * (-val1.m_flow) * val1.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = (-0.21) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2576;
}

void residualFunc2604(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2604};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = xloc[2];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2550(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2551(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2552(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2553(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2554(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2555(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2556(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2557(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2558(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2559(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2560(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2561(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2562(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2563(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2564(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2565(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2566(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2567(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2568(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2569(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2570(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2571(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2572(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2573(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2574(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2575(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2576(data, threadData);
  res[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  threadData->lastEquationSolved = 2579;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */);
  threadData->lastEquationSolved = 2578;
  res[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 2577;
  threadData->lastEquationSolved = 2604;
}
OMC_DISABLE_OPT
void initializeStaticLSData2604(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[3] = {
    -1 /* junCHWSup.vol.p */,
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
equation index: 1485
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1485;
}
/*
equation index: 1486
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1486;
}
/*
equation index: 1487
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1487;
}
/*
equation index: 1488
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 1488;
}
/*
equation index: 1489
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1489;
}
/*
equation index: 1490
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1490;
}
/*
equation index: 1491
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1491;
}

void residualFunc1500(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1500};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1485(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1486(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1487(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1488(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1489(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1490(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1491(data, threadData);
  res[0] = -13.266998341625207 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 1492;
  threadData->lastEquationSolved = 1500;
}
OMC_DISABLE_OPT
void initializeStaticLSData1500(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 1025
type: SIMPLE_ASSIGN
tan.conWal[1].dT = tan.vol[1].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1638]] /* tan.vol[1].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 1025;
}
/*
equation index: 1026
type: SIMPLE_ASSIGN
tan.conWal[1].Q_flow = tan.conWal[1].G * tan.conWal[1].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1342]] /* tan.conWal[1].dT variable */));
  threadData->lastEquationSolved = 1026;
}
/*
equation index: 1027
type: SIMPLE_ASSIGN
tan.conWal[2].dT = tan.vol[2].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1639]] /* tan.vol[2].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 1027;
}
/*
equation index: 1028
type: SIMPLE_ASSIGN
tan.conWal[2].Q_flow = tan.conWal[2].G * tan.conWal[2].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1343]] /* tan.conWal[2].dT variable */));
  threadData->lastEquationSolved = 1028;
}
/*
equation index: 1029
type: SIMPLE_ASSIGN
tan.conWal[3].dT = tan.vol[3].T - tan.heaPorSid.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1640]] /* tan.vol[3].T variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */);
  threadData->lastEquationSolved = 1029;
}
/*
equation index: 1030
type: SIMPLE_ASSIGN
tan.conWal[3].Q_flow = tan.conWal[3].G * tan.conWal[3].dT
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* tan.conWal[3].dT variable */));
  threadData->lastEquationSolved = 1030;
}
/*
equation index: 1031
type: SIMPLE_ASSIGN
tan.conWal[4].Q_flow = (-tan.conWal[1].Q_flow) - tan.conWal[2].Q_flow - tan.conWal[3].Q_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1338]] /* tan.conWal[1].Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1339]] /* tan.conWal[2].Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1340]] /* tan.conWal[3].Q_flow variable */);
  threadData->lastEquationSolved = 1031;
}
/*
equation index: 1032
type: SIMPLE_ASSIGN
tan.conWal[4].dT = tan.conWal[4].Q_flow / tan.conWal[4].G
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1341]] /* tan.conWal[4].Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */),"tan.conWal[4].G",equationIndexes);
  threadData->lastEquationSolved = 1032;
}

void residualFunc1040(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1040};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */) = xloc[0];
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1025(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1026(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1027(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1028(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1029(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1030(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1031(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1032(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1641]] /* tan.vol[4].T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* tan.heaPorSid.T variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* tan.conWal[4].dT variable */);
  threadData->lastEquationSolved = 1033;
  threadData->lastEquationSolved = 1040;
}
OMC_DISABLE_OPT
void initializeStaticLSData1040(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
void WaterCooledChillerExample_WaterCooledChillerExample7_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[6].equationIndex = 5396;
  linearSystemData[6].size = 1;
  linearSystemData[6].nnz = 0;
  linearSystemData[6].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[6].residualFunc = residualFunc5396;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac29_column;
  linearSystemData[6].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac29;
  linearSystemData[6].jacobianIndex = 9 /*jacInx*/;
  linearSystemData[6].setA = NULL;  //setLinearMatrixA5396;
  linearSystemData[6].setb = NULL;  //setLinearVectorb5396;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData5396;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[5].equationIndex = 4874;
  linearSystemData[5].size = 1;
  linearSystemData[5].nnz = 0;
  linearSystemData[5].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[5].residualFunc = residualFunc4874;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac27_column;
  linearSystemData[5].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac27;
  linearSystemData[5].jacobianIndex = 8 /*jacInx*/;
  linearSystemData[5].setA = NULL;  //setLinearMatrixA4874;
  linearSystemData[5].setb = NULL;  //setLinearVectorb4874;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData4874;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[4].equationIndex = 3753;
  linearSystemData[4].size = 1;
  linearSystemData[4].nnz = 0;
  linearSystemData[4].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[4].residualFunc = residualFunc3753;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac20_column;
  linearSystemData[4].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac20;
  linearSystemData[4].jacobianIndex = 6 /*jacInx*/;
  linearSystemData[4].setA = NULL;  //setLinearMatrixA3753;
  linearSystemData[4].setb = NULL;  //setLinearVectorb3753;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData3753;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 3196;
  linearSystemData[3].size = 1;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc3196;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac15_column;
  linearSystemData[3].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac15;
  linearSystemData[3].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA3196;
  linearSystemData[3].setb = NULL;  //setLinearVectorb3196;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData3196;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 2604;
  linearSystemData[2].size = 3;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc2604;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac13_column;
  linearSystemData[2].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac13;
  linearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA2604;
  linearSystemData[2].setb = NULL;  //setLinearVectorb2604;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData2604;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 1500;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc1500;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac12_column;
  linearSystemData[1].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac12;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA1500;
  linearSystemData[1].setb = NULL;  //setLinearVectorb1500;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData1500;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 1040;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc1040;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac8_column;
  linearSystemData[0].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac8;
  linearSystemData[0].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA1040;
  linearSystemData[0].setb = NULL;  //setLinearVectorb1040;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData1040;
}

#if defined(__cplusplus)
}
#endif
