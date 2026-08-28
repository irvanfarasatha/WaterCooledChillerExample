/* Jacobians 13 */
#include "logic3_raw_model.h"
#include "logic3_raw_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 255
type: SIMPLE_ASSIGN
$cse1 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic3_raw_eqFunction_255(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 = 4.172134052434367 * weaData.pAtm * $cse1 * weaBus.TWetBul.SeedNLSJac0 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0
*/
void logic3_raw_eqFunction_256(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,256};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic3_raw_eqFunction_257(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,257};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 - weaBus.TWetBul.SeedNLSJac0 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic3_raw_eqFunction_258(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,258};
  jacobian->resultVars[0] /* $res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 258;
}

OMC_DISABLE_OPT
int logic3_raw_functionJacNLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_NLSJac0;
  
  
  return 0;
}

int logic3_raw_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_NLSJac0;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic3_raw_eqFunction_255,
    logic3_raw_eqFunction_256,
    logic3_raw_eqFunction_257,
    logic3_raw_eqFunction_258
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

void logic3_raw_JacNLSJac0_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {255, 256, 257, 258};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 801
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic3_raw_eqFunction_801(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,801};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 801;
}

/*
equation index: 802
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic3_raw_eqFunction_802(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,802};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 802;
}

/*
equation index: 803
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic3_raw_eqFunction_803(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,803};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 803;
}

/*
equation index: 804
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic3_raw_eqFunction_804(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,804};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 804;
}

/*
equation index: 805
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic3_raw_eqFunction_805(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,805};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 805;
}

/*
equation index: 806
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic3_raw_eqFunction_806(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,806};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 806;
}

/*
equation index: 807
type: SIMPLE_ASSIGN
$res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic3_raw_eqFunction_807(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,807};
  jacobian->resultVars[0] /* $res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 807;
}

OMC_DISABLE_OPT
int logic3_raw_functionJacLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_LSJac9;
  
  
  return 0;
}

int logic3_raw_functionJacLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_LSJac9;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic3_raw_eqFunction_801,
    logic3_raw_eqFunction_802,
    logic3_raw_eqFunction_803,
    logic3_raw_eqFunction_804,
    logic3_raw_eqFunction_805,
    logic3_raw_eqFunction_806,
    logic3_raw_eqFunction_807
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

void logic3_raw_JacLSJac9_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {801, 802, 803, 804, 805, 806, 807};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1833
type: SIMPLE_ASSIGN
$cse2 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic3_raw_eqFunction_1833(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1833};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 = 4.172134052434367 * weaData.pAtm * $cse2 * weaBus.TWetBul.SeedNLSJac14 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0
*/
void logic3_raw_eqFunction_1834(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1834};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 1834;
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic3_raw_eqFunction_1835(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1835};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1835;
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
$res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 - weaBus.TWetBul.SeedNLSJac14 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic3_raw_eqFunction_1836(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1836};
  jacobian->resultVars[0] /* $res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1836;
}

OMC_DISABLE_OPT
int logic3_raw_functionJacNLSJac14_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_NLSJac14;
  
  
  return 0;
}

int logic3_raw_functionJacNLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_NLSJac14;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic3_raw_eqFunction_1833,
    logic3_raw_eqFunction_1834,
    logic3_raw_eqFunction_1835,
    logic3_raw_eqFunction_1836
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

void logic3_raw_JacNLSJac14_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1833, 1834, 1835, 1836};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 2369
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic3_raw_eqFunction_2369(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2369};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2369;
}

/*
equation index: 2370
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic3_raw_eqFunction_2370(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2370};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2370;
}

/*
equation index: 2371
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic3_raw_eqFunction_2371(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2371};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2371;
}

/*
equation index: 2372
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic3_raw_eqFunction_2372(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2372};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2372;
}

/*
equation index: 2373
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic3_raw_eqFunction_2373(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,2373};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2373;
}

/*
equation index: 2374
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic3_raw_eqFunction_2374(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,2374};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2374;
}

/*
equation index: 2375
type: SIMPLE_ASSIGN
$res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic3_raw_eqFunction_2375(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,2375};
  jacobian->resultVars[0] /* $res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2375;
}

OMC_DISABLE_OPT
int logic3_raw_functionJacLSJac18_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_LSJac18;
  
  
  return 0;
}

int logic3_raw_functionJacLSJac18_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_LSJac18;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic3_raw_eqFunction_2369,
    logic3_raw_eqFunction_2370,
    logic3_raw_eqFunction_2371,
    logic3_raw_eqFunction_2372,
    logic3_raw_eqFunction_2373,
    logic3_raw_eqFunction_2374,
    logic3_raw_eqFunction_2375
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

void logic3_raw_JacLSJac18_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {2369, 2370, 2371, 2372, 2373, 2374, 2375};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3105
type: SIMPLE_ASSIGN
$cse94 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic3_raw_eqFunction_3105(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3105};
  jacobian->tmpVars[0] /* $cse94 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 3105;
}

/*
equation index: 3106
type: SIMPLE_ASSIGN
$cse46.$pDERNLSJac21.dummyVarNLSJac21 = (-4102.99) * $cse94 * weaBus.TWetBul.SeedNLSJac21 / (-35.719 + weaBus.TWetBul) ^ 2.0
*/
void logic3_raw_eqFunction_3106(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3106};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse46.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse94 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac21 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 3106;
}

/*
equation index: 3107
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 = (-0.0010168521133208628) * weaData.pAtm * $cse46.$pDERNLSJac21.dummyVarNLSJac21 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46) ^ 2.0
*/
void logic3_raw_eqFunction_3107(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3107};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* $cse46 variable */)));
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.pAtm PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse46.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46) ^ 2.0")));
  threadData->lastEquationSolved = 3107;
}

/*
equation index: 3108
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic3_raw_eqFunction_3108(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3108};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1336]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 3108;
}

/*
equation index: 3109
type: SIMPLE_ASSIGN
$res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 - weaBus.TWetBul.SeedNLSJac21 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic3_raw_eqFunction_3109(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3109};
  jacobian->resultVars[0] /* $res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac21 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1335]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1337]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 3109;
}

OMC_DISABLE_OPT
int logic3_raw_functionJacNLSJac21_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_NLSJac21;
  
  
  return 0;
}

int logic3_raw_functionJacNLSJac21_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_NLSJac21;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic3_raw_eqFunction_3105,
    logic3_raw_eqFunction_3106,
    logic3_raw_eqFunction_3107,
    logic3_raw_eqFunction_3108,
    logic3_raw_eqFunction_3109
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

void logic3_raw_JacNLSJac21_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3105, 3106, 3107, 3108, 3109};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3817
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic3_raw_eqFunction_3817(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3817};
  jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[900]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3817;
}

/*
equation index: 3818
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic3_raw_eqFunction_3818(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3818};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[903]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3818;
}

/*
equation index: 3819
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic3_raw_eqFunction_3819(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3819};
  jacobian->tmpVars[1] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[902]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3819;
}

/*
equation index: 3820
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic3_raw_eqFunction_3820(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3820};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3820;
}

/*
equation index: 3821
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic3_raw_eqFunction_3821(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3821};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[901]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3821;
}

/*
equation index: 3822
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic3_raw_eqFunction_3822(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3822};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3822;
}

/*
equation index: 3823
type: SIMPLE_ASSIGN
$res_LSJac30_1.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic3_raw_eqFunction_3823(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,3823};
  jacobian->resultVars[0] /* $res_LSJac30_1.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3823;
}

OMC_DISABLE_OPT
int logic3_raw_functionJacLSJac30_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_LSJac30;
  
  
  return 0;
}

int logic3_raw_functionJacLSJac30_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_LSJac30;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic3_raw_eqFunction_3817,
    logic3_raw_eqFunction_3818,
    logic3_raw_eqFunction_3819,
    logic3_raw_eqFunction_3820,
    logic3_raw_eqFunction_3821,
    logic3_raw_eqFunction_3822,
    logic3_raw_eqFunction_3823
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

void logic3_raw_JacLSJac30_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3817, 3818, 3819, 3820, 3821, 3822, 3823};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int logic3_raw_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic3_raw_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic3_raw_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic3_raw_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic3_raw_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic3_raw_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic3_raw_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic3_raw_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic3_raw_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic3_raw_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic3_raw_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic3_raw_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int logic3_raw_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_A;
  
  
  return 0;
}

int logic3_raw_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic3_raw_INDEX_JAC_A;
  
  
  return 0;
}

void logic3_raw_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int logic3_raw_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacNLSJac0.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, logic3_raw_functionJacNLSJac0_column, NULL, NULL);
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
int logic3_raw_initialAnalyticJacobianLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacLSJac9.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic3_raw_functionJacLSJac9_column, NULL, NULL);
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
int logic3_raw_initialAnalyticJacobianNLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacNLSJac14.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, logic3_raw_functionJacNLSJac14_column, NULL, NULL);
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
int logic3_raw_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacLSJac18.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic3_raw_functionJacLSJac18_column, NULL, NULL);
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
int logic3_raw_initialAnalyticJacobianNLSJac21(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacNLSJac21.bin");
  
  initJacobian(jacobian, 1, 1, 5, NULL, logic3_raw_functionJacNLSJac21_column, NULL, NULL);
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
int logic3_raw_initialAnalyticJacobianLSJac30(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacLSJac30.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic3_raw_functionJacLSJac30_column, NULL, NULL);
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
int logic3_raw_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic3_raw_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic3_raw_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic3_raw_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic3_raw_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic3_raw_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int logic3_raw_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic3_raw_JacA.bin");
  
  initJacobian(jacobian, 62, 62, 0, NULL, logic3_raw_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(62, 729, 22);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 62+1, pFile, FALSE);
  if (count != 62+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 62+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 729, pFile, FALSE);
  if (count != 729) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 729, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 62);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 62);
  /* color 3 with 3 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 3, 62);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 62);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1, 62);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1, 62);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1, 62);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 62);
  /* color 9 with 3 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 3, 62);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1, 62);
  /* color 11 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 1, 62);
  /* color 12 with 5 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 5, 62);
  /* color 13 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 13, 4, 62);
  /* color 14 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 14, 1, 62);
  /* color 15 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 15, 1, 62);
  /* color 16 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 16, 4, 62);
  /* color 17 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 17, 4, 62);
  /* color 18 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 18, 2, 62);
  /* color 19 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 19, 2, 62);
  /* color 20 with 7 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 20, 7, 62);
  /* color 21 with 11 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 21, 11, 62);
  /* color 22 with 6 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 22, 6, 62);
  
  omc_fclose(pFile);
  
  return 0;
}


