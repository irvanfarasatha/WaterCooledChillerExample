/* Linear Systems */
#include "logic1_raw_model.h"
#include "logic1_raw_12jac.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 3793
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_3793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3793;
}
/*
equation index: 3794
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_3794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3794;
}
/*
equation index: 3795
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_3795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3795;
}
/*
equation index: 3796
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_3796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3796;
}
/*
equation index: 3797
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_3797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3797;
}
/*
equation index: 3798
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_3798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3798;
}
/*
equation index: 3799
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_3799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3799;
}

void residualFunc3808(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3808};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic1_raw_eqFunction_3793(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3794(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3795(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3796(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3797(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3798(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3799(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3800;
  threadData->lastEquationSolved = 3808;
}
OMC_DISABLE_OPT
void initializeStaticLSData3808(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 2349
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_2349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2349;
}
/*
equation index: 2350
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_2350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2350;
}
/*
equation index: 2351
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_2351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2351;
}
/*
equation index: 2352
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_2352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2352;
}
/*
equation index: 2353
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_2353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2353;
}
/*
equation index: 2354
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_2354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2354;
}
/*
equation index: 2355
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_2355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2355;
}

void residualFunc2364(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2364};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic1_raw_eqFunction_2349(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2350(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2351(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2352(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2353(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2354(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2355(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2356;
  threadData->lastEquationSolved = 2364;
}
OMC_DISABLE_OPT
void initializeStaticLSData2364(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 787
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 787;
}
/*
equation index: 788
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 788;
}
/*
equation index: 789
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 789;
}
/*
equation index: 790
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic1_raw_eqFunction_790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 790;
}
/*
equation index: 791
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 791;
}
/*
equation index: 792
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 792;
}
/*
equation index: 793
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic1_raw_eqFunction_793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 793;
}

void residualFunc802(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,802};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic1_raw_eqFunction_787(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_788(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_789(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_790(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_791(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_792(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_793(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 794;
  threadData->lastEquationSolved = 802;
}
OMC_DISABLE_OPT
void initializeStaticLSData802(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
void logic1_raw_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 3808;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc3808;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = logic1_raw_functionJacLSJac30_column;
  linearSystemData[2].initialAnalyticalJacobian = logic1_raw_initialAnalyticJacobianLSJac30;
  linearSystemData[2].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA3808;
  linearSystemData[2].setb = NULL;  //setLinearVectorb3808;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData3808;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 2364;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc2364;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = logic1_raw_functionJacLSJac18_column;
  linearSystemData[1].initialAnalyticalJacobian = logic1_raw_initialAnalyticJacobianLSJac18;
  linearSystemData[1].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA2364;
  linearSystemData[1].setb = NULL;  //setLinearVectorb2364;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData2364;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 802;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc802;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = logic1_raw_functionJacLSJac9_column;
  linearSystemData[0].initialAnalyticalJacobian = logic1_raw_initialAnalyticJacobianLSJac9;
  linearSystemData[0].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA802;
  linearSystemData[0].setb = NULL;  //setLinearVectorb802;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData802;
}

#if defined(__cplusplus)
}
#endif
