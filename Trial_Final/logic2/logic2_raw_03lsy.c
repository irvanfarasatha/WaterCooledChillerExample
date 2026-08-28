/* Linear Systems */
#include "logic2_raw_model.h"
#include "logic2_raw_12jac.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 3781
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_3781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3781;
}
/*
equation index: 3782
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_3782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3782;
}
/*
equation index: 3783
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_3783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3783;
}
/*
equation index: 3784
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_3784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3784;
}
/*
equation index: 3785
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_3785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3785;
}
/*
equation index: 3786
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_3786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3786;
}
/*
equation index: 3787
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_3787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3787;
}

void residualFunc3796(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3796};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic2_raw_eqFunction_3781(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3782(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3783(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3784(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3785(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3786(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3787(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3788;
  threadData->lastEquationSolved = 3796;
}
OMC_DISABLE_OPT
void initializeStaticLSData3796(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 2339
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_2339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2339;
}
/*
equation index: 2340
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2340;
}
/*
equation index: 2341
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_2341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2341;
}
/*
equation index: 2342
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2342;
}
/*
equation index: 2343
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_2343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2343;
}
/*
equation index: 2344
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_2344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2344;
}
/*
equation index: 2345
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_2345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2345;
}

void residualFunc2354(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2354};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic2_raw_eqFunction_2339(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2340(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2341(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2342(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2343(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2344(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2345(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2346;
  threadData->lastEquationSolved = 2354;
}
OMC_DISABLE_OPT
void initializeStaticLSData2354(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 781
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 781;
}
/*
equation index: 782
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 782;
}
/*
equation index: 783
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 783;
}
/*
equation index: 784
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic2_raw_eqFunction_784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 784;
}
/*
equation index: 785
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 785;
}
/*
equation index: 786
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 786;
}
/*
equation index: 787
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic2_raw_eqFunction_787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 787;
}

void residualFunc796(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,796};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic2_raw_eqFunction_781(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_782(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_783(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_784(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_785(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_786(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_787(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 788;
  threadData->lastEquationSolved = 796;
}
OMC_DISABLE_OPT
void initializeStaticLSData796(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void logic2_raw_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 3796;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc3796;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = logic2_raw_functionJacLSJac30_column;
  linearSystemData[2].initialAnalyticalJacobian = logic2_raw_initialAnalyticJacobianLSJac30;
  linearSystemData[2].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA3796;
  linearSystemData[2].setb = NULL;  //setLinearVectorb3796;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData3796;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 2354;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc2354;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = logic2_raw_functionJacLSJac18_column;
  linearSystemData[1].initialAnalyticalJacobian = logic2_raw_initialAnalyticJacobianLSJac18;
  linearSystemData[1].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA2354;
  linearSystemData[1].setb = NULL;  //setLinearVectorb2354;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData2354;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 796;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc796;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = logic2_raw_functionJacLSJac9_column;
  linearSystemData[0].initialAnalyticalJacobian = logic2_raw_initialAnalyticJacobianLSJac9;
  linearSystemData[0].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA796;
  linearSystemData[0].setb = NULL;  //setLinearVectorb796;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData796;
}

#if defined(__cplusplus)
}
#endif
