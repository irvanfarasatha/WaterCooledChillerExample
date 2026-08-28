/* Non Linear Systems */
#include "logic3_raw_model.h"
#include "logic3_raw_12jac.h"
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
void logic3_raw_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 252;
}
/*
equation index: 253
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic3_raw_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_252(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_253(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
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
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
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
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc361(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,361};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc361: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 361).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc361 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1136]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1134]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 360;
  /* restore known outputs */
  threadData->lastEquationSolved = 361;
}
void initializeSparsePatternNLS361(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS361(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS361(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS361(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1132 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1132 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1132 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS361(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS361(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS361(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS361(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS361(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc397(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,397};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc397: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 397).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc397 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1279]] /* damOA.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* damOA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 396;
  /* restore known outputs */
  threadData->lastEquationSolved = 397;
}
void initializeSparsePatternNLS397(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS397(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS397(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS397(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 811 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 811 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 811 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS397(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS397(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS397(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS397(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS397(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc420(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,420};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc420: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 420).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc420 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* damEA.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* damEA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 419;
  /* restore known outputs */
  threadData->lastEquationSolved = 420;
}
void initializeSparsePatternNLS420(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS420(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS420(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS420(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 808 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 808 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 808 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS420(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS420(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS420(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS420(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS420(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc424(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,424};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc424: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 424).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc424 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* damRet.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1304]] /* damRet.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */)),55.989691542288554,"55.989691542288554",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 423;
  /* restore known outputs */
  threadData->lastEquationSolved = 424;
}
void initializeSparsePatternNLS424(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS424(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS424(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS424(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 815 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 815 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 815 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS424(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS424(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS424(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS424(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS424(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc524(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,524};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc524: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 524).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc524 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2753]] /* val6.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* val6.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2746]] /* val6.dp_nominal_pos PARAM */),"val6.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 523;
  /* restore known outputs */
  threadData->lastEquationSolved = 524;
}
void initializeSparsePatternNLS524(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS524(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS524(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS524(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1222 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS524(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS524(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS524(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS524(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS524(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */);
}


/* inner equations */

void residualFunc598(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,598};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc598: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 598).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc598 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 597;
  /* restore known outputs */
  threadData->lastEquationSolved = 598;
}
void initializeSparsePatternNLS598(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS598(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS598(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS598(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1049 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1049 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1049 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS598(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS598(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS598(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS598(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS598(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 609
type: SIMPLE_ASSIGN
cooTow.T_b = logic3.cooTow.Water.temperature(logic3.cooTow.Water.setState_phX(cooTow.vol.p, homotopy(if (-val5.m_flow) > 0.0 then TCWLeaTow.port_b.h_outflow else TCWEntTow.port_a.h_outflow, TCWEntTow.port_a.h_outflow), {}))
*/
void logic3_raw_eqFunction_609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,609};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cooTow.T_b variable */) = omc_logic3_cooTow_Water_temperature(threadData, omc_logic3_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), tmp1));
  threadData->lastEquationSolved = 609;
}
/*
equation index: 610
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(val5.m_flow, TCWEntTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic3_raw_eqFunction_610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 610;
}
/*
equation index: 611
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic3_raw_eqFunction_611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 611;
}
/*
equation index: 612
type: SIMPLE_ASSIGN
cooTow.T_a = logic3.cooTow.Water.temperature(logic3.cooTow.Water.setState_phX(TCWEntTow.port_a.p, homotopy(if val5.m_flow > 0.0 then TCWEntTow.port_b.h_outflow else TCWEntTow.port_a.h_outflow, TCWEntTow.port_b.h_outflow), {}))
*/
void logic3_raw_eqFunction_612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,612};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cooTow.T_a variable */) = omc_logic3_cooTow_Water_temperature(threadData, omc_logic3_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TCWEntTow.port_a.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */)), tmp1));
  threadData->lastEquationSolved = 612;
}
/*
equation index: 613
type: SIMPLE_ASSIGN
cooTow.TLvg = logic3.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {1.0})
*/
void logic3_raw_eqFunction_613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,613};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cooTow.TLvg variable */) = omc_logic3_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 613;
}
/*
equation index: 614
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void logic3_raw_eqFunction_614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 614;
}
/*
equation index: 615
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir < -0.01) then cooTow.FRAir else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) * ((12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) ^ 2.0 - 3.0) * (cooTow.FRAir - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTow.FRAir))
*/
void logic3_raw_eqFunction_615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,615};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 615;
}
/*
equation index: 616
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void logic3_raw_eqFunction_616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 616;
}
/*
equation index: 617
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void logic3_raw_eqFunction_617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 617;
}
/*
equation index: 618
type: SIMPLE_ASSIGN
cooTow.dTMax = cooTow.T_a - weaBus.TWetBul
*/
void logic3_raw_eqFunction_618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow.dTMax variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
  threadData->lastEquationSolved = 618;
}
/*
equation index: 619
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void logic3_raw_eqFunction_619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 619;
}
/*
equation index: 620
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic3_raw_eqFunction_620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cooTow.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 620;
}
/*
equation index: 621
type: SIMPLE_ASSIGN
cooTow.Q_flow = val5.m_flow * (logic3.cooTow.Medium.specificEnthalpy(logic3.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - TCWEntTow.port_b.h_outflow)
*/
void logic3_raw_eqFunction_621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,621};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cooTow.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)) * (omc_logic3_cooTow_Medium_specificEnthalpy(threadData, omc_logic3_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 621;
}

void residualFunc623(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,623};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc623: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 623).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc623 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_609(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_610(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_611(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_612(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_613(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_614(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_615(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_616(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_617(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_618(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_619(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_620(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_621(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 622;
  /* restore known outputs */
  threadData->lastEquationSolved = 623;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS623(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS623(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS623(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS623(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 312 /* TCWEntTow.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 312 /* TCWEntTow.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 312 /* TCWEntTow.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS623(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS623(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS623(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS623(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS623(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc784(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,784};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc784: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 784).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc784 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */), 2.0485556863967758, 5.598969154228856), (13.34174165677975) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 783;
  /* restore known outputs */
  threadData->lastEquationSolved = 784;
}
void initializeSparsePatternNLS784(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS784(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS784(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS784(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 698 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 698 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 698 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS784(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS784(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS784(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS784(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS784(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */);
}


/* inner equations */

/*
equation index: 898
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic3_raw_eqFunction_898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 898;
}
/*
equation index: 899
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic3_raw_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 899;
}
/*
equation index: 900
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic3_raw_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 900;
}
/*
equation index: 901
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic3_raw_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 901;
}
/*
equation index: 902
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic3_raw_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 902;
}
/*
equation index: 903
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic3_raw_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 903;
}
/*
equation index: 904
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic3_raw_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 904;
}
/*
equation index: 905
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic3_raw_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 905;
}
/*
equation index: 906
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic3_raw_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 906;
}
/*
equation index: 907
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic3_raw_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 907;
}
/*
equation index: 908
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * max(0.0, max(roomDemandSignal.y, 0.0) - max(cooCoi.Q1_flow, 0.0)) / chillerStagingCtrl.kWPerTR
*/
void logic3_raw_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM(fmax(0.0,fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* roomDemandSignal.y variable */),0.0) - fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.Q1_flow variable */),0.0)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 908;
}
/*
equation index: 909
type: ALGORITHM

  chillerStagingCtrl.stage2On := $START.chillerStagingCtrl.stage2On;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
*/
void logic3_raw_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->modelData->booleanVarsData[7] /* chillerStagingCtrl.stage2On DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = 0 /* false */;

  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
  tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
  tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
  threadData->lastEquationSolved = 909;
}
/*
equation index: 910
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic3_raw_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 910;
}
/*
equation index: 911
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then combinedCtrl2.flowCmd else 0.0
*/
void logic3_raw_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* combinedCtrl2.flowCmd STATE(1) */):0.0);
  threadData->lastEquationSolved = 911;
}
/*
equation index: 912
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic3_raw_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 912;
}
/*
equation index: 913
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic3_raw_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 913;
}
/*
equation index: 914
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, cooCoi.ele[1].preDro1.k, cooCoi.ele[1].preDro1.m_flow_turbulent), 90580.0 * cooCoi.m1_flow / cooCoi.ele[1].preDro1.m_flow_nominal_pos)
*/
void logic3_raw_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[1].preDro1.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[1].preDro1.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */)), DIVISION_SIM((90580.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),"cooCoi.ele[1].preDro1.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 914;
}
/*
equation index: 915
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic3_raw_eqFunction_915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 915;
}
/*
equation index: 916
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic3_raw_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 916;
}
/*
equation index: 917
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic3_raw_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 917;
}
/*
equation index: 918
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic3_raw_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 918;
}
/*
equation index: 919
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void logic3_raw_eqFunction_919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 919;
}
/*
equation index: 920
type: SIMPLE_ASSIGN
val1.dp = expVesCHW.p_start - junCHWRet.vol.p
*/
void logic3_raw_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */);
  threadData->lastEquationSolved = 920;
}

void residualFunc924(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,924};
  int i,j;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc924: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 924).vars[i]);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc924 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */) = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_898(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_899(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_900(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_901(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_902(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_903(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_904(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_905(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_906(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_907(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_908(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_909(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_910(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_911(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_912(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_913(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_914(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_915(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_916(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_917(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_918(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_919(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_920(data, threadData);
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2847]] /* valByp.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* valByp.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 923;
  res[1] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* val1.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* val1.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.dp_nominal_pos PARAM */),"val1.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val1.m_flow variable */);
  threadData->lastEquationSolved = 922;
  res[2] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* cooCoi.hA.n_w PARAM */), 0.1)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 921;
  /* restore known outputs */
  threadData->lastEquationSolved = 924;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS924(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS924(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS924(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS924(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for junCHWRet.vol.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 918 /* junCHWRet.vol.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 918 /* junCHWRet.vol.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 918 /* junCHWRet.vol.p */);
  /* static nls data for cooCoi.m1_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 697 /* cooCoi.m1_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 697 /* cooCoi.m1_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 697 /* cooCoi.m1_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS924(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS924(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS924(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS924(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS924(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

/*
equation index: 971
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(val7.m_flow, TCWEntTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic3_raw_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 971;
}
/*
equation index: 972
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, TWCLeaTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic3_raw_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 972;
}
/*
equation index: 973
type: SIMPLE_ASSIGN
cooTow2.T_a = logic3.cooTow2.Water.temperature(logic3.cooTow2.Water.setState_phX(TCWEntTow2.port_a.p, homotopy(if val7.m_flow > 0.0 then TCWEntTow2.port_b.h_outflow else TCWEntTow2.port_a.h_outflow, TCWEntTow2.port_b.h_outflow), {}))
*/
void logic3_raw_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.T_a variable */) = omc_logic3_cooTow2_Water_temperature(threadData, omc_logic3_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* TCWEntTow2.port_a.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */)), tmp1));
  threadData->lastEquationSolved = 973;
}
/*
equation index: 974
type: SIMPLE_ASSIGN
cooTow2.T_b = logic3.cooTow2.Water.temperature(logic3.cooTow2.Water.setState_phX(cooTow2.vol.p, homotopy(if (-val7.m_flow) > 0.0 then TWCLeaTow2.port_b.h_outflow else TCWEntTow2.port_a.h_outflow, TCWEntTow2.port_a.h_outflow), {}))
*/
void logic3_raw_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  modelica_boolean tmp0;
  base_array_t tmp1;
  tmp0 = Greater((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)),0.0);
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cooTow2.T_b variable */) = omc_logic3_cooTow2_Water_temperature(threadData, omc_logic3_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), homotopy((tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* TWCLeaTow2.port_b.h_outflow variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */)), tmp1));
  threadData->lastEquationSolved = 974;
}
/*
equation index: 975
type: SIMPLE_ASSIGN
cooTow2.TLvg = logic3.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {1.0})
*/
void logic3_raw_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.TLvg variable */) = omc_logic3_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 975;
}
/*
equation index: 976
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void logic3_raw_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 976;
}
/*
equation index: 977
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void logic3_raw_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 977;
}
/*
equation index: 978
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void logic3_raw_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 978;
}
/*
equation index: 979
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir < -0.01) then cooTow2.FRAir else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) * ((12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) ^ 2.0 - 3.0) * (cooTow2.FRAir - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTow2.FRAir))
*/
void logic3_raw_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 979;
}
/*
equation index: 980
type: SIMPLE_ASSIGN
cooTow2.dTMax = cooTow2.T_a - weaBus.TWetBul
*/
void logic3_raw_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.dTMax variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
  threadData->lastEquationSolved = 980;
}
/*
equation index: 981
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void logic3_raw_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 981;
}
/*
equation index: 982
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic3_raw_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 982;
}
/*
equation index: 983
type: SIMPLE_ASSIGN
cooTow2.Q_flow = val7.m_flow * (logic3.cooTow2.Medium.specificEnthalpy(logic3.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - TCWEntTow2.port_b.h_outflow)
*/
void logic3_raw_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)) * (omc_logic3_cooTow2_Medium_specificEnthalpy(threadData, omc_logic3_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 983;
}

void residualFunc985(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,985};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc985: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 985).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc985 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_971(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_972(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_973(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_974(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_975(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_976(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_977(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_978(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_979(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_980(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_981(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_982(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_983(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 984;
  /* restore known outputs */
  threadData->lastEquationSolved = 985;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS985(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS985(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS985(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS985(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow2.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 320 /* TCWEntTow2.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 320 /* TCWEntTow2.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 320 /* TCWEntTow2.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS985(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS985(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS985(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS985(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS985(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc999(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,999};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc999: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 999).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc999 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* val8_2.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* val8_2.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.dp_nominal_pos PARAM */),"val8_2.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 998;
  /* restore known outputs */
  threadData->lastEquationSolved = 999;
}
void initializeSparsePatternNLS999(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS999(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS999(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS999(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1238 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1238 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1238 /* val8_2.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS999(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS999(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS999(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS999(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS999(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */);
}


/* inner equations */

void residualFunc1102(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1102};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1102: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1102).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1102 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2799]] /* val8.m_flow_turbulent PARAM */)), DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* val8.m_flow_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* val8.dp_nominal_pos PARAM */),"val8.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 1101;
  /* restore known outputs */
  threadData->lastEquationSolved = 1102;
}
void initializeSparsePatternNLS1102(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1102(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1102(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1102(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1232 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1102(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1102(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1102(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1102(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1102(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */);
}


/* inner equations */

/*
equation index: 1830
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void logic3_raw_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 1830;
}
/*
equation index: 1831
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic3_raw_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 1831;
}

void residualFunc1837(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1837};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1837: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1837).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1837 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_1830(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_1831(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 1832;
  /* restore known outputs */
  threadData->lastEquationSolved = 1837;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1837(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS1837(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1837(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS1837(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1837(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1837(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1837(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1837(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1837(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc1943(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1943};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1943: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1943).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1943 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1136]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1134]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1942;
  /* restore known outputs */
  threadData->lastEquationSolved = 1943;
}
void initializeSparsePatternNLS1943(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1943(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1943(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1943(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1132 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1132 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1132 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1943(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1943(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1943(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1943(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1943(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc2169(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2169};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2169: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2169).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2169 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1053]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1051]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1052]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 2168;
  /* restore known outputs */
  threadData->lastEquationSolved = 2169;
}
void initializeSparsePatternNLS2169(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS2169(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS2169(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2169(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1049 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1049 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1049 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2169(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2169(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2169(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2169(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2169(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1049]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 2180
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(val5.m_flow, TCWEntTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic3_raw_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2180;
}
/*
equation index: 2181
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-val5.m_flow, TCWLeaTow.port_b.h_outflow, TCWEntTow.port_a.h_outflow)
*/
void logic3_raw_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2181;
}
/*
equation index: 2182
type: SIMPLE_ASSIGN
cooTow.T_b = logic3.cooTow.Water.temperature(logic3.cooTow.Water.setState_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {}))
*/
void logic3_raw_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2182};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cooTow.T_b variable */) = omc_logic3_cooTow_Water_temperature(threadData, omc_logic3_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 2182;
}
/*
equation index: 2183
type: SIMPLE_ASSIGN
cooTow.TLvg = logic3.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, TCWEntTow.port_a.h_outflow, {1.0})
*/
void logic3_raw_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2183};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cooTow.TLvg variable */) = omc_logic3_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 2183;
}
/*
equation index: 2184
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void logic3_raw_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 2184;
}
/*
equation index: 2185
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void logic3_raw_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 2185;
}
/*
equation index: 2186
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void logic3_raw_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 2186;
}
/*
equation index: 2187
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTow.FRAir < -0.01) then cooTow.FRAir else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) * ((12.5 * cooTow.FRWat - 100.0 * cooTow.FRAir) ^ 2.0 - 3.0) * (cooTow.FRAir - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTow.FRAir))
*/
void logic3_raw_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 2187;
}
/*
equation index: 2188
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void logic3_raw_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1077]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 2188;
}
/*
equation index: 2189
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTow.FRAir - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void logic3_raw_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cooTow.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1131]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 2189;
}
/*
equation index: 2190
type: SIMPLE_ASSIGN
cooTow.Q_flow = val5.m_flow * (logic3.cooTow.Medium.specificEnthalpy(logic3.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - TCWEntTow.port_b.h_outflow)
*/
void logic3_raw_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2190};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cooTow.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* val5.m_flow variable */)) * (omc_logic3_cooTow_Medium_specificEnthalpy(threadData, omc_logic3_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* TCWEntTow.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 2190;
}

void residualFunc2192(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2192};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2192: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2192).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2192 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_2180(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2181(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2182(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2183(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2184(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2185(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2186(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2187(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2188(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2189(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2190(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1099]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1098]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 2191;
  /* restore known outputs */
  threadData->lastEquationSolved = 2192;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2192(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2192(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2192(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2192(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 312 /* TCWEntTow.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 312 /* TCWEntTow.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 312 /* TCWEntTow.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2192(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2192(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2192(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2192(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2192(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* TCWEntTow.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 2466
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic3_raw_eqFunction_2466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 2466;
}
/*
equation index: 2467
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic3_raw_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 2467;
}
/*
equation index: 2468
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic3_raw_eqFunction_2468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 2468;
}
/*
equation index: 2469
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic3_raw_eqFunction_2469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 2469;
}
/*
equation index: 2470
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic3_raw_eqFunction_2470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 2470;
}
/*
equation index: 2471
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic3_raw_eqFunction_2471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 2471;
}
/*
equation index: 2472
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic3_raw_eqFunction_2472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 2472;
}
/*
equation index: 2473
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic3_raw_eqFunction_2473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 2473;
}
/*
equation index: 2474
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic3_raw_eqFunction_2474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 2474;
}
/*
equation index: 2475
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic3_raw_eqFunction_2475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 2475;
}
/*
equation index: 2476
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * max(0.0, max(roomDemandSignal.y, 0.0) - max(cooCoi.Q1_flow, 0.0)) / chillerStagingCtrl.kWPerTR
*/
void logic3_raw_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM(fmax(0.0,fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* roomDemandSignal.y variable */),0.0) - fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.Q1_flow variable */),0.0)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 2476;
}
/*
equation index: 2477
type: ALGORITHM

  chillerStagingCtrl.stage2On := $START.chillerStagingCtrl.stage2On;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  chillerStagingCtrl.stage2On := chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OnThreshold_TR or chillerStagingCtrl.roomHeatGain_TR > chillerStagingCtrl.stage2OffThreshold_TR and chillerStagingCtrl.coolingShortfall_TR > chillerStagingCtrl.stage2OnShortfall_TR;
*/
void logic3_raw_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2477};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (data->modelData->booleanVarsData[7] /* chillerStagingCtrl.stage2On DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = (data->modelData->booleanVarsData[2] /* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = 0 /* false */;

  tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
  tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
  tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
  threadData->lastEquationSolved = 2477;
}
/*
equation index: 2478
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic3_raw_eqFunction_2478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2478};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 2478;
}
/*
equation index: 2479
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then combinedCtrl2.flowCmd else 0.0
*/
void logic3_raw_eqFunction_2479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* combinedCtrl2.flowCmd STATE(1) */):0.0);
  threadData->lastEquationSolved = 2479;
}
/*
equation index: 2480
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic3_raw_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 2480;
}
/*
equation index: 2481
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic3_raw_eqFunction_2481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 2481;
}
/*
equation index: 2482
type: SIMPLE_ASSIGN
valByp.dp = valByp.m_flow * valByp.dp_nominal_pos / valByp.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2840]] /* valByp.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2845]] /* valByp.m_flow_nominal_pos PARAM */),"valByp.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2482;
}
/*
equation index: 2483
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void logic3_raw_eqFunction_2483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 2483;
}
/*
equation index: 2484
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic3_raw_eqFunction_2484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 2484;
}
/*
equation index: 2485
type: SIMPLE_ASSIGN
val1.dp = val1.m_flow * val1.dp_nominal_pos / val1.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val1.m_flow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2700]] /* val1.dp_nominal_pos PARAM */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2705]] /* val1.m_flow_nominal_pos PARAM */),"val1.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2485;
}
/*
equation index: 2486
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = 90580.0 * cooCoi.m1_flow / cooCoi.ele[1].preDro1.m_flow_nominal_pos
*/
void logic3_raw_eqFunction_2486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[1].preDro1.dp variable */) = DIVISION_SIM((90580.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[1].preDro1.m_flow_nominal_pos PARAM */),"cooCoi.ele[1].preDro1.m_flow_nominal_pos",equationIndexes);
  threadData->lastEquationSolved = 2486;
}
/*
equation index: 2487
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void logic3_raw_eqFunction_2487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */);
  threadData->lastEquationSolved = 2487;
}
/*
equation index: 2488
type: SIMPLE_ASSIGN
junCHWSup.vol.p = junCHWRet.vol.p - valByp.dp
*/
void logic3_raw_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 2488;
}
/*
equation index: 2489
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic3_raw_eqFunction_2489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 2489;
}

void residualFunc2492(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2492};
  int i,j;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2492: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2492).vars[i]);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2492 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_2466(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2467(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2468(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2469(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2470(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2471(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2472(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2473(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2474(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2475(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2476(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2477(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2478(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2479(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2480(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2481(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2482(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2483(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2484(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2485(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2486(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2487(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2488(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2489(data, threadData);
  /* body */
  res[0] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.hA.hA_nominal_w PARAM */)) * (omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* cooCoi.hA.n_w PARAM */), 0.1)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 2491;
  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 2490;
  /* restore known outputs */
  threadData->lastEquationSolved = 2492;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2492(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2492(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2492(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2492(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for valByp.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1247 /* valByp.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1247 /* valByp.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1247 /* valByp.m_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2492(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2492(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2492(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2492(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2492(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

/*
equation index: 2537
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-val7.m_flow, TWCLeaTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic3_raw_eqFunction_2537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2537;
}
/*
equation index: 2538
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(val7.m_flow, TCWEntTow2.port_b.h_outflow, TCWEntTow2.port_a.h_outflow)
*/
void logic3_raw_eqFunction_2538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 2538;
}
/*
equation index: 2539
type: SIMPLE_ASSIGN
cooTow2.T_b = logic3.cooTow2.Water.temperature(logic3.cooTow2.Water.setState_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {}))
*/
void logic3_raw_eqFunction_2539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2539};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cooTow2.T_b variable */) = omc_logic3_cooTow2_Water_temperature(threadData, omc_logic3_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 2539;
}
/*
equation index: 2540
type: SIMPLE_ASSIGN
cooTow2.TLvg = logic3.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, TCWEntTow2.port_a.h_outflow, {1.0})
*/
void logic3_raw_eqFunction_2540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2540};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.TLvg variable */) = omc_logic3_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 2540;
}
/*
equation index: 2541
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void logic3_raw_eqFunction_2541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 2541;
}
/*
equation index: 2542
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void logic3_raw_eqFunction_2542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 2542;
}
/*
equation index: 2543
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void logic3_raw_eqFunction_2543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 2543;
}
/*
equation index: 2544
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTow2.FRAir < -0.01) then cooTow2.FRAir else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) * ((12.5 * cooTow2.FRWat - 100.0 * cooTow2.FRAir) ^ 2.0 - 3.0) * (cooTow2.FRAir - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTow2.FRAir))
*/
void logic3_raw_eqFunction_2544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2544};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */)) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 2544;
}
/*
equation index: 2545
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void logic3_raw_eqFunction_2545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1160]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 2545;
}
/*
equation index: 2546
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTow2.FRAir - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void logic3_raw_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[773]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.TAppFreCon variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.FRAir variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 2546;
}
/*
equation index: 2547
type: SIMPLE_ASSIGN
cooTow2.Q_flow = val7.m_flow * (logic3.cooTow2.Medium.specificEnthalpy(logic3.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - TCWEntTow2.port_b.h_outflow)
*/
void logic3_raw_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2547};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* val7.m_flow variable */)) * (omc_logic3_cooTow2_Medium_specificEnthalpy(threadData, omc_logic3_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[772]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* TCWEntTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 2547;
}

void residualFunc2549(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2549};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2549: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2549).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2549 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_2537(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2538(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2539(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2540(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2541(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2542(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2543(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2544(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2545(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2546(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_2547(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 2548;
  /* restore known outputs */
  threadData->lastEquationSolved = 2549;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2549(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2549(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS2549(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS2549(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for TCWEntTow2.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 320 /* TCWEntTow2.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 320 /* TCWEntTow2.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 320 /* TCWEntTow2.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2549(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2549(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2549(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2549(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2549(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 3101
type: SIMPLE_ASSIGN
$cse46 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic3_raw_eqFunction_3101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $cse46 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 3101;
}
/*
equation index: 3102
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46)
*/
void logic3_raw_eqFunction_3102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $cse46 variable */))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46",equationIndexes);
  threadData->lastEquationSolved = 3102;
}
/*
equation index: 3103
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void logic3_raw_eqFunction_3103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 3103;
}

void residualFunc3110(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3110};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3110: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3110).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3110 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_3101(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3102(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3103(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 3104;
  /* restore known outputs */
  threadData->lastEquationSolved = 3110;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3110(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3110(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS3110(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS3110(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1281 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3110(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3110(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3110(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3110(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3110(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc3187(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3187};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3187: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3187).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3187 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2753]] /* val6.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 3186;
  /* restore known outputs */
  threadData->lastEquationSolved = 3187;
}
void initializeSparsePatternNLS3187(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3187(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3187(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3187(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1222 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1222 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3187(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3187(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3187(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3187(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3187(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 3230
type: SIMPLE_ASSIGN
cooCoi.ele[1].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[1].con1.dT
*/
void logic3_raw_eqFunction_3230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[496]] /* cooCoi.ele[1].con1.dT variable */));
  threadData->lastEquationSolved = 3230;
}
/*
equation index: 3231
type: SIMPLE_ASSIGN
cooCoi.ele[2].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[2].con1.dT
*/
void logic3_raw_eqFunction_3231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[497]] /* cooCoi.ele[2].con1.dT variable */));
  threadData->lastEquationSolved = 3231;
}
/*
equation index: 3232
type: SIMPLE_ASSIGN
cooCoi.ele[3].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[3].con1.dT
*/
void logic3_raw_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[498]] /* cooCoi.ele[3].con1.dT variable */));
  threadData->lastEquationSolved = 3232;
}
/*
equation index: 3233
type: SIMPLE_ASSIGN
cooCoi.ele[4].con1.Q_flow = cooCoi.rep1.y[4] * cooCoi.ele[4].con1.dT
*/
void logic3_raw_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* cooCoi.ele[4].con1.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* cooCoi.ele[4].con1.dT variable */));
  threadData->lastEquationSolved = 3233;
}
/*
equation index: 3234
type: SIMPLE_ASSIGN
cooCoi.hA.hA_1 = cooCoi.rep1.y[4] / cooCoi.gai_1.k
*/
void logic3_raw_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.hA.hA_1 variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1000]] /* cooCoi.gai_1.k PARAM */),"cooCoi.gai_1.k",equationIndexes);
  threadData->lastEquationSolved = 3234;
}
/*
equation index: 3235
type: SIMPLE_ASSIGN
cooCoi.ele[1].Q1_flow = cooCoi.ele[1].con1.Q_flow - cooCoi.theCon1[1].Q_flow
*/
void logic3_raw_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* cooCoi.ele[1].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* cooCoi.ele[1].con1.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* cooCoi.theCon1[1].Q_flow variable */);
  threadData->lastEquationSolved = 3235;
}
/*
equation index: 3236
type: SIMPLE_ASSIGN
cooCoi.ele[2].Q1_flow = cooCoi.ele[2].con1.Q_flow + cooCoi.ele[2].heaPor1.Q_flow
*/
void logic3_raw_eqFunction_3236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* cooCoi.ele[2].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* cooCoi.ele[2].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[2].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 3236;
}
/*
equation index: 3237
type: SIMPLE_ASSIGN
cooCoi.ele[3].Q1_flow = cooCoi.ele[3].con1.Q_flow + cooCoi.ele[3].heaPor1.Q_flow
*/
void logic3_raw_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[3].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* cooCoi.ele[3].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* cooCoi.ele[3].heaPor1.Q_flow variable */);
  threadData->lastEquationSolved = 3237;
}
/*
equation index: 3238
type: SIMPLE_ASSIGN
cooCoi.ele[4].Q1_flow = cooCoi.ele[4].con1.Q_flow + cooCoi.theCon1[3].Q_flow
*/
void logic3_raw_eqFunction_3238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[4].Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* cooCoi.ele[4].con1.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooCoi.theCon1[3].Q_flow variable */);
  threadData->lastEquationSolved = 3238;
}
/*
equation index: 3239
type: SIMPLE_ASSIGN
cooCoi.Q1_flow = cooCoi.ele[1].Q1_flow + cooCoi.ele[2].Q1_flow + cooCoi.ele[3].Q1_flow + cooCoi.ele[4].Q1_flow
*/
void logic3_raw_eqFunction_3239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.Q1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* cooCoi.ele[1].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* cooCoi.ele[2].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* cooCoi.ele[3].Q1_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* cooCoi.ele[4].Q1_flow variable */);
  threadData->lastEquationSolved = 3239;
}
/*
equation index: 3240
type: SIMPLE_ASSIGN
$cse67 = max(cooCoi.Q1_flow, 0.0)
*/
void logic3_raw_eqFunction_3240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* $cse67 variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* cooCoi.Q1_flow variable */),0.0);
  threadData->lastEquationSolved = 3240;
}
/*
equation index: 3241
type: SIMPLE_ASSIGN
$cse66 = max(0.0, $cse65 - $cse67)
*/
void logic3_raw_eqFunction_3241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* $cse66 variable */) = fmax(0.0,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* $cse65 variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* $cse67 variable */));
  threadData->lastEquationSolved = 3241;
}
/*
equation index: 3242
type: SIMPLE_ASSIGN
chillerStagingCtrl.coolingShortfall_TR = 0.001 * $cse66 / chillerStagingCtrl.kWPerTR
*/
void logic3_raw_eqFunction_3242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */) = (0.001) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* $cse66 variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 3242;
}
/*
equation index: 3243
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
void logic3_raw_eqFunction_3243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3243};
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
      tmp0 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
      tmp1 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
      tmp2 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp0 || (tmp1 && tmp2));
    }
    else if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
    {
      tmp3 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */));
      if(tmp3)
      {
        (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = 0 /* false */;
      }
      else
      {
        if((data->simulationInfo->booleanVarsPre[7] /* chillerStagingCtrl.stage2On DISCRETE */))
        {
          tmp4 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
          tmp5 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffShortfall_TR PARAM */));
          (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (!(tmp4 && tmp5));
        }
        else
        {
          tmp6 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */));
          tmp7 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[450]] /* chillerStagingCtrl.roomHeatGain_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */));
          tmp8 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* chillerStagingCtrl.coolingShortfall_TR variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnShortfall_TR PARAM */));
          (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */) = (tmp6 || (tmp7 && tmp8));
        }
      }
    }
  }
  threadData->lastEquationSolved = 3243;
}
/*
equation index: 3244
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2On = chillerStagingCtrl.chiller1On and chillerStagingCtrl.stage2On
*/
void logic3_raw_eqFunction_3244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3244};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* chillerStagingCtrl.chiller1On DISCRETE */) && (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* chillerStagingCtrl.stage2On DISCRETE */));
  threadData->lastEquationSolved = 3244;
}
/*
equation index: 3245
type: SIMPLE_ASSIGN
val8.m_flow = if chillerStagingCtrl.chiller2On then combinedCtrl2.flowCmd else 0.0
*/
void logic3_raw_eqFunction_3245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* chillerStagingCtrl.chiller2On DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* combinedCtrl2.flowCmd STATE(1) */):0.0);
  threadData->lastEquationSolved = 3245;
}
/*
equation index: 3246
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = (-chi.m2_flow) - val8.m_flow
*/
void logic3_raw_eqFunction_3246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3246;
}
/*
equation index: 3247
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val8.m_flow + chi.m2_flow
*/
void logic3_raw_eqFunction_3247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* chi.m2_flow variable */);
  threadData->lastEquationSolved = 3247;
}
/*
equation index: 3248
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, cooCoi.ele[1].preDro1.k, cooCoi.ele[1].preDro1.m_flow_turbulent)
*/
void logic3_raw_eqFunction_3248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[1].preDro1.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* cooCoi.ele[1].preDro1.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[620]] /* cooCoi.ele[1].preDro1.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 3248;
}
/*
equation index: 3249
type: SIMPLE_ASSIGN
valByp.m_flow = junCHWSup.res2.m_flow + cooCoi.m1_flow
*/
void logic3_raw_eqFunction_3249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.res2.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */);
  threadData->lastEquationSolved = 3249;
}
/*
equation index: 3250
type: SIMPLE_ASSIGN
val1.m_flow = junCHWRet.res1.m_flow + valByp.m_flow
*/
void logic3_raw_eqFunction_3250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.res1.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 3250;
}
/*
equation index: 3251
type: SIMPLE_ASSIGN
cooCoi.hA.fm_w = cooCoi.m1_flow / cooCoi.hA.m_flow_nominal_w
*/
void logic3_raw_eqFunction_3251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.hA.fm_w variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1008]] /* cooCoi.hA.m_flow_nominal_w PARAM */),"cooCoi.hA.m_flow_nominal_w",equationIndexes);
  threadData->lastEquationSolved = 3251;
}
/*
equation index: 3252
type: SIMPLE_ASSIGN
$cse5 = Buildings.Utilities.Math.Functions.regNonZeroPower(cooCoi.hA.fm_w, cooCoi.hA.n_w, 0.1)
*/
void logic3_raw_eqFunction_3252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* $cse5 variable */) = omc_Buildings_Utilities_Math_Functions_regNonZeroPower(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.hA.fm_w variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1010]] /* cooCoi.hA.n_w PARAM */), 0.1);
  threadData->lastEquationSolved = 3252;
}
/*
equation index: 3253
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void logic3_raw_eqFunction_3253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 3253;
}
/*
equation index: 3254
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void logic3_raw_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 3254;
}
/*
equation index: 3255
type: SIMPLE_ASSIGN
val1.dp = expVesCHW.p_start - junCHWRet.vol.p
*/
void logic3_raw_eqFunction_3255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1334]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */);
  threadData->lastEquationSolved = 3255;
}

void residualFunc3259(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3259};
  int i,j;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3259: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3259).vars[i]);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3259 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */) = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  logic3_raw_eqFunction_3230(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3231(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3232(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3233(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3234(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3235(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3236(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3237(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3238(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3239(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3240(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3241(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3242(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3243(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3244(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3245(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3246(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3247(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3248(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3249(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3250(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3251(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3252(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3253(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3254(data, threadData);
  /* local constraints */
  logic3_raw_eqFunction_3255(data, threadData);
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2847]] /* valByp.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 3258;
  res[1] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2707]] /* val1.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* val1.m_flow variable */);
  threadData->lastEquationSolved = 3257;
  res[2] = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooCoi.hA.hA_nominal_w PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* $cse5 variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.hA.hA_1 variable */);
  threadData->lastEquationSolved = 3256;
  /* restore known outputs */
  threadData->lastEquationSolved = 3259;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3259(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3259(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3259(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3259(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for junCHWRet.vol.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 918 /* junCHWRet.vol.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 918 /* junCHWRet.vol.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 918 /* junCHWRet.vol.p */);
  /* static nls data for cooCoi.m1_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 697 /* cooCoi.m1_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 697 /* cooCoi.m1_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 697 /* cooCoi.m1_flow */);
  /* static nls data for cooCoi.rep1.y[4] */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 702 /* cooCoi.rep1.y[4] */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3259(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3259(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3259(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3259(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3259(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet.vol.p variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.m1_flow variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* cooCoi.rep1.y[4] variable */);
}


/* inner equations */

void residualFunc3358(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3358};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3358: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3358).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3358 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2799]] /* val8.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3357;
  /* restore known outputs */
  threadData->lastEquationSolved = 3358;
}
void initializeSparsePatternNLS3358(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3358(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3358(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3358(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1232 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1232 /* val8.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3358(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3358(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3358(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3358(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3358(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8.dp variable */);
}


/* inner equations */

void residualFunc3369(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3369};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3369: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3369).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3369 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* val8_2.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 3368;
  /* restore known outputs */
  threadData->lastEquationSolved = 3369;
}
void initializeSparsePatternNLS3369(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3369(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3369(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3369(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1238 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1238 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1238 /* val8_2.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3369(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3369(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3369(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3369(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3369(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* val8_2.dp variable */);
}


/* inner equations */

void residualFunc3417(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3417};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3417: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3417).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3417 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* damEA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 3416;
  /* restore known outputs */
  threadData->lastEquationSolved = 3417;
}
void initializeSparsePatternNLS3417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3417(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 808 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 808 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 808 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3417(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3417(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3417(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3417(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3417(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc3447(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3447};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3447: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3447).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3447 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1279]] /* damOA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 3446;
  /* restore known outputs */
  threadData->lastEquationSolved = 3447;
}
void initializeSparsePatternNLS3447(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3447(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3447(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3447(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 811 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 811 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 811 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3447(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3447(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3447(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3447(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3447(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc3452(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3452};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3452: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3452).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3452 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1315]] /* damRet.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 3451;
  /* restore known outputs */
  threadData->lastEquationSolved = 3452;
}
void initializeSparsePatternNLS3452(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3452(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3452(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3452(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 815 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 815 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 815 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3452(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3452(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3452(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3452(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3452(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc3798(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3798};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3798: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3798).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3798 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */), 2.0485556863967758, 5.598969154228856) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 3797;
  /* restore known outputs */
  threadData->lastEquationSolved = 3798;
}
void initializeSparsePatternNLS3798(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3798(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3798(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3798(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 698 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 698 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 698 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3798(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3798(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3798(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3798(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3798(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* cooCoi.m2_flow variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void logic3_raw_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[27].equationIndex = 3798;
  nonLinearSystemData[27].size = 1;
  nonLinearSystemData[27].homotopySupport = 0 /* false */;
  nonLinearSystemData[27].mixedSystem = 0 /* false */;
  nonLinearSystemData[27].residualFunc = residualFunc3798;
  nonLinearSystemData[27].strictTearingFunctionCall = NULL;
  nonLinearSystemData[27].analyticalJacobianColumn = NULL;
  nonLinearSystemData[27].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[27].jacobianIndex = -1;
  nonLinearSystemData[27].initializeStaticNLSData = initializeStaticDataNLS3798;
  nonLinearSystemData[27].freeStaticNLSData = freeStaticDataNLS3798;
  nonLinearSystemData[27].getIterationVars = getIterationVarsNLS3798;
  nonLinearSystemData[27].checkConstraints = NULL;
  
  const int tmp_eqn_indices_27[1] = {3797};
  nonLinearSystemData[27].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[27].eqn_simcode_indices, tmp_eqn_indices_27, 1 * sizeof(int));
  nonLinearSystemData[27].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[26].equationIndex = 3452;
  nonLinearSystemData[26].size = 1;
  nonLinearSystemData[26].homotopySupport = 0 /* false */;
  nonLinearSystemData[26].mixedSystem = 0 /* false */;
  nonLinearSystemData[26].residualFunc = residualFunc3452;
  nonLinearSystemData[26].strictTearingFunctionCall = NULL;
  nonLinearSystemData[26].analyticalJacobianColumn = NULL;
  nonLinearSystemData[26].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[26].jacobianIndex = -1;
  nonLinearSystemData[26].initializeStaticNLSData = initializeStaticDataNLS3452;
  nonLinearSystemData[26].freeStaticNLSData = freeStaticDataNLS3452;
  nonLinearSystemData[26].getIterationVars = getIterationVarsNLS3452;
  nonLinearSystemData[26].checkConstraints = NULL;
  
  const int tmp_eqn_indices_26[1] = {3451};
  nonLinearSystemData[26].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[26].eqn_simcode_indices, tmp_eqn_indices_26, 1 * sizeof(int));
  nonLinearSystemData[26].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[25].equationIndex = 3447;
  nonLinearSystemData[25].size = 1;
  nonLinearSystemData[25].homotopySupport = 0 /* false */;
  nonLinearSystemData[25].mixedSystem = 0 /* false */;
  nonLinearSystemData[25].residualFunc = residualFunc3447;
  nonLinearSystemData[25].strictTearingFunctionCall = NULL;
  nonLinearSystemData[25].analyticalJacobianColumn = NULL;
  nonLinearSystemData[25].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[25].jacobianIndex = -1;
  nonLinearSystemData[25].initializeStaticNLSData = initializeStaticDataNLS3447;
  nonLinearSystemData[25].freeStaticNLSData = freeStaticDataNLS3447;
  nonLinearSystemData[25].getIterationVars = getIterationVarsNLS3447;
  nonLinearSystemData[25].checkConstraints = NULL;
  
  const int tmp_eqn_indices_25[1] = {3446};
  nonLinearSystemData[25].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[25].eqn_simcode_indices, tmp_eqn_indices_25, 1 * sizeof(int));
  nonLinearSystemData[25].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[24].equationIndex = 3417;
  nonLinearSystemData[24].size = 1;
  nonLinearSystemData[24].homotopySupport = 0 /* false */;
  nonLinearSystemData[24].mixedSystem = 0 /* false */;
  nonLinearSystemData[24].residualFunc = residualFunc3417;
  nonLinearSystemData[24].strictTearingFunctionCall = NULL;
  nonLinearSystemData[24].analyticalJacobianColumn = NULL;
  nonLinearSystemData[24].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[24].jacobianIndex = -1;
  nonLinearSystemData[24].initializeStaticNLSData = initializeStaticDataNLS3417;
  nonLinearSystemData[24].freeStaticNLSData = freeStaticDataNLS3417;
  nonLinearSystemData[24].getIterationVars = getIterationVarsNLS3417;
  nonLinearSystemData[24].checkConstraints = NULL;
  
  const int tmp_eqn_indices_24[1] = {3416};
  nonLinearSystemData[24].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[24].eqn_simcode_indices, tmp_eqn_indices_24, 1 * sizeof(int));
  nonLinearSystemData[24].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[23].equationIndex = 3369;
  nonLinearSystemData[23].size = 1;
  nonLinearSystemData[23].homotopySupport = 0 /* false */;
  nonLinearSystemData[23].mixedSystem = 0 /* false */;
  nonLinearSystemData[23].residualFunc = residualFunc3369;
  nonLinearSystemData[23].strictTearingFunctionCall = NULL;
  nonLinearSystemData[23].analyticalJacobianColumn = NULL;
  nonLinearSystemData[23].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[23].jacobianIndex = -1;
  nonLinearSystemData[23].initializeStaticNLSData = initializeStaticDataNLS3369;
  nonLinearSystemData[23].freeStaticNLSData = freeStaticDataNLS3369;
  nonLinearSystemData[23].getIterationVars = getIterationVarsNLS3369;
  nonLinearSystemData[23].checkConstraints = NULL;
  
  const int tmp_eqn_indices_23[1] = {3368};
  nonLinearSystemData[23].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[23].eqn_simcode_indices, tmp_eqn_indices_23, 1 * sizeof(int));
  nonLinearSystemData[23].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[22].equationIndex = 3358;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0 /* false */;
  nonLinearSystemData[22].mixedSystem = 0 /* false */;
  nonLinearSystemData[22].residualFunc = residualFunc3358;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS3358;
  nonLinearSystemData[22].freeStaticNLSData = freeStaticDataNLS3358;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS3358;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  const int tmp_eqn_indices_22[1] = {3357};
  nonLinearSystemData[22].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[22].eqn_simcode_indices, tmp_eqn_indices_22, 1 * sizeof(int));
  nonLinearSystemData[22].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[21].equationIndex = 3259;
  nonLinearSystemData[21].size = 3;
  nonLinearSystemData[21].homotopySupport = 0 /* false */;
  nonLinearSystemData[21].mixedSystem = 1 /* true */;
  nonLinearSystemData[21].residualFunc = residualFunc3259;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = NULL;
  nonLinearSystemData[21].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[21].jacobianIndex = -1;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS3259;
  nonLinearSystemData[21].freeStaticNLSData = freeStaticDataNLS3259;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS3259;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  const int tmp_eqn_indices_21[29] = {3230, 3231, 3232, 3233, 3234, 3235, 3236, 3237, 3238, 3239, 3240, 3241, 3242, 3243, 3244, 3245, 3246, 3247, 3248, 3249, 3250, 3251, 3252, 3253, 3254, 3255, 3258, 3257, 3256};
  nonLinearSystemData[21].eqn_simcode_indices = malloc(29 * sizeof(int));
  memcpy(nonLinearSystemData[21].eqn_simcode_indices, tmp_eqn_indices_21, 29 * sizeof(int));
  nonLinearSystemData[21].torn_plus_residual_size = 29;
  
  
  nonLinearSystemData[20].equationIndex = 3187;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0 /* false */;
  nonLinearSystemData[20].mixedSystem = 0 /* false */;
  nonLinearSystemData[20].residualFunc = residualFunc3187;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS3187;
  nonLinearSystemData[20].freeStaticNLSData = freeStaticDataNLS3187;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS3187;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  const int tmp_eqn_indices_20[1] = {3186};
  nonLinearSystemData[20].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[20].eqn_simcode_indices, tmp_eqn_indices_20, 1 * sizeof(int));
  nonLinearSystemData[20].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[19].equationIndex = 3110;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0 /* false */;
  nonLinearSystemData[19].mixedSystem = 0 /* false */;
  nonLinearSystemData[19].residualFunc = residualFunc3110;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = logic3_raw_functionJacNLSJac21_column;
  nonLinearSystemData[19].initialAnalyticalJacobian = logic3_raw_initialAnalyticJacobianNLSJac21;
  nonLinearSystemData[19].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS3110;
  nonLinearSystemData[19].freeStaticNLSData = freeStaticDataNLS3110;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS3110;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  const int tmp_eqn_indices_19[4] = {3101, 3102, 3103, 3104};
  nonLinearSystemData[19].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[19].eqn_simcode_indices, tmp_eqn_indices_19, 4 * sizeof(int));
  nonLinearSystemData[19].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[18].equationIndex = 2549;
  nonLinearSystemData[18].size = 1;
  nonLinearSystemData[18].homotopySupport = 0 /* false */;
  nonLinearSystemData[18].mixedSystem = 0 /* false */;
  nonLinearSystemData[18].residualFunc = residualFunc2549;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = NULL;
  nonLinearSystemData[18].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[18].jacobianIndex = -1;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS2549;
  nonLinearSystemData[18].freeStaticNLSData = freeStaticDataNLS2549;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS2549;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  const int tmp_eqn_indices_18[12] = {2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548};
  nonLinearSystemData[18].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[18].eqn_simcode_indices, tmp_eqn_indices_18, 12 * sizeof(int));
  nonLinearSystemData[18].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[17].equationIndex = 2492;
  nonLinearSystemData[17].size = 2;
  nonLinearSystemData[17].homotopySupport = 0 /* false */;
  nonLinearSystemData[17].mixedSystem = 1 /* true */;
  nonLinearSystemData[17].residualFunc = residualFunc2492;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = NULL;
  nonLinearSystemData[17].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[17].jacobianIndex = -1;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS2492;
  nonLinearSystemData[17].freeStaticNLSData = freeStaticDataNLS2492;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS2492;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  const int tmp_eqn_indices_17[26] = {2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2491, 2490};
  nonLinearSystemData[17].eqn_simcode_indices = malloc(26 * sizeof(int));
  memcpy(nonLinearSystemData[17].eqn_simcode_indices, tmp_eqn_indices_17, 26 * sizeof(int));
  nonLinearSystemData[17].torn_plus_residual_size = 26;
  
  
  nonLinearSystemData[16].equationIndex = 2192;
  nonLinearSystemData[16].size = 1;
  nonLinearSystemData[16].homotopySupport = 0 /* false */;
  nonLinearSystemData[16].mixedSystem = 0 /* false */;
  nonLinearSystemData[16].residualFunc = residualFunc2192;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS2192;
  nonLinearSystemData[16].freeStaticNLSData = freeStaticDataNLS2192;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS2192;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  const int tmp_eqn_indices_16[12] = {2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191};
  nonLinearSystemData[16].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[16].eqn_simcode_indices, tmp_eqn_indices_16, 12 * sizeof(int));
  nonLinearSystemData[16].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[15].equationIndex = 2169;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0 /* false */;
  nonLinearSystemData[15].mixedSystem = 0 /* false */;
  nonLinearSystemData[15].residualFunc = residualFunc2169;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS2169;
  nonLinearSystemData[15].freeStaticNLSData = freeStaticDataNLS2169;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS2169;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  const int tmp_eqn_indices_15[1] = {2168};
  nonLinearSystemData[15].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[15].eqn_simcode_indices, tmp_eqn_indices_15, 1 * sizeof(int));
  nonLinearSystemData[15].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[14].equationIndex = 1943;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0 /* false */;
  nonLinearSystemData[14].mixedSystem = 0 /* false */;
  nonLinearSystemData[14].residualFunc = residualFunc1943;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS1943;
  nonLinearSystemData[14].freeStaticNLSData = freeStaticDataNLS1943;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS1943;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  const int tmp_eqn_indices_14[1] = {1942};
  nonLinearSystemData[14].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[14].eqn_simcode_indices, tmp_eqn_indices_14, 1 * sizeof(int));
  nonLinearSystemData[14].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[13].equationIndex = 1837;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0 /* false */;
  nonLinearSystemData[13].mixedSystem = 0 /* false */;
  nonLinearSystemData[13].residualFunc = residualFunc1837;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = logic3_raw_functionJacNLSJac14_column;
  nonLinearSystemData[13].initialAnalyticalJacobian = logic3_raw_initialAnalyticJacobianNLSJac14;
  nonLinearSystemData[13].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS1837;
  nonLinearSystemData[13].freeStaticNLSData = freeStaticDataNLS1837;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS1837;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  const int tmp_eqn_indices_13[3] = {1830, 1831, 1832};
  nonLinearSystemData[13].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[13].eqn_simcode_indices, tmp_eqn_indices_13, 3 * sizeof(int));
  nonLinearSystemData[13].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[12].equationIndex = 1102;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 1 /* true */;
  nonLinearSystemData[12].mixedSystem = 0 /* false */;
  nonLinearSystemData[12].residualFunc = residualFunc1102;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS1102;
  nonLinearSystemData[12].freeStaticNLSData = freeStaticDataNLS1102;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS1102;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  const int tmp_eqn_indices_12[1] = {1101};
  nonLinearSystemData[12].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[12].eqn_simcode_indices, tmp_eqn_indices_12, 1 * sizeof(int));
  nonLinearSystemData[12].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[11].equationIndex = 999;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 1 /* true */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc999;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS999;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS999;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS999;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[1] = {998};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 1 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[10].equationIndex = 985;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 1 /* true */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc985;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS985;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS985;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS985;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[14] = {971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(14 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 14 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 14;
  
  
  nonLinearSystemData[9].equationIndex = 924;
  nonLinearSystemData[9].size = 3;
  nonLinearSystemData[9].homotopySupport = 1 /* true */;
  nonLinearSystemData[9].mixedSystem = 1 /* true */;
  nonLinearSystemData[9].residualFunc = residualFunc924;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS924;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS924;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS924;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[26] = {898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 923, 922, 921};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(26 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 26 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 26;
  
  
  nonLinearSystemData[8].equationIndex = 784;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 1 /* true */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc784;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS784;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS784;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS784;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[1] = {783};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 1 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[7].equationIndex = 623;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 1 /* true */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc623;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS623;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS623;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS623;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[14] = {609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(14 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 14 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 14;
  
  
  nonLinearSystemData[6].equationIndex = 598;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0 /* false */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc598;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS598;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS598;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS598;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[1] = {597};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 1 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[5].equationIndex = 524;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 1 /* true */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc524;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS524;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS524;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS524;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[1] = {523};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 1 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[4].equationIndex = 424;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1 /* true */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc424;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS424;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS424;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS424;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[1] = {423};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 1 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[3].equationIndex = 420;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 1 /* true */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc420;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS420;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS420;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS420;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[1] = {419};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 1 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[2].equationIndex = 397;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 1 /* true */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc397;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS397;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS397;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS397;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[1] = {396};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 1 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[1].equationIndex = 361;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc361;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS361;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS361;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS361;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[1] = {360};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 1 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[0].equationIndex = 259;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc259;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = logic3_raw_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = logic3_raw_initialAnalyticJacobianNLSJac0;
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
