/* Non Linear Systems */
#include "logic1_raw_model.h"
#include "logic1_raw_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 252
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void logic1_raw_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 252;
}
/*
equation index: 253
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic1_raw_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 253;
}

void residualFunc259(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,259};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc259: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 259).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc259 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_252(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_253(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 254;
  /* restore known outputs */
  threadData->lastEquationSolved = 259;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS259(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS259(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS259(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS259(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS259(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS259(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS259(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS259(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS259(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* cooTow2.TApp_nominal PARAM */);
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
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1125 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1125 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1125 /* cooTow2.FRWat0 */);
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
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc390(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,390};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc390: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 390).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc390 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 389;
  /* restore known outputs */
  threadData->lastEquationSolved = 390;
}
void initializeSparsePatternNLS390(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS390(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS390(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS390(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS390(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS390(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS390(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS390(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS390(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc413(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,413};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc413: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 413).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc413 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 412;
  /* restore known outputs */
  threadData->lastEquationSolved = 413;
}
void initializeSparsePatternNLS413(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS413(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS413(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS413(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS413(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS413(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS413(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS413(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS413(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc417(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,417};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc417: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 417).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc417 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1297]] /* damRet.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 416;
  /* restore known outputs */
  threadData->lastEquationSolved = 417;
}
void initializeSparsePatternNLS417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS417(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS417(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS417(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS417(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS417(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS417(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc518(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,518};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc518: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 518).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc518 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* val6.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2743]] /* val6.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2738]] /* val6.dp_nominal_pos PARAM */),"val6.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 517;
  /* restore known outputs */
  threadData->lastEquationSolved = 518;
}
void initializeSparsePatternNLS518(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS518(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS518(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS518(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1216 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1216 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1216 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS518(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS518(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS518(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS518(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS518(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */);
}


/* inner equations */

void residualFunc592(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,592};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc592: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 592).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc592 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 591;
  /* restore known outputs */
  threadData->lastEquationSolved = 592;
}
void initializeSparsePatternNLS592(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS592(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS592(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS592(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1042 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1042 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1042 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS592(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS592(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS592(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS592(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS592(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 603
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic1_raw_eqFunction_603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 603;
}
/*
equation index: 604
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(val5.m_flow, TCWEntTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic1_raw_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 604;
}
/*
equation index: 605
type: SIMPLE_ASSIGN
cooTow.T_a = logic1.cooTow.Water.temperature(logic1.cooTow.Water.setState_phX(TCWEntTow.port_a.p, homotopy(if val5.m_flow > 0.0 then TCWEntTow.port_b.h_outflow else TCWEntTow.port_a.h_outflow, TCWEntTow.port_b.h_outflow), {}))
*/
void logic1_raw_eqFunction_605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,605};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) = omc_logic1_cooTow_Water_temperature(threadData, omc_logic1_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* TCWEntTow.port_a.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */)), tmp1));
  threadData->lastEquationSolved = 605;
}
/*
equation index: 606
type: SIMPLE_ASSIGN
cooTow.T_b = logic1.cooTow.Water.temperature(logic1.cooTow.Water.setState_phX(cooTow.vol.p, homotopy(if (-val5.m_flow) > 0.0 then TCWLeaTow.port_b.h_outflow else TCWEntTow.port_a.h_outflow, TCWEntTow.port_a.h_outflow), {}))
*/
void logic1_raw_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */) = omc_logic1_cooTow_Water_temperature(threadData, omc_logic1_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), tmp1));
  threadData->lastEquationSolved = 606;
}
/*
equation index: 607
type: SIMPLE_ASSIGN
cooTow.TLvg = logic1.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {1.0})
*/
void logic1_raw_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) = omc_logic1_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 607;
}
/*
equation index: 608
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void logic1_raw_eqFunction_608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 608;
}
/*
equation index: 609
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void logic1_raw_eqFunction_609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 609;
}
/*
equation index: 610
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void logic1_raw_eqFunction_610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 610;
}
/*
equation index: 611
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir < -0.01) then cooTow.FRAir else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) * ((12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) ^ 2.0 - 3.0) * (cooTow.FRAir - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTow.FRAir))
*/
void logic1_raw_eqFunction_611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,611};
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 611;
}
/*
equation index: 612
type: SIMPLE_ASSIGN
cooTow.dTMax = cooTow.T_a - weaBus.TWetBul
*/
void logic1_raw_eqFunction_612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cooTow.dTMax variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
  threadData->lastEquationSolved = 612;
}
/*
equation index: 613
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void logic1_raw_eqFunction_613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 613;
}
/*
equation index: 614
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic1_raw_eqFunction_614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 614;
}
/*
equation index: 615
type: SIMPLE_ASSIGN
cooTow.Q_flow = val5.m_flow * (logic1.cooTow.Medium.specificEnthalpy(logic1.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - TCWEntTow.port_b.h_outflow)
*/
void logic1_raw_eqFunction_615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,615};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)) * (omc_logic1_cooTow_Medium_specificEnthalpy(threadData, omc_logic1_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 615;
}

void residualFunc617(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,617};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc617: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 617).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc617 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_603(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_604(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_605(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_606(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_607(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_608(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_609(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_610(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_611(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_612(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_613(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_614(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_615(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 616;
  /* restore known outputs */
  threadData->lastEquationSolved = 617;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS617(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS617(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS617(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS617(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS617(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS617(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS617(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS617(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS617(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc778(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,778};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc778: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 778).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc778 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */), 2.0485556863967758, 5.598969154228856), (13.34174165677975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 777;
  /* restore known outputs */
  threadData->lastEquationSolved = 778;
}
void initializeSparsePatternNLS778(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS778(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS778(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS778(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS778(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS778(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS778(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS778(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS778(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */);
}


/* inner equations */

/*
equation index: 892
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic1_raw_eqFunction_892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 892;
}
/*
equation index: 893
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic1_raw_eqFunction_893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 893;
}
/*
equation index: 894
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic1_raw_eqFunction_894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 894;
}
/*
equation index: 895
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic1_raw_eqFunction_895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 895;
}
/*
equation index: 896
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic1_raw_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 896;
}
/*
equation index: 897
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic1_raw_eqFunction_897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 897;
}
/*
equation index: 898
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic1_raw_eqFunction_898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 898;
}
/*
equation index: 899
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic1_raw_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 899;
}
/*
equation index: 900
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic1_raw_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 900;
}
/*
equation index: 901
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic1_raw_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 901;
}
/*
equation index: 902
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * max(0.0, max(roomDemandSignal.y, 0.0) - max(cooCoi.Q1_flow, 0.0)) / chillerStagingCtrl.kWPerTR
*/
void logic1_raw_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM(fmax(0.0,fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* roomDemandSignal.y variable */),0.0) - fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */),0.0)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 902;
}
/*
equation index: 903
type: ALGORITHM

  chillerStagingCtrl.stage2On := $START.chillerStagingCtrl.stage2On;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
*/
void logic1_raw_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->modelData->booleanVarsData[7] /* chillerStagingCtrl.stage2On DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = 0 /* false */;

  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
  tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
  tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
  threadData->lastEquationSolved = 903;
}
/*
equation index: 904
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic1_raw_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 904;
}
/*
equation index: 905
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then chwPump2PID.mCHWCmd else 0.0
*/
void logic1_raw_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* chwPump2PID.mCHWCmd STATE(1) */):0.0);
  threadData->lastEquationSolved = 905;
}
/*
equation index: 906
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic1_raw_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 906;
}
/*
equation index: 907
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic1_raw_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 907;
}
/*
equation index: 908
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, cooCoi.ele[1].preDro1.k, cooCoi.ele[1].preDro1.m_flow_turbulent), 90580.0 * cooCoi.m1_flow / cooCoi.ele[1].preDro1.m_flow_nominal_pos)
*/
void logic1_raw_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* cooCoi.ele[1].preDro1.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */)), DIVISION_SIM((90580.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),"cooCoi.ele[1].preDro1.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 908;
}
/*
equation index: 909
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic1_raw_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 909;
}
/*
equation index: 910
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic1_raw_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 910;
}
/*
equation index: 911
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic1_raw_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 911;
}
/*
equation index: 912
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic1_raw_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 912;
}
/*
equation index: 913
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void logic1_raw_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */);
  threadData->lastEquationSolved = 913;
}
/*
equation index: 914
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void logic1_raw_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 914;
}

void residualFunc918(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,918};
  int i,j;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc918: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 918).vars[i]);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc918 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_892(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_893(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_894(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_895(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_896(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_897(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_898(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_899(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_900(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_901(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_902(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_903(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_904(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_905(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_906(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_907(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_908(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_909(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_910(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_911(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_912(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_913(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_914(data, threadData);
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* valByp.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* valByp.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 917;
  res[1] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.hA.n_w PARAM */), 0.1)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 916;
  res[2] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* val1.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* val1.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* val1.dp_nominal_pos PARAM */),"val1.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */);
  threadData->lastEquationSolved = 915;
  /* restore known outputs */
  threadData->lastEquationSolved = 918;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS918(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS918(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS918(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS918(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val1.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1205 /* val1.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1205 /* val1.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1205 /* val1.dp */);
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
    initializeSparsePatternNLS918(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS918(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS918(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS918(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS918(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

/*
equation index: 965
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, TWCLeaTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic1_raw_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 965;
}
/*
equation index: 966
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(val7.m_flow, TCWEntTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic1_raw_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 966;
}
/*
equation index: 967
type: SIMPLE_ASSIGN
cooTow2.T_a = logic1.cooTow2.Water.temperature(logic1.cooTow2.Water.setState_phX(TCWEntTow2.port_a.p, homotopy(if val7.m_flow > 0.0 then TCWEntTow2.port_b.h_outflow else TCWEntTow2.port_a.h_outflow, TCWEntTow2.port_b.h_outflow), {}))
*/
void logic1_raw_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) = omc_logic1_cooTow2_Water_temperature(threadData, omc_logic1_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* TCWEntTow2.port_a.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */)), tmp1));
  threadData->lastEquationSolved = 967;
}
/*
equation index: 968
type: SIMPLE_ASSIGN
cooTow2.T_b = logic1.cooTow2.Water.temperature(logic1.cooTow2.Water.setState_phX(cooTow2.vol.p, homotopy(if (-val7.m_flow) > 0.0 then TWCLeaTow2.port_b.h_outflow else TCWEntTow2.port_a.h_outflow, TCWEntTow2.port_a.h_outflow), {}))
*/
void logic1_raw_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */) = omc_logic1_cooTow2_Water_temperature(threadData, omc_logic1_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), tmp1));
  threadData->lastEquationSolved = 968;
}
/*
equation index: 969
type: SIMPLE_ASSIGN
cooTow2.TLvg = logic1.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {1.0})
*/
void logic1_raw_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) = omc_logic1_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 969;
}
/*
equation index: 970
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void logic1_raw_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 970;
}
/*
equation index: 971
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void logic1_raw_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 971;
}
/*
equation index: 972
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void logic1_raw_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 972;
}
/*
equation index: 973
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir < -0.01) then cooTow2.FRAir else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) * ((12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) ^ 2.0 - 3.0) * (cooTow2.FRAir - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTow2.FRAir))
*/
void logic1_raw_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 973;
}
/*
equation index: 974
type: SIMPLE_ASSIGN
cooTow2.dTMax = cooTow2.T_a - weaBus.TWetBul
*/
void logic1_raw_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cooTow2.dTMax variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
  threadData->lastEquationSolved = 974;
}
/*
equation index: 975
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void logic1_raw_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 975;
}
/*
equation index: 976
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic1_raw_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 976;
}
/*
equation index: 977
type: SIMPLE_ASSIGN
cooTow2.Q_flow = val7.m_flow * (logic1.cooTow2.Medium.specificEnthalpy(logic1.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - TCWEntTow2.port_b.h_outflow)
*/
void logic1_raw_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)) * (omc_logic1_cooTow2_Medium_specificEnthalpy(threadData, omc_logic1_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 977;
}

void residualFunc979(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,979};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc979: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 979).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc979 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_965(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_966(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_967(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_968(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_969(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_970(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_971(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_972(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_973(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_974(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_975(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_976(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_977(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 978;
  /* restore known outputs */
  threadData->lastEquationSolved = 979;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS979(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS979(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS979(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS979(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow2.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS979(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS979(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS979(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS979(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS979(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc993(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,993};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc993: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 993).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc993 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* val8_2.dp_nominal_pos PARAM */),"val8_2.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 992;
  /* restore known outputs */
  threadData->lastEquationSolved = 993;
}
void initializeSparsePatternNLS993(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS993(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS993(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS993(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1232 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8_2.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS993(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS993(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS993(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS993(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS993(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */);
}


/* inner equations */

void residualFunc1096(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1096};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1096: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1096).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1096 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* val8.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* val8.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* val8.dp_nominal_pos PARAM */),"val8.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 1095;
  /* restore known outputs */
  threadData->lastEquationSolved = 1096;
}
void initializeSparsePatternNLS1096(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1096(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1096(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1096(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1226 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1226 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1226 /* val8.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1096(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1096(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1096(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1096(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1096(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */);
}


/* inner equations */

/*
equation index: 1824
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void logic1_raw_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 1824;
}
/*
equation index: 1825
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic1_raw_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 1825;
}

void residualFunc1831(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1831};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1831: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1831).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1831 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_1824(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_1825(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 1826;
  /* restore known outputs */
  threadData->lastEquationSolved = 1831;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1831(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS1831(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1831(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS1831(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1831(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1831(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1831(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1831(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1831(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc1929(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1929};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1929: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1929).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1929 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1127]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1928;
  /* restore known outputs */
  threadData->lastEquationSolved = 1929;
}
void initializeSparsePatternNLS1929(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1929(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1929(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1929(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1125 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1125 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1125 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1929(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1929(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1929(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1929(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1929(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1125]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc2157(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2157};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2157: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2157).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2157 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1046]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1044]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1045]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 2156;
  /* restore known outputs */
  threadData->lastEquationSolved = 2157;
}
void initializeSparsePatternNLS2157(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2157(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2157(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2157(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1042 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1042 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1042 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2157(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2157(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2157(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2157(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2157(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1042]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 2168
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic1_raw_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2168;
}
/*
equation index: 2169
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(val5.m_flow, TCWEntTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic1_raw_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2169;
}
/*
equation index: 2170
type: SIMPLE_ASSIGN
cooTow.T_b = logic1.cooTow.Water.temperature(logic1.cooTow.Water.setState_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2170};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */) = omc_logic1_cooTow_Water_temperature(threadData, omc_logic1_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 2170;
}
/*
equation index: 2171
type: SIMPLE_ASSIGN
cooTow.TLvg = logic1.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {1.0})
*/
void logic1_raw_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2171};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) = omc_logic1_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 2171;
}
/*
equation index: 2172
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void logic1_raw_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 2172;
}
/*
equation index: 2173
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void logic1_raw_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 2173;
}
/*
equation index: 2174
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void logic1_raw_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 2174;
}
/*
equation index: 2175
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir < -0.01) then cooTow.FRAir else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) * ((12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) ^ 2.0 - 3.0) * (cooTow.FRAir - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTow.FRAir))
*/
void logic1_raw_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2175};
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 2175;
}
/*
equation index: 2176
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void logic1_raw_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1070]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 2176;
}
/*
equation index: 2177
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic1_raw_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1124]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 2177;
}
/*
equation index: 2178
type: SIMPLE_ASSIGN
cooTow.Q_flow = val5.m_flow * (logic1.cooTow.Medium.specificEnthalpy(logic1.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - TCWEntTow.port_b.h_outflow)
*/
void logic1_raw_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2178};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val5.m_flow variable */)) * (omc_logic1_cooTow_Medium_specificEnthalpy(threadData, omc_logic1_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* TCWEntTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 2178;
}

void residualFunc2180(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2180};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2180: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2180).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2180 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_2168(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2169(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2170(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2171(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2172(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2173(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2174(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2175(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2176(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2177(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2178(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1092]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1091]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 2179;
  /* restore known outputs */
  threadData->lastEquationSolved = 2180;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2180(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2180(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2180(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2180(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 308 /* TCWEntTow.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2180(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2180(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2180(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2180(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2180(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 2454
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic1_raw_eqFunction_2454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 2454;
}
/*
equation index: 2455
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic1_raw_eqFunction_2455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 2455;
}
/*
equation index: 2456
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic1_raw_eqFunction_2456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 2456;
}
/*
equation index: 2457
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic1_raw_eqFunction_2457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 2457;
}
/*
equation index: 2458
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic1_raw_eqFunction_2458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 2458;
}
/*
equation index: 2459
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic1_raw_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 2459;
}
/*
equation index: 2460
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic1_raw_eqFunction_2460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 2460;
}
/*
equation index: 2461
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic1_raw_eqFunction_2461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 2461;
}
/*
equation index: 2462
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic1_raw_eqFunction_2462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 2462;
}
/*
equation index: 2463
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic1_raw_eqFunction_2463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 2463;
}
/*
equation index: 2464
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * max(0.0, max(roomDemandSignal.y, 0.0) - max(cooCoi.Q1_flow, 0.0)) / chillerStagingCtrl.kWPerTR
*/
void logic1_raw_eqFunction_2464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM(fmax(0.0,fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* roomDemandSignal.y variable */),0.0) - fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */),0.0)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 2464;
}
/*
equation index: 2465
type: ALGORITHM

  chillerStagingCtrl.stage2On := $START.chillerStagingCtrl.stage2On;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
*/
void logic1_raw_eqFunction_2465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2465};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->modelData->booleanVarsData[7] /* chillerStagingCtrl.stage2On DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = 0 /* false */;

  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
  tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
  tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
  threadData->lastEquationSolved = 2465;
}
/*
equation index: 2466
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic1_raw_eqFunction_2466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2466};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 2466;
}
/*
equation index: 2467
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then chwPump2PID.mCHWCmd else 0.0
*/
void logic1_raw_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* chwPump2PID.mCHWCmd STATE(1) */):0.0);
  threadData->lastEquationSolved = 2467;
}
/*
equation index: 2468
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic1_raw_eqFunction_2468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 2468;
}
/*
equation index: 2469
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic1_raw_eqFunction_2469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 2469;
}
/*
equation index: 2470
type: SIMPLE_ASSIGN
valByp.dp = valByp.m_flow * valByp.dp_nominal_pos / valByp.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2832]] /* valByp.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2837]] /* valByp.m_flow_nominal_pos PARAM */),"valByp.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2470;
}
/*
equation index: 2471
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void logic1_raw_eqFunction_2471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 2471;
}
/*
equation index: 2472
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic1_raw_eqFunction_2472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 2472;
}
/*
equation index: 2473
type: SIMPLE_ASSIGN
val1.dp = val1.m_flow * val1.dp_nominal_pos / val1.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2692]] /* val1.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2697]] /* val1.m_flow_nominal_pos PARAM */),"val1.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2473;
}
/*
equation index: 2474
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = 90580.0 * cooCoi.m1_flow / cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
void logic1_raw_eqFunction_2474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */) = DIVISION_SIM((90580.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),"cooCoi.ele[1].preDro1.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2474;
}
/*
equation index: 2475
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void logic1_raw_eqFunction_2475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */);
  threadData->lastEquationSolved = 2475;
}
/*
equation index: 2476
type: SIMPLE_ASSIGN
junCHWSup.vol.p = junCHWRet.vol.p - valByp.dp
*/
void logic1_raw_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 2476;
}
/*
equation index: 2477
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic1_raw_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 2477;
}

void residualFunc2480(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2480};
  int i,j;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2480: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2480).vars[i]);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2480 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_2454(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2455(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2456(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2457(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2458(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2459(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2460(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2461(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2462(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2463(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2464(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2465(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2466(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2467(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2468(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2469(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2470(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2471(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2472(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2473(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2474(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2475(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2476(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2477(data, threadData);
  /* body */
  res[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.hA.n_w PARAM */), 0.1)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 2479;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 2478;
  /* restore known outputs */
  threadData->lastEquationSolved = 2480;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2480(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2480(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2480(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2480(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for valByp.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1241 /* valByp.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1241 /* valByp.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1241 /* valByp.m_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 696 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2480(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2480(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2480(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2480(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2480(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

/*
equation index: 2525
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(val7.m_flow, TCWEntTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic1_raw_eqFunction_2525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2525;
}
/*
equation index: 2526
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, TWCLeaTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic1_raw_eqFunction_2526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2526;
}
/*
equation index: 2527
type: SIMPLE_ASSIGN
cooTow2.T_b = logic1.cooTow2.Water.temperature(logic1.cooTow2.Water.setState_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {}))
*/
void logic1_raw_eqFunction_2527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2527};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */) = omc_logic1_cooTow2_Water_temperature(threadData, omc_logic1_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 2527;
}
/*
equation index: 2528
type: SIMPLE_ASSIGN
cooTow2.TLvg = logic1.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {1.0})
*/
void logic1_raw_eqFunction_2528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2528};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) = omc_logic1_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 2528;
}
/*
equation index: 2529
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void logic1_raw_eqFunction_2529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 2529;
}
/*
equation index: 2530
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void logic1_raw_eqFunction_2530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 2530;
}
/*
equation index: 2531
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void logic1_raw_eqFunction_2531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 2531;
}
/*
equation index: 2532
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir < -0.01) then cooTow2.FRAir else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) * ((12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) ^ 2.0 - 3.0) * (cooTow2.FRAir - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTow2.FRAir))
*/
void logic1_raw_eqFunction_2532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2532};
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 2532;
}
/*
equation index: 2533
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void logic1_raw_eqFunction_2533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 2533;
}
/*
equation index: 2534
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic1_raw_eqFunction_2534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 2534;
}
/*
equation index: 2535
type: SIMPLE_ASSIGN
cooTow2.Q_flow = val7.m_flow * (logic1.cooTow2.Medium.specificEnthalpy(logic1.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - TCWEntTow2.port_b.h_outflow)
*/
void logic1_raw_eqFunction_2535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2535};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* val7.m_flow variable */)) * (omc_logic1_cooTow2_Medium_specificEnthalpy(threadData, omc_logic1_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* TCWEntTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 2535;
}

void residualFunc2537(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2537};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2537: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2537).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2537 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_2525(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2526(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2527(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2528(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2529(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2530(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2531(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2532(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2533(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2534(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_2535(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 2536;
  /* restore known outputs */
  threadData->lastEquationSolved = 2537;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2537(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2537(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2537(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2537(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow2.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 316 /* TCWEntTow2.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2537(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2537(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2537(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2537(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2537(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 3089
type: SIMPLE_ASSIGN
$cse46 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic1_raw_eqFunction_3089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $cse46 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 3089;
}
/*
equation index: 3090
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46)
*/
void logic1_raw_eqFunction_3090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $cse46 variable */))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46",equationIndexes);
  threadData->lastEquationSolved = 3090;
}
/*
equation index: 3091
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic1_raw_eqFunction_3091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 3091;
}

void residualFunc3098(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3098};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3098: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3098).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3098 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_3089(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3090(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3091(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 3092;
  /* restore known outputs */
  threadData->lastEquationSolved = 3098;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3098(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3098(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS3098(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS3098(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1275 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3098(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3098(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3098(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3098(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3098(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc3175(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3175};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3175: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3175).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3175 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2745]] /* val6.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 3174;
  /* restore known outputs */
  threadData->lastEquationSolved = 3175;
}
void initializeSparsePatternNLS3175(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3175(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3175(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3175(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1216 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1216 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1216 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3175(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3175(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3175(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3175(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3175(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 3218
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic1_raw_eqFunction_3218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 3218;
}
/*
equation index: 3219
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic1_raw_eqFunction_3219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 3219;
}
/*
equation index: 3220
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic1_raw_eqFunction_3220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 3220;
}
/*
equation index: 3221
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic1_raw_eqFunction_3221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 3221;
}
/*
equation index: 3222
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic1_raw_eqFunction_3222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[993]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 3222;
}
/*
equation index: 3223
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic1_raw_eqFunction_3223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 3223;
}
/*
equation index: 3224
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic1_raw_eqFunction_3224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 3224;
}
/*
equation index: 3225
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic1_raw_eqFunction_3225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 3225;
}
/*
equation index: 3226
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic1_raw_eqFunction_3226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 3226;
}
/*
equation index: 3227
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic1_raw_eqFunction_3227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 3227;
}
/*
equation index: 3228
type: SIMPLE_ASSIGN
$cse67 = max(cooCoi.Q1_flow, 0.0)
*/
void logic1_raw_eqFunction_3228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $cse67 variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* cooCoi.Q1_flow variable */),0.0);
  threadData->lastEquationSolved = 3228;
}
/*
equation index: 3229
type: SIMPLE_ASSIGN
$cse66 = max(0.0, $cse65 - $cse67)
*/
void logic1_raw_eqFunction_3229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $cse66 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* $cse65 variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* $cse67 variable */));
  threadData->lastEquationSolved = 3229;
}
/*
equation index: 3230
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * $cse66 / chillerStagingCtrl.kWPerTR
*/
void logic1_raw_eqFunction_3230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* $cse66 variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 3230;
}
/*
equation index: 3231
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
void logic1_raw_eqFunction_3231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3231};
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
      tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
      tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
      tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
    }
    else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
    {
      tmp3 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
      if(tmp3)
      {
        (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = 0 /* false */;
      }
      else
      {
        if((data->simulationInfo->booleanVarsPre[7] /* chillerStagingCtrl.stage2On DISCRETE */))
        {
          tmp4 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
          tmp5 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* chillerStagingCtrl.stage2OffShortfall_TR PARAM */));
          (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (!(tmp4 && tmp5));
        }
        else
        {
          tmp6 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
          tmp7 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
          tmp8 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
          (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp6 || (tmp7 && tmp8));
        }
      }
    }
  }
  threadData->lastEquationSolved = 3231;
}
/*
equation index: 3232
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic1_raw_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3232};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 3232;
}
/*
equation index: 3233
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then chwPump2PID.mCHWCmd else 0.0
*/
void logic1_raw_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* chwPump2PID.mCHWCmd STATE(1) */):0.0);
  threadData->lastEquationSolved = 3233;
}
/*
equation index: 3234
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic1_raw_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3234;
}
/*
equation index: 3235
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic1_raw_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 3235;
}
/*
equation index: 3236
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, cooCoi.ele[1].preDro1.k, cooCoi.ele[1].preDro1.m_flow_turbulent)
*/
void logic1_raw_eqFunction_3236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[597]] /* cooCoi.ele[1].preDro1.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 3236;
}
/*
equation index: 3237
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic1_raw_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 3237;
}
/*
equation index: 3238
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic1_raw_eqFunction_3238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 3238;
}
/*
equation index: 3239
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic1_raw_eqFunction_3239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1001]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 3239;
}
/*
equation index: 3240
type: SIMPLE_ASSIGN
$cse5 = Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_w, cooCoi.hA.n_w, 0.1)
*/
void logic1_raw_eqFunction_3240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $cse5 variable */) = omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1003]] /* cooCoi.hA.n_w PARAM */), 0.1);
  threadData->lastEquationSolved = 3240;
}
/*
equation index: 3241
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic1_raw_eqFunction_3241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 3241;
}
/*
equation index: 3242
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void logic1_raw_eqFunction_3242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 3242;
}
/*
equation index: 3243
type: SIMPLE_ASSIGN
val1.dp = expVesCHW.p_start - junCHWRet.vol.p
*/
void logic1_raw_eqFunction_3243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1327]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */);
  threadData->lastEquationSolved = 3243;
}

void residualFunc3247(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3247};
  int i,j;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3247: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3247).vars[i]);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3247 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */) = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic1_raw_eqFunction_3218(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3219(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3220(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3221(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3222(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3223(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3224(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3225(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3226(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3227(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3228(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3229(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3230(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3231(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3232(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3233(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3234(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3235(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3236(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3237(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3238(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3239(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3240(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3241(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3242(data, threadData);
  /* local constraints */
  logic1_raw_eqFunction_3243(data, threadData);
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2839]] /* valByp.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 3246;
  res[1] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2699]] /* val1.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* val1.m_flow variable */);
  threadData->lastEquationSolved = 3245;
  res[2] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[999]] /* cooCoi.hA.hA_nominal_w PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* $cse5 variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 3244;
  /* restore known outputs */
  threadData->lastEquationSolved = 3247;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3247(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+3] = {0,2,3,3};
  const int rowIndex[8] = {0,1,0,1,2,0,1,2};
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

void freeSparsePatternNLS3247(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3247(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3247(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for junCHWRet.vol.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 912 /* junCHWRet.vol.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 912 /* junCHWRet.vol.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 912 /* junCHWRet.vol.p */);
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
    initializeSparsePatternNLS3247(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3247(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3247(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3247(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3247(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* junCHWRet.vol.p variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* cooCoi.m1_flow variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

void residualFunc3346(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3346};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3346: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3346).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3346 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* val8.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3345;
  /* restore known outputs */
  threadData->lastEquationSolved = 3346;
}
void initializeSparsePatternNLS3346(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3346(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3346(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3346(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1226 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1226 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1226 /* val8.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3346(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3346(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3346(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3346(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3346(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* val8.dp variable */);
}


/* inner equations */

void residualFunc3357(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3357};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3357: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3357).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3357 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3356;
  /* restore known outputs */
  threadData->lastEquationSolved = 3357;
}
void initializeSparsePatternNLS3357(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3357(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3357(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3357(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1232 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8_2.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3357(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3357(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3357(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3357(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3357(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.dp variable */);
}


/* inner equations */

void residualFunc3405(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3405};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3405: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3405).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3405 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 3404;
  /* restore known outputs */
  threadData->lastEquationSolved = 3405;
}
void initializeSparsePatternNLS3405(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3405(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3405(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3405(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 802 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3405(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3405(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3405(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3405(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3405(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc3435(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3435};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3435: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3435).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3435 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 3434;
  /* restore known outputs */
  threadData->lastEquationSolved = 3435;
}
void initializeSparsePatternNLS3435(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3435(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3435(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3435(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 805 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3435(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3435(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3435(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3435(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3435(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc3440(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3440};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3440: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3440).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3440 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1308]] /* damRet.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 3439;
  /* restore known outputs */
  threadData->lastEquationSolved = 3440;
}
void initializeSparsePatternNLS3440(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3440(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3440(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3440(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 809 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3440(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3440(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3440(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3440(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3440(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc3782(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3782};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3782: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3782).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3782 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */), 2.0485556863967758, 5.598969154228856) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 3781;
  /* restore known outputs */
  threadData->lastEquationSolved = 3782;
}
void initializeSparsePatternNLS3782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3782(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3782(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 692 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3782(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3782(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3782(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3782(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3782(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.m2_flow variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void logic1_raw_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[27].equationIndex = 3782;
  nonLinearSystemData[27].size = 1;
  nonLinearSystemData[27].homotopySupport = 0 /* false */;
  nonLinearSystemData[27].mixedSystem = 0 /* false */;
  nonLinearSystemData[27].residualFunc = residualFunc3782;
  nonLinearSystemData[27].strictTearingFunctionCall = NULL;
  nonLinearSystemData[27].analyticalJacobianColumn = NULL;
  nonLinearSystemData[27].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[27].jacobianIndex = -1;
  nonLinearSystemData[27].initializeStaticNLSData = initializeStaticDataNLS3782;
  nonLinearSystemData[27].freeStaticNLSData = freeStaticDataNLS3782;
  nonLinearSystemData[27].getIterationVars = getIterationVarsNLS3782;
  nonLinearSystemData[27].checkConstraints = NULL;
  
  const int tmp_eqn_indices_27[1] = {3781};
  nonLinearSystemData[27].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[27].eqn_simcode_indices, tmp_eqn_indices_27, 1 * sizeof(int));
  nonLinearSystemData[27].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[26].equationIndex = 3440;
  nonLinearSystemData[26].size = 1;
  nonLinearSystemData[26].homotopySupport = 0 /* false */;
  nonLinearSystemData[26].mixedSystem = 0 /* false */;
  nonLinearSystemData[26].residualFunc = residualFunc3440;
  nonLinearSystemData[26].strictTearingFunctionCall = NULL;
  nonLinearSystemData[26].analyticalJacobianColumn = NULL;
  nonLinearSystemData[26].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[26].jacobianIndex = -1;
  nonLinearSystemData[26].initializeStaticNLSData = initializeStaticDataNLS3440;
  nonLinearSystemData[26].freeStaticNLSData = freeStaticDataNLS3440;
  nonLinearSystemData[26].getIterationVars = getIterationVarsNLS3440;
  nonLinearSystemData[26].checkConstraints = NULL;
  
  const int tmp_eqn_indices_26[1] = {3439};
  nonLinearSystemData[26].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[26].eqn_simcode_indices, tmp_eqn_indices_26, 1 * sizeof(int));
  nonLinearSystemData[26].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[25].equationIndex = 3435;
  nonLinearSystemData[25].size = 1;
  nonLinearSystemData[25].homotopySupport = 0 /* false */;
  nonLinearSystemData[25].mixedSystem = 0 /* false */;
  nonLinearSystemData[25].residualFunc = residualFunc3435;
  nonLinearSystemData[25].strictTearingFunctionCall = NULL;
  nonLinearSystemData[25].analyticalJacobianColumn = NULL;
  nonLinearSystemData[25].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[25].jacobianIndex = -1;
  nonLinearSystemData[25].initializeStaticNLSData = initializeStaticDataNLS3435;
  nonLinearSystemData[25].freeStaticNLSData = freeStaticDataNLS3435;
  nonLinearSystemData[25].getIterationVars = getIterationVarsNLS3435;
  nonLinearSystemData[25].checkConstraints = NULL;
  
  const int tmp_eqn_indices_25[1] = {3434};
  nonLinearSystemData[25].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[25].eqn_simcode_indices, tmp_eqn_indices_25, 1 * sizeof(int));
  nonLinearSystemData[25].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[24].equationIndex = 3405;
  nonLinearSystemData[24].size = 1;
  nonLinearSystemData[24].homotopySupport = 0 /* false */;
  nonLinearSystemData[24].mixedSystem = 0 /* false */;
  nonLinearSystemData[24].residualFunc = residualFunc3405;
  nonLinearSystemData[24].strictTearingFunctionCall = NULL;
  nonLinearSystemData[24].analyticalJacobianColumn = NULL;
  nonLinearSystemData[24].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[24].jacobianIndex = -1;
  nonLinearSystemData[24].initializeStaticNLSData = initializeStaticDataNLS3405;
  nonLinearSystemData[24].freeStaticNLSData = freeStaticDataNLS3405;
  nonLinearSystemData[24].getIterationVars = getIterationVarsNLS3405;
  nonLinearSystemData[24].checkConstraints = NULL;
  
  const int tmp_eqn_indices_24[1] = {3404};
  nonLinearSystemData[24].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[24].eqn_simcode_indices, tmp_eqn_indices_24, 1 * sizeof(int));
  nonLinearSystemData[24].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[23].equationIndex = 3357;
  nonLinearSystemData[23].size = 1;
  nonLinearSystemData[23].homotopySupport = 0 /* false */;
  nonLinearSystemData[23].mixedSystem = 0 /* false */;
  nonLinearSystemData[23].residualFunc = residualFunc3357;
  nonLinearSystemData[23].strictTearingFunctionCall = NULL;
  nonLinearSystemData[23].analyticalJacobianColumn = NULL;
  nonLinearSystemData[23].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[23].jacobianIndex = -1;
  nonLinearSystemData[23].initializeStaticNLSData = initializeStaticDataNLS3357;
  nonLinearSystemData[23].freeStaticNLSData = freeStaticDataNLS3357;
  nonLinearSystemData[23].getIterationVars = getIterationVarsNLS3357;
  nonLinearSystemData[23].checkConstraints = NULL;
  
  const int tmp_eqn_indices_23[1] = {3356};
  nonLinearSystemData[23].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[23].eqn_simcode_indices, tmp_eqn_indices_23, 1 * sizeof(int));
  nonLinearSystemData[23].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[22].equationIndex = 3346;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0 /* false */;
  nonLinearSystemData[22].mixedSystem = 0 /* false */;
  nonLinearSystemData[22].residualFunc = residualFunc3346;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS3346;
  nonLinearSystemData[22].freeStaticNLSData = freeStaticDataNLS3346;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS3346;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  const int tmp_eqn_indices_22[1] = {3345};
  nonLinearSystemData[22].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[22].eqn_simcode_indices, tmp_eqn_indices_22, 1 * sizeof(int));
  nonLinearSystemData[22].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[21].equationIndex = 3247;
  nonLinearSystemData[21].size = 3;
  nonLinearSystemData[21].homotopySupport = 0 /* false */;
  nonLinearSystemData[21].mixedSystem = 1 /* true */;
  nonLinearSystemData[21].residualFunc = residualFunc3247;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = NULL;
  nonLinearSystemData[21].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[21].jacobianIndex = -1;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS3247;
  nonLinearSystemData[21].freeStaticNLSData = freeStaticDataNLS3247;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS3247;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  const int tmp_eqn_indices_21[29] = {3218, 3219, 3220, 3221, 3222, 3223, 3224, 3225, 3226, 3227, 3228, 3229, 3230, 3231, 3232, 3233, 3234, 3235, 3236, 3237, 3238, 3239, 3240, 3241, 3242, 3243, 3246, 3245, 3244};
  nonLinearSystemData[21].eqn_simcode_indices = malloc(29 * sizeof(int));
  memcpy(nonLinearSystemData[21].eqn_simcode_indices, tmp_eqn_indices_21, 29 * sizeof(int));
  nonLinearSystemData[21].torn_plus_residual_size = 29;
  
  
  nonLinearSystemData[20].equationIndex = 3175;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0 /* false */;
  nonLinearSystemData[20].mixedSystem = 0 /* false */;
  nonLinearSystemData[20].residualFunc = residualFunc3175;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS3175;
  nonLinearSystemData[20].freeStaticNLSData = freeStaticDataNLS3175;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS3175;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  const int tmp_eqn_indices_20[1] = {3174};
  nonLinearSystemData[20].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[20].eqn_simcode_indices, tmp_eqn_indices_20, 1 * sizeof(int));
  nonLinearSystemData[20].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[19].equationIndex = 3098;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0 /* false */;
  nonLinearSystemData[19].mixedSystem = 0 /* false */;
  nonLinearSystemData[19].residualFunc = residualFunc3098;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = logic1_raw_functionJacNLSJac21_column;
  nonLinearSystemData[19].initialAnalyticalJacobian = logic1_raw_initialAnalyticJacobianNLSJac21;
  nonLinearSystemData[19].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS3098;
  nonLinearSystemData[19].freeStaticNLSData = freeStaticDataNLS3098;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS3098;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  const int tmp_eqn_indices_19[4] = {3089, 3090, 3091, 3092};
  nonLinearSystemData[19].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[19].eqn_simcode_indices, tmp_eqn_indices_19, 4 * sizeof(int));
  nonLinearSystemData[19].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[18].equationIndex = 2537;
  nonLinearSystemData[18].size = 1;
  nonLinearSystemData[18].homotopySupport = 0 /* false */;
  nonLinearSystemData[18].mixedSystem = 0 /* false */;
  nonLinearSystemData[18].residualFunc = residualFunc2537;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = NULL;
  nonLinearSystemData[18].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[18].jacobianIndex = -1;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS2537;
  nonLinearSystemData[18].freeStaticNLSData = freeStaticDataNLS2537;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS2537;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  const int tmp_eqn_indices_18[12] = {2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536};
  nonLinearSystemData[18].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[18].eqn_simcode_indices, tmp_eqn_indices_18, 12 * sizeof(int));
  nonLinearSystemData[18].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[17].equationIndex = 2480;
  nonLinearSystemData[17].size = 2;
  nonLinearSystemData[17].homotopySupport = 0 /* false */;
  nonLinearSystemData[17].mixedSystem = 1 /* true */;
  nonLinearSystemData[17].residualFunc = residualFunc2480;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = NULL;
  nonLinearSystemData[17].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[17].jacobianIndex = -1;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS2480;
  nonLinearSystemData[17].freeStaticNLSData = freeStaticDataNLS2480;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS2480;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  const int tmp_eqn_indices_17[26] = {2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2479, 2478};
  nonLinearSystemData[17].eqn_simcode_indices = malloc(26 * sizeof(int));
  memcpy(nonLinearSystemData[17].eqn_simcode_indices, tmp_eqn_indices_17, 26 * sizeof(int));
  nonLinearSystemData[17].torn_plus_residual_size = 26;
  
  
  nonLinearSystemData[16].equationIndex = 2180;
  nonLinearSystemData[16].size = 1;
  nonLinearSystemData[16].homotopySupport = 0 /* false */;
  nonLinearSystemData[16].mixedSystem = 0 /* false */;
  nonLinearSystemData[16].residualFunc = residualFunc2180;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS2180;
  nonLinearSystemData[16].freeStaticNLSData = freeStaticDataNLS2180;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS2180;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  const int tmp_eqn_indices_16[12] = {2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179};
  nonLinearSystemData[16].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[16].eqn_simcode_indices, tmp_eqn_indices_16, 12 * sizeof(int));
  nonLinearSystemData[16].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[15].equationIndex = 2157;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0 /* false */;
  nonLinearSystemData[15].mixedSystem = 0 /* false */;
  nonLinearSystemData[15].residualFunc = residualFunc2157;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS2157;
  nonLinearSystemData[15].freeStaticNLSData = freeStaticDataNLS2157;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS2157;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  const int tmp_eqn_indices_15[1] = {2156};
  nonLinearSystemData[15].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[15].eqn_simcode_indices, tmp_eqn_indices_15, 1 * sizeof(int));
  nonLinearSystemData[15].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[14].equationIndex = 1929;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0 /* false */;
  nonLinearSystemData[14].mixedSystem = 0 /* false */;
  nonLinearSystemData[14].residualFunc = residualFunc1929;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS1929;
  nonLinearSystemData[14].freeStaticNLSData = freeStaticDataNLS1929;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS1929;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  const int tmp_eqn_indices_14[1] = {1928};
  nonLinearSystemData[14].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[14].eqn_simcode_indices, tmp_eqn_indices_14, 1 * sizeof(int));
  nonLinearSystemData[14].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[13].equationIndex = 1831;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0 /* false */;
  nonLinearSystemData[13].mixedSystem = 0 /* false */;
  nonLinearSystemData[13].residualFunc = residualFunc1831;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = logic1_raw_functionJacNLSJac14_column;
  nonLinearSystemData[13].initialAnalyticalJacobian = logic1_raw_initialAnalyticJacobianNLSJac14;
  nonLinearSystemData[13].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS1831;
  nonLinearSystemData[13].freeStaticNLSData = freeStaticDataNLS1831;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS1831;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  const int tmp_eqn_indices_13[3] = {1824, 1825, 1826};
  nonLinearSystemData[13].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[13].eqn_simcode_indices, tmp_eqn_indices_13, 3 * sizeof(int));
  nonLinearSystemData[13].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[12].equationIndex = 1096;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 1 /* true */;
  nonLinearSystemData[12].mixedSystem = 0 /* false */;
  nonLinearSystemData[12].residualFunc = residualFunc1096;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS1096;
  nonLinearSystemData[12].freeStaticNLSData = freeStaticDataNLS1096;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS1096;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  const int tmp_eqn_indices_12[1] = {1095};
  nonLinearSystemData[12].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[12].eqn_simcode_indices, tmp_eqn_indices_12, 1 * sizeof(int));
  nonLinearSystemData[12].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[11].equationIndex = 993;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 1 /* true */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc993;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS993;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS993;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS993;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[1] = {992};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 1 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[10].equationIndex = 979;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 1 /* true */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc979;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS979;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS979;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS979;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[14] = {965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(14 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 14 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 14;
  
  
  nonLinearSystemData[9].equationIndex = 918;
  nonLinearSystemData[9].size = 3;
  nonLinearSystemData[9].homotopySupport = 1 /* true */;
  nonLinearSystemData[9].mixedSystem = 1 /* true */;
  nonLinearSystemData[9].residualFunc = residualFunc918;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS918;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS918;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS918;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[26] = {892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 917, 916, 915};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(26 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 26 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 26;
  
  
  nonLinearSystemData[8].equationIndex = 778;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 1 /* true */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc778;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS778;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS778;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS778;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[1] = {777};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 1 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[7].equationIndex = 617;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 1 /* true */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc617;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS617;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS617;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS617;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[14] = {603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(14 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 14 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 14;
  
  
  nonLinearSystemData[6].equationIndex = 592;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0 /* false */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc592;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS592;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS592;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS592;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[1] = {591};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 1 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[5].equationIndex = 518;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 1 /* true */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc518;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS518;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS518;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS518;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[1] = {517};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 1 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[4].equationIndex = 417;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1 /* true */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc417;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS417;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS417;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS417;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[1] = {416};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 1 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[3].equationIndex = 413;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 1 /* true */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc413;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS413;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS413;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS413;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[1] = {412};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 1 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[2].equationIndex = 390;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 1 /* true */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc390;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS390;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS390;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS390;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[1] = {389};
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
  
  
  nonLinearSystemData[0].equationIndex = 259;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc259;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = logic1_raw_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = logic1_raw_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS259;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS259;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS259;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[3] = {252, 253, 254};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 3 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 3;
}

#if defined(__cplusplus)
}
#endif
