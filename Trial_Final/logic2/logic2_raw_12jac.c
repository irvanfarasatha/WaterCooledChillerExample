/* Jacobians 13 */
#include "logic2_raw_model.h"
#include "logic2_raw_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 262
type: SIMPLE_ASSIGN
$cse1 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic2_raw_eqFunction_262(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,262};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 = 4.172134052434367 * weaData.pAtm * $cse1 * weaBus.TWetBul.SeedNLSJac0 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0
*/
void logic2_raw_eqFunction_263(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,263};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic2_raw_eqFunction_264(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,264};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 - weaBus.TWetBul.SeedNLSJac0 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic2_raw_eqFunction_265(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,265};
  jacobian->resultVars[0] /* $res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 265;
}

OMC_DISABLE_OPT
int logic2_raw_functionJacNLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_NLSJac0;
  
  
  return 0;
}

int logic2_raw_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_NLSJac0;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic2_raw_eqFunction_262,
    logic2_raw_eqFunction_263,
    logic2_raw_eqFunction_264,
    logic2_raw_eqFunction_265
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

void logic2_raw_JacNLSJac0_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {262, 263, 264, 265};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 789
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic2_raw_eqFunction_789(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,789};
  jacobian->tmpVars[3] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 789;
}

/*
equation index: 790
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic2_raw_eqFunction_790(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,790};
  jacobian->tmpVars[2] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 790;
}

/*
equation index: 791
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic2_raw_eqFunction_791(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,791};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 791;
}

/*
equation index: 792
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic2_raw_eqFunction_792(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,792};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 792;
}

/*
equation index: 793
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic2_raw_eqFunction_793(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,793};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 793;
}

/*
equation index: 794
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic2_raw_eqFunction_794(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,794};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 794;
}

/*
equation index: 795
type: SIMPLE_ASSIGN
$res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic2_raw_eqFunction_795(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,795};
  jacobian->resultVars[0] /* $res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 795;
}

OMC_DISABLE_OPT
int logic2_raw_functionJacLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_LSJac9;
  
  
  return 0;
}

int logic2_raw_functionJacLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_LSJac9;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic2_raw_eqFunction_789,
    logic2_raw_eqFunction_790,
    logic2_raw_eqFunction_791,
    logic2_raw_eqFunction_792,
    logic2_raw_eqFunction_793,
    logic2_raw_eqFunction_794,
    logic2_raw_eqFunction_795
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

void logic2_raw_JacLSJac9_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {789, 790, 791, 792, 793, 794, 795};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1831
type: SIMPLE_ASSIGN
$cse2 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic2_raw_eqFunction_1831(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1831};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 1831;
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 = 4.172134052434367 * weaData.pAtm * $cse2 * weaBus.TWetBul.SeedNLSJac14 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0
*/
void logic2_raw_eqFunction_1832(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1832};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 1832;
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic2_raw_eqFunction_1833(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1833};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
$res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 - weaBus.TWetBul.SeedNLSJac14 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic2_raw_eqFunction_1834(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1834};
  jacobian->resultVars[0] /* $res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1834;
}

OMC_DISABLE_OPT
int logic2_raw_functionJacNLSJac14_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_NLSJac14;
  
  
  return 0;
}

int logic2_raw_functionJacNLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_NLSJac14;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic2_raw_eqFunction_1831,
    logic2_raw_eqFunction_1832,
    logic2_raw_eqFunction_1833,
    logic2_raw_eqFunction_1834
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

void logic2_raw_JacNLSJac14_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1831, 1832, 1833, 1834};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 2347
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic2_raw_eqFunction_2347(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2347};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2347;
}

/*
equation index: 2348
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic2_raw_eqFunction_2348(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2348};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2348;
}

/*
equation index: 2349
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic2_raw_eqFunction_2349(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2349};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2349;
}

/*
equation index: 2350
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic2_raw_eqFunction_2350(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2350};
  jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2350;
}

/*
equation index: 2351
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic2_raw_eqFunction_2351(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,2351};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2351;
}

/*
equation index: 2352
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic2_raw_eqFunction_2352(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,2352};
  jacobian->tmpVars[0] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2352;
}

/*
equation index: 2353
type: SIMPLE_ASSIGN
$res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic2_raw_eqFunction_2353(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,2353};
  jacobian->resultVars[0] /* $res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2353;
}

OMC_DISABLE_OPT
int logic2_raw_functionJacLSJac18_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_LSJac18;
  
  
  return 0;
}

int logic2_raw_functionJacLSJac18_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_LSJac18;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic2_raw_eqFunction_2347,
    logic2_raw_eqFunction_2348,
    logic2_raw_eqFunction_2349,
    logic2_raw_eqFunction_2350,
    logic2_raw_eqFunction_2351,
    logic2_raw_eqFunction_2352,
    logic2_raw_eqFunction_2353
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

void logic2_raw_JacLSJac18_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {2347, 2348, 2349, 2350, 2351, 2352, 2353};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3085
type: SIMPLE_ASSIGN
$cse94 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic2_raw_eqFunction_3085(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3085};
  jacobian->tmpVars[0] /* $cse94 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 3085;
}

/*
equation index: 3086
type: SIMPLE_ASSIGN
$cse46.$pDERNLSJac21.dummyVarNLSJac21 = (-4102.99) * $cse94 * weaBus.TWetBul.SeedNLSJac21 / (-35.719 + weaBus.TWetBul) ^ 2.0
*/
void logic2_raw_eqFunction_3086(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3086};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse46.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse94 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac21 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 3086;
}

/*
equation index: 3087
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 = (-0.0010168521133208628) * weaData.pAtm * $cse46.$pDERNLSJac21.dummyVarNLSJac21 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46) ^ 2.0
*/
void logic2_raw_eqFunction_3087(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3087};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $cse46 variable */)));
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse46.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46) ^ 2.0")));
  threadData->lastEquationSolved = 3087;
}

/*
equation index: 3088
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic2_raw_eqFunction_3088(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3088};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1326]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 3088;
}

/*
equation index: 3089
type: SIMPLE_ASSIGN
$res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 - weaBus.TWetBul.SeedNLSJac21 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic2_raw_eqFunction_3089(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3089};
  jacobian->resultVars[0] /* $res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac21 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1327]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 3089;
}

OMC_DISABLE_OPT
int logic2_raw_functionJacNLSJac21_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_NLSJac21;
  
  
  return 0;
}

int logic2_raw_functionJacNLSJac21_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_NLSJac21;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic2_raw_eqFunction_3085,
    logic2_raw_eqFunction_3086,
    logic2_raw_eqFunction_3087,
    logic2_raw_eqFunction_3088,
    logic2_raw_eqFunction_3089
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

void logic2_raw_JacNLSJac21_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3085, 3086, 3087, 3088, 3089};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3789
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic2_raw_eqFunction_3789(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3789};
  jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[890]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3789;
}

/*
equation index: 3790
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic2_raw_eqFunction_3790(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3790};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3790;
}

/*
equation index: 3791
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic2_raw_eqFunction_3791(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3791};
  jacobian->tmpVars[1] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[892]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3791;
}

/*
equation index: 3792
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic2_raw_eqFunction_3792(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3792};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3792;
}

/*
equation index: 3793
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic2_raw_eqFunction_3793(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3793};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[891]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3793;
}

/*
equation index: 3794
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic2_raw_eqFunction_3794(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3794};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3794;
}

/*
equation index: 3795
type: SIMPLE_ASSIGN
$res_LSJac30_1.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic2_raw_eqFunction_3795(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,3795};
  jacobian->resultVars[0] /* $res_LSJac30_1.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3795;
}

OMC_DISABLE_OPT
int logic2_raw_functionJacLSJac30_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_LSJac30;
  
  
  return 0;
}

int logic2_raw_functionJacLSJac30_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_LSJac30;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic2_raw_eqFunction_3789,
    logic2_raw_eqFunction_3790,
    logic2_raw_eqFunction_3791,
    logic2_raw_eqFunction_3792,
    logic2_raw_eqFunction_3793,
    logic2_raw_eqFunction_3794,
    logic2_raw_eqFunction_3795
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

void logic2_raw_JacLSJac30_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3789, 3790, 3791, 3792, 3793, 3794, 3795};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int logic2_raw_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic2_raw_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic2_raw_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic2_raw_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic2_raw_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic2_raw_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic2_raw_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic2_raw_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic2_raw_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic2_raw_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic2_raw_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic2_raw_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int logic2_raw_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_A;
  
  
  return 0;
}

int logic2_raw_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic2_raw_INDEX_JAC_A;
  
  
  return 0;
}

void logic2_raw_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int logic2_raw_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacNLSJac0.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, logic2_raw_functionJacNLSJac0_column, NULL, NULL);
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
int logic2_raw_initialAnalyticJacobianLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacLSJac9.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic2_raw_functionJacLSJac9_column, NULL, NULL);
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
int logic2_raw_initialAnalyticJacobianNLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacNLSJac14.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, logic2_raw_functionJacNLSJac14_column, NULL, NULL);
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
int logic2_raw_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacLSJac18.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic2_raw_functionJacLSJac18_column, NULL, NULL);
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
int logic2_raw_initialAnalyticJacobianNLSJac21(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacNLSJac21.bin");
  
  initJacobian(jacobian, 1, 1, 5, NULL, logic2_raw_functionJacNLSJac21_column, NULL, NULL);
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
int logic2_raw_initialAnalyticJacobianLSJac30(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacLSJac30.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic2_raw_functionJacLSJac30_column, NULL, NULL);
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
int logic2_raw_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic2_raw_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic2_raw_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic2_raw_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic2_raw_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic2_raw_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int logic2_raw_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic2_raw_JacA.bin");
  
  initJacobian(jacobian, 60, 60, 0, NULL, logic2_raw_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(60, 631, 20);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 60+1, pFile, FALSE);
  if (count != 60+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 60+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 631, pFile, FALSE);
  if (count != 631) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 631, count);
  }
  
  /* write color array */
  /* color 1 with 3 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 3, 60);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 60);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 60);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 60);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 60);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 60);
  /* color 7 with 3 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 3, 60);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 60);
  /* color 9 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 1, 60);
  /* color 10 with 5 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 5, 60);
  /* color 11 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 4, 60);
  /* color 12 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 1, 60);
  /* color 13 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 13, 1, 60);
  /* color 14 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 14, 4, 60);
  /* color 15 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 15, 4, 60);
  /* color 16 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 16, 2, 60);
  /* color 17 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 17, 2, 60);
  /* color 18 with 7 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 18, 7, 60);
  /* color 19 with 11 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 19, 11, 60);
  /* color 20 with 6 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 20, 6, 60);
  
  omc_fclose(pFile);
  
  return 0;
}


