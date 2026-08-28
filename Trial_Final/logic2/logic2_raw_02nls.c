/* Non Linear Systems */
#include "logic2_raw_model.h"
#include "logic2_raw_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 259
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void logic2_raw_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 259;
}
/*
equation index: 260
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic2_raw_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 260;
}

void residualFunc266(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,266};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc266: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 266).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc266 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_259(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_260(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 261;
  /* restore known outputs */
  threadData->lastEquationSolved = 266;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS266(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS266(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS266(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 1;
  inSysData->nonlinearPattern->numberOfEqns = 1;
  inSysData->nonlinearPattern->numberOfNonlinear = 1;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(1*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+1] = {0,1};
  const int index_eqn[1+1] = {0,1};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (1+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (1+1)*sizeof(unsigned int));
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[1] = {0};
  const int rows[1] = {0};
  memcpy(inSysData->nonlinearPattern->columns, columns, 1*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 1*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS266(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS266(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS266(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS266(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS266(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS266(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc353(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,353};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc353: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 353).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc353 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 352;
  /* restore known outputs */
  threadData->lastEquationSolved = 353;
}
void initializeSparsePatternNLS353(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS353(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS353(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS353(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1122 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1122 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1122 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS353(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS353(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS353(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS353(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS353(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc387(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,387};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc387: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 387).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc387 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* damOA.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 386;
  /* restore known outputs */
  threadData->lastEquationSolved = 387;
}
void initializeSparsePatternNLS387(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS387(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS387(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS387(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS387(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS387(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS387(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS387(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS387(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc410(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,410};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc410: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 410).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc410 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* damEA.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 409;
  /* restore known outputs */
  threadData->lastEquationSolved = 410;
}
void initializeSparsePatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS410(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS410(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS410(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS410(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS410(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS410(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc414(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,414};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc414: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 414).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc414 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* damRet.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1294]] /* damRet.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 413;
  /* restore known outputs */
  threadData->lastEquationSolved = 414;
}
void initializeSparsePatternNLS414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS414(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS414(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS414(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS414(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS414(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS414(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc512(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,512};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc512: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 512).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc512 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* val6.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2741]] /* val6.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2736]] /* val6.dp_nominal_pos PARAM */),"val6.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 511;
  /* restore known outputs */
  threadData->lastEquationSolved = 512;
}
void initializeSparsePatternNLS512(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS512(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS512(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS512(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1212 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1212 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1212 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS512(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS512(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS512(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS512(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS512(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */);
}


/* inner equations */

void residualFunc586(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,586};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc586: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 586).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc586 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 585;
  /* restore known outputs */
  threadData->lastEquationSolved = 586;
}
void initializeSparsePatternNLS586(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS586(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS586(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS586(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1039 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1039 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1039 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS586(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS586(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS586(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS586(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS586(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 597
type: SIMPLE_ASSIGN
cooTow.T_a = logic2.cooTow.Water.temperature(logic2.cooTow.Water.setState_phX(TCWEntTow.port_a.p, homotopy(if val5.m_flow > 0.0 then TCWEntTow.port_b.h_outflow else TCWEntTow.port_a.h_outflow, TCWEntTow.port_b.h_outflow), {}))
*/
void logic2_raw_eqFunction_597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,597};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) = omc_logic2_cooTow_Water_temperature(threadData, omc_logic2_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */)), tmp1));
  threadData->lastEquationSolved = 597;
}
/*
equation index: 598
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(val5.m_flow, TCWEntTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic2_raw_eqFunction_598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 598;
}
/*
equation index: 599
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic2_raw_eqFunction_599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 599;
}
/*
equation index: 600
type: SIMPLE_ASSIGN
cooTow.T_b = logic2.cooTow.Water.temperature(logic2.cooTow.Water.setState_phX(cooTow.vol.p, homotopy(if (-val5.m_flow) > 0.0 then TCWLeaTow.port_b.h_outflow else TCWEntTow.port_a.h_outflow, TCWEntTow.port_a.h_outflow), {}))
*/
void logic2_raw_eqFunction_600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,600};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */) = omc_logic2_cooTow_Water_temperature(threadData, omc_logic2_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), tmp1));
  threadData->lastEquationSolved = 600;
}
/*
equation index: 601
type: SIMPLE_ASSIGN
cooTow.TLvg = logic2.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {1.0})
*/
void logic2_raw_eqFunction_601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,601};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) = omc_logic2_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 601;
}
/*
equation index: 602
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void logic2_raw_eqFunction_602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 602;
}
/*
equation index: 603
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void logic2_raw_eqFunction_603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 603;
}
/*
equation index: 604
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void logic2_raw_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 604;
}
/*
equation index: 605
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir < -0.01) then cooTow.FRAir else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) * ((12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) ^ 2.0 - 3.0) * (cooTow.FRAir - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTow.FRAir))
*/
void logic2_raw_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 605;
}
/*
equation index: 606
type: SIMPLE_ASSIGN
cooTow.dTMax = cooTow.T_a - weaBus.TWetBul
*/
void logic2_raw_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cooTow.dTMax variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
  threadData->lastEquationSolved = 606;
}
/*
equation index: 607
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void logic2_raw_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 607;
}
/*
equation index: 608
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic2_raw_eqFunction_608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 608;
}
/*
equation index: 609
type: SIMPLE_ASSIGN
cooTow.Q_flow = val5.m_flow * (logic2.cooTow.Medium.specificEnthalpy(logic2.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - TCWEntTow.port_b.h_outflow)
*/
void logic2_raw_eqFunction_609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,609};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)) * (omc_logic2_cooTow_Medium_specificEnthalpy(threadData, omc_logic2_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 609;
}

void residualFunc611(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,611};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc611: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 611).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc611 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_597(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_598(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_599(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_600(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_601(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_602(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_603(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_604(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_605(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_606(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_607(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_608(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_609(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 610;
  /* restore known outputs */
  threadData->lastEquationSolved = 611;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS611(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS611(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS611(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS611(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS611(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS611(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS611(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS611(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS611(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc772(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,772};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc772: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 772).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc772 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */), 2.0485556863967758, 5.598969154228856), (13.34174165677975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 771;
  /* restore known outputs */
  threadData->lastEquationSolved = 772;
}
void initializeSparsePatternNLS772(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS772(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS772(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS772(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS772(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS772(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS772(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS772(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS772(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */);
}


/* inner equations */

/*
equation index: 886
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic2_raw_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 886;
}
/*
equation index: 887
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic2_raw_eqFunction_887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 887;
}
/*
equation index: 888
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic2_raw_eqFunction_888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 888;
}
/*
equation index: 889
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic2_raw_eqFunction_889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 889;
}
/*
equation index: 890
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic2_raw_eqFunction_890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 890;
}
/*
equation index: 891
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic2_raw_eqFunction_891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 891;
}
/*
equation index: 892
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic2_raw_eqFunction_892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 892;
}
/*
equation index: 893
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic2_raw_eqFunction_893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 893;
}
/*
equation index: 894
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic2_raw_eqFunction_894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 894;
}
/*
equation index: 895
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic2_raw_eqFunction_895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 895;
}
/*
equation index: 896
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * max(0.0, max(roomDemandSignal.y, 0.0) - max(cooCoi.Q1_flow, 0.0)) / chillerStagingCtrl.kWPerTR
*/
void logic2_raw_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM(fmax(0.0,fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* roomDemandSignal.y variable */),0.0) - fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */),0.0)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 896;
}
/*
equation index: 897
type: ALGORITHM

  chillerStagingCtrl.stage2On := $START.chillerStagingCtrl.stage2On;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
*/
void logic2_raw_eqFunction_897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->modelData->booleanVarsData[7] /* chillerStagingCtrl.stage2On DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = 0 /* false */;

  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
  tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
  tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
  threadData->lastEquationSolved = 897;
}
/*
equation index: 898
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic2_raw_eqFunction_898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 898;
}
/*
equation index: 899
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then mCHWPumpMax else 0.0
*/
void logic2_raw_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2153]] /* mCHWPumpMax PARAM */):0.0);
  threadData->lastEquationSolved = 899;
}
/*
equation index: 900
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic2_raw_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 900;
}
/*
equation index: 901
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic2_raw_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 901;
}
/*
equation index: 902
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, cooCoi.ele[1].preDro1.k, cooCoi.ele[1].preDro1.m_flow_turbulent), 90580.0 * cooCoi.m1_flow / cooCoi.ele[1].preDro1.m_flow_nominal_pos)
*/
void logic2_raw_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[1].preDro1.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */)), DIVISION_SIM((90580.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),"cooCoi.ele[1].preDro1.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 902;
}
/*
equation index: 903
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic2_raw_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 903;
}
/*
equation index: 904
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic2_raw_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 904;
}
/*
equation index: 905
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic2_raw_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 905;
}
/*
equation index: 906
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic2_raw_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 906;
}
/*
equation index: 907
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void logic2_raw_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */);
  threadData->lastEquationSolved = 907;
}
/*
equation index: 908
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void logic2_raw_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 908;
}

void residualFunc912(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,912};
  int i,j;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc912: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 912).vars[i]);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc912 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_886(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_887(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_888(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_889(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_890(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_891(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_892(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_893(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_894(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_895(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_896(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_897(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_898(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_899(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_900(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_901(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_902(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_903(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_904(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_905(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_906(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_907(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_908(data, threadData);
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* valByp.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 911;
  res[1] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooCoi.hA.n_w PARAM */), 0.1)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 910;
  res[2] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* val1.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* val1.dp_nominal_pos PARAM */),"val1.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */);
  threadData->lastEquationSolved = 909;
  /* restore known outputs */
  threadData->lastEquationSolved = 912;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS912(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+3] = {0,2,3,3};
  const int rowIndex[8] = {0,2,0,1,2,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(3, 8, 3);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (3+1)*sizeof(unsigned int));
  
  for(i=2;i<3+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 8*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
}

void freeSparsePatternNLS912(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS912(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS912(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val1.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1201 /* val1.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1201 /* val1.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1201 /* val1.dp */);
  /* static nls data for cooCoi.m1_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS912(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS912(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS912(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS912(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS912(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

void residualFunc1040(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1040};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1040: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1040).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1040 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* val8_2.dp_nominal_pos PARAM */),"val8_2.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 1039;
  /* restore known outputs */
  threadData->lastEquationSolved = 1040;
}
void initializeSparsePatternNLS1040(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1040(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1040(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1040(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1228 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1228 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1228 /* val8_2.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1040(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1040(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1040(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1040(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1040(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */);
}


/* inner equations */

void residualFunc1068(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1068};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1068: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1068).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1068 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* val8.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* val8.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* val8.dp_nominal_pos PARAM */),"val8.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 1067;
  /* restore known outputs */
  threadData->lastEquationSolved = 1068;
}
void initializeSparsePatternNLS1068(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1068(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1068(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1068(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1222 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val8.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1068(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1068(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1068(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1068(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1068(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */);
}


/* inner equations */

/*
equation index: 1093
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, TWCLeaTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic2_raw_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1093;
}
/*
equation index: 1094
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(val7.m_flow, TCWEntTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic2_raw_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1094;
}
/*
equation index: 1095
type: SIMPLE_ASSIGN
cooTow2.T_a = logic2.cooTow2.Water.temperature(logic2.cooTow2.Water.setState_phX(TCWEntTow2.port_a.p, homotopy(if val7.m_flow > 0.0 then TCWEntTow2.port_b.h_outflow else TCWEntTow2.port_a.h_outflow, TCWEntTow2.port_b.h_outflow), {}))
*/
void logic2_raw_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) = omc_logic2_cooTow2_Water_temperature(threadData, omc_logic2_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */)), tmp1));
  threadData->lastEquationSolved = 1095;
}
/*
equation index: 1096
type: SIMPLE_ASSIGN
cooTow2.T_b = logic2.cooTow2.Water.temperature(logic2.cooTow2.Water.setState_phX(cooTow2.vol.p, homotopy(if (-val7.m_flow) > 0.0 then TWCLeaTow2.port_b.h_outflow else TCWEntTow2.port_a.h_outflow, TCWEntTow2.port_a.h_outflow), {}))
*/
void logic2_raw_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */) = omc_logic2_cooTow2_Water_temperature(threadData, omc_logic2_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), tmp1));
  threadData->lastEquationSolved = 1096;
}
/*
equation index: 1097
type: SIMPLE_ASSIGN
cooTow2.TLvg = logic2.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {1.0})
*/
void logic2_raw_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) = omc_logic2_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 1097;
}
/*
equation index: 1098
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void logic2_raw_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1098;
}
/*
equation index: 1099
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void logic2_raw_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1099;
}
/*
equation index: 1100
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void logic2_raw_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 1100;
}
/*
equation index: 1101
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir < -0.01) then cooTow2.FRAir else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) * ((12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) ^ 2.0 - 3.0) * (cooTow2.FRAir - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTow2.FRAir))
*/
void logic2_raw_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 1101;
}
/*
equation index: 1102
type: SIMPLE_ASSIGN
cooTow2.dTMax = cooTow2.T_a - weaBus.TWetBul
*/
void logic2_raw_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cooTow2.dTMax variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
  threadData->lastEquationSolved = 1102;
}
/*
equation index: 1103
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void logic2_raw_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 1103;
}
/*
equation index: 1104
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic2_raw_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 1104;
}
/*
equation index: 1105
type: SIMPLE_ASSIGN
cooTow2.Q_flow = val7.m_flow * (logic2.cooTow2.Medium.specificEnthalpy(logic2.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - TCWEntTow2.port_b.h_outflow)
*/
void logic2_raw_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)) * (omc_logic2_cooTow2_Medium_specificEnthalpy(threadData, omc_logic2_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1105;
}

void residualFunc1107(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1107};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1107: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1107).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1107 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_1093(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1094(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1095(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1096(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1097(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1098(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1099(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1100(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1101(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1102(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1103(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1104(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1105(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 1106;
  /* restore known outputs */
  threadData->lastEquationSolved = 1107;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1107(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS1107(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS1107(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1107(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow2.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1107(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1107(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1107(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1107(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1107(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 1828
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void logic2_raw_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 1828;
}
/*
equation index: 1829
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic2_raw_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 1829;
}

void residualFunc1835(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1835};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1835: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1835).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1835 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_1828(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_1829(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 1830;
  /* restore known outputs */
  threadData->lastEquationSolved = 1835;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1835(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS1835(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1835(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 1;
  inSysData->nonlinearPattern->numberOfEqns = 1;
  inSysData->nonlinearPattern->numberOfNonlinear = 1;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(1*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+1] = {0,1};
  const int index_eqn[1+1] = {0,1};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (1+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (1+1)*sizeof(unsigned int));
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[1] = {0};
  const int rows[1] = {0};
  memcpy(inSysData->nonlinearPattern->columns, columns, 1*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 1*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1835(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1835(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1835(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1835(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1835(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1835(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc1925(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1925};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1925: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1925).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1925 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1126]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1924;
  /* restore known outputs */
  threadData->lastEquationSolved = 1925;
}
void initializeSparsePatternNLS1925(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1925(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1925(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1925(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1122 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1122 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1122 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1925(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1925(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1925(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1925(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1925(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc2147(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2147};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2147: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2147).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2147 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1043]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1041]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 2146;
  /* restore known outputs */
  threadData->lastEquationSolved = 2147;
}
void initializeSparsePatternNLS2147(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2147(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2147(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2147(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1039 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1039 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1039 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2147(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2147(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2147(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2147(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2147(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1039]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 2158
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(val5.m_flow, TCWEntTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic2_raw_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2158;
}
/*
equation index: 2159
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic2_raw_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2159;
}
/*
equation index: 2160
type: SIMPLE_ASSIGN
cooTow.T_b = logic2.cooTow.Water.temperature(logic2.cooTow.Water.setState_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2160};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */) = omc_logic2_cooTow_Water_temperature(threadData, omc_logic2_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 2160;
}
/*
equation index: 2161
type: SIMPLE_ASSIGN
cooTow.TLvg = logic2.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {1.0})
*/
void logic2_raw_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2161};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) = omc_logic2_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 2161;
}
/*
equation index: 2162
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void logic2_raw_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 2162;
}
/*
equation index: 2163
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void logic2_raw_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 2163;
}
/*
equation index: 2164
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void logic2_raw_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 2164;
}
/*
equation index: 2165
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir < -0.01) then cooTow.FRAir else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) * ((12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) ^ 2.0 - 3.0) * (cooTow.FRAir - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTow.FRAir))
*/
void logic2_raw_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2165};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 2165;
}
/*
equation index: 2166
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void logic2_raw_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1067]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 2166;
}
/*
equation index: 2167
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic2_raw_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1121]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 2167;
}
/*
equation index: 2168
type: SIMPLE_ASSIGN
cooTow.Q_flow = val5.m_flow * (logic2.cooTow.Medium.specificEnthalpy(logic2.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - TCWEntTow.port_b.h_outflow)
*/
void logic2_raw_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2168};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)) * (omc_logic2_cooTow_Medium_specificEnthalpy(threadData, omc_logic2_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 2168;
}

void residualFunc2170(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2170};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2170: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2170).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2170 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_2158(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2159(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2160(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2161(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2162(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2163(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2164(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2165(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2166(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2167(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2168(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1089]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1088]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 2169;
  /* restore known outputs */
  threadData->lastEquationSolved = 2170;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2170(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS2170(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2170(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2170(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2170(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2170(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2170(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2170(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2170(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 2444
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic2_raw_eqFunction_2444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 2444;
}
/*
equation index: 2445
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic2_raw_eqFunction_2445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 2445;
}
/*
equation index: 2446
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic2_raw_eqFunction_2446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 2446;
}
/*
equation index: 2447
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic2_raw_eqFunction_2447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 2447;
}
/*
equation index: 2448
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic2_raw_eqFunction_2448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 2448;
}
/*
equation index: 2449
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic2_raw_eqFunction_2449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 2449;
}
/*
equation index: 2450
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic2_raw_eqFunction_2450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 2450;
}
/*
equation index: 2451
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic2_raw_eqFunction_2451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 2451;
}
/*
equation index: 2452
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic2_raw_eqFunction_2452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 2452;
}
/*
equation index: 2453
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic2_raw_eqFunction_2453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 2453;
}
/*
equation index: 2454
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * max(0.0, max(roomDemandSignal.y, 0.0) - max(cooCoi.Q1_flow, 0.0)) / chillerStagingCtrl.kWPerTR
*/
void logic2_raw_eqFunction_2454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM(fmax(0.0,fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* roomDemandSignal.y variable */),0.0) - fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */),0.0)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 2454;
}
/*
equation index: 2455
type: ALGORITHM

  chillerStagingCtrl.stage2On := $START.chillerStagingCtrl.stage2On;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
*/
void logic2_raw_eqFunction_2455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2455};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->modelData->booleanVarsData[7] /* chillerStagingCtrl.stage2On DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = 0 /* false */;

  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
  tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
  tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
  threadData->lastEquationSolved = 2455;
}
/*
equation index: 2456
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic2_raw_eqFunction_2456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2456};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 2456;
}
/*
equation index: 2457
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then mCHWPumpMax else 0.0
*/
void logic2_raw_eqFunction_2457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2153]] /* mCHWPumpMax PARAM */):0.0);
  threadData->lastEquationSolved = 2457;
}
/*
equation index: 2458
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic2_raw_eqFunction_2458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 2458;
}
/*
equation index: 2459
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic2_raw_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 2459;
}
/*
equation index: 2460
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic2_raw_eqFunction_2460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 2460;
}
/*
equation index: 2461
type: SIMPLE_ASSIGN
valByp.dp = valByp.m_flow * valByp.dp_nominal_pos / valByp.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2830]] /* valByp.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2835]] /* valByp.m_flow_nominal_pos PARAM */),"valByp.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2461;
}
/*
equation index: 2462
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic2_raw_eqFunction_2462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 2462;
}
/*
equation index: 2463
type: SIMPLE_ASSIGN
val1.dp = val1.m_flow * val1.dp_nominal_pos / val1.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2690]] /* val1.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2695]] /* val1.m_flow_nominal_pos PARAM */),"val1.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2463;
}
/*
equation index: 2464
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = 90580.0 * cooCoi.m1_flow / cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
void logic2_raw_eqFunction_2464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */) = DIVISION_SIM((90580.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),"cooCoi.ele[1].preDro1.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2464;
}
/*
equation index: 2465
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic2_raw_eqFunction_2465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 2465;
}
/*
equation index: 2466
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic2_raw_eqFunction_2466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 2466;
}
/*
equation index: 2467
type: SIMPLE_ASSIGN
junCHWRet.vol.p = junCHWSup.vol.p + valByp.dp
*/
void logic2_raw_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 2467;
}

void residualFunc2470(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2470};
  int i,j;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2470: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2470).vars[i]);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2470 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_2444(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2445(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2446(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2447(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2448(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2449(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2450(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2451(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2452(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2453(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2454(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2455(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2456(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2457(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2458(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2459(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2460(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2461(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2462(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2463(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2464(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2465(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2466(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2467(data, threadData);
  /* body */
  res[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */);
  threadData->lastEquationSolved = 2469;
  res[1] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooCoi.hA.n_w PARAM */), 0.1)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 2468;
  /* restore known outputs */
  threadData->lastEquationSolved = 2470;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2470(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(2, 4, 2);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (2+1)*sizeof(unsigned int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 4*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
}

void freeSparsePatternNLS2470(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2470(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2470(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m1_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2470(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2470(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2470(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2470(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2470(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

/*
equation index: 2642
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, TWCLeaTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic2_raw_eqFunction_2642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2642;
}
/*
equation index: 2643
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(val7.m_flow, TCWEntTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic2_raw_eqFunction_2643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2643;
}
/*
equation index: 2644
type: SIMPLE_ASSIGN
cooTow2.T_b = logic2.cooTow2.Water.temperature(logic2.cooTow2.Water.setState_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {}))
*/
void logic2_raw_eqFunction_2644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2644};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */) = omc_logic2_cooTow2_Water_temperature(threadData, omc_logic2_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 2644;
}
/*
equation index: 2645
type: SIMPLE_ASSIGN
cooTow2.TLvg = logic2.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {1.0})
*/
void logic2_raw_eqFunction_2645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2645};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) = omc_logic2_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 2645;
}
/*
equation index: 2646
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void logic2_raw_eqFunction_2646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 2646;
}
/*
equation index: 2647
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void logic2_raw_eqFunction_2647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 2647;
}
/*
equation index: 2648
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void logic2_raw_eqFunction_2648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 2648;
}
/*
equation index: 2649
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir < -0.01) then cooTow2.FRAir else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) * ((12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) ^ 2.0 - 3.0) * (cooTow2.FRAir - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTow2.FRAir))
*/
void logic2_raw_eqFunction_2649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2649};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 2649;
}
/*
equation index: 2650
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void logic2_raw_eqFunction_2650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 2650;
}
/*
equation index: 2651
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic2_raw_eqFunction_2651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1204]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 2651;
}
/*
equation index: 2652
type: SIMPLE_ASSIGN
cooTow2.Q_flow = val7.m_flow * (logic2.cooTow2.Medium.specificEnthalpy(logic2.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - TCWEntTow2.port_b.h_outflow)
*/
void logic2_raw_eqFunction_2652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2652};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val7.m_flow variable */)) * (omc_logic2_cooTow2_Medium_specificEnthalpy(threadData, omc_logic2_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 2652;
}

void residualFunc2654(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2654};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2654: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2654).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2654 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_2642(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2643(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2644(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2645(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2646(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2647(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2648(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2649(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2650(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2651(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_2652(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 2653;
  /* restore known outputs */
  threadData->lastEquationSolved = 2654;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2654(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS2654(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2654(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2654(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow2.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2654(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2654(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2654(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2654(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2654(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 3081
type: SIMPLE_ASSIGN
$cse46 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic2_raw_eqFunction_3081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $cse46 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 3081;
}
/*
equation index: 3082
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46)
*/
void logic2_raw_eqFunction_3082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $cse46 variable */))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46",equationIndexes);
  threadData->lastEquationSolved = 3082;
}
/*
equation index: 3083
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic2_raw_eqFunction_3083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 3083;
}

void residualFunc3090(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3090};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3090: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3090).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3090 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_3081(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3082(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3083(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 3084;
  /* restore known outputs */
  threadData->lastEquationSolved = 3090;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3090(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS3090(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS3090(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 1;
  inSysData->nonlinearPattern->numberOfEqns = 1;
  inSysData->nonlinearPattern->numberOfNonlinear = 1;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(1*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(1*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+1] = {0,1};
  const int index_eqn[1+1] = {0,1};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (1+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (1+1)*sizeof(unsigned int));
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<1+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[1] = {0};
  const int rows[1] = {0};
  memcpy(inSysData->nonlinearPattern->columns, columns, 1*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 1*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3090(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1271 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3090(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3090(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3090(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3090(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3090(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc3202(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3202};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3202: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3202).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3202 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* val6.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 3201;
  /* restore known outputs */
  threadData->lastEquationSolved = 3202;
}
void initializeSparsePatternNLS3202(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3202(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3202(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3202(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1212 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1212 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1212 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3202(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3202(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3202(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3202(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3202(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 3210
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic2_raw_eqFunction_3210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 3210;
}
/*
equation index: 3211
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic2_raw_eqFunction_3211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 3211;
}
/*
equation index: 3212
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic2_raw_eqFunction_3212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 3212;
}
/*
equation index: 3213
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic2_raw_eqFunction_3213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 3213;
}
/*
equation index: 3214
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic2_raw_eqFunction_3214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[990]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 3214;
}
/*
equation index: 3215
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic2_raw_eqFunction_3215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 3215;
}
/*
equation index: 3216
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic2_raw_eqFunction_3216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 3216;
}
/*
equation index: 3217
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic2_raw_eqFunction_3217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 3217;
}
/*
equation index: 3218
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic2_raw_eqFunction_3218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 3218;
}
/*
equation index: 3219
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic2_raw_eqFunction_3219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 3219;
}
/*
equation index: 3220
type: SIMPLE_ASSIGN
$cse67 = max(cooCoi.Q1_flow, 0.0)
*/
void logic2_raw_eqFunction_3220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $cse67 variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */),0.0);
  threadData->lastEquationSolved = 3220;
}
/*
equation index: 3221
type: SIMPLE_ASSIGN
$cse66 = max(0.0, $cse65 - $cse67)
*/
void logic2_raw_eqFunction_3221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $cse66 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* $cse65 variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $cse67 variable */));
  threadData->lastEquationSolved = 3221;
}
/*
equation index: 3222
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * $cse66 / chillerStagingCtrl.kWPerTR
*/
void logic2_raw_eqFunction_3222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $cse66 variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 3222;
}
/*
equation index: 3223
type: ALGORITHM

  chillerStagingCtrl.stage2On := pre(chillerStagingCtrl.stage2On);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := sample(1, 0.0, chillerStagingCtrl.samplePeriod);
  when false then
    chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
  elsewhen $whenCondition3 then
    if chillerStagingCtrl.roomHeatGain_TR <= chillerStagingCtrl.minimumLoad_TR then
      chillerStagingCtrl.stage2On := false;
    elseif pre(chillerStagingCtrl.stage2On) then
      chillerStagingCtrl.stage2On := not (chillerStagingCtrl.roomHeatGain_TR < chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR < chillerStagingCtrl.stage2OffShortfall_TR);
    else
      chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
    end if;
  end when;
*/
void logic2_raw_eqFunction_3223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3223};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->simulationInfo->booleanVarsPre[7] /* chillerStagingCtrl.stage2On DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = data->simulationInfo->samples[0];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
      tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
      tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
    }
    else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
    {
      tmp3 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
      if(tmp3)
      {
        (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = 0 /* false */;
      }
      else
      {
        if((data->simulationInfo->booleanVarsPre[7] /* chillerStagingCtrl.stage2On DISCRETE */))
        {
          tmp4 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
          tmp5 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffShortfall_TR PARAM */));
          (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (!(tmp4 && tmp5));
        }
        else
        {
          tmp6 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
          tmp7 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
          tmp8 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
          (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp6 || (tmp7 && tmp8));
        }
      }
    }
  }
  threadData->lastEquationSolved = 3223;
}
/*
equation index: 3224
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic2_raw_eqFunction_3224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3224};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 3224;
}
/*
equation index: 3225
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then mCHWPumpMax else 0.0
*/
void logic2_raw_eqFunction_3225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2153]] /* mCHWPumpMax PARAM */):0.0);
  threadData->lastEquationSolved = 3225;
}
/*
equation index: 3226
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic2_raw_eqFunction_3226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3226;
}
/*
equation index: 3227
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic2_raw_eqFunction_3227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 3227;
}
/*
equation index: 3228
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, cooCoi.ele[1].preDro1.k, cooCoi.ele[1].preDro1.m_flow_turbulent)
*/
void logic2_raw_eqFunction_3228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[594]] /* cooCoi.ele[1].preDro1.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 3228;
}
/*
equation index: 3229
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic2_raw_eqFunction_3229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 3229;
}
/*
equation index: 3230
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic2_raw_eqFunction_3230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 3230;
}
/*
equation index: 3231
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic2_raw_eqFunction_3231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 3231;
}
/*
equation index: 3232
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic2_raw_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[998]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 3232;
}
/*
equation index: 3233
type: SIMPLE_ASSIGN
$cse5 = Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_w, cooCoi.hA.n_w, 0.1)
*/
void logic2_raw_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $cse5 variable */) = omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooCoi.hA.n_w PARAM */), 0.1);
  threadData->lastEquationSolved = 3233;
}
/*
equation index: 3234
type: SIMPLE_ASSIGN
junCHWRet.vol.p = junCHWSup.vol.p + valByp.dp
*/
void logic2_raw_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 3234;
}
/*
equation index: 3235
type: SIMPLE_ASSIGN
val1.dp = expVesCHW.p_start - junCHWRet.vol.p
*/
void logic2_raw_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1324]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */);
  threadData->lastEquationSolved = 3235;
}

void residualFunc3239(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3239};
  int i,j;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3239: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3239).vars[i]);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3239 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic2_raw_eqFunction_3210(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3211(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3212(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3213(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3214(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3215(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3216(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3217(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3218(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3219(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3220(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3221(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3222(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3223(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3224(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3225(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3226(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3227(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3228(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3229(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3230(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3231(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3232(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3233(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3234(data, threadData);
  /* local constraints */
  logic2_raw_eqFunction_3235(data, threadData);
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* val1.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* val1.m_flow variable */);
  threadData->lastEquationSolved = 3238;
  res[1] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooCoi.hA.hA_nominal_w PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $cse5 variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 3237;
  res[2] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* valByp.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 3236;
  /* restore known outputs */
  threadData->lastEquationSolved = 3239;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3239(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+3] = {0,2,3,3};
  const int rowIndex[8] = {0,2,0,1,2,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(3, 8, 3);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (3+1)*sizeof(unsigned int));
  
  for(i=2;i<3+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 8*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
}

void freeSparsePatternNLS3239(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3239(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3239(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for valByp.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1234 /* valByp.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1234 /* valByp.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1234 /* valByp.dp */);
  /* static nls data for cooCoi.m1_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 691 /* cooCoi.m1_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3239(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3239(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3239(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3239(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3239(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* valByp.dp variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

void residualFunc3336(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3336};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3336: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3336).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3336 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* val8.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3335;
  /* restore known outputs */
  threadData->lastEquationSolved = 3336;
}
void initializeSparsePatternNLS3336(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3336(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3336(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3336(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1222 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val8.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3336(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3336(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3336(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3336(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3336(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val8.dp variable */);
}


/* inner equations */

void residualFunc3347(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3347};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3347: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3347).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3347 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3346;
  /* restore known outputs */
  threadData->lastEquationSolved = 3347;
}
void initializeSparsePatternNLS3347(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3347(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3347(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3347(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1228 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1228 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1228 /* val8_2.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3347(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3347(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3347(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3347(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3347(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* val8_2.dp variable */);
}


/* inner equations */

void residualFunc3393(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3393};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3393: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3393).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3393 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1233]] /* damEA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 3392;
  /* restore known outputs */
  threadData->lastEquationSolved = 3393;
}
void initializeSparsePatternNLS3393(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3393(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3393(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3393(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3393(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3393(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3393(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3393(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3393(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc3423(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3423};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3423: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3423).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3423 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* damOA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 3422;
  /* restore known outputs */
  threadData->lastEquationSolved = 3423;
}
void initializeSparsePatternNLS3423(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3423(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3423(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3423(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3423(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3423(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3423(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3423(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3423(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc3428(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3428};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3428: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3428).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3428 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1305]] /* damRet.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 3427;
  /* restore known outputs */
  threadData->lastEquationSolved = 3428;
}
void initializeSparsePatternNLS3428(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3428(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3428(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3428(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3428(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3428(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3428(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3428(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3428(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc3770(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3770};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3770: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3770).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3770 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */), 2.0485556863967758, 5.598969154228856) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 3769;
  /* restore known outputs */
  threadData->lastEquationSolved = 3770;
}
void initializeSparsePatternNLS3770(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3770(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3770(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3770(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3770(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3770(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3770(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3770(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3770(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void logic2_raw_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[27].equationIndex = 3770;
  nonLinearSystemData[27].size = 1;
  nonLinearSystemData[27].homotopySupport = 0 /* false */;
  nonLinearSystemData[27].mixedSystem = 0 /* false */;
  nonLinearSystemData[27].residualFunc = residualFunc3770;
  nonLinearSystemData[27].strictTearingFunctionCall = NULL;
  nonLinearSystemData[27].analyticalJacobianColumn = NULL;
  nonLinearSystemData[27].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[27].jacobianIndex = -1;
  nonLinearSystemData[27].initializeStaticNLSData = initializeStaticDataNLS3770;
  nonLinearSystemData[27].freeStaticNLSData = freeStaticDataNLS3770;
  nonLinearSystemData[27].getIterationVars = getIterationVarsNLS3770;
  nonLinearSystemData[27].checkConstraints = NULL;
  
  const int tmp_eqn_indices_27[1] = {3769};
  nonLinearSystemData[27].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[27].eqn_simcode_indices, tmp_eqn_indices_27, 1 * sizeof(int));
  nonLinearSystemData[27].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[26].equationIndex = 3428;
  nonLinearSystemData[26].size = 1;
  nonLinearSystemData[26].homotopySupport = 0 /* false */;
  nonLinearSystemData[26].mixedSystem = 0 /* false */;
  nonLinearSystemData[26].residualFunc = residualFunc3428;
  nonLinearSystemData[26].strictTearingFunctionCall = NULL;
  nonLinearSystemData[26].analyticalJacobianColumn = NULL;
  nonLinearSystemData[26].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[26].jacobianIndex = -1;
  nonLinearSystemData[26].initializeStaticNLSData = initializeStaticDataNLS3428;
  nonLinearSystemData[26].freeStaticNLSData = freeStaticDataNLS3428;
  nonLinearSystemData[26].getIterationVars = getIterationVarsNLS3428;
  nonLinearSystemData[26].checkConstraints = NULL;
  
  const int tmp_eqn_indices_26[1] = {3427};
  nonLinearSystemData[26].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[26].eqn_simcode_indices, tmp_eqn_indices_26, 1 * sizeof(int));
  nonLinearSystemData[26].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[25].equationIndex = 3423;
  nonLinearSystemData[25].size = 1;
  nonLinearSystemData[25].homotopySupport = 0 /* false */;
  nonLinearSystemData[25].mixedSystem = 0 /* false */;
  nonLinearSystemData[25].residualFunc = residualFunc3423;
  nonLinearSystemData[25].strictTearingFunctionCall = NULL;
  nonLinearSystemData[25].analyticalJacobianColumn = NULL;
  nonLinearSystemData[25].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[25].jacobianIndex = -1;
  nonLinearSystemData[25].initializeStaticNLSData = initializeStaticDataNLS3423;
  nonLinearSystemData[25].freeStaticNLSData = freeStaticDataNLS3423;
  nonLinearSystemData[25].getIterationVars = getIterationVarsNLS3423;
  nonLinearSystemData[25].checkConstraints = NULL;
  
  const int tmp_eqn_indices_25[1] = {3422};
  nonLinearSystemData[25].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[25].eqn_simcode_indices, tmp_eqn_indices_25, 1 * sizeof(int));
  nonLinearSystemData[25].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[24].equationIndex = 3393;
  nonLinearSystemData[24].size = 1;
  nonLinearSystemData[24].homotopySupport = 0 /* false */;
  nonLinearSystemData[24].mixedSystem = 0 /* false */;
  nonLinearSystemData[24].residualFunc = residualFunc3393;
  nonLinearSystemData[24].strictTearingFunctionCall = NULL;
  nonLinearSystemData[24].analyticalJacobianColumn = NULL;
  nonLinearSystemData[24].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[24].jacobianIndex = -1;
  nonLinearSystemData[24].initializeStaticNLSData = initializeStaticDataNLS3393;
  nonLinearSystemData[24].freeStaticNLSData = freeStaticDataNLS3393;
  nonLinearSystemData[24].getIterationVars = getIterationVarsNLS3393;
  nonLinearSystemData[24].checkConstraints = NULL;
  
  const int tmp_eqn_indices_24[1] = {3392};
  nonLinearSystemData[24].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[24].eqn_simcode_indices, tmp_eqn_indices_24, 1 * sizeof(int));
  nonLinearSystemData[24].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[23].equationIndex = 3347;
  nonLinearSystemData[23].size = 1;
  nonLinearSystemData[23].homotopySupport = 0 /* false */;
  nonLinearSystemData[23].mixedSystem = 0 /* false */;
  nonLinearSystemData[23].residualFunc = residualFunc3347;
  nonLinearSystemData[23].strictTearingFunctionCall = NULL;
  nonLinearSystemData[23].analyticalJacobianColumn = NULL;
  nonLinearSystemData[23].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[23].jacobianIndex = -1;
  nonLinearSystemData[23].initializeStaticNLSData = initializeStaticDataNLS3347;
  nonLinearSystemData[23].freeStaticNLSData = freeStaticDataNLS3347;
  nonLinearSystemData[23].getIterationVars = getIterationVarsNLS3347;
  nonLinearSystemData[23].checkConstraints = NULL;
  
  const int tmp_eqn_indices_23[1] = {3346};
  nonLinearSystemData[23].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[23].eqn_simcode_indices, tmp_eqn_indices_23, 1 * sizeof(int));
  nonLinearSystemData[23].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[22].equationIndex = 3336;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0 /* false */;
  nonLinearSystemData[22].mixedSystem = 0 /* false */;
  nonLinearSystemData[22].residualFunc = residualFunc3336;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS3336;
  nonLinearSystemData[22].freeStaticNLSData = freeStaticDataNLS3336;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS3336;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  const int tmp_eqn_indices_22[1] = {3335};
  nonLinearSystemData[22].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[22].eqn_simcode_indices, tmp_eqn_indices_22, 1 * sizeof(int));
  nonLinearSystemData[22].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[21].equationIndex = 3239;
  nonLinearSystemData[21].size = 3;
  nonLinearSystemData[21].homotopySupport = 0 /* false */;
  nonLinearSystemData[21].mixedSystem = 1 /* true */;
  nonLinearSystemData[21].residualFunc = residualFunc3239;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = NULL;
  nonLinearSystemData[21].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[21].jacobianIndex = -1;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS3239;
  nonLinearSystemData[21].freeStaticNLSData = freeStaticDataNLS3239;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS3239;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  const int tmp_eqn_indices_21[29] = {3210, 3211, 3212, 3213, 3214, 3215, 3216, 3217, 3218, 3219, 3220, 3221, 3222, 3223, 3224, 3225, 3226, 3227, 3228, 3229, 3230, 3231, 3232, 3233, 3234, 3235, 3238, 3237, 3236};
  nonLinearSystemData[21].eqn_simcode_indices = malloc(29 * sizeof(int));
  memcpy(nonLinearSystemData[21].eqn_simcode_indices, tmp_eqn_indices_21, 29 * sizeof(int));
  nonLinearSystemData[21].torn_plus_residual_size = 29;
  
  
  nonLinearSystemData[20].equationIndex = 3202;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0 /* false */;
  nonLinearSystemData[20].mixedSystem = 0 /* false */;
  nonLinearSystemData[20].residualFunc = residualFunc3202;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS3202;
  nonLinearSystemData[20].freeStaticNLSData = freeStaticDataNLS3202;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS3202;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  const int tmp_eqn_indices_20[1] = {3201};
  nonLinearSystemData[20].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[20].eqn_simcode_indices, tmp_eqn_indices_20, 1 * sizeof(int));
  nonLinearSystemData[20].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[19].equationIndex = 3090;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0 /* false */;
  nonLinearSystemData[19].mixedSystem = 0 /* false */;
  nonLinearSystemData[19].residualFunc = residualFunc3090;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = logic2_raw_functionJacNLSJac21_column;
  nonLinearSystemData[19].initialAnalyticalJacobian = logic2_raw_initialAnalyticJacobianNLSJac21;
  nonLinearSystemData[19].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS3090;
  nonLinearSystemData[19].freeStaticNLSData = freeStaticDataNLS3090;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS3090;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  const int tmp_eqn_indices_19[4] = {3081, 3082, 3083, 3084};
  nonLinearSystemData[19].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[19].eqn_simcode_indices, tmp_eqn_indices_19, 4 * sizeof(int));
  nonLinearSystemData[19].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[18].equationIndex = 2654;
  nonLinearSystemData[18].size = 1;
  nonLinearSystemData[18].homotopySupport = 0 /* false */;
  nonLinearSystemData[18].mixedSystem = 0 /* false */;
  nonLinearSystemData[18].residualFunc = residualFunc2654;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = NULL;
  nonLinearSystemData[18].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[18].jacobianIndex = -1;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS2654;
  nonLinearSystemData[18].freeStaticNLSData = freeStaticDataNLS2654;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS2654;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  const int tmp_eqn_indices_18[12] = {2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653};
  nonLinearSystemData[18].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[18].eqn_simcode_indices, tmp_eqn_indices_18, 12 * sizeof(int));
  nonLinearSystemData[18].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[17].equationIndex = 2470;
  nonLinearSystemData[17].size = 2;
  nonLinearSystemData[17].homotopySupport = 0 /* false */;
  nonLinearSystemData[17].mixedSystem = 1 /* true */;
  nonLinearSystemData[17].residualFunc = residualFunc2470;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = NULL;
  nonLinearSystemData[17].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[17].jacobianIndex = -1;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS2470;
  nonLinearSystemData[17].freeStaticNLSData = freeStaticDataNLS2470;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS2470;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  const int tmp_eqn_indices_17[26] = {2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2469, 2468};
  nonLinearSystemData[17].eqn_simcode_indices = malloc(26 * sizeof(int));
  memcpy(nonLinearSystemData[17].eqn_simcode_indices, tmp_eqn_indices_17, 26 * sizeof(int));
  nonLinearSystemData[17].torn_plus_residual_size = 26;
  
  
  nonLinearSystemData[16].equationIndex = 2170;
  nonLinearSystemData[16].size = 1;
  nonLinearSystemData[16].homotopySupport = 0 /* false */;
  nonLinearSystemData[16].mixedSystem = 0 /* false */;
  nonLinearSystemData[16].residualFunc = residualFunc2170;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS2170;
  nonLinearSystemData[16].freeStaticNLSData = freeStaticDataNLS2170;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS2170;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  const int tmp_eqn_indices_16[12] = {2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169};
  nonLinearSystemData[16].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[16].eqn_simcode_indices, tmp_eqn_indices_16, 12 * sizeof(int));
  nonLinearSystemData[16].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[15].equationIndex = 2147;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0 /* false */;
  nonLinearSystemData[15].mixedSystem = 0 /* false */;
  nonLinearSystemData[15].residualFunc = residualFunc2147;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS2147;
  nonLinearSystemData[15].freeStaticNLSData = freeStaticDataNLS2147;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS2147;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  const int tmp_eqn_indices_15[1] = {2146};
  nonLinearSystemData[15].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[15].eqn_simcode_indices, tmp_eqn_indices_15, 1 * sizeof(int));
  nonLinearSystemData[15].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[14].equationIndex = 1925;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0 /* false */;
  nonLinearSystemData[14].mixedSystem = 0 /* false */;
  nonLinearSystemData[14].residualFunc = residualFunc1925;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS1925;
  nonLinearSystemData[14].freeStaticNLSData = freeStaticDataNLS1925;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS1925;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  const int tmp_eqn_indices_14[1] = {1924};
  nonLinearSystemData[14].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[14].eqn_simcode_indices, tmp_eqn_indices_14, 1 * sizeof(int));
  nonLinearSystemData[14].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[13].equationIndex = 1835;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0 /* false */;
  nonLinearSystemData[13].mixedSystem = 0 /* false */;
  nonLinearSystemData[13].residualFunc = residualFunc1835;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = logic2_raw_functionJacNLSJac14_column;
  nonLinearSystemData[13].initialAnalyticalJacobian = logic2_raw_initialAnalyticJacobianNLSJac14;
  nonLinearSystemData[13].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS1835;
  nonLinearSystemData[13].freeStaticNLSData = freeStaticDataNLS1835;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS1835;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  const int tmp_eqn_indices_13[3] = {1828, 1829, 1830};
  nonLinearSystemData[13].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[13].eqn_simcode_indices, tmp_eqn_indices_13, 3 * sizeof(int));
  nonLinearSystemData[13].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[12].equationIndex = 1107;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 1 /* true */;
  nonLinearSystemData[12].mixedSystem = 0 /* false */;
  nonLinearSystemData[12].residualFunc = residualFunc1107;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS1107;
  nonLinearSystemData[12].freeStaticNLSData = freeStaticDataNLS1107;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS1107;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  const int tmp_eqn_indices_12[14] = {1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106};
  nonLinearSystemData[12].eqn_simcode_indices = malloc(14 * sizeof(int));
  memcpy(nonLinearSystemData[12].eqn_simcode_indices, tmp_eqn_indices_12, 14 * sizeof(int));
  nonLinearSystemData[12].torn_plus_residual_size = 14;
  
  
  nonLinearSystemData[11].equationIndex = 1068;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 1 /* true */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc1068;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS1068;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS1068;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS1068;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[1] = {1067};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 1 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[10].equationIndex = 1040;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 1 /* true */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc1040;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS1040;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS1040;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS1040;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[1] = {1039};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 1 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[9].equationIndex = 912;
  nonLinearSystemData[9].size = 3;
  nonLinearSystemData[9].homotopySupport = 1 /* true */;
  nonLinearSystemData[9].mixedSystem = 1 /* true */;
  nonLinearSystemData[9].residualFunc = residualFunc912;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS912;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS912;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS912;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[26] = {886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 911, 910, 909};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(26 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 26 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 26;
  
  
  nonLinearSystemData[8].equationIndex = 772;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 1 /* true */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc772;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS772;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS772;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS772;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[1] = {771};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 1 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[7].equationIndex = 611;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 1 /* true */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc611;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS611;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS611;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS611;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[14] = {597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(14 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 14 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 14;
  
  
  nonLinearSystemData[6].equationIndex = 586;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0 /* false */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc586;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS586;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS586;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS586;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[1] = {585};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 1 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[5].equationIndex = 512;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 1 /* true */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc512;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS512;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS512;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS512;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[1] = {511};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 1 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[4].equationIndex = 414;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1 /* true */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc414;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS414;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS414;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS414;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[1] = {413};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 1 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[3].equationIndex = 410;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 1 /* true */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc410;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS410;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS410;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS410;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[1] = {409};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 1 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[2].equationIndex = 387;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 1 /* true */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc387;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS387;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS387;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS387;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[1] = {386};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 1 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[1].equationIndex = 353;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc353;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS353;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS353;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS353;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[1] = {352};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 1 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[0].equationIndex = 266;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc266;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = logic2_raw_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = logic2_raw_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS266;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS266;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS266;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[3] = {259, 260, 261};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 3 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 3;
}

#if defined(__cplusplus)
}
#endif
