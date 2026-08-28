/* Linear Systems */
#include "logic3_raw_model.h"
#include "logic3_raw_12jac.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 3809
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_3809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3809;
}
/*
equation index: 3810
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_3810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3810;
}
/*
equation index: 3811
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_3811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3811;
}
/*
equation index: 3812
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_3812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 3812;
}
/*
equation index: 3813
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_3813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3813;
}
/*
equation index: 3814
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_3814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3814;
}
/*
equation index: 3815
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_3815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3815;
}

void residualFunc3824(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3824};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic3_raw_eqFunction_3809(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3810(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3811(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3812(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3813(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3814(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3815(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 3816;
  threadData->lastEquationSolved = 3824;
}
OMC_DISABLE_OPT
void initializeStaticLSData3824(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 2361
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_2361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2361;
}
/*
equation index: 2362
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_2362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2362;
}
/*
equation index: 2363
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_2363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2363;
}
/*
equation index: 2364
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_2364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 2364;
}
/*
equation index: 2365
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_2365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2365;
}
/*
equation index: 2366
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_2366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2366;
}
/*
equation index: 2367
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_2367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2367;
}

void residualFunc2376(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2376};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic3_raw_eqFunction_2361(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2362(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2363(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2364(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2365(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2366(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2367(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 2368;
  threadData->lastEquationSolved = 2376;
}
OMC_DISABLE_OPT
void initializeStaticLSData2376(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
equation index: 793
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 793;
}
/*
equation index: 794
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 794;
}
/*
equation index: 795
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 795;
}
/*
equation index: 796
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol2.dynBal.mb_flow = 1.1843079200592153e-5 * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p
*/
void logic3_raw_eqFunction_796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */)));
  threadData->lastEquationSolved = 796;
}
/*
equation index: 797
type: SIMPLE_ASSIGN
cooCoi.ele[3].m2_flow = cooCoi.m2_flow - cooCoi.ele[4].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* cooCoi.ele[4].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 797;
}
/*
equation index: 798
type: SIMPLE_ASSIGN
cooCoi.ele[2].m2_flow = cooCoi.ele[3].m2_flow - cooCoi.ele[3].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* cooCoi.ele[3].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* cooCoi.ele[3].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 798;
}
/*
equation index: 799
type: SIMPLE_ASSIGN
cooCoi.ele[1].m2_flow = cooCoi.ele[2].m2_flow - cooCoi.ele[2].vol2.dynBal.mb_flow
*/
void logic3_raw_eqFunction_799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* cooCoi.ele[2].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* cooCoi.ele[2].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 799;
}

void residualFunc808(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,808};
  JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooCoi.ele[1].vol2.dynBal.medium.p) DUMMY_DER */) = xloc[0];
  /* local constraints */
  logic3_raw_eqFunction_793(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_794(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_795(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_796(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_797(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_798(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_799(data, threadData);
  res[0] = -55.989691542288554 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* cooCoi.ele[1].m2_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* cooCoi.ele[1].vol2.dynBal.mb_flow variable */);
  threadData->lastEquationSolved = 800;
  threadData->lastEquationSolved = 808;
}
OMC_DISABLE_OPT
void initializeStaticLSData808(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
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
void logic3_raw_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 3824;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc3824;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = logic3_raw_functionJacLSJac30_column;
  linearSystemData[2].initialAnalyticalJacobian = logic3_raw_initialAnalyticJacobianLSJac30;
  linearSystemData[2].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA3824;
  linearSystemData[2].setb = NULL;  //setLinearVectorb3824;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData3824;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 2376;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc2376;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = logic3_raw_functionJacLSJac18_column;
  linearSystemData[1].initialAnalyticalJacobian = logic3_raw_initialAnalyticJacobianLSJac18;
  linearSystemData[1].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA2376;
  linearSystemData[1].setb = NULL;  //setLinearVectorb2376;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData2376;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 808;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc808;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = logic3_raw_functionJacLSJac9_column;
  linearSystemData[0].initialAnalyticalJacobian = logic3_raw_initialAnalyticJacobianLSJac9;
  linearSystemData[0].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA808;
  linearSystemData[0].setb = NULL;  //setLinearVectorb808;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData808;
}

#if defined(__cplusplus)
}
#endif
