/* Jacobians 17 */
#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#include "WaterCooledChillerExample.WaterCooledChillerExample7_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 406
type: SIMPLE_ASSIGN
$cse1 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_406(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,406};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 406;
}

/*
equation index: 407
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 = 4.172134052434367 * weaData.pAtm * $cse1 * weaBus.TWetBul.SeedNLSJac0 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_407(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,407};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 407;
}

/*
equation index: 408
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_408(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,408};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 408;
}

/*
equation index: 409
type: SIMPLE_ASSIGN
$res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 - weaBus.TWetBul.SeedNLSJac0 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_409(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,409};
  jacobian->resultVars[0] /* $res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 409;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac0;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac0;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_406,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_407,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_408,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_409
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 4; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacNLSJac0_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {406, 407, 408, 409};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1034
type: SIMPLE_ASSIGN
tan.conWal.3.Q_flow.$pDERLSJac8.dummyVarLSJac8 = (-tan.conWal[3].G) * tan.heaPorSid.T.SeedLSJac8
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1034(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1034};
  jacobian->tmpVars[5] /* tan.conWal.3.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac8 SEED_VAR */);
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
tan.conWal.2.Q_flow.$pDERLSJac8.dummyVarLSJac8 = (-tan.conWal[2].G) * tan.heaPorSid.T.SeedLSJac8
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1035(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1035};
  jacobian->tmpVars[3] /* tan.conWal.2.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac8 SEED_VAR */);
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
tan.conWal.1.Q_flow.$pDERLSJac8.dummyVarLSJac8 = (-tan.conWal[1].G) * tan.heaPorSid.T.SeedLSJac8
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1036(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1036};
  jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac8 SEED_VAR */);
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
tan.conWal.4.Q_flow.$pDERLSJac8.dummyVarLSJac8 = (-tan.conWal.1.Q_flow.$pDERLSJac8.dummyVarLSJac8) - tan.conWal.2.Q_flow.$pDERLSJac8.dummyVarLSJac8 - tan.conWal.3.Q_flow.$pDERLSJac8.dummyVarLSJac8
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1037(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1037};
  jacobian->tmpVars[6] /* tan.conWal.4.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[3] /* tan.conWal.2.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[5] /* tan.conWal.3.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
tan.conWal.4.dT.$pDERLSJac8.dummyVarLSJac8 = tan.conWal.4.Q_flow.$pDERLSJac8.dummyVarLSJac8 / tan.conWal[4].G
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1038(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1038};
  jacobian->tmpVars[7] /* tan.conWal.4.dT.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* tan.conWal.4.Q_flow.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */),"tan.conWal[4].G");
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
$res_LSJac8_1.$pDERLSJac8.dummyVarLSJac8 = (-tan.heaPorSid.T.SeedLSJac8) - tan.conWal.4.dT.$pDERLSJac8.dummyVarLSJac8
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1039(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1039};
  jacobian->resultVars[0] /* $res_LSJac8_1.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac8 SEED_VAR */) - jacobian->tmpVars[7] /* tan.conWal.4.dT.$pDERLSJac8.dummyVarLSJac8 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1039;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac8_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac8;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac8_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac8;
  
  static void (*const eqFunctions[6])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1034,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1035,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1036,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1037,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1038,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1039
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 6; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac8_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1034, 1035, 1036, 1037, 1038, 1039};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1493
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac12.dummyVarLSJac12 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1493(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1493};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12) SEED_VAR */));
  threadData->lastEquationSolved = 1493;
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1494(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1494};
  jacobian->tmpVars[2] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12) SEED_VAR */));
  threadData->lastEquationSolved = 1494;
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1495(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1495};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12) SEED_VAR */));
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1496(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1496};
  jacobian->tmpVars[0] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac12) SEED_VAR */));
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac12.dummyVarLSJac12 = cooCoi.ele.3.m2_flow.$pDERLSJac12.dummyVarLSJac12 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1497(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1497};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac12.dummyVarLSJac12 = cooCoi.ele.2.m2_flow.$pDERLSJac12.dummyVarLSJac12 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1498(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1498};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
$res_LSJac12_1.$pDERLSJac12.dummyVarLSJac12 = cooCoi.ele.1.m2_flow.$pDERLSJac12.dummyVarLSJac12 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1499(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1499};
  jacobian->resultVars[0] /* $res_LSJac12_1.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac12.dummyVarLSJac12 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1499;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac12_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac12;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac12_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac12;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1493,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1494,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1495,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1496,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1497,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1498,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1499
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 7; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac12_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1493, 1494, 1495, 1496, 1497, 1498, 1499};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 2580
type: SIMPLE_ASSIGN
val8Rel.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-pumTanRet.m_flow.SeedLSJac13) * val8Rel.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2580(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2580};
  jacobian->tmpVars[10] /* val8Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2580;
}

/*
equation index: 2581
type: SIMPLE_ASSIGN
tan.vol.4.p.$pDERLSJac13.dummyVarLSJac13 = junCHWSup.vol.p.SeedLSJac13 + val8Rel.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2581(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2581};
  jacobian->tmpVars[15] /* tan.vol.4.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[0] /* junCHWSup.vol.p.SeedLSJac13 SEED_VAR */ + jacobian->tmpVars[10] /* val8Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2581;
}

/*
equation index: 2582
type: SIMPLE_ASSIGN
val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-pumTanRet.m_flow.SeedLSJac13) * val8_2Rel.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2582(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2582};
  jacobian->tmpVars[9] /* val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2582;
}

/*
equation index: 2583
type: SIMPLE_ASSIGN
junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 = tan.vol.4.p.$pDERLSJac13.dummyVarLSJac13 + val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2583(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2583};
  jacobian->tmpVars[17] /* junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[15] /* tan.vol.4.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[9] /* val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2583;
}

/*
equation index: 2584
type: SIMPLE_ASSIGN
valByp.dp.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 - junCHWSup.vol.p.SeedLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2584(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,2584};
  jacobian->tmpVars[21] /* valByp.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[17] /* junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->seedVars[0] /* junCHWSup.vol.p.SeedLSJac13 SEED_VAR */;
  threadData->lastEquationSolved = 2584;
}

/*
equation index: 2585
type: SIMPLE_ASSIGN
valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 = 4.761904761904762 * valByp.dp.$pDERLSJac13.dummyVarLSJac13 / valByp.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2585(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,2585};
  jacobian->tmpVars[22] /* valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (4.761904761904762) * (DIVISION(jacobian->tmpVars[21] /* valByp.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos"));
  threadData->lastEquationSolved = 2585;
}

/*
equation index: 2586
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 = pumTanRet.m_flow.SeedLSJac13 - val8Sto.m_flow.SeedLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2586(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,2586};
  jacobian->tmpVars[12] /* junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */ - jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */;
  threadData->lastEquationSolved = 2586;
}

/*
equation index: 2587
type: SIMPLE_ASSIGN
val1.m_flow.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 + valByp.m_flow.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2587(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,2587};
  jacobian->tmpVars[24] /* val1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[12] /* junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[22] /* valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2587;
}

/*
equation index: 2588
type: SIMPLE_ASSIGN
val1.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-val1.m_flow.$pDERLSJac13.dummyVarLSJac13) * val1.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2588(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,2588};
  jacobian->tmpVars[26] /* val1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->tmpVars[24] /* val1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2588;
}

/*
equation index: 2589
type: SIMPLE_ASSIGN
$res_LSJac13_1.$pDERLSJac13.dummyVarLSJac13 = (-junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13) - val1.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2589(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,2589};
  jacobian->resultVars[0] /* $res_LSJac13_1.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_VAR */ = (-jacobian->tmpVars[17] /* junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[26] /* val1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2589;
}

/*
equation index: 2590
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13 = val8Sto.m_flow.SeedLSJac13 - pumTanRet.m_flow.SeedLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2590(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,2590};
  jacobian->tmpVars[11] /* junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */ - jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */;
  threadData->lastEquationSolved = 2590;
}

/*
equation index: 2591
type: SIMPLE_ASSIGN
cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13 = valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 - junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2591(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,2591};
  jacobian->tmpVars[23] /* cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[22] /* valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[11] /* junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2591;
}

/*
equation index: 2592
type: SIMPLE_ASSIGN
cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13 = 19021.8 * cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2592(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,2592};
  jacobian->tmpVars[25] /* cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (19021.8) * (jacobian->tmpVars[23] /* cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 2592;
}

/*
equation index: 2593
type: SIMPLE_ASSIGN
$res_LSJac13_3.$pDERLSJac13.dummyVarLSJac13 = junCHWSup.vol.p.SeedLSJac13 - cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2593(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,2593};
  jacobian->resultVars[2] /* $res_LSJac13_3.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_VAR */ = jacobian->seedVars[0] /* junCHWSup.vol.p.SeedLSJac13 SEED_VAR */ - jacobian->tmpVars[25] /* cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2593;
}

/*
equation index: 2594
type: SIMPLE_ASSIGN
val8.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * val8Sto.m_flow.SeedLSJac13 * val8.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2594(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,2594};
  jacobian->tmpVars[6] /* val8.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * ((jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2594;
}

/*
equation index: 2595
type: SIMPLE_ASSIGN
chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 = junCHWSup.vol.p.SeedLSJac13 + val8.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2595(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,2595};
  jacobian->tmpVars[14] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[0] /* junCHWSup.vol.p.SeedLSJac13 SEED_VAR */ + jacobian->tmpVars[6] /* val8.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2595;
}

/*
equation index: 2596
type: SIMPLE_ASSIGN
val8_2.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * val8Sto.m_flow.SeedLSJac13 * val8_2.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2596(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,2596};
  jacobian->tmpVars[4] /* val8_2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * ((jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2596;
}

/*
equation index: 2597
type: SIMPLE_ASSIGN
pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 - val8_2.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2597(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,2597};
  jacobian->tmpVars[18] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[17] /* junCHWRet.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[4] /* val8_2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2597;
}

/*
equation index: 2598
type: SIMPLE_ASSIGN
pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 = chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 - pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2598(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,2598};
  jacobian->tmpVars[19] /* pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[14] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[18] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2598;
}

/*
equation index: 2599
type: SIMPLE_ASSIGN
val8Sto.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-val8Sto.m_flow.SeedLSJac13) * val8Sto.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2599(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,2599};
  jacobian->tmpVars[2] /* val8Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2599;
}

/*
equation index: 2600
type: SIMPLE_ASSIGN
val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-val8Sto.m_flow.SeedLSJac13) * val8_2Sto.dp_nominal_pos
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2600(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,2600};
  jacobian->tmpVars[1] /* val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2600;
}

/*
equation index: 2601
type: SIMPLE_ASSIGN
tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 = 525.0 * val8Sto.m_flow.SeedLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2601(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,2601};
  jacobian->tmpVars[0] /* tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (525.0) * (jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */);
  threadData->lastEquationSolved = 2601;
}

/*
equation index: 2602
type: SIMPLE_ASSIGN
pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13 = tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 - (pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 + chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 - pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 - val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 - val8Sto.dp.$pDERLSJac13.dummyVarLSJac13)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2602(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,2602};
  jacobian->tmpVars[20] /* pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[0] /* tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - (jacobian->tmpVars[19] /* pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[14] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[18] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* val8Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 2602;
}

/*
equation index: 2603
type: SIMPLE_ASSIGN
$res_LSJac13_2.$pDERLSJac13.dummyVarLSJac13 = pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 + (-chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13) - pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2603(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,2603};
  jacobian->resultVars[1] /* $res_LSJac13_2.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_VAR */ = jacobian->tmpVars[18] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + (-jacobian->tmpVars[14] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[20] /* pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2603;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac13_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac13;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac13_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac13;
  
  static void (*const eqFunctions[24])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2580,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2581,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2582,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2583,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2584,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2585,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2586,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2587,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2588,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2589,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2590,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2591,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2592,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2593,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2594,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2595,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2596,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2597,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2598,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2599,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2600,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2601,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2602,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2603
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 24; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac13_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 2865
type: SIMPLE_ASSIGN
$cse2 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2865(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2865};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 2865;
}

/*
equation index: 2866
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 = 4.172134052434367 * weaData.pAtm * $cse2 * weaBus.TWetBul.SeedNLSJac14 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2866(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2866};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 2866;
}

/*
equation index: 2867
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2867(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2867};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 2867;
}

/*
equation index: 2868
type: SIMPLE_ASSIGN
$res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 - weaBus.TWetBul.SeedNLSJac14 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2868(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2868};
  jacobian->resultVars[0] /* $res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 2868;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac14_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac14;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac14;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2865,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2866,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2867,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2868
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 4; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacNLSJac14_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {2865, 2866, 2867, 2868};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3190
type: SIMPLE_ASSIGN
tan.conWal.2.Q_flow.$pDERLSJac15.dummyVarLSJac15 = (-tan.conWal[2].G) * tan.heaPorSid.T.SeedLSJac15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3190(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3190};
  jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac15 SEED_VAR */);
  threadData->lastEquationSolved = 3190;
}

/*
equation index: 3191
type: SIMPLE_ASSIGN
tan.conWal.4.Q_flow.$pDERLSJac15.dummyVarLSJac15 = (-tan.conWal[4].G) * tan.heaPorSid.T.SeedLSJac15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3191(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3191};
  jacobian->tmpVars[3] /* tan.conWal.4.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac15 SEED_VAR */);
  threadData->lastEquationSolved = 3191;
}

/*
equation index: 3192
type: SIMPLE_ASSIGN
tan.conWal.1.Q_flow.$pDERLSJac15.dummyVarLSJac15 = (-tan.conWal[1].G) * tan.heaPorSid.T.SeedLSJac15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3192(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3192};
  jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac15 SEED_VAR */);
  threadData->lastEquationSolved = 3192;
}

/*
equation index: 3193
type: SIMPLE_ASSIGN
tan.conWal.3.Q_flow.$pDERLSJac15.dummyVarLSJac15 = (-tan.conWal.1.Q_flow.$pDERLSJac15.dummyVarLSJac15) - tan.conWal.2.Q_flow.$pDERLSJac15.dummyVarLSJac15 - tan.conWal.4.Q_flow.$pDERLSJac15.dummyVarLSJac15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3193(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3193};
  jacobian->tmpVars[6] /* tan.conWal.3.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* tan.conWal.4.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3193;
}

/*
equation index: 3194
type: SIMPLE_ASSIGN
tan.conWal.3.dT.$pDERLSJac15.dummyVarLSJac15 = tan.conWal.3.Q_flow.$pDERLSJac15.dummyVarLSJac15 / tan.conWal[3].G
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3194(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3194};
  jacobian->tmpVars[7] /* tan.conWal.3.dT.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* tan.conWal.3.Q_flow.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */),"tan.conWal[3].G");
  threadData->lastEquationSolved = 3194;
}

/*
equation index: 3195
type: SIMPLE_ASSIGN
$res_LSJac15_1.$pDERLSJac15.dummyVarLSJac15 = (-tan.heaPorSid.T.SeedLSJac15) - tan.conWal.3.dT.$pDERLSJac15.dummyVarLSJac15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3195(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3195};
  jacobian->resultVars[0] /* $res_LSJac15_1.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac15 SEED_VAR */) - jacobian->tmpVars[7] /* tan.conWal.3.dT.$pDERLSJac15.dummyVarLSJac15 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3195;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac15_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac15;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac15_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac15;
  
  static void (*const eqFunctions[6])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3190,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3191,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3192,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3193,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3194,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3195
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 6; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac15_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3190, 3191, 3192, 3193, 3194, 3195};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3746
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac20.dummyVarLSJac20 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3746(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3746};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20) SEED_VAR */));
  threadData->lastEquationSolved = 3746;
}

/*
equation index: 3747
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3747(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3747};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20) SEED_VAR */));
  threadData->lastEquationSolved = 3747;
}

/*
equation index: 3748
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac20.dummyVarLSJac20 = cooCoi.ele.3.m2_flow.$pDERLSJac20.dummyVarLSJac20 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3748(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3748};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3748;
}

/*
equation index: 3749
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3749(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3749};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20) SEED_VAR */));
  threadData->lastEquationSolved = 3749;
}

/*
equation index: 3750
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3750(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3750};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac20) SEED_VAR */));
  threadData->lastEquationSolved = 3750;
}

/*
equation index: 3751
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac20.dummyVarLSJac20 = cooCoi.ele.2.m2_flow.$pDERLSJac20.dummyVarLSJac20 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3751(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3751};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3751;
}

/*
equation index: 3752
type: SIMPLE_ASSIGN
$res_LSJac20_1.$pDERLSJac20.dummyVarLSJac20 = cooCoi.ele.1.m2_flow.$pDERLSJac20.dummyVarLSJac20 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3752(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,3752};
  jacobian->resultVars[0] /* $res_LSJac20_1.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3752;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac20_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac20;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac20_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac20;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3746,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3747,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3748,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3749,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3750,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3751,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3752
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 7; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac20_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3746, 3747, 3748, 3749, 3750, 3751, 3752};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 4478
type: SIMPLE_ASSIGN
$cse96 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4478(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,4478};
  jacobian->tmpVars[0] /* $cse96 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 4478;
}

/*
equation index: 4479
type: SIMPLE_ASSIGN
$cse41.$pDERNLSJac22.dummyVarNLSJac22 = (-4102.99) * $cse96 * weaBus.TWetBul.SeedNLSJac22 / (-35.719 + weaBus.TWetBul) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4479(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,4479};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse41.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse96 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac22 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 4479;
}

/*
equation index: 4480
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 = (-0.0010168521133208628) * weaData.pAtm * $cse41.$pDERNLSJac22.dummyVarNLSJac22 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4480(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,4480};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $cse41 variable */)));
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse41.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41) ^ 2.0")));
  threadData->lastEquationSolved = 4480;
}

/*
equation index: 4481
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4481(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,4481};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 4481;
}

/*
equation index: 4482
type: SIMPLE_ASSIGN
$res_NLSJac22_1.$pDERNLSJac22.dummyVarNLSJac22 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 - weaBus.TWetBul.SeedNLSJac22 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4482(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,4482};
  jacobian->resultVars[0] /* $res_NLSJac22_1.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac22 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 4482;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac22_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac22;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac22_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_NLSJac22;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4478,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4479,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4480,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4481,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4482
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 5; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacNLSJac22_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {4478, 4479, 4480, 4481, 4482};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 4868
type: SIMPLE_ASSIGN
tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal[2].G) * tan.heaPorSid.T.SeedLSJac27
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4868(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,4868};
  jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */);
  threadData->lastEquationSolved = 4868;
}

/*
equation index: 4869
type: SIMPLE_ASSIGN
tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal[4].G) * tan.heaPorSid.T.SeedLSJac27
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4869(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,4869};
  jacobian->tmpVars[3] /* tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */);
  threadData->lastEquationSolved = 4869;
}

/*
equation index: 4870
type: SIMPLE_ASSIGN
tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal[1].G) * tan.heaPorSid.T.SeedLSJac27
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4870(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,4870};
  jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */);
  threadData->lastEquationSolved = 4870;
}

/*
equation index: 4871
type: SIMPLE_ASSIGN
tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27) - tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 - tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4871(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,4871};
  jacobian->tmpVars[6] /* tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 4871;
}

/*
equation index: 4872
type: SIMPLE_ASSIGN
tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27 = tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 / tan.conWal[3].G
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4872(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,4872};
  jacobian->tmpVars[7] /* tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */),"tan.conWal[3].G");
  threadData->lastEquationSolved = 4872;
}

/*
equation index: 4873
type: SIMPLE_ASSIGN
$res_LSJac27_1.$pDERLSJac27.dummyVarLSJac27 = (-tan.heaPorSid.T.SeedLSJac27) - tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4873(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,4873};
  jacobian->resultVars[0] /* $res_LSJac27_1.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */) - jacobian->tmpVars[7] /* tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 4873;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac27_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac27;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac27_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac27;
  
  static void (*const eqFunctions[6])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4868,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4869,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4870,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4871,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4872,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4873
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 6; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac27_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {4868, 4869, 4870, 4871, 4872, 4873};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 5389
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5389(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,5389};
  jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5389;
}

/*
equation index: 5390
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5390(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,5390};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5390;
}

/*
equation index: 5391
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5391(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,5391};
  jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5391;
}

/*
equation index: 5392
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5392(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,5392};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5392;
}

/*
equation index: 5393
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 = cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5393(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,5393};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 5393;
}

/*
equation index: 5394
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 = cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5394(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,5394};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 5394;
}

/*
equation index: 5395
type: SIMPLE_ASSIGN
$res_LSJac29_1.$pDERLSJac29.dummyVarLSJac29 = cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5395(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,5395};
  jacobian->resultVars[0] /* $res_LSJac29_1.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 5395;
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac29_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac29;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac29_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_LSJac29;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5389,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5390,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5391,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5392,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5393,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5394,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5395
  };
  
  if (jacobian->evalSelection) {
    for (int i = 0; i < jacobian->evalSelection->n; i++) {
      int id = jacobian->evalSelection->idx[i];
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  } else {
    for (int id = 0; id < 7; id++) {
      eqFunctions[id](data, threadData, jacobian, parentJacobian);
    }
  }
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacLSJac29_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {5389, 5390, 5391, 5392, 5393, 5394, 5395};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_A;
  
  
  return 0;
}

int WaterCooledChillerExample_WaterCooledChillerExample7_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = WaterCooledChillerExample_WaterCooledChillerExample7_INDEX_JAC_A;
  
  
  return 0;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacNLSJac0.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac0_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac8.bin");
  
  initJacobian(jacobian, 1, 1, 9, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac8_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac12(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac12.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac12_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac13(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac13.bin");
  
  initJacobian(jacobian, 3, 3, 30, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac13_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(3, 9, 3);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 3+1, pFile, FALSE);
  if (count != 3+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 3+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 9, pFile, FALSE);
  if (count != 9) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 9, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 3);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 3);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 3);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacNLSJac14.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac14_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac15(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac15.bin");
  
  initJacobian(jacobian, 1, 1, 9, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac15_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac20(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac20.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac20_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac22(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacNLSJac22.bin");
  
  initJacobian(jacobian, 1, 1, 5, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacNLSJac22_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac27(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac27.bin");
  
  initJacobian(jacobian, 1, 1, 9, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac27_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianLSJac29(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacLSJac29.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacLSJac29_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 1);
  
  omc_fclose(pFile);
  
  return 0;
}
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int WaterCooledChillerExample_WaterCooledChillerExample7_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "WaterCooledChillerExample.WaterCooledChillerExample7_JacA.bin");
  
  initJacobian(jacobian, 70, 70, 0, NULL, WaterCooledChillerExample_WaterCooledChillerExample7_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(70, 409, 12);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 70+1, pFile, FALSE);
  if (count != 70+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 70+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 409, pFile, FALSE);
  if (count != 409) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 409, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 70);
  /* color 2 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 2, 70);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 70);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 70);
  /* color 5 with 3 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 3, 70);
  /* color 6 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 4, 70);
  /* color 7 with 8 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 8, 70);
  /* color 8 with 9 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 9, 70);
  /* color 9 with 11 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 11, 70);
  /* color 10 with 8 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 8, 70);
  /* color 11 with 12 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 12, 70);
  /* color 12 with 10 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 10, 70);
  
  omc_fclose(pFile);
  
  return 0;
}


