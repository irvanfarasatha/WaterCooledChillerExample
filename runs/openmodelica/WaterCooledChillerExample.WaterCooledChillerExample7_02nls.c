/* Non Linear Systems */
#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#include "WaterCooledChillerExample.WaterCooledChillerExample7_12jac.h"
#include "simulation/jacobian_util.h"
#include "simulation/arrayIndex.h"

#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 403
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 403;
}
/*
equation index: 404
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 404;
}

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
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_403(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_404(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 405;
  /* restore known outputs */
  threadData->lastEquationSolved = 410;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS410(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS410(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
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
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc650(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,650};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc650: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 650).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc650 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 649;
  /* restore known outputs */
  threadData->lastEquationSolved = 650;
}
void initializeSparsePatternNLS650(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS650(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS650(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS650(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS650(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS650(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS650(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS650(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS650(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 657
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val7.port_b.h_outflow, val7.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 657;
}
/*
equation index: 658
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TWCLeaTow2.port_b.h_outflow, val7.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 658;
}
/*
equation index: 659
type: SIMPLE_ASSIGN
cooTow2.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.setState_phX(cooTow2.vol.p, val7.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,659};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 659;
}
/*
equation index: 660
type: SIMPLE_ASSIGN
cooTow2.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, val7.port_a.h_outflow, {1.0})
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,660};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 660;
}
/*
equation index: 661
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 661;
}
/*
equation index: 662
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 662;
}
/*
equation index: 663
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 663;
}
/*
equation index: 664
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 664;
}
/*
equation index: 665
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k < -0.01) then cooTowFanCon2.k else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) * ((12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) ^ 2.0 - 3.0) * (cooTowFanCon2.k - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTowFanCon2.k))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,665};
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
  threadData->lastEquationSolved = 665;
}
/*
equation index: 666
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTowFanCon2.k - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 666;
}
/*
equation index: 667
type: SIMPLE_ASSIGN
cooTow2.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - val7.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,667};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 667;
}

void residualFunc669(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,669};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc669: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 669).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc669 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_657(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_658(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_659(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_660(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_661(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_662(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_663(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_664(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_665(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_666(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_667(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 668;
  /* restore known outputs */
  threadData->lastEquationSolved = 669;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS669(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS669(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS669(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS669(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val7.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS669(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS669(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS669(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS669(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS669(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc707(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,707};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc707: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 707).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc707 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* damOA.m_flow_turbulent PARAM */)), (0.075375) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* damOA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 706;
  /* restore known outputs */
  threadData->lastEquationSolved = 707;
}
void initializeSparsePatternNLS707(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS707(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS707(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS707(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS707(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS707(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS707(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS707(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS707(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc730(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,730};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc730: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 730).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc730 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* damEA.m_flow_turbulent PARAM */)), (0.075375) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1128]] /* damEA.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 729;
  /* restore known outputs */
  threadData->lastEquationSolved = 730;
}
void initializeSparsePatternNLS730(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS730(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS730(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS730(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS730(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS730(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS730(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS730(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS730(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc734(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,734};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc734: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 734).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc734 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damRet.m_flow_turbulent PARAM */)), (0.075375) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* damRet.dp_nominal_pos PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */)))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 733;
  /* restore known outputs */
  threadData->lastEquationSolved = 734;
}
void initializeSparsePatternNLS734(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS734(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS734(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS734(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS734(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS734(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS734(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS734(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS734(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */);
}


/* inner equations */

void residualFunc828(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,828};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc828: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 828).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc828 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = -4.761904761904762 + homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* val6.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3399]] /* val6.dp_nominal_pos PARAM */),"val6.dp_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 827;
  /* restore known outputs */
  threadData->lastEquationSolved = 828;
}
void initializeSparsePatternNLS828(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS828(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS828(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS828(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS828(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS828(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS828(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS828(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS828(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 851
type: SIMPLE_ASSIGN
tan.indTanHex.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val8Sto.m_flow, 0.09523809523809523, 1.4285714285714286), 525.0 * val8Sto.m_flow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */), 0.09523809523809523, 1.4285714285714286), (525.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */)));
  threadData->lastEquationSolved = 851;
}
/*
equation index: 852
type: SIMPLE_ASSIGN
val8_2.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 852;
}
/*
equation index: 853
type: SIMPLE_ASSIGN
val8.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 853;
}
/*
equation index: 854
type: SIMPLE_ASSIGN
val1.m_flow = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(val1.dp, val1.k, val1.m_flow_turbulent), 4.761904761904762 * val1.dp / val1.dp_nominal_pos)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1718]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3359]] /* val1.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */),"val1.dp_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 854;
}
/*
equation index: 855
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  threadData->lastEquationSolved = 855;
}
/*
equation index: 856
type: SIMPLE_ASSIGN
pumTanRet.m_flow = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(val8_2Rel.dp, val8_2Rel.k, val8_2Rel.m_flow_turbulent), 4.761904761904762 * val8_2Rel.dp / val8_2Rel.dp_nominal_pos)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* val8_2Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* val8_2Rel.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */),"val8_2Rel.dp_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 856;
}
/*
equation index: 857
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow = pumTanRet.m_flow + val8_2.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 857;
}
/*
equation index: 858
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow = (-val8.m_flow) - pumTanRet.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 858;
}
/*
equation index: 859
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = junCHWRet2.res1.m_flow - -4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) - (-4.761904761904762);
  threadData->lastEquationSolved = 859;
}
/*
equation index: 860
type: SIMPLE_ASSIGN
valByp.m_flow = val1.m_flow - junCHWRet.res1.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */);
  threadData->lastEquationSolved = 860;
}
/*
equation index: 861
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = junCHWSup2.res2.m_flow - 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) - 4.761904761904762;
  threadData->lastEquationSolved = 861;
}
/*
equation index: 862
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 862;
}
/*
equation index: 863
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, 0.015822115375908174, 0.4761904761904762), 19021.8 * cooCoi.m1_flow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */), 0.015822115375908174, 0.4761904761904762), (19021.8) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */)));
  threadData->lastEquationSolved = 863;
}
/*
equation index: 864
type: SIMPLE_ASSIGN
pumTanSup.port_a.p = junCHWRet.vol.p - val8_2Rel.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  threadData->lastEquationSolved = 864;
}
/*
equation index: 865
type: SIMPLE_ASSIGN
tan.vol[4].p = pumTanSup.port_a.p + pumTanCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 865;
}
/*
equation index: 866
type: SIMPLE_ASSIGN
pumTanRet.port_b.p = tan.vol[4].p + pumTanCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 866;
}
/*
equation index: 867
type: SIMPLE_ASSIGN
junCHWSup.vol.p = expVesCHW.p_start + cooCoi.ele[1].preDro1.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 867;
}
/*
equation index: 868
type: SIMPLE_ASSIGN
valByp.dp = junCHWRet.vol.p - junCHWSup.vol.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 868;
}
/*
equation index: 869
type: SIMPLE_ASSIGN
val8Rel.dp = pumTanRet.port_b.p - junCHWSup.vol.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 869;
}
/*
equation index: 870
type: SIMPLE_ASSIGN
chi2.vol2.p = junCHWSup.vol.p + val8.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  threadData->lastEquationSolved = 870;
}
/*
equation index: 871
type: SIMPLE_ASSIGN
val8_2.dp = junCHWRet.vol.p - pumCHW2.port_a.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 871;
}
/*
equation index: 872
type: SIMPLE_ASSIGN
pumCHW2.dpMachine = chi2.vol2.p - pumCHW2.port_a.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 872;
}
/*
equation index: 873
type: SIMPLE_ASSIGN
pumCHW2.dp = pumCHW2.port_a.p - chi2.vol2.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */);
  threadData->lastEquationSolved = 873;
}
/*
equation index: 874
type: SIMPLE_ASSIGN
val8Sto.dp = pumCHW2.dpMachine + chi2.vol2.p + pumCHW2.dp - tan.indTanHex.dp - pumCHW2.port_a.p - val8_2Sto.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */);
  threadData->lastEquationSolved = 874;
}

void residualFunc881(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,881};
  int i,j;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc881: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 881).vars[i]);
      for (j=0; j<6; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc881 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = xloc[3];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */) = xloc[4];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */) = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_851(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_852(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_853(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_854(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_855(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_856(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_857(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_858(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_859(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_860(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_861(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_862(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_863(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_864(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_865(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_866(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_867(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_868(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_869(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_870(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_871(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_872(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_873(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_874(data, threadData);
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* val8_2.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */),"val8_2.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 880;
  res[1] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* val8Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* val8Sto.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */),"val8Sto.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 879;
  res[2] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* val8_2Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* val8_2Sto.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */),"val8_2Sto.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 878;
  res[3] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* val8Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* val8Rel.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */),"val8Rel.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 877;
  res[4] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3595]] /* valByp.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 876;
  res[5] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* val8.m_flow_turbulent PARAM */)), DIVISION_SIM((4.761904761904762) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */),"val8.dp_nominal_pos",equationIndexes)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 875;
  /* restore known outputs */
  threadData->lastEquationSolved = 881;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS881(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,2,2,2,3,4,6};
  const int rowIndex[19] = {1,2,0,1,1,5,1,3,4,0,1,3,4,0,1,2,3,4,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(6, 19, 6);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 19*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {5};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {4};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 1 columns */
  const int indices_5[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 1 columns */
  const int indices_6[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
}

void freeSparsePatternNLS881(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS881(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS881(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val8_2Sto.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1780 /* val8_2Sto.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1780 /* val8_2Sto.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1780 /* val8_2Sto.dp */);
  /* static nls data for pumCHW2.port_a.p */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1104 /* pumCHW2.port_a.p */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1104 /* pumCHW2.port_a.p */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1104 /* pumCHW2.port_a.p */);
  /* static nls data for val8.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1748 /* val8.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1748 /* val8.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1748 /* val8.dp */);
  /* static nls data for val8_2Rel.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1774 /* val8_2Rel.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1774 /* val8_2Rel.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1774 /* val8_2Rel.dp */);
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
    initializeSparsePatternNLS881(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS881(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS881(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS881(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS881(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */);
  array[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  array[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */);
  array[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */);
  array[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  array[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
}


/* inner equations */

void residualFunc1292(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1292};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1292: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1292).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1292 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[945]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 1291;
  /* restore known outputs */
  threadData->lastEquationSolved = 1292;
}
void initializeSparsePatternNLS1292(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1292(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1292(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1292(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1292(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1292(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1292(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1292(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1292(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 1299
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val5.port_b.h_outflow, val5.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1299;
}
/*
equation index: 1300
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TCWLeaTow.port_b.h_outflow, val5.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 1300;
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
cooTow.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.setState_phX(cooTow.vol.p, val5.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 1301;
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
cooTow.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, val5.port_a.h_outflow, {1.0})
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 1302;
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1303;
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1304;
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 1305;
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 1306;
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k < -0.01) then cooTowFanCon.k else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) * ((12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) ^ 2.0 - 3.0) * (cooTowFanCon.k - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTowFanCon.k))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
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
  threadData->lastEquationSolved = 1307;
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTowFanCon.k - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 1308;
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
cooTow.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - val5.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1309;
}

void residualFunc1311(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1311};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1311: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1311).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1311 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1299(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1300(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1301(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1302(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1303(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1304(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1305(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1306(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1307(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1308(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1309(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 1310;
  /* restore known outputs */
  threadData->lastEquationSolved = 1311;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1311(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS1311(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS1311(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1311(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val5.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1311(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1311(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1311(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1311(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1311(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc1476(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1476};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1476: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1476).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1476 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */), 0.48541408508431333, 1.326699834162521), (56.305125) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */))) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 1475;
  /* restore known outputs */
  threadData->lastEquationSolved = 1476;
}
void initializeSparsePatternNLS1476(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS1476(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS1476(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1476(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1476(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1476(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1476(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1476(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1476(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */);
}


/* inner equations */

/*
equation index: 2862
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)",equationIndexes);
  threadData->lastEquationSolved = 2862;
}
/*
equation index: 2863
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 2863;
}

void residualFunc2869(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,2869};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc2869: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 2869).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc2869 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2862(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2863(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 2864;
  /* restore known outputs */
  threadData->lastEquationSolved = 2869;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS2869(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS2869(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS2869(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS2869(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS2869(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS2869(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS2869(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS2869(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS2869(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc3305(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3305};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3305: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3305).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3305 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1029]] /* cooTow2.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1027]] /* cooTow2.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1028]] /* cooTow2.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 3304;
  /* restore known outputs */
  threadData->lastEquationSolved = 3305;
}
void initializeSparsePatternNLS3305(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3305(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3305(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3305(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow2.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 1025 /* cooTow2.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3305(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3305(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3305(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3305(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3305(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1025]] /* cooTow2.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 3312
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val7.port_b.h_outflow, val7.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3312;
}
/*
equation index: 3313
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TWCLeaTow2.port_b.h_outflow, val7.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* TWCLeaTow2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3313;
}
/*
equation index: 3314
type: SIMPLE_ASSIGN
cooTow2.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.vol.Medium.temperature_phX(cooTow2.vol.p, val7.port_a.h_outflow, {1.0})
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3314};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 3314;
}
/*
equation index: 3315
type: SIMPLE_ASSIGN
cooTow2.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Water.setState_phX(cooTow2.vol.p, val7.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3315};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 3315;
}
/*
equation index: 3316
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.Hb_flow = cooTow2.vol.dynBal.ports_H_flow[1] + cooTow2.vol.dynBal.ports_H_flow[2]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 3316;
}
/*
equation index: 3317
type: SIMPLE_ASSIGN
cooTow2.vol.heatPort.Q_flow = $DER.cooTow2.vol.dynBal.U - cooTow2.vol.dynBal.Hb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 3317;
}
/*
equation index: 3318
type: SIMPLE_ASSIGN
cooTow2.TRan = cooTow2.T_a - cooTow2.T_b
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* cooTow2.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* cooTow2.T_b variable */);
  threadData->lastEquationSolved = 3318;
}
/*
equation index: 3319
type: SIMPLE_ASSIGN
cooTow2.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, smooth(1, if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k > 0.01) then 0.125 * cooTow2.FRWat else if noEvent(0.125 * cooTow2.FRWat - cooTowFanCon2.k < -0.01) then cooTowFanCon2.k else 0.25 * (12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) * ((12.5 * cooTow2.FRWat - 100.0 * cooTowFanCon2.k) ^ 2.0 - 3.0) * (cooTowFanCon2.k - 0.125 * cooTow2.FRWat) + 0.0625 * cooTow2.FRWat + 0.5 * cooTowFanCon2.k))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3319};
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
  threadData->lastEquationSolved = 3319;
}
/*
equation index: 3320
type: SIMPLE_ASSIGN
cooTow2.TAppFreCon = (1.0 - cooTow2.fraFreCon) * cooTow2.dTMax + cooTow2.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow2.TRan, weaBus.TWetBul, cooTow2.FRWat, 1.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* cooTow2.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1054]] /* cooTow2.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* cooTow2.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow2.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 3320;
}
/*
equation index: 3321
type: SIMPLE_ASSIGN
cooTow2.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow2.TAppCor, cooTow2.TAppFreCon, cooTowFanCon2.k - cooTow2.yMin + 0.05 * cooTow2.yMin, 0.05 * cooTow2.yMin)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow2.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* cooTow2.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1110]] /* cooTowFanCon2.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1108]] /* cooTow2.yMin PARAM */)));
  threadData->lastEquationSolved = 3321;
}
/*
equation index: 3322
type: SIMPLE_ASSIGN
cooTow2.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.setState_pTX(cooTow2.vol.p, weaBus.TWetBul + cooTow2.TAppAct, {})) - val7.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3322};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* cooTow2.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* val7.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 3322;
}

void residualFunc3324(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3324};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3324: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3324).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3324 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3312(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3313(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3314(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3315(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3316(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3317(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3318(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3319(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3320(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3321(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3322(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* cooTow2.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* cooTow2.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1076]] /* cooTow2.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* cooTow2.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1075]] /* cooTow2.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 3323;
  /* restore known outputs */
  threadData->lastEquationSolved = 3324;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3324(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3324(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3324(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3324(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val7.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1744 /* val7.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3324(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3324(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3324(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3324(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3324(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* val7.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc3548(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3548};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3548: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3548).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3548 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* cooTow.TRan_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* cooTow.TAirInWB_nominal PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */), 1.0) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[945]] /* cooTow.TApp_nominal PARAM */);
  threadData->lastEquationSolved = 3547;
  /* restore known outputs */
  threadData->lastEquationSolved = 3548;
}
void initializeSparsePatternNLS3548(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS3548(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS3548(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3548(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooTow.FRWat0 */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_PARAMETER, 942 /* cooTow.FRWat0 */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3548(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3548(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3548(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3548(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3548(DATA* data, double *array)
{
  array[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[942]] /* cooTow.FRWat0 PARAM */);
}


/* inner equations */

/*
equation index: 3555
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[1] = semiLinear(15.873015873015873, val5.port_b.h_outflow, val5.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) = semiLinear(15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3555;
}
/*
equation index: 3556
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.ports_H_flow[2] = semiLinear(-15.873015873015873, TCWLeaTow.port_b.h_outflow, val5.port_a.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */) = semiLinear(-15.873015873015873, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* TCWLeaTow.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 3556;
}
/*
equation index: 3557
type: SIMPLE_ASSIGN
cooTow.TLvg = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.vol.Medium.temperature_phX(cooTow.vol.p, val5.port_a.h_outflow, {1.0})
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3557};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 1, (modelica_real)1.0);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0);
  threadData->lastEquationSolved = 3557;
}
/*
equation index: 3558
type: SIMPLE_ASSIGN
cooTow.T_b = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.temperature(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Water.setState_phX(cooTow.vol.p, val5.port_a.h_outflow, {}))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3558};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_temperature(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Water_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */), tmp0));
  threadData->lastEquationSolved = 3558;
}
/*
equation index: 3559
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.Hb_flow = cooTow.vol.dynBal.ports_H_flow[1] + cooTow.vol.dynBal.ports_H_flow[2]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* cooTow.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 3559;
}
/*
equation index: 3560
type: SIMPLE_ASSIGN
cooTow.vol.heatPort.Q_flow = $DER.cooTow.vol.dynBal.U - cooTow.vol.dynBal.Hb_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(cooTow.vol.dynBal.U) STATE_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* cooTow.vol.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 3560;
}
/*
equation index: 3561
type: SIMPLE_ASSIGN
cooTow.TRan = cooTow.T_a - cooTow.T_b
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* cooTow.T_a variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* cooTow.T_b variable */);
  threadData->lastEquationSolved = 3561;
}
/*
equation index: 3562
type: SIMPLE_ASSIGN
cooTow.TAppCor = Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, smooth(1, if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k > 0.01) then 0.125 * cooTow.FRWat else if noEvent(0.125 * cooTow.FRWat - cooTowFanCon.k < -0.01) then cooTowFanCon.k else 0.25 * (12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) * ((12.5 * cooTow.FRWat - 100.0 * cooTowFanCon.k) ^ 2.0 - 3.0) * (cooTowFanCon.k - 0.125 * cooTow.FRWat) + 0.0625 * cooTow.FRWat + 0.5 * cooTowFanCon.k))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3562};
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
  threadData->lastEquationSolved = 3562;
}
/*
equation index: 3563
type: SIMPLE_ASSIGN
cooTow.TAppFreCon = (1.0 - cooTow.fraFreCon) * cooTow.dTMax + cooTow.fraFreCon * Buildings.Fluid.HeatExchangers.CoolingTowers.Correlations.yorkCalc(cooTow.TRan, weaBus.TWetBul, cooTow.FRWat, 1.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */) = (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* cooTow.dTMax variable */)) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* cooTow.fraFreCon PARAM */)) * (omc_Buildings_Fluid_HeatExchangers_CoolingTowers_Correlations_yorkCalc(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* cooTow.TRan variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooTow.FRWat variable */), 1.0));
  threadData->lastEquationSolved = 3563;
}
/*
equation index: 3564
type: SIMPLE_ASSIGN
cooTow.TAppAct = Buildings.Utilities.Math.Functions.spliceFunction(cooTow.TAppCor, cooTow.TAppFreCon, cooTowFanCon.k - cooTow.yMin + 0.05 * cooTow.yMin, 0.05 * cooTow.yMin)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */) = omc_Buildings_Utilities_Math_Functions_spliceFunction(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* cooTow.TAppCor variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* cooTow.TAppFreCon variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1109]] /* cooTowFanCon.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */) + (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)), (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1024]] /* cooTow.yMin PARAM */)));
  threadData->lastEquationSolved = 3564;
}
/*
equation index: 3565
type: SIMPLE_ASSIGN
cooTow.Q_flow = 15.873015873015873 * (WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.specificEnthalpy(WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.setState_pTX(cooTow.vol.p, weaBus.TWetBul + cooTow.TAppAct, {})) - val5.port_b.h_outflow)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3565};
  base_array_t tmp0;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */) = (15.873015873015873) * (omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_specificEnthalpy(threadData, omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* cooTow.TAppAct variable */), tmp0)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* val5.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 3565;
}

void residualFunc3567(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,3567};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc3567: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 3567).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc3567 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3555(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3556(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3557(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3558(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3559(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3560(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3561(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3562(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3563(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3564(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3565(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.heatPort.Q_flow variable */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* cooTow.Q_flow variable */)) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* cooTow.preHea.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* cooTow.TLvg variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* cooTow.preHea.T_ref PARAM */))));
  threadData->lastEquationSolved = 3566;
  /* restore known outputs */
  threadData->lastEquationSolved = 3567;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS3567(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS3567(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS3567(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS3567(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val5.port_a.h_outflow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1728 /* val5.port_a.h_outflow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS3567(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS3567(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS3567(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS3567(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS3567(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* val5.port_a.h_outflow DUMMY_STATE */);
}


/* inner equations */

void residualFunc4398(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4398};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4398: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4398).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4398 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = -4.761904761904762 + omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* val6.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3406]] /* val6.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 4397;
  /* restore known outputs */
  threadData->lastEquationSolved = 4398;
}
void initializeSparsePatternNLS4398(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4398(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4398(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4398(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for val6.dp */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1732 /* val6.dp */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4398(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4398(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4398(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4398(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4398(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* val6.dp variable */);
}


/* inner equations */

/*
equation index: 4474
type: SIMPLE_ASSIGN
$cse41 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $cse41 variable */) = exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719",equationIndexes) - 17.2799);
  threadData->lastEquationSolved = 4474;
}
/*
equation index: 4475
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat = 0.621964713077499 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */) = DIVISION_SIM(0.621964713077499,-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $cse41 variable */))),"-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41",equationIndexes);
  threadData->lastEquationSolved = 4475;
}
/*
equation index: 4476
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat / (1.0 - weaData.tWetBul_TDryBulXi.XiSat)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */) = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */),"1.0 - weaData.tWetBul_TDryBulXi.XiSat",equationIndexes));
  threadData->lastEquationSolved = 4476;
}

void residualFunc4483(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4483};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4483: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4483).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4483 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4474(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4475(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4476(data, threadData);
  /* body */
  res[0] = (2.5010145e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (-273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */))) + (273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)));
  threadData->lastEquationSolved = 4477;
  /* restore known outputs */
  threadData->lastEquationSolved = 4483;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS4483(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS4483(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS4483(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS4483(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for weaBus.TWetBul */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 1825 /* weaBus.TWetBul */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4483(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4483(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4483(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4483(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4483(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
}


/* inner equations */

void residualFunc4541(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4541};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4541: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4541).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4541 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* damEA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* damEA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* damEA.dp variable */);
  threadData->lastEquationSolved = 4540;
  /* restore known outputs */
  threadData->lastEquationSolved = 4541;
}
void initializeSparsePatternNLS4541(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4541(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4541(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4541(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damEA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 793 /* damEA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4541(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4541(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4541(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4541(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4541(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* damEA.m_flow variable */);
}


/* inner equations */

void residualFunc4571(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4571};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4571: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4571).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4571 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* damOA.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* damOA.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* damOA.dp variable */);
  threadData->lastEquationSolved = 4570;
  /* restore known outputs */
  threadData->lastEquationSolved = 4571;
}
void initializeSparsePatternNLS4571(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4571(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4571(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4571(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damOA.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 796 /* damOA.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4571(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4571(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4571(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4571(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4571(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* damOA.m_flow variable */);
}


/* inner equations */

void residualFunc4576(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4576};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4576: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4576).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4576 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* damRet.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damRet.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* damRet.dp variable */);
  threadData->lastEquationSolved = 4575;
  /* restore known outputs */
  threadData->lastEquationSolved = 4576;
}
void initializeSparsePatternNLS4576(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS4576(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS4576(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4576(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for damRet.m_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 800 /* damRet.m_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS4576(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4576(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4576(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4576(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4576(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* damRet.m_flow variable */);
}


/* inner equations */

/*
equation index: 4728
type: SIMPLE_ASSIGN
tan.indTanHex.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val8Sto.m_flow, 0.09523809523809523, 1.4285714285714286)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */), 0.09523809523809523, 1.4285714285714286);
  threadData->lastEquationSolved = 4728;
}
/*
equation index: 4729
type: SIMPLE_ASSIGN
val8_2.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4729;
}
/*
equation index: 4730
type: SIMPLE_ASSIGN
val8.m_flow = 4.761904761904762 - val8Sto.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */) = 4.761904761904762 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4730;
}
/*
equation index: 4731
type: SIMPLE_ASSIGN
val1.m_flow = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(val1.dp, val1.k, val1.m_flow_turbulent)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1718]] /* val1.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3359]] /* val1.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 4731;
}
/*
equation index: 4732
type: SIMPLE_ASSIGN
junCHWRet.vol.p = expVesCHW.p_start - val1.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1717]] /* val1.dp variable */);
  threadData->lastEquationSolved = 4732;
}
/*
equation index: 4733
type: SIMPLE_ASSIGN
valByp.m_flow = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_dp(valByp.dp, valByp.k, valByp.m_flow_turbulent)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* valByp.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3595]] /* valByp.m_flow_turbulent PARAM */));
  threadData->lastEquationSolved = 4733;
}
/*
equation index: 4734
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow = val1.m_flow - valByp.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1720]] /* val1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */);
  threadData->lastEquationSolved = 4734;
}
/*
equation index: 4735
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow = -4.761904761904762 + junCHWRet.res1.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) = -4.761904761904762 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* junCHWRet.res1.m_flow variable */);
  threadData->lastEquationSolved = 4735;
}
/*
equation index: 4736
type: SIMPLE_ASSIGN
pumTanRet.m_flow = junCHWRet2.res1.m_flow - val8_2.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* junCHWRet2.res1.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 4736;
}
/*
equation index: 4737
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow = (-val8.m_flow) - pumTanRet.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 4737;
}
/*
equation index: 4738
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow = junCHWSup2.res2.m_flow - 4.761904761904762
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* junCHWSup2.res2.m_flow variable */) - 4.761904761904762;
  threadData->lastEquationSolved = 4738;
}
/*
equation index: 4739
type: SIMPLE_ASSIGN
cooCoi.m1_flow = valByp.m_flow - junCHWSup.res2.m_flow
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* valByp.m_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* junCHWSup.res2.m_flow variable */);
  threadData->lastEquationSolved = 4739;
}
/*
equation index: 4740
type: SIMPLE_ASSIGN
cooCoi.ele[1].preDro1.dp = Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(cooCoi.m1_flow, 0.015822115375908174, 0.4761904761904762)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */) = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* cooCoi.m1_flow variable */), 0.015822115375908174, 0.4761904761904762);
  threadData->lastEquationSolved = 4740;
}
/*
equation index: 4741
type: SIMPLE_ASSIGN
junCHWSup.vol.p = junCHWRet.vol.p - valByp.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1787]] /* valByp.dp variable */);
  threadData->lastEquationSolved = 4741;
}
/*
equation index: 4742
type: SIMPLE_ASSIGN
pumTanRet.port_b.p = junCHWSup.vol.p + val8Rel.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */);
  threadData->lastEquationSolved = 4742;
}
/*
equation index: 4743
type: SIMPLE_ASSIGN
tan.vol[4].p = pumTanRet.port_b.p - pumTanCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* pumTanRet.port_b.p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 4743;
}
/*
equation index: 4744
type: SIMPLE_ASSIGN
pumTanSup.port_a.p = tan.vol[4].p - pumTanCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1706]] /* tan.vol[4].p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2577]] /* pumTanCon.k PARAM */);
  threadData->lastEquationSolved = 4744;
}
/*
equation index: 4745
type: SIMPLE_ASSIGN
val8_2Rel.dp = junCHWRet.vol.p - pumTanSup.port_a.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* pumTanSup.port_a.p variable */);
  threadData->lastEquationSolved = 4745;
}
/*
equation index: 4746
type: SIMPLE_ASSIGN
pumCHW2.port_a.p = junCHWRet.vol.p - val8_2.dp
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* junCHWRet.vol.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */);
  threadData->lastEquationSolved = 4746;
}
/*
equation index: 4747
type: SIMPLE_ASSIGN
val8.dp = chi2.vol2.p - junCHWSup.vol.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */);
  threadData->lastEquationSolved = 4747;
}
/*
equation index: 4748
type: SIMPLE_ASSIGN
pumCHW2.dpMachine = chi2.vol2.p - pumCHW2.port_a.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 4748;
}
/*
equation index: 4749
type: SIMPLE_ASSIGN
pumCHW2.dp = pumCHW2.port_a.p - chi2.vol2.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */);
  threadData->lastEquationSolved = 4749;
}
/*
equation index: 4750
type: SIMPLE_ASSIGN
val8_2Sto.dp = pumCHW2.dpMachine + chi2.vol2.p + pumCHW2.dp - tan.indTanHex.dp - val8Sto.dp - pumCHW2.port_a.p
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* pumCHW2.dpMachine variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.p variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* pumCHW2.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* tan.indTanHex.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* pumCHW2.port_a.p variable */);
  threadData->lastEquationSolved = 4750;
}

void residualFunc4758(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,4758};
  int i,j;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc4758: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 4758).vars[i]);
      for (j=0; j<7; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc4758 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
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
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4728(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4729(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4730(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4731(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4732(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4733(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4734(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4735(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4736(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4737(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4738(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4739(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4740(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4741(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4742(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4743(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4744(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4745(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4746(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4747(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4748(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4749(data, threadData);
  /* local constraints */
  WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4750(data, threadData);
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1774]] /* val8_2Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1775]] /* val8_2Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3547]] /* val8_2Rel.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 4757;
  res[1] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* val8_2Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1781]] /* val8_2Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3570]] /* val8_2Sto.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4756;
  res[2] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1761]] /* val8Sto.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1762]] /* val8Sto.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3501]] /* val8Sto.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1764]] /* val8Sto.m_flow variable */);
  threadData->lastEquationSolved = 4755;
  res[3] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* val8.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* val8.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3454]] /* val8.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1751]] /* val8.m_flow variable */);
  threadData->lastEquationSolved = 4754;
  res[4] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1768]] /* val8_2.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1769]] /* val8_2.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3524]] /* val8_2.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1771]] /* val8_2.m_flow variable */);
  threadData->lastEquationSolved = 4753;
  res[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* junCHWSup.vol.p variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* expVesCHW.p_start PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* cooCoi.ele[1].preDro1.dp variable */);
  threadData->lastEquationSolved = 4752;
  res[6] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__dp(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1754]] /* val8Rel.dp variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1755]] /* val8Rel.k variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3478]] /* val8Rel.m_flow_turbulent PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* pumTanRet.m_flow variable */);
  threadData->lastEquationSolved = 4751;
  /* restore known outputs */
  threadData->lastEquationSolved = 4758;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS4758(NONLINEAR_SYSTEM_DATA* inSysData)
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

void freeSparsePatternNLS4758(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS4758(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS4758(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
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
    initializeSparsePatternNLS4758(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS4758(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS4758(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS4758(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS4758(DATA* data, double *array)
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

void residualFunc5370(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,5370};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc5370: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 5370).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc5370 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */), 0.48541408508431333, 1.326699834162521) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* cooCoi.dp2 variable */);
  threadData->lastEquationSolved = 5369;
  /* restore known outputs */
  threadData->lastEquationSolved = 5370;
}
void initializeSparsePatternNLS5370(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = FALSE;
}

void freeSparsePatternNLS5370(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* nothing to free */
}
void initializeNonlinearPatternNLS5370(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS5370(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for cooCoi.m2_flow */
  sysData->nominal[i] = getNominalFromScalarIdx(data->simulationInfo, data->modelData, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->min[i]     = getMinFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  sysData->max[i++]   = getMaxFromScalarIdx(data->simulationInfo, data->modelData, VAR_TYPE_REAL, VAR_KIND_VARIABLE, 678 /* cooCoi.m2_flow */);
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS5370(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS5370(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS5370(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS5370(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS5370(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* cooCoi.m2_flow variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void WaterCooledChillerExample_WaterCooledChillerExample7_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[22].equationIndex = 5370;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0 /* false */;
  nonLinearSystemData[22].mixedSystem = 0 /* false */;
  nonLinearSystemData[22].residualFunc = residualFunc5370;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS5370;
  nonLinearSystemData[22].freeStaticNLSData = freeStaticDataNLS5370;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS5370;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  const int tmp_eqn_indices_22[1] = {5369};
  nonLinearSystemData[22].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[22].eqn_simcode_indices, tmp_eqn_indices_22, 1 * sizeof(int));
  nonLinearSystemData[22].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[21].equationIndex = 4758;
  nonLinearSystemData[21].size = 7;
  nonLinearSystemData[21].homotopySupport = 0 /* false */;
  nonLinearSystemData[21].mixedSystem = 0 /* false */;
  nonLinearSystemData[21].residualFunc = residualFunc4758;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = NULL;
  nonLinearSystemData[21].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[21].jacobianIndex = -1;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS4758;
  nonLinearSystemData[21].freeStaticNLSData = freeStaticDataNLS4758;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS4758;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  const int tmp_eqn_indices_21[30] = {4728, 4729, 4730, 4731, 4732, 4733, 4734, 4735, 4736, 4737, 4738, 4739, 4740, 4741, 4742, 4743, 4744, 4745, 4746, 4747, 4748, 4749, 4750, 4757, 4756, 4755, 4754, 4753, 4752, 4751};
  nonLinearSystemData[21].eqn_simcode_indices = malloc(30 * sizeof(int));
  memcpy(nonLinearSystemData[21].eqn_simcode_indices, tmp_eqn_indices_21, 30 * sizeof(int));
  nonLinearSystemData[21].torn_plus_residual_size = 30;
  
  
  nonLinearSystemData[20].equationIndex = 4576;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0 /* false */;
  nonLinearSystemData[20].mixedSystem = 0 /* false */;
  nonLinearSystemData[20].residualFunc = residualFunc4576;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS4576;
  nonLinearSystemData[20].freeStaticNLSData = freeStaticDataNLS4576;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS4576;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  const int tmp_eqn_indices_20[1] = {4575};
  nonLinearSystemData[20].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[20].eqn_simcode_indices, tmp_eqn_indices_20, 1 * sizeof(int));
  nonLinearSystemData[20].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[19].equationIndex = 4571;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0 /* false */;
  nonLinearSystemData[19].mixedSystem = 0 /* false */;
  nonLinearSystemData[19].residualFunc = residualFunc4571;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = NULL;
  nonLinearSystemData[19].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[19].jacobianIndex = -1;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS4571;
  nonLinearSystemData[19].freeStaticNLSData = freeStaticDataNLS4571;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS4571;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  const int tmp_eqn_indices_19[1] = {4570};
  nonLinearSystemData[19].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[19].eqn_simcode_indices, tmp_eqn_indices_19, 1 * sizeof(int));
  nonLinearSystemData[19].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[18].equationIndex = 4541;
  nonLinearSystemData[18].size = 1;
  nonLinearSystemData[18].homotopySupport = 0 /* false */;
  nonLinearSystemData[18].mixedSystem = 0 /* false */;
  nonLinearSystemData[18].residualFunc = residualFunc4541;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = NULL;
  nonLinearSystemData[18].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[18].jacobianIndex = -1;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS4541;
  nonLinearSystemData[18].freeStaticNLSData = freeStaticDataNLS4541;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS4541;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  const int tmp_eqn_indices_18[1] = {4540};
  nonLinearSystemData[18].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[18].eqn_simcode_indices, tmp_eqn_indices_18, 1 * sizeof(int));
  nonLinearSystemData[18].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[17].equationIndex = 4483;
  nonLinearSystemData[17].size = 1;
  nonLinearSystemData[17].homotopySupport = 0 /* false */;
  nonLinearSystemData[17].mixedSystem = 0 /* false */;
  nonLinearSystemData[17].residualFunc = residualFunc4483;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac22_column;
  nonLinearSystemData[17].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac22;
  nonLinearSystemData[17].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS4483;
  nonLinearSystemData[17].freeStaticNLSData = freeStaticDataNLS4483;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS4483;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  const int tmp_eqn_indices_17[4] = {4474, 4475, 4476, 4477};
  nonLinearSystemData[17].eqn_simcode_indices = malloc(4 * sizeof(int));
  memcpy(nonLinearSystemData[17].eqn_simcode_indices, tmp_eqn_indices_17, 4 * sizeof(int));
  nonLinearSystemData[17].torn_plus_residual_size = 4;
  
  
  nonLinearSystemData[16].equationIndex = 4398;
  nonLinearSystemData[16].size = 1;
  nonLinearSystemData[16].homotopySupport = 0 /* false */;
  nonLinearSystemData[16].mixedSystem = 0 /* false */;
  nonLinearSystemData[16].residualFunc = residualFunc4398;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS4398;
  nonLinearSystemData[16].freeStaticNLSData = freeStaticDataNLS4398;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS4398;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  const int tmp_eqn_indices_16[1] = {4397};
  nonLinearSystemData[16].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[16].eqn_simcode_indices, tmp_eqn_indices_16, 1 * sizeof(int));
  nonLinearSystemData[16].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[15].equationIndex = 3567;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0 /* false */;
  nonLinearSystemData[15].mixedSystem = 0 /* false */;
  nonLinearSystemData[15].residualFunc = residualFunc3567;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS3567;
  nonLinearSystemData[15].freeStaticNLSData = freeStaticDataNLS3567;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS3567;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  const int tmp_eqn_indices_15[12] = {3555, 3556, 3557, 3558, 3559, 3560, 3561, 3562, 3563, 3564, 3565, 3566};
  nonLinearSystemData[15].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[15].eqn_simcode_indices, tmp_eqn_indices_15, 12 * sizeof(int));
  nonLinearSystemData[15].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[14].equationIndex = 3548;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0 /* false */;
  nonLinearSystemData[14].mixedSystem = 0 /* false */;
  nonLinearSystemData[14].residualFunc = residualFunc3548;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS3548;
  nonLinearSystemData[14].freeStaticNLSData = freeStaticDataNLS3548;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS3548;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  const int tmp_eqn_indices_14[1] = {3547};
  nonLinearSystemData[14].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[14].eqn_simcode_indices, tmp_eqn_indices_14, 1 * sizeof(int));
  nonLinearSystemData[14].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[13].equationIndex = 3324;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0 /* false */;
  nonLinearSystemData[13].mixedSystem = 0 /* false */;
  nonLinearSystemData[13].residualFunc = residualFunc3324;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = NULL;
  nonLinearSystemData[13].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[13].jacobianIndex = -1;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS3324;
  nonLinearSystemData[13].freeStaticNLSData = freeStaticDataNLS3324;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS3324;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  const int tmp_eqn_indices_13[12] = {3312, 3313, 3314, 3315, 3316, 3317, 3318, 3319, 3320, 3321, 3322, 3323};
  nonLinearSystemData[13].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[13].eqn_simcode_indices, tmp_eqn_indices_13, 12 * sizeof(int));
  nonLinearSystemData[13].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[12].equationIndex = 3305;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 0 /* false */;
  nonLinearSystemData[12].mixedSystem = 0 /* false */;
  nonLinearSystemData[12].residualFunc = residualFunc3305;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS3305;
  nonLinearSystemData[12].freeStaticNLSData = freeStaticDataNLS3305;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS3305;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  const int tmp_eqn_indices_12[1] = {3304};
  nonLinearSystemData[12].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[12].eqn_simcode_indices, tmp_eqn_indices_12, 1 * sizeof(int));
  nonLinearSystemData[12].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[11].equationIndex = 2869;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0 /* false */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc2869;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac14_column;
  nonLinearSystemData[11].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac14;
  nonLinearSystemData[11].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS2869;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS2869;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS2869;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[3] = {2862, 2863, 2864};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 3 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 3;
  
  
  nonLinearSystemData[10].equationIndex = 1476;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 1 /* true */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc1476;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS1476;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS1476;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS1476;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[1] = {1475};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 1 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[9].equationIndex = 1311;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0 /* false */;
  nonLinearSystemData[9].mixedSystem = 0 /* false */;
  nonLinearSystemData[9].residualFunc = residualFunc1311;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS1311;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS1311;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS1311;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[12] = {1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 12 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[8].equationIndex = 1292;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0 /* false */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc1292;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS1292;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS1292;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS1292;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[1] = {1291};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 1 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[7].equationIndex = 881;
  nonLinearSystemData[7].size = 6;
  nonLinearSystemData[7].homotopySupport = 1 /* true */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc881;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS881;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS881;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS881;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[30] = {851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 880, 879, 878, 877, 876, 875};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(30 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 30 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 30;
  
  
  nonLinearSystemData[6].equationIndex = 828;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 1 /* true */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc828;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS828;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS828;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS828;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[1] = {827};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 1 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[5].equationIndex = 734;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 1 /* true */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc734;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS734;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS734;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS734;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[1] = {733};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 1 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[4].equationIndex = 730;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1 /* true */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc730;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS730;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS730;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS730;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[1] = {729};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 1 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[3].equationIndex = 707;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 1 /* true */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc707;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS707;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS707;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS707;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[1] = {706};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 1 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[2].equationIndex = 669;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0 /* false */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc669;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS669;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS669;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS669;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[12] = {657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(12 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 12 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 12;
  
  
  nonLinearSystemData[1].equationIndex = 650;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc650;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS650;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS650;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS650;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[1] = {649};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(1 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 1 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 1;
  
  
  nonLinearSystemData[0].equationIndex = 410;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc410;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS410;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS410;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS410;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[3] = {403, 404, 405};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(3 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 3 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 3;
}

#if defined(__cplusplus)
}
#endif
