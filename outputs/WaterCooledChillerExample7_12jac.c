/* Jacobians 17 */
#include "outputs/WaterCooledChillerExample7_model.h"
#include "outputs/WaterCooledChillerExample7_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 932
type: SIMPLE_ASSIGN
tan.conWal.2.Q_flow.$pDERLSJac6.dummyVarLSJac6 = (-tan.conWal[2].G) * tan.heaPorSid.T.SeedLSJac6
*/
void outputs_WaterCooledChillerExample7_eqFunction_932(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,932};
  jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac6 SEED_VAR */);
  threadData->lastEquationSolved = 932;
}

/*
equation index: 933
type: SIMPLE_ASSIGN
tan.conWal.3.Q_flow.$pDERLSJac6.dummyVarLSJac6 = (-tan.conWal[3].G) * tan.heaPorSid.T.SeedLSJac6
*/
void outputs_WaterCooledChillerExample7_eqFunction_933(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,933};
  jacobian->tmpVars[3] /* tan.conWal.3.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac6 SEED_VAR */);
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: SIMPLE_ASSIGN
tan.conWal.1.Q_flow.$pDERLSJac6.dummyVarLSJac6 = (-tan.conWal[1].G) * tan.heaPorSid.T.SeedLSJac6
*/
void outputs_WaterCooledChillerExample7_eqFunction_934(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,934};
  jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac6 SEED_VAR */);
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
tan.conWal.4.Q_flow.$pDERLSJac6.dummyVarLSJac6 = (-tan.conWal.1.Q_flow.$pDERLSJac6.dummyVarLSJac6) - tan.conWal.2.Q_flow.$pDERLSJac6.dummyVarLSJac6 - tan.conWal.3.Q_flow.$pDERLSJac6.dummyVarLSJac6
*/
void outputs_WaterCooledChillerExample7_eqFunction_935(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,935};
  jacobian->tmpVars[6] /* tan.conWal.4.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* tan.conWal.3.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
tan.conWal.4.dT.$pDERLSJac6.dummyVarLSJac6 = tan.conWal.4.Q_flow.$pDERLSJac6.dummyVarLSJac6 / tan.conWal[4].G
*/
void outputs_WaterCooledChillerExample7_eqFunction_936(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,936};
  jacobian->tmpVars[7] /* tan.conWal.4.dT.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* tan.conWal.4.Q_flow.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */),"tan.conWal[4].G");
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
$res_LSJac6_1.$pDERLSJac6.dummyVarLSJac6 = (-tan.heaPorSid.T.SeedLSJac6) - tan.conWal.4.dT.$pDERLSJac6.dummyVarLSJac6
*/
void outputs_WaterCooledChillerExample7_eqFunction_937(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,937};
  jacobian->resultVars[0] /* $res_LSJac6_1.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac6 SEED_VAR */) - jacobian->tmpVars[7] /* tan.conWal.4.dT.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 937;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac6_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac6;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac6_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac6;
  
  static void (*const eqFunctions[6])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_932,
    outputs_WaterCooledChillerExample7_eqFunction_933,
    outputs_WaterCooledChillerExample7_eqFunction_934,
    outputs_WaterCooledChillerExample7_eqFunction_935,
    outputs_WaterCooledChillerExample7_eqFunction_936,
    outputs_WaterCooledChillerExample7_eqFunction_937
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

void outputs_WaterCooledChillerExample7_JacLSJac6_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {932, 933, 934, 935, 936, 937};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1362
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1362(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1362};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1363(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1363};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1364(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1364};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1365(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1365};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1366(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1366};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1367(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1367};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
$res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void outputs_WaterCooledChillerExample7_eqFunction_1368(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1368};
  jacobian->resultVars[0] /* $res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 1368;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac9;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac9;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_1362,
    outputs_WaterCooledChillerExample7_eqFunction_1363,
    outputs_WaterCooledChillerExample7_eqFunction_1364,
    outputs_WaterCooledChillerExample7_eqFunction_1365,
    outputs_WaterCooledChillerExample7_eqFunction_1366,
    outputs_WaterCooledChillerExample7_eqFunction_1367,
    outputs_WaterCooledChillerExample7_eqFunction_1368
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

void outputs_WaterCooledChillerExample7_JacLSJac9_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1362, 1363, 1364, 1365, 1366, 1367, 1368};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1590
type: SIMPLE_ASSIGN
$cse1 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void outputs_WaterCooledChillerExample7_eqFunction_1590(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1590};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac10.dummyVarNLSJac10 = 4.172134052434367 * weaData.pAtm * $cse1 * weaBus.TWetBul.SeedNLSJac10 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1591(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1591};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac10 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 1591;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac10.dummyVarNLSJac10 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac10.dummyVarNLSJac10 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_1592(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1592};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
$res_NLSJac10_1.$pDERNLSJac10.dummyVarNLSJac10 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac10.dummyVarNLSJac10 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac10.dummyVarNLSJac10 - weaBus.TWetBul.SeedNLSJac10 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void outputs_WaterCooledChillerExample7_eqFunction_1593(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1593};
  jacobian->resultVars[0] /* $res_NLSJac10_1.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac10 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1593;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacNLSJac10_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_NLSJac10;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacNLSJac10_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_NLSJac10;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_1590,
    outputs_WaterCooledChillerExample7_eqFunction_1591,
    outputs_WaterCooledChillerExample7_eqFunction_1592,
    outputs_WaterCooledChillerExample7_eqFunction_1593
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

void outputs_WaterCooledChillerExample7_JacNLSJac10_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1590, 1591, 1592, 1593};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 2582
type: SIMPLE_ASSIGN
val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-pumTanRet.m_flow.SeedLSJac13) * val8_2Rel.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2582(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2582};
  jacobian->tmpVars[10] /* val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3540]] /* val8_2Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2582;
}

/*
equation index: 2583
type: SIMPLE_ASSIGN
pumTanSup.port_a.p.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.vol.p.SeedLSJac13 - val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2583(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2583};
  jacobian->tmpVars[14] /* pumTanSup.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[0] /* junCHWRet.vol.p.SeedLSJac13 SEED_VAR */ - jacobian->tmpVars[10] /* val8_2Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2583;
}

/*
equation index: 2584
type: SIMPLE_ASSIGN
val8Rel.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-pumTanRet.m_flow.SeedLSJac13) * val8Rel.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2584(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2584};
  jacobian->tmpVars[9] /* val8Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3471]] /* val8Rel.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2584;
}

/*
equation index: 2585
type: SIMPLE_ASSIGN
junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 = pumTanSup.port_a.p.$pDERLSJac13.dummyVarLSJac13 - val8Rel.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2585(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2585};
  jacobian->tmpVars[17] /* junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[14] /* pumTanSup.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[9] /* val8Rel.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2585;
}

/*
equation index: 2586
type: SIMPLE_ASSIGN
valByp.dp.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.vol.p.SeedLSJac13 - junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2586(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,2586};
  jacobian->tmpVars[18] /* valByp.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[0] /* junCHWRet.vol.p.SeedLSJac13 SEED_VAR */ - jacobian->tmpVars[17] /* junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2586;
}

/*
equation index: 2587
type: SIMPLE_ASSIGN
valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 = 4.761904761904762 * valByp.dp.$pDERLSJac13.dummyVarLSJac13 / valByp.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2587(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,2587};
  jacobian->tmpVars[19] /* valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (4.761904761904762) * (DIVISION(jacobian->tmpVars[18] /* valByp.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3588]] /* valByp.dp_nominal_pos PARAM */),"valByp.dp_nominal_pos"));
  threadData->lastEquationSolved = 2587;
}

/*
equation index: 2588
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13 = val8Sto.m_flow.SeedLSJac13 - pumTanRet.m_flow.SeedLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2588(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,2588};
  jacobian->tmpVars[12] /* junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */ - jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */;
  threadData->lastEquationSolved = 2588;
}

/*
equation index: 2589
type: SIMPLE_ASSIGN
cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13 = valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 - junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2589(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,2589};
  jacobian->tmpVars[21] /* cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[19] /* valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[12] /* junCHWSup.res2.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2589;
}

/*
equation index: 2590
type: SIMPLE_ASSIGN
cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13 = 19021.8 * cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2590(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,2590};
  jacobian->tmpVars[23] /* cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (19021.8) * (jacobian->tmpVars[21] /* cooCoi.m1_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 2590;
}

/*
equation index: 2591
type: SIMPLE_ASSIGN
$res_LSJac13_2.$pDERLSJac13.dummyVarLSJac13 = junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 - cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2591(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,2591};
  jacobian->resultVars[1] /* $res_LSJac13_2.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_VAR */ = jacobian->tmpVars[17] /* junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[23] /* cooCoi.ele.1.preDro1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2591;
}

/*
equation index: 2592
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 = pumTanRet.m_flow.SeedLSJac13 - val8Sto.m_flow.SeedLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2592(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,2592};
  jacobian->tmpVars[11] /* junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[1] /* pumTanRet.m_flow.SeedLSJac13 SEED_VAR */ - jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */;
  threadData->lastEquationSolved = 2592;
}

/*
equation index: 2593
type: SIMPLE_ASSIGN
val1.m_flow.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 + valByp.m_flow.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2593(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,2593};
  jacobian->tmpVars[20] /* val1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[11] /* junCHWRet.res1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[19] /* valByp.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2593;
}

/*
equation index: 2594
type: SIMPLE_ASSIGN
val1.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-val1.m_flow.$pDERLSJac13.dummyVarLSJac13) * val1.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2594(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,2594};
  jacobian->tmpVars[22] /* val1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->tmpVars[20] /* val1.m_flow.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3352]] /* val1.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2594;
}

/*
equation index: 2595
type: SIMPLE_ASSIGN
$res_LSJac13_3.$pDERLSJac13.dummyVarLSJac13 = (-junCHWRet.vol.p.SeedLSJac13) - val1.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2595(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,2595};
  jacobian->resultVars[2] /* $res_LSJac13_3.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* junCHWRet.vol.p.SeedLSJac13 SEED_VAR */) - jacobian->tmpVars[22] /* val1.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2595;
}

/*
equation index: 2596
type: SIMPLE_ASSIGN
val8_2.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * val8Sto.m_flow.SeedLSJac13 * val8_2.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2596(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,2596};
  jacobian->tmpVars[6] /* val8_2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * ((jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3517]] /* val8_2.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2596;
}

/*
equation index: 2597
type: SIMPLE_ASSIGN
pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 = junCHWRet.vol.p.SeedLSJac13 - val8_2.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2597(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,2597};
  jacobian->tmpVars[13] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->seedVars[0] /* junCHWRet.vol.p.SeedLSJac13 SEED_VAR */ - jacobian->tmpVars[6] /* val8_2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2597;
}

/*
equation index: 2598
type: SIMPLE_ASSIGN
val8.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * val8Sto.m_flow.SeedLSJac13 * val8.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2598(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,2598};
  jacobian->tmpVars[4] /* val8.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * ((jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3447]] /* val8.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2598;
}

/*
equation index: 2599
type: SIMPLE_ASSIGN
chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 = junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 + val8.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2599(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,2599};
  jacobian->tmpVars[24] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[17] /* junCHWSup.vol.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[4] /* val8.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2599;
}

/*
equation index: 2600
type: SIMPLE_ASSIGN
pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 = chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 - pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2600(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,2600};
  jacobian->tmpVars[25] /* pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[24] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[13] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2600;
}

/*
equation index: 2601
type: SIMPLE_ASSIGN
val8Sto.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-val8Sto.m_flow.SeedLSJac13) * val8Sto.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2601(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,2601};
  jacobian->tmpVars[2] /* val8Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3494]] /* val8Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2601;
}

/*
equation index: 2602
type: SIMPLE_ASSIGN
val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 = (-0.21) * (-val8Sto.m_flow.SeedLSJac13) * val8_2Sto.dp_nominal_pos
*/
void outputs_WaterCooledChillerExample7_eqFunction_2602(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,2602};
  jacobian->tmpVars[1] /* val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (-0.21) * (((-jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3563]] /* val8_2Sto.dp_nominal_pos PARAM */)));
  threadData->lastEquationSolved = 2602;
}

/*
equation index: 2603
type: SIMPLE_ASSIGN
tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 = 525.0 * val8Sto.m_flow.SeedLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2603(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,2603};
  jacobian->tmpVars[0] /* tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = (525.0) * (jacobian->seedVars[2] /* val8Sto.m_flow.SeedLSJac13 SEED_VAR */);
  threadData->lastEquationSolved = 2603;
}

/*
equation index: 2604
type: SIMPLE_ASSIGN
pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13 = tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 - (pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 + chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 - pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 - val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 - val8Sto.dp.$pDERLSJac13.dummyVarLSJac13)
*/
void outputs_WaterCooledChillerExample7_eqFunction_2604(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,2604};
  jacobian->tmpVars[26] /* pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[0] /* tan.indTanHex.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - (jacobian->tmpVars[25] /* pumCHW2.dpMachine.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[24] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[13] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* val8_2Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* val8Sto.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */);
  threadData->lastEquationSolved = 2604;
}

/*
equation index: 2605
type: SIMPLE_ASSIGN
$res_LSJac13_1.$pDERLSJac13.dummyVarLSJac13 = pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 + (-chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13) - pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13
*/
void outputs_WaterCooledChillerExample7_eqFunction_2605(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,2605};
  jacobian->resultVars[0] /* $res_LSJac13_1.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_VAR */ = jacobian->tmpVars[13] /* pumCHW2.port_a.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */ + (-jacobian->tmpVars[24] /* chi2.vol2.p.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[26] /* pumCHW2.dp.$pDERLSJac13.dummyVarLSJac13 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2605;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac13_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac13;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac13_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac13;
  
  static void (*const eqFunctions[24])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_2582,
    outputs_WaterCooledChillerExample7_eqFunction_2583,
    outputs_WaterCooledChillerExample7_eqFunction_2584,
    outputs_WaterCooledChillerExample7_eqFunction_2585,
    outputs_WaterCooledChillerExample7_eqFunction_2586,
    outputs_WaterCooledChillerExample7_eqFunction_2587,
    outputs_WaterCooledChillerExample7_eqFunction_2588,
    outputs_WaterCooledChillerExample7_eqFunction_2589,
    outputs_WaterCooledChillerExample7_eqFunction_2590,
    outputs_WaterCooledChillerExample7_eqFunction_2591,
    outputs_WaterCooledChillerExample7_eqFunction_2592,
    outputs_WaterCooledChillerExample7_eqFunction_2593,
    outputs_WaterCooledChillerExample7_eqFunction_2594,
    outputs_WaterCooledChillerExample7_eqFunction_2595,
    outputs_WaterCooledChillerExample7_eqFunction_2596,
    outputs_WaterCooledChillerExample7_eqFunction_2597,
    outputs_WaterCooledChillerExample7_eqFunction_2598,
    outputs_WaterCooledChillerExample7_eqFunction_2599,
    outputs_WaterCooledChillerExample7_eqFunction_2600,
    outputs_WaterCooledChillerExample7_eqFunction_2601,
    outputs_WaterCooledChillerExample7_eqFunction_2602,
    outputs_WaterCooledChillerExample7_eqFunction_2603,
    outputs_WaterCooledChillerExample7_eqFunction_2604,
    outputs_WaterCooledChillerExample7_eqFunction_2605
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

void outputs_WaterCooledChillerExample7_JacLSJac13_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3124
type: SIMPLE_ASSIGN
tan.conWal.3.Q_flow.$pDERLSJac14.dummyVarLSJac14 = (-tan.conWal[3].G) * tan.heaPorSid.T.SeedLSJac14
*/
void outputs_WaterCooledChillerExample7_eqFunction_3124(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3124};
  jacobian->tmpVars[5] /* tan.conWal.3.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac14 SEED_VAR */);
  threadData->lastEquationSolved = 3124;
}

/*
equation index: 3125
type: SIMPLE_ASSIGN
tan.conWal.2.Q_flow.$pDERLSJac14.dummyVarLSJac14 = (-tan.conWal[2].G) * tan.heaPorSid.T.SeedLSJac14
*/
void outputs_WaterCooledChillerExample7_eqFunction_3125(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3125};
  jacobian->tmpVars[3] /* tan.conWal.2.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac14 SEED_VAR */);
  threadData->lastEquationSolved = 3125;
}

/*
equation index: 3126
type: SIMPLE_ASSIGN
tan.conWal.1.Q_flow.$pDERLSJac14.dummyVarLSJac14 = (-tan.conWal[1].G) * tan.heaPorSid.T.SeedLSJac14
*/
void outputs_WaterCooledChillerExample7_eqFunction_3126(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3126};
  jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac14 SEED_VAR */);
  threadData->lastEquationSolved = 3126;
}

/*
equation index: 3127
type: SIMPLE_ASSIGN
tan.conWal.4.Q_flow.$pDERLSJac14.dummyVarLSJac14 = (-tan.conWal.1.Q_flow.$pDERLSJac14.dummyVarLSJac14) - tan.conWal.2.Q_flow.$pDERLSJac14.dummyVarLSJac14 - tan.conWal.3.Q_flow.$pDERLSJac14.dummyVarLSJac14
*/
void outputs_WaterCooledChillerExample7_eqFunction_3127(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3127};
  jacobian->tmpVars[6] /* tan.conWal.4.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[3] /* tan.conWal.2.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[5] /* tan.conWal.3.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3127;
}

/*
equation index: 3128
type: SIMPLE_ASSIGN
tan.conWal.4.dT.$pDERLSJac14.dummyVarLSJac14 = tan.conWal.4.Q_flow.$pDERLSJac14.dummyVarLSJac14 / tan.conWal[4].G
*/
void outputs_WaterCooledChillerExample7_eqFunction_3128(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3128};
  jacobian->tmpVars[7] /* tan.conWal.4.dT.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* tan.conWal.4.Q_flow.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */),"tan.conWal[4].G");
  threadData->lastEquationSolved = 3128;
}

/*
equation index: 3129
type: SIMPLE_ASSIGN
$res_LSJac14_1.$pDERLSJac14.dummyVarLSJac14 = (-tan.heaPorSid.T.SeedLSJac14) - tan.conWal.4.dT.$pDERLSJac14.dummyVarLSJac14
*/
void outputs_WaterCooledChillerExample7_eqFunction_3129(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3129};
  jacobian->resultVars[0] /* $res_LSJac14_1.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac14 SEED_VAR */) - jacobian->tmpVars[7] /* tan.conWal.4.dT.$pDERLSJac14.dummyVarLSJac14 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3129;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac14_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac14;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac14;
  
  static void (*const eqFunctions[6])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_3124,
    outputs_WaterCooledChillerExample7_eqFunction_3125,
    outputs_WaterCooledChillerExample7_eqFunction_3126,
    outputs_WaterCooledChillerExample7_eqFunction_3127,
    outputs_WaterCooledChillerExample7_eqFunction_3128,
    outputs_WaterCooledChillerExample7_eqFunction_3129
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

void outputs_WaterCooledChillerExample7_JacLSJac14_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3124, 3125, 3126, 3127, 3128, 3129};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3617
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac17.dummyVarLSJac17 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3617(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3617};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17) SEED_VAR */));
  threadData->lastEquationSolved = 3617;
}

/*
equation index: 3618
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3618(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3618};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17) SEED_VAR */));
  threadData->lastEquationSolved = 3618;
}

/*
equation index: 3619
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac17.dummyVarLSJac17 = cooCoi.ele.3.m2_flow.$pDERLSJac17.dummyVarLSJac17 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3619(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3619};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3619;
}

/*
equation index: 3620
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3620(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3620};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17) SEED_VAR */));
  threadData->lastEquationSolved = 3620;
}

/*
equation index: 3621
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3621(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3621};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac17) SEED_VAR */));
  threadData->lastEquationSolved = 3621;
}

/*
equation index: 3622
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac17.dummyVarLSJac17 = cooCoi.ele.2.m2_flow.$pDERLSJac17.dummyVarLSJac17 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3622(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3622};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3622;
}

/*
equation index: 3623
type: SIMPLE_ASSIGN
$res_LSJac17_1.$pDERLSJac17.dummyVarLSJac17 = cooCoi.ele.1.m2_flow.$pDERLSJac17.dummyVarLSJac17 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17
*/
void outputs_WaterCooledChillerExample7_eqFunction_3623(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,3623};
  jacobian->resultVars[0] /* $res_LSJac17_1.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3623;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac17_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac17;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac17_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac17;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_3617,
    outputs_WaterCooledChillerExample7_eqFunction_3618,
    outputs_WaterCooledChillerExample7_eqFunction_3619,
    outputs_WaterCooledChillerExample7_eqFunction_3620,
    outputs_WaterCooledChillerExample7_eqFunction_3621,
    outputs_WaterCooledChillerExample7_eqFunction_3622,
    outputs_WaterCooledChillerExample7_eqFunction_3623
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

void outputs_WaterCooledChillerExample7_JacLSJac17_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3617, 3618, 3619, 3620, 3621, 3622, 3623};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3845
type: SIMPLE_ASSIGN
$cse2 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void outputs_WaterCooledChillerExample7_eqFunction_3845(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3845};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 3845;
}

/*
equation index: 3846
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac18.dummyVarNLSJac18 = 4.172134052434367 * weaData.pAtm * $cse2 * weaBus.TWetBul.SeedNLSJac18 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_3846(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3846};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac18 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 3846;
}

/*
equation index: 3847
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac18.dummyVarNLSJac18 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac18.dummyVarNLSJac18 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_3847(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3847};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 3847;
}

/*
equation index: 3848
type: SIMPLE_ASSIGN
$res_NLSJac18_1.$pDERNLSJac18.dummyVarNLSJac18 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac18.dummyVarNLSJac18 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac18.dummyVarNLSJac18 - weaBus.TWetBul.SeedNLSJac18 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void outputs_WaterCooledChillerExample7_eqFunction_3848(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3848};
  jacobian->resultVars[0] /* $res_NLSJac18_1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac18 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 3848;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacNLSJac18_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_NLSJac18;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacNLSJac18_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_NLSJac18;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_3845,
    outputs_WaterCooledChillerExample7_eqFunction_3846,
    outputs_WaterCooledChillerExample7_eqFunction_3847,
    outputs_WaterCooledChillerExample7_eqFunction_3848
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

void outputs_WaterCooledChillerExample7_JacNLSJac18_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3845, 3846, 3847, 3848};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 4482
type: SIMPLE_ASSIGN
$cse96 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void outputs_WaterCooledChillerExample7_eqFunction_4482(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,4482};
  jacobian->tmpVars[0] /* $cse96 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 4482;
}

/*
equation index: 4483
type: SIMPLE_ASSIGN
$cse41.$pDERNLSJac22.dummyVarNLSJac22 = (-4102.99) * $cse96 * weaBus.TWetBul.SeedNLSJac22 / (-35.719 + weaBus.TWetBul) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_4483(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,4483};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse41.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse96 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac22 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 4483;
}

/*
equation index: 4484
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 = (-0.0010168521133208628) * weaData.pAtm * $cse41.$pDERNLSJac22.dummyVarNLSJac22 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_4484(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,4484};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* $cse41 variable */)));
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3667]] /* weaData.pAtm PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse41.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse41) ^ 2.0")));
  threadData->lastEquationSolved = 4484;
}

/*
equation index: 4485
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void outputs_WaterCooledChillerExample7_eqFunction_4485(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,4485};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 4485;
}

/*
equation index: 4486
type: SIMPLE_ASSIGN
$res_NLSJac22_1.$pDERNLSJac22.dummyVarNLSJac22 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 - weaBus.TWetBul.SeedNLSJac22 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void outputs_WaterCooledChillerExample7_eqFunction_4486(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,4486};
  jacobian->resultVars[0] /* $res_NLSJac22_1.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac22 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 4486;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacNLSJac22_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_NLSJac22;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacNLSJac22_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_NLSJac22;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_4482,
    outputs_WaterCooledChillerExample7_eqFunction_4483,
    outputs_WaterCooledChillerExample7_eqFunction_4484,
    outputs_WaterCooledChillerExample7_eqFunction_4485,
    outputs_WaterCooledChillerExample7_eqFunction_4486
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

void outputs_WaterCooledChillerExample7_JacNLSJac22_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {4482, 4483, 4484, 4485, 4486};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 4872
type: SIMPLE_ASSIGN
tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal[2].G) * tan.heaPorSid.T.SeedLSJac27
*/
void outputs_WaterCooledChillerExample7_eqFunction_4872(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,4872};
  jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* tan.conWal[2].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */);
  threadData->lastEquationSolved = 4872;
}

/*
equation index: 4873
type: SIMPLE_ASSIGN
tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal[4].G) * tan.heaPorSid.T.SeedLSJac27
*/
void outputs_WaterCooledChillerExample7_eqFunction_4873(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,4873};
  jacobian->tmpVars[3] /* tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* tan.conWal[4].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */);
  threadData->lastEquationSolved = 4873;
}

/*
equation index: 4874
type: SIMPLE_ASSIGN
tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal[1].G) * tan.heaPorSid.T.SeedLSJac27
*/
void outputs_WaterCooledChillerExample7_eqFunction_4874(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,4874};
  jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* tan.conWal[1].G PARAM */))) * (jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */);
  threadData->lastEquationSolved = 4874;
}

/*
equation index: 4875
type: SIMPLE_ASSIGN
tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 = (-tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27) - tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 - tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27
*/
void outputs_WaterCooledChillerExample7_eqFunction_4875(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,4875};
  jacobian->tmpVars[6] /* tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[1] /* tan.conWal.1.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[5] /* tan.conWal.2.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* tan.conWal.4.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 4875;
}

/*
equation index: 4876
type: SIMPLE_ASSIGN
tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27 = tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 / tan.conWal[3].G
*/
void outputs_WaterCooledChillerExample7_eqFunction_4876(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,4876};
  jacobian->tmpVars[7] /* tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[6] /* tan.conWal.3.Q_flow.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* tan.conWal[3].G PARAM */),"tan.conWal[3].G");
  threadData->lastEquationSolved = 4876;
}

/*
equation index: 4877
type: SIMPLE_ASSIGN
$res_LSJac27_1.$pDERLSJac27.dummyVarLSJac27 = (-tan.heaPorSid.T.SeedLSJac27) - tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27
*/
void outputs_WaterCooledChillerExample7_eqFunction_4877(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,4877};
  jacobian->resultVars[0] /* $res_LSJac27_1.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_VAR */ = (-jacobian->seedVars[0] /* tan.heaPorSid.T.SeedLSJac27 SEED_VAR */) - jacobian->tmpVars[7] /* tan.conWal.3.dT.$pDERLSJac27.dummyVarLSJac27 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 4877;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac27_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac27;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac27_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac27;
  
  static void (*const eqFunctions[6])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_4872,
    outputs_WaterCooledChillerExample7_eqFunction_4873,
    outputs_WaterCooledChillerExample7_eqFunction_4874,
    outputs_WaterCooledChillerExample7_eqFunction_4875,
    outputs_WaterCooledChillerExample7_eqFunction_4876,
    outputs_WaterCooledChillerExample7_eqFunction_4877
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

void outputs_WaterCooledChillerExample7_JacLSJac27_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {4872, 4873, 4874, 4875, 4876, 4877};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 5393
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5393(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,5393};
  jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5393;
}

/*
equation index: 5394
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5394(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,5394};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5394;
}

/*
equation index: 5395
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5395(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,5395};
  jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5395;
}

/*
equation index: 5396
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5396(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,5396};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac29) SEED_VAR */));
  threadData->lastEquationSolved = 5396;
}

/*
equation index: 5397
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 = cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5397(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,5397};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 5397;
}

/*
equation index: 5398
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 = cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5398(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,5398};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 5398;
}

/*
equation index: 5399
type: SIMPLE_ASSIGN
$res_LSJac29_1.$pDERLSJac29.dummyVarLSJac29 = cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29
*/
void outputs_WaterCooledChillerExample7_eqFunction_5399(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,5399};
  jacobian->resultVars[0] /* $res_LSJac29_1.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac29.dummyVarLSJac29 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 5399;
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacLSJac29_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac29;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacLSJac29_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_LSJac29;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    outputs_WaterCooledChillerExample7_eqFunction_5393,
    outputs_WaterCooledChillerExample7_eqFunction_5394,
    outputs_WaterCooledChillerExample7_eqFunction_5395,
    outputs_WaterCooledChillerExample7_eqFunction_5396,
    outputs_WaterCooledChillerExample7_eqFunction_5397,
    outputs_WaterCooledChillerExample7_eqFunction_5398,
    outputs_WaterCooledChillerExample7_eqFunction_5399
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

void outputs_WaterCooledChillerExample7_JacLSJac29_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {5393, 5394, 5395, 5396, 5397, 5398, 5399};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int outputs_WaterCooledChillerExample7_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void outputs_WaterCooledChillerExample7_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int outputs_WaterCooledChillerExample7_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void outputs_WaterCooledChillerExample7_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int outputs_WaterCooledChillerExample7_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void outputs_WaterCooledChillerExample7_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int outputs_WaterCooledChillerExample7_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void outputs_WaterCooledChillerExample7_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int outputs_WaterCooledChillerExample7_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void outputs_WaterCooledChillerExample7_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int outputs_WaterCooledChillerExample7_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void outputs_WaterCooledChillerExample7_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_A;
  
  
  return 0;
}

int outputs_WaterCooledChillerExample7_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = outputs_WaterCooledChillerExample7_INDEX_JAC_A;
  
  
  return 0;
}

void outputs_WaterCooledChillerExample7_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac6(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac6.bin");
  
  initJacobian(jacobian, 1, 1, 9, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac6_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac9.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac9_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac10(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacNLSJac10.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, outputs_WaterCooledChillerExample7_functionJacNLSJac10_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac13(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac13.bin");
  
  initJacobian(jacobian, 3, 3, 30, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac13_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac14.bin");
  
  initJacobian(jacobian, 1, 1, 9, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac14_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac17(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac17.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac17_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac18(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacNLSJac18.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, outputs_WaterCooledChillerExample7_functionJacNLSJac18_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianNLSJac22(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacNLSJac22.bin");
  
  initJacobian(jacobian, 1, 1, 5, NULL, outputs_WaterCooledChillerExample7_functionJacNLSJac22_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac27(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac27.bin");
  
  initJacobian(jacobian, 1, 1, 9, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac27_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianLSJac29(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacLSJac29.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, outputs_WaterCooledChillerExample7_functionJacLSJac29_column, NULL, NULL);
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
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int outputs_WaterCooledChillerExample7_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "outputs/WaterCooledChillerExample7_JacA.bin");
  
  initJacobian(jacobian, 70, 70, 0, NULL, outputs_WaterCooledChillerExample7_functionJacA_column, NULL, NULL);
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


