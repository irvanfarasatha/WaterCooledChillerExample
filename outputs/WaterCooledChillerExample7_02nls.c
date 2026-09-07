/* Non Linear Systems */
#include "outputs/WaterCooledChillerExample7_model.h"
#include "outputs/WaterCooledChillerExample7_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc581(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,581};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc581: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 581).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc581 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 580;
  /* restore known outputs */
  threadData->lastEquationSolved = 581;
}
void initializeSparsePatternNLS581(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS581(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS581(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS581(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS581(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS581(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS581(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS581(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS581(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc616(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,616};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc616: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 616).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc616 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* damOA.m_flow_turbulent PARAM */)), (0.075375) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* damOA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 615;
  /* restore known outputs */
  threadData->lastEquationSolved = 616;
}
void initializeSparsePatternNLS616(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS616(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS616(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS616(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS616(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS616(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS616(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS616(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS616(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc637(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,637};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc637: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 637).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc637 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* damEA.m_flow_turbulent PARAM */)), (0.075375) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* damEA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 636;
  /* restore known outputs */
  threadData->lastEquationSolved = 637;
}
void initializeSparsePatternNLS637(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS637(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS637(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS637(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS637(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS637(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS637(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS637(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS637(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc640(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,640};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc640: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 640).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc640 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damRet.m_flow_turbulent PARAM */)), (0.075375) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* damRet.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 639;
  /* restore known outputs */
  threadData->lastEquationSolved = 640;
}
void initializeSparsePatternNLS640(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS640(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS640(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS640(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS640(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS640(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS640(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS640(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS640(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc726(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,726};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc726: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 726).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc726 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = -4.761904761904762 + homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* val6.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3399]] /* val6.dp_nominal_pos PARAM */),"val6.dp_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 725;
  /* restore known outputs */
  threadData->lastEquationSolved = 726;
}
void initializeSparsePatternNLS726(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS726(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS726(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS726(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS726(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS726(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS726(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS726(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS726(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 749
type: SIMPLE_ASSIGN
tan.indTanHex.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val8Sto.m_flow, 0.09523809523809523, 1.4285714285714286), 525.0 * val8Sto.m_flow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */), 0.09523809523809523, 1.4285714285714286), (525.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)));
  threadData->lastEquationSolved = 749;
}
/*
equation index: 750
type: SIMPLE_ASSIGN
val8_2.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 750;
}
/*
equation index: 751
type: SIMPLE_ASSIGN
val8.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 751;
}
/*
equation index: 752
type: SIMPLE_ASSIGN
val1.m_flow = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(val1.dp, val1.k, val1.m_flow_turbulent), 4.761904761904762 * val1.dp / val1.dp_nominal_pos)
*/
void outputs_WaterCooledChillerExample7_eqFunction_752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1718]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3359]] /* val1.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */),"val1.dp_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 752;
}
/*
equation index: 753
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  threadData->lastEquationSolved = 753;
}
/*
equation index: 754
type: SIMPLE_ASSIGN
valByp.m_flow = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(valByp.dp, valByp.k, valByp.m_flow_turbulent), 4.761904761904762 * valByp.dp / valByp.dp_nominal_pos)
*/
void outputs_WaterCooledChillerExample7_eqFunction_754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3595]] /* valByp.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 754;
}
/*
equation index: 755
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val1.m_flow - valByp.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 755;
}
/*
equation index: 756
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow = -4.761904761904762 + junCHWRet.res1.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) = -4.761904761904762 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */);
  threadData->lastEquationSolved = 756;
}
/*
equation index: 757
type: SIMPLE_ASSIGN
pumTanRet.m_flow = junCHWRet2.res1.m_flow - val8_2.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 757;
}
/*
equation index: 758
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow = (-val8.m_flow) - pumTanRet.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 758;
}
/*
equation index: 759
type: SIMPLE_ASSIGN
junCHWSup.vol.p = junCHWRet.vol.p - valByp.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 759;
}
/*
equation index: 760
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = junCHWSup2.res2.m_flow - 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) - 4.761904761904762;
  threadData->lastEquationSolved = 760;
}
/*
equation index: 761
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 761;
}
/*
equation index: 762
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, 0.015822115375908174, 0.4761904761904762), 19021.8 * cooCoi.m1_flow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */), 0.015822115375908174, 0.4761904761904762), (19021.8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)));
  threadData->lastEquationSolved = 762;
}
/*
equation index: 763
type: SIMPLE_ASSIGN
chi2.vol2.p = junCHWSup.vol.p + val8.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  threadData->lastEquationSolved = 763;
}
/*
equation index: 764
type: SIMPLE_ASSIGN
val8_2.dp = junCHWRet.vol.p - pumCHW2.port_a.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 764;
}
/*
equation index: 765
type: SIMPLE_ASSIGN
pumCHW2.dpMachine = chi2.vol2.p - pumCHW2.port_a.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 765;
}
/*
equation index: 766
type: SIMPLE_ASSIGN
pumCHW2.dp = pumCHW2.port_a.p - chi2.vol2.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */);
  threadData->lastEquationSolved = 766;
}
/*
equation index: 767
type: SIMPLE_ASSIGN
pumTanSup.port_a.p = junCHWRet.vol.p - val8_2Rel.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  threadData->lastEquationSolved = 767;
}
/*
equation index: 768
type: SIMPLE_ASSIGN
tan.vol[4].p = pumTanSup.port_a.p + pumTanCon.k
*/
void outputs_WaterCooledChillerExample7_eqFunction_768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 768;
}
/*
equation index: 769
type: SIMPLE_ASSIGN
pumTanRet.port_b.p = tan.vol[4].p + pumTanCon.k
*/
void outputs_WaterCooledChillerExample7_eqFunction_769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 769;
}
/*
equation index: 770
type: SIMPLE_ASSIGN
val8Rel.dp = pumTanRet.port_b.p - junCHWSup.vol.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 770;
}
/*
equation index: 771
type: SIMPLE_ASSIGN
val8Sto.dp = pumCHW2.dpMachine + chi2.vol2.p + pumCHW2.dp - tan.indTanHex.dp - pumCHW2.port_a.p - val8_2Sto.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */);
  threadData->lastEquationSolved = 771;
}

void residualFunc779(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,779};
  int i,j;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc779: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 779).vars[i]);
      for (j=0; j<7; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc779 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = xloc[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_749(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_750(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_751(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_752(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_753(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_754(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_755(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_756(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_757(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_758(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_759(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_760(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_761(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_762(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_763(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_764(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_765(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_766(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_767(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_768(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_769(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_770(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_771(data, threadData);
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* val8_2.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */),"val8_2.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 778;
  res[1] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* val8Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* val8Sto.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */),"val8Sto.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 777;
  res[2] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* val8_2Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* val8_2Sto.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */),"val8_2Sto.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 776;
  res[3] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* val8Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* val8Rel.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */),"val8Rel.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 775;
  res[4] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* val8_2Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* val8_2Rel.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */),"val8_2Rel.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 774;
  res[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 773;
  res[6] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* val8.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */),"val8.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 772;
  /* restore known outputs */
  threadData->lastEquationSolved = 779;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS779(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,2,2,2,2,4,5,7};
  const int rowIndex[24] = {1,2,3,4,0,1,1,6,1,3,4,5,0,1,3,4,5,0,1,2,3,4,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(7, 24, 6);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 24*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {6};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 2 columns */
  const int indices_6[2] = {0, 1};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
}

void freeSparsePatternNLS779(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS779(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS779(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2Sto.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1780 /* val8_2Sto.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1780 /* val8_2Sto.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1780 /* val8_2Sto.dp */);
  /* static nls data for val8_2Rel.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1774 /* val8_2Rel.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1774 /* val8_2Rel.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1774 /* val8_2Rel.dp */);
  /* static nls data for pumCHW2.port_a.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1104 /* pumCHW2.port_a.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1104 /* pumCHW2.port_a.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1104 /* pumCHW2.port_a.p */);
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1748 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1748 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1748 /* val8.dp */);
  /* static nls data for valByp.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1787 /* valByp.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1787 /* valByp.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1787 /* valByp.dp */);
  /* static nls data for val1.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1717 /* val1.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1717 /* val1.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1717 /* val1.dp */);
  /* static nls data for val8Sto.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1764 /* val8Sto.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1764 /* val8Sto.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1764 /* val8Sto.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS779(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS779(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS779(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS779(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS779(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  array[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
}


/* inner equations */

void residualFunc1188(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1188};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1188: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1188).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1188 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[945]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1187;
  /* restore known outputs */
  threadData->lastEquationSolved = 1188;
}
void initializeSparsePatternNLS1188(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1188(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1188(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1188(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1188(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1188(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1188(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1188(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1188(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc1349(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1349};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1349: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1349).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1349 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */), 0.48541408508431333, 1.326699834162521), (56.305125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 1348;
  /* restore known outputs */
  threadData->lastEquationSolved = 1349;
}
void initializeSparsePatternNLS1349(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1349(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1349(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1349(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1349(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1349(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1349(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1349(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1349(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */);
}


/* inner equations */

/*
equation index: 1587
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 1587;
}
/*
equation index: 1588
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 1588;
}

void residualFunc1594(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1594};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1594: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1594).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1594 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1587(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1588(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 1589;
  /* restore known outputs */
  threadData->lastEquationSolved = 1594;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1594(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS1594(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS1594(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS1594(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1594(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1594(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1594(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1594(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1594(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
}


/* inner equations */

/*
equation index: 1596
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val7.port_b.h_outflow, val7.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1596;
}
/*
equation index: 1597
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TWCLeaTow2.port_b.h_outflow, val7.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1597;
}
/*
equation index: 1598
type: SIMPLE_ASSIGN
cooTow2.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.setState_phX(cooTow2.vol.p, val7.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1598};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 1598;
}
/*
equation index: 1599
type: SIMPLE_ASSIGN
cooTow2.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, val7.port_a.h_outflow, {1.0})
*/
void outputs_WaterCooledChillerExample7_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1599};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 1599;
}
/*
equation index: 1600
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1600;
}
/*
equation index: 1601
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1601;
}
/*
equation index: 1602
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void outputs_WaterCooledChillerExample7_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 1602;
}
/*
equation index: 1603
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k < -0.01) then cooTowFanCon2.k else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) * ((12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) ^ 2.0 - 3.0) * (cooTowFanCon2.k - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTowFanCon2.k))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1603};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 1603;
}
/*
equation index: 1604
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 1604;
}
/*
equation index: 1605
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTowFanCon2.k - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 1605;
}
/*
equation index: 1606
type: SIMPLE_ASSIGN
cooTow2.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - val7.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1606};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1606;
}

void residualFunc1608(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1608};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1608: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1608).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1608 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1596(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1597(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1598(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1599(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1600(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1601(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1602(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1603(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1604(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1605(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1606(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 1607;
  /* restore known outputs */
  threadData->lastEquationSolved = 1608;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1608(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS1608(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS1608(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1608(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val7.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1608(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1608(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1608(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1608(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1608(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 1620
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val5.port_b.h_outflow, val5.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1620;
}
/*
equation index: 1621
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TCWLeaTow.port_b.h_outflow, val5.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1621;
}
/*
equation index: 1622
type: SIMPLE_ASSIGN
cooTow.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.setState_phX(cooTow.vol.p, val5.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1622};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 1622;
}
/*
equation index: 1623
type: SIMPLE_ASSIGN
cooTow.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, val5.port_a.h_outflow, {1.0})
*/
void outputs_WaterCooledChillerExample7_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1623};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 1623;
}
/*
equation index: 1624
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void outputs_WaterCooledChillerExample7_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1624;
}
/*
equation index: 1625
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1625;
}
/*
equation index: 1626
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void outputs_WaterCooledChillerExample7_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 1626;
}
/*
equation index: 1627
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k < -0.01) then cooTowFanCon.k else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) * ((12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) ^ 2.0 - 3.0) * (cooTowFanCon.k - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTowFanCon.k))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1627};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 1627;
}
/*
equation index: 1628
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 1628;
}
/*
equation index: 1629
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTowFanCon.k - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 1629;
}
/*
equation index: 1630
type: SIMPLE_ASSIGN
cooTow.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - val5.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1630};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1630;
}

void residualFunc1632(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1632};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1632: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1632).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1632 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1620(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1621(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1622(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1623(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1624(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1625(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1626(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1627(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1628(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1629(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_1630(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 1631;
  /* restore known outputs */
  threadData->lastEquationSolved = 1632;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1632(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS1632(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS1632(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1632(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val5.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1632(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1632(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1632(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1632(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1632(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc3238(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3238};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3238: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3238).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3238 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 3237;
  /* restore known outputs */
  threadData->lastEquationSolved = 3238;
}
void initializeSparsePatternNLS3238(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3238(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3238(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3238(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3238(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3238(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3238(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3238(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3238(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

void residualFunc3446(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3446};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3446: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3446).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3446 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[945]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 3445;
  /* restore known outputs */
  threadData->lastEquationSolved = 3446;
}
void initializeSparsePatternNLS3446(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3446(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3446(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3446(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3446(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3446(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3446(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3446(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3446(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 3842
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void outputs_WaterCooledChillerExample7_eqFunction_3842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 3842;
}
/*
equation index: 3843
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 3843;
}

void residualFunc3849(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3849};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3849: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3849).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3849 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3842(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3843(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 3844;
  /* restore known outputs */
  threadData->lastEquationSolved = 3849;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3849(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3849(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS3849(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS3849(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3849(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3849(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3849(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3849(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3849(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
}


/* inner equations */

/*
equation index: 3851
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val7.port_b.h_outflow, val7.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3851;
}
/*
equation index: 3852
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TWCLeaTow2.port_b.h_outflow, val7.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3852;
}
/*
equation index: 3853
type: SIMPLE_ASSIGN
cooTow2.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.setState_phX(cooTow2.vol.p, val7.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_3853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3853};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 3853;
}
/*
equation index: 3854
type: SIMPLE_ASSIGN
cooTow2.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, val7.port_a.h_outflow, {1.0})
*/
void outputs_WaterCooledChillerExample7_eqFunction_3854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3854};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 3854;
}
/*
equation index: 3855
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void outputs_WaterCooledChillerExample7_eqFunction_3855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 3855;
}
/*
equation index: 3856
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_3856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 3856;
}
/*
equation index: 3857
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void outputs_WaterCooledChillerExample7_eqFunction_3857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 3857;
}
/*
equation index: 3858
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k < -0.01) then cooTowFanCon2.k else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) * ((12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) ^ 2.0 - 3.0) * (cooTowFanCon2.k - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTowFanCon2.k))
*/
void outputs_WaterCooledChillerExample7_eqFunction_3858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3858};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */)) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow2.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 3858;
}
/*
equation index: 3859
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 3859;
}
/*
equation index: 3860
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTowFanCon2.k - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 3860;
}
/*
equation index: 3861
type: SIMPLE_ASSIGN
cooTow2.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - val7.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3861};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 3861;
}

void residualFunc3863(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3863};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3863: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3863).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3863 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3851(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3852(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3853(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3854(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3855(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3856(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3857(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3858(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3859(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3860(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3861(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 3862;
  /* restore known outputs */
  threadData->lastEquationSolved = 3863;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3863(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3863(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3863(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3863(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val7.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3863(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3863(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3863(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3863(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3863(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

/*
equation index: 3875
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val5.port_b.h_outflow, val5.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3875;
}
/*
equation index: 3876
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TCWLeaTow.port_b.h_outflow, val5.port_a.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3876;
}
/*
equation index: 3877
type: SIMPLE_ASSIGN
cooTow.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.setState_phX(cooTow.vol.p, val5.port_a.h_outflow, {}))
*/
void outputs_WaterCooledChillerExample7_eqFunction_3877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3877};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 3877;
}
/*
equation index: 3878
type: SIMPLE_ASSIGN
cooTow.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, val5.port_a.h_outflow, {1.0})
*/
void outputs_WaterCooledChillerExample7_eqFunction_3878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3878};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 3878;
}
/*
equation index: 3879
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void outputs_WaterCooledChillerExample7_eqFunction_3879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 3879;
}
/*
equation index: 3880
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_3880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 3880;
}
/*
equation index: 3881
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void outputs_WaterCooledChillerExample7_eqFunction_3881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 3881;
}
/*
equation index: 3882
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k < -0.01) then cooTowFanCon.k else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) * ((12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) ^ 2.0 - 3.0) * (cooTowFanCon.k - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTowFanCon.k))
*/
void outputs_WaterCooledChillerExample7_eqFunction_3882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3882};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = Greater((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */),0.01);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = (0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */));
  }
  else
  {
    tmp1 = Less((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */),-0.01);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp4 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */);
    }
    else
    {
      tmp2 = (12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */)));
      tmp4 = (0.25) * ((((12.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) - ((100.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */)))) * ((tmp2 * tmp2) - 3.0)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */) - ((0.125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */))))) + (0.0625) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */)) + (0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */));
    }
    tmp6 = tmp4;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooTow.TAppCor variable */) = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */), tmp6);
  threadData->lastEquationSolved = 3882;
}
/*
equation index: 3883
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 3883;
}
/*
equation index: 3884
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTowFanCon.k - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 3884;
}
/*
equation index: 3885
type: SIMPLE_ASSIGN
cooTow.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - val5.port_b.h_outflow)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3885};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 3885;
}

void residualFunc3887(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3887};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3887: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3887).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3887 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3875(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3876(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3877(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3878(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3879(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3880(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3881(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3882(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3883(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3884(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_3885(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 3886;
  /* restore known outputs */
  threadData->lastEquationSolved = 3887;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3887(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3887(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3887(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3887(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val5.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3887(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3887(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3887(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3887(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3887(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc4402(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4402};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4402: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4402).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4402 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = -4.761904761904762 + omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* val6.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 4401;
  /* restore known outputs */
  threadData->lastEquationSolved = 4402;
}
void initializeSparsePatternNLS4402(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4402(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4402(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4402(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4402(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4402(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4402(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4402(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4402(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 4478
type: SIMPLE_ASSIGN
$cse41 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $cse41 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 4478;
}
/*
equation index: 4479
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $cse41 variable */))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41",equationIndexes);
  threadData->lastEquationSolved = 4479;
}
/*
equation index: 4480
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 4480;
}

void residualFunc4487(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4487};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4487: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4487).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4487 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4478(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4479(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4480(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 4481;
  /* restore known outputs */
  threadData->lastEquationSolved = 4487;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS4487(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS4487(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS4487(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS4487(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4487(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4487(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4487(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4487(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4487(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc4545(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4545};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4545: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4545).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4545 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* damEA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 4544;
  /* restore known outputs */
  threadData->lastEquationSolved = 4545;
}
void initializeSparsePatternNLS4545(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4545(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4545(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4545(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4545(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4545(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4545(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4545(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4545(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc4575(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4575};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4575: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4575).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4575 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* damOA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 4574;
  /* restore known outputs */
  threadData->lastEquationSolved = 4575;
}
void initializeSparsePatternNLS4575(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4575(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4575(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4575(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4575(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4575(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4575(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4575(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4575(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc4580(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4580};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4580: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4580).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4580 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damRet.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 4579;
  /* restore known outputs */
  threadData->lastEquationSolved = 4580;
}
void initializeSparsePatternNLS4580(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4580(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4580(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4580(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4580(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4580(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4580(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4580(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4580(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */);
}


/* inner equations */

/*
equation index: 4732
type: SIMPLE_ASSIGN
tan.indTanHex.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val8Sto.m_flow, 0.09523809523809523, 1.4285714285714286)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */), 0.09523809523809523, 1.4285714285714286);
  threadData->lastEquationSolved = 4732;
}
/*
equation index: 4733
type: SIMPLE_ASSIGN
val8_2.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4733;
}
/*
equation index: 4734
type: SIMPLE_ASSIGN
val8.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4734;
}
/*
equation index: 4735
type: SIMPLE_ASSIGN
val1.m_flow = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(val1.dp, val1.k, val1.m_flow_turbulent)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1718]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3359]] /* val1.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 4735;
}
/*
equation index: 4736
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  threadData->lastEquationSolved = 4736;
}
/*
equation index: 4737
type: SIMPLE_ASSIGN
valByp.m_flow = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(valByp.dp, valByp.k, valByp.m_flow_turbulent)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3595]] /* valByp.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 4737;
}
/*
equation index: 4738
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val1.m_flow - valByp.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 4738;
}
/*
equation index: 4739
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow = -4.761904761904762 + junCHWRet.res1.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) = -4.761904761904762 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */);
  threadData->lastEquationSolved = 4739;
}
/*
equation index: 4740
type: SIMPLE_ASSIGN
pumTanRet.m_flow = junCHWRet2.res1.m_flow - val8_2.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 4740;
}
/*
equation index: 4741
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow = (-val8.m_flow) - pumTanRet.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 4741;
}
/*
equation index: 4742
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = junCHWSup2.res2.m_flow - 4.761904761904762
*/
void outputs_WaterCooledChillerExample7_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) - 4.761904761904762;
  threadData->lastEquationSolved = 4742;
}
/*
equation index: 4743
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void outputs_WaterCooledChillerExample7_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 4743;
}
/*
equation index: 4744
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, 0.015822115375908174, 0.4761904761904762)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */), 0.015822115375908174, 0.4761904761904762);
  threadData->lastEquationSolved = 4744;
}
/*
equation index: 4745
type: SIMPLE_ASSIGN
junCHWSup.vol.p = junCHWRet.vol.p - valByp.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 4745;
}
/*
equation index: 4746
type: SIMPLE_ASSIGN
pumTanRet.port_b.p = junCHWSup.vol.p + val8Rel.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */);
  threadData->lastEquationSolved = 4746;
}
/*
equation index: 4747
type: SIMPLE_ASSIGN
tan.vol[4].p = pumTanRet.port_b.p - pumTanCon.k
*/
void outputs_WaterCooledChillerExample7_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 4747;
}
/*
equation index: 4748
type: SIMPLE_ASSIGN
pumTanSup.port_a.p = tan.vol[4].p - pumTanCon.k
*/
void outputs_WaterCooledChillerExample7_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 4748;
}
/*
equation index: 4749
type: SIMPLE_ASSIGN
val8_2Rel.dp = junCHWRet.vol.p - pumTanSup.port_a.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */);
  threadData->lastEquationSolved = 4749;
}
/*
equation index: 4750
type: SIMPLE_ASSIGN
pumCHW2.port_a.p = junCHWRet.vol.p - val8_2.dp
*/
void outputs_WaterCooledChillerExample7_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */);
  threadData->lastEquationSolved = 4750;
}
/*
equation index: 4751
type: SIMPLE_ASSIGN
val8.dp = chi2.vol2.p - junCHWSup.vol.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_4751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 4751;
}
/*
equation index: 4752
type: SIMPLE_ASSIGN
pumCHW2.dpMachine = chi2.vol2.p - pumCHW2.port_a.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 4752;
}
/*
equation index: 4753
type: SIMPLE_ASSIGN
pumCHW2.dp = pumCHW2.port_a.p - chi2.vol2.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */);
  threadData->lastEquationSolved = 4753;
}
/*
equation index: 4754
type: SIMPLE_ASSIGN
val8_2Sto.dp = pumCHW2.dpMachine + chi2.vol2.p + pumCHW2.dp - tan.indTanHex.dp - val8Sto.dp - pumCHW2.port_a.p
*/
void outputs_WaterCooledChillerExample7_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 4754;
}

void residualFunc4762(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4762};
  int i,j;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4762: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4762).vars[i]);
      for (j=0; j<7; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4762 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = xloc[5];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4732(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4733(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4734(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4735(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4736(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4737(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4738(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4739(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4740(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4741(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4742(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4743(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4744(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4745(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4746(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4747(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4748(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4749(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4750(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4751(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4752(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4753(data, threadData);
  /* local constraints */
  outputs_WaterCooledChillerExample7_eqFunction_4754(data, threadData);
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* val8_2Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* val8_2Rel.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 4761;
  res[1] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* val8_2Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* val8_2Sto.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4760;
  res[2] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* val8Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* val8Sto.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4759;
  res[3] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* val8.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 4758;
  res[4] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* val8_2.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 4757;
  res[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 4756;
  res[6] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* val8Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* val8Rel.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 4755;
  /* restore known outputs */
  threadData->lastEquationSolved = 4762;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS4762(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,2,2,2,2,4,5,7};
  const int rowIndex[24] = {1,2,1,3,1,4,0,6,0,3,5,6,0,1,3,5,6,0,1,2,3,4,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(7, 24, 5);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 24*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {6};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 2 columns */
  const int indices_3[2] = {2, 4};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 2 columns */
  const int indices_5[2] = {0, 3};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
}

void freeSparsePatternNLS4762(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS4762(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4762(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8Sto.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1761 /* val8Sto.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1761 /* val8Sto.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1761 /* val8Sto.dp */);
  /* static nls data for chi2.vol2.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 437 /* chi2.vol2.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 437 /* chi2.vol2.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 437 /* chi2.vol2.p */);
  /* static nls data for val8_2.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1768 /* val8_2.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1768 /* val8_2.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1768 /* val8_2.dp */);
  /* static nls data for val8Rel.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1754 /* val8Rel.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1754 /* val8Rel.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1754 /* val8Rel.dp */);
  /* static nls data for valByp.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1787 /* valByp.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1787 /* valByp.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1787 /* valByp.dp */);
  /* static nls data for val1.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1717 /* val1.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1717 /* val1.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1717 /* val1.dp */);
  /* static nls data for val8Sto.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1764 /* val8Sto.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1764 /* val8Sto.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1764 /* val8Sto.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4762(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4762(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4762(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4762(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4762(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  array[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
}


/* inner equations */

void residualFunc5374(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,5374};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc5374: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 5374).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc5374 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */), 0.48541408508431333, 1.326699834162521) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 5373;
  /* restore known outputs */
  threadData->lastEquationSolved = 5374;
}
void initializeSparsePatternNLS5374(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS5374(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS5374(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS5374(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS5374(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS5374(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS5374(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS5374(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS5374(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void outputs_WaterCooledChillerExample7_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[22].equationIndex = 5374;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0 /* false */;
  nonLinearSystemData[22].mixedSystem = 0 /* false */;
  nonLinearSystemData[22].residualFunc = residualFunc5374;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS5374;
  nonLinearSystemData[22].freeStaticNLSData = freeStaticDataNLS5374;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS5374;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  const int tmp_eqn_indices_22[1] = {5373};
  nonLinearSystemData[22].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[22].eqn_simcode_indices, tmp_eqn_indices_22, 1 * sizeof(int));
  nonLinearSystemData[22].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[21].equationIndex = 4762;
  nonLinearSystemData[21].size = 7;
  nonLinearSystemData[21].homotopySupport = 0 /* false */;
  nonLinearSystemData[21].mixedSystem = 0 /* false */;
  nonLinearSystemData[21].residualFunc = residualFunc4762;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = NULL;
  nonLinearSystemData[21].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[21].jacobianIndex = -1;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS4762;
  nonLinearSystemData[21].freeStaticNLSData = freeStaticDataNLS4762;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS4762;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  const int tmp_eqn_indices_21[30] = {4732, 4733, 4734, 4735, 4736, 4737, 4738, 4739, 4740, 4741, 4742, 4743, 4744, 4745, 4746, 4747, 4748, 4749, 4750, 4751, 4752, 4753, 4754, 4761, 4760, 4759, 4758, 4757, 4756, 4755};
  nonLinearSystemData[21].eqn_simcode_indices = malloc(30 * sizeof(int));
  memcpy(nonLinearSystemData[21].eqn_simcode_indices, tmp_eqn_indices_21, 30 * sizeof(int));
  nonLinearSystemData[21].torn_plus_residual_size = 30;
  
  
  nonLinearSystemData[20].equationIndex = 4580;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0 /* false */;
  nonLinearSystemData[20].mixedSystem = 0 /* false */;
  nonLinearSystemData[20].residualFunc = residualFunc4580;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS4580;
  nonLinearSystemData[20].freeStaticNLSData = freeStaticDataNLS4580;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS4580;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  const int tmp_eqn_indices_20[1] = {4579};
  nonLinearSystemData[20].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[20].eqn_simcode_indices, tmp_eqn_indices_20, 1 * sizeof(int));
  nonLinearSystemData[20].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[19].equationIndex = 4575;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0 /* false */;
  nonLinearSystemData[19].mixedSystem = 0 /* false */;
  nonLinearSystemData[19].residualFunc = residualFunc4575;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = NULL;
  nonLinearSystemData[19].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[19].jacobianIndex = -1;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS4575;
  nonLinearSystemData[19].freeStaticNLSData = freeStaticDataNLS4575;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS4575;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  const int tmp_eqn_indices_19[1] = {4574};
  nonLinearSystemData[19].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[19].eqn_simcode_indices, tmp_eqn_indices_19, 1 * sizeof(int));
  nonLinearSystemData[19].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[18].equationIndex = 4545;
  nonLinearSystemData[18].size = 1;
  nonLinearSystemData[18].homotopySupport = 0 /* false */;
  nonLinearSystemData[18].mixedSystem = 0 /* false */;
  nonLinearSystemData[18].residualFunc = residualFunc4545;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = NULL;
  nonLinearSystemData[18].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[18].jacobianIndex = -1;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS4545;
  nonLinearSystemData[18].freeStaticNLSData = freeStaticDataNLS4545;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS4545;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  const int tmp_eqn_indices_18[1] = {4544};
  nonLinearSystemData[18].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[18].eqn_simcode_indices, tmp_eqn_indices_18, 1 * sizeof(int));
  nonLinearSystemData[18].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[17].equationIndex = 4487;
  nonLinearSystemData[17].size = 1;
  nonLinearSystemData[17].homotopySupport = 0 /* false */;
  nonLinearSystemData[17].mixedSystem = 0 /* false */;
  nonLinearSystemData[17].residualFunc = residualFunc4487;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacNLSJac22_column;
  nonLinearSystemData[17].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac22;
  nonLinearSystemData[17].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS4487;
  nonLinearSystemData[17].freeStaticNLSData = freeStaticDataNLS4487;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS4487;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  const int tmp_eqn_indices_17[4] = {4478, 4479, 4480, 4481};
  nonLinearSystemData[17].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[17].eqn_simcode_indices, tmp_eqn_indices_17, 4 * sizeof(int));
  nonLinearSystemData[17].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[16].equationIndex = 4402;
  nonLinearSystemData[16].size = 1;
  nonLinearSystemData[16].homotopySupport = 0 /* false */;
  nonLinearSystemData[16].mixedSystem = 0 /* false */;
  nonLinearSystemData[16].residualFunc = residualFunc4402;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS4402;
  nonLinearSystemData[16].freeStaticNLSData = freeStaticDataNLS4402;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS4402;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  const int tmp_eqn_indices_16[1] = {4401};
  nonLinearSystemData[16].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[16].eqn_simcode_indices, tmp_eqn_indices_16, 1 * sizeof(int));
  nonLinearSystemData[16].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[15].equationIndex = 3887;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0 /* false */;
  nonLinearSystemData[15].mixedSystem = 0 /* false */;
  nonLinearSystemData[15].residualFunc = residualFunc3887;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS3887;
  nonLinearSystemData[15].freeStaticNLSData = freeStaticDataNLS3887;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS3887;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  const int tmp_eqn_indices_15[12] = {3875, 3876, 3877, 3878, 3879, 3880, 3881, 3882, 3883, 3884, 3885, 3886};
  nonLinearSystemData[15].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[15].eqn_simcode_indices, tmp_eqn_indices_15, 12 * sizeof(int));
  nonLinearSystemData[15].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[14].equationIndex = 3863;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0 /* false */;
  nonLinearSystemData[14].mixedSystem = 0 /* false */;
  nonLinearSystemData[14].residualFunc = residualFunc3863;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS3863;
  nonLinearSystemData[14].freeStaticNLSData = freeStaticDataNLS3863;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS3863;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  const int tmp_eqn_indices_14[12] = {3851, 3852, 3853, 3854, 3855, 3856, 3857, 3858, 3859, 3860, 3861, 3862};
  nonLinearSystemData[14].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[14].eqn_simcode_indices, tmp_eqn_indices_14, 12 * sizeof(int));
  nonLinearSystemData[14].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[13].equationIndex = 3849;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0 /* false */;
  nonLinearSystemData[13].mixedSystem = 0 /* false */;
  nonLinearSystemData[13].residualFunc = residualFunc3849;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacNLSJac18_column;
  nonLinearSystemData[13].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac18;
  nonLinearSystemData[13].jacobianIndex = 6 /*jacInx*/;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS3849;
  nonLinearSystemData[13].freeStaticNLSData = freeStaticDataNLS3849;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS3849;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  const int tmp_eqn_indices_13[3] = {3842, 3843, 3844};
  nonLinearSystemData[13].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[13].eqn_simcode_indices, tmp_eqn_indices_13, 3 * sizeof(int));
  nonLinearSystemData[13].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[12].equationIndex = 3446;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 0 /* false */;
  nonLinearSystemData[12].mixedSystem = 0 /* false */;
  nonLinearSystemData[12].residualFunc = residualFunc3446;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS3446;
  nonLinearSystemData[12].freeStaticNLSData = freeStaticDataNLS3446;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS3446;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  const int tmp_eqn_indices_12[1] = {3445};
  nonLinearSystemData[12].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[12].eqn_simcode_indices, tmp_eqn_indices_12, 1 * sizeof(int));
  nonLinearSystemData[12].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[11].equationIndex = 3238;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0 /* false */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc3238;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS3238;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS3238;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS3238;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[1] = {3237};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 1 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[10].equationIndex = 1632;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0 /* false */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc1632;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS1632;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS1632;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS1632;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[12] = {1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 12 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[9].equationIndex = 1608;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0 /* false */;
  nonLinearSystemData[9].mixedSystem = 0 /* false */;
  nonLinearSystemData[9].residualFunc = residualFunc1608;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS1608;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS1608;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS1608;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[12] = {1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 12 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[8].equationIndex = 1594;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0 /* false */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc1594;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = outputs_WaterCooledChillerExample7_functionJacNLSJac10_column;
  nonLinearSystemData[8].initialAnalyticalJacobian = outputs_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac10;
  nonLinearSystemData[8].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS1594;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS1594;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS1594;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[3] = {1587, 1588, 1589};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 3 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[7].equationIndex = 1349;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 1 /* true */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc1349;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS1349;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS1349;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS1349;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[1] = {1348};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 1 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[6].equationIndex = 1188;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0 /* false */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc1188;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS1188;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS1188;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS1188;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[1] = {1187};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 1 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[5].equationIndex = 779;
  nonLinearSystemData[5].size = 7;
  nonLinearSystemData[5].homotopySupport = 1 /* true */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc779;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS779;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS779;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS779;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[30] = {749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 778, 777, 776, 775, 774, 773, 772};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(30 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 30 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 30;
  
  
  nonLinearSystemData[4].equationIndex = 726;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1 /* true */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc726;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS726;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS726;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS726;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[1] = {725};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 1 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[3].equationIndex = 640;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 1 /* true */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc640;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS640;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS640;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS640;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[1] = {639};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 1 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[2].equationIndex = 637;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 1 /* true */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc637;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS637;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS637;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS637;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[1] = {636};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 1 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[1].equationIndex = 616;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 1 /* true */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc616;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS616;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS616;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS616;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[1] = {615};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 1 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[0].equationIndex = 581;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc581;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS581;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS581;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS581;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[1] = {580};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 1 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 1;
}

#if defined(__cplusplus)
}
#endif
