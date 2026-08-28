/* Jacobians 13 */
#include "logic1_raw_model.h"
#include "logic1_raw_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 255
type: SIMPLE_ASSIGN
$cse1 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic1_raw_eqFunction_255(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 = 4.172134052434367 * weaData.pAtm * $cse1 * weaBus.TWetBul.SeedNLSJac0 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0
*/
void logic1_raw_eqFunction_256(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,256};
  modelica_real tmp0;
  tmp0 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse1 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */,(tmp0 * tmp0),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse1)) ^ 2.0"))));
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic1_raw_eqFunction_257(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,257};
  modelica_real tmp1;
  tmp1 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */,(tmp1 * tmp1),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 - weaBus.TWetBul.SeedNLSJac0 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic1_raw_eqFunction_258(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,258};
  jacobian->resultVars[0] /* $res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac0 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 258;
}

OMC_DISABLE_OPT
int logic1_raw_functionJacNLSJac0_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_NLSJac0;
  
  
  return 0;
}

int logic1_raw_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_NLSJac0;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic1_raw_eqFunction_255,
    logic1_raw_eqFunction_256,
    logic1_raw_eqFunction_257,
    logic1_raw_eqFunction_258
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

void logic1_raw_JacNLSJac0_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {255, 256, 257, 258};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 795
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic1_raw_eqFunction_795(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,795};
  jacobian->tmpVars[3] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 795;
}

/*
equation index: 796
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic1_raw_eqFunction_796(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,796};
  jacobian->tmpVars[2] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 796;
}

/*
equation index: 797
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic1_raw_eqFunction_797(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,797};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 797;
}

/*
equation index: 798
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9
*/
void logic1_raw_eqFunction_798(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,798};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac9) SEED_VAR */));
  threadData->lastEquationSolved = 798;
}

/*
equation index: 799
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic1_raw_eqFunction_799(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,799};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[3] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 799;
}

/*
equation index: 800
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic1_raw_eqFunction_800(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,800};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 800;
}

/*
equation index: 801
type: SIMPLE_ASSIGN
$res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 = cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9
*/
void logic1_raw_eqFunction_801(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,801};
  jacobian->resultVars[0] /* $res_LSJac9_1.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac9.dummyVarLSJac9 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 801;
}

OMC_DISABLE_OPT
int logic1_raw_functionJacLSJac9_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_LSJac9;
  
  
  return 0;
}

int logic1_raw_functionJacLSJac9_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_LSJac9;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic1_raw_eqFunction_795,
    logic1_raw_eqFunction_796,
    logic1_raw_eqFunction_797,
    logic1_raw_eqFunction_798,
    logic1_raw_eqFunction_799,
    logic1_raw_eqFunction_800,
    logic1_raw_eqFunction_801
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

void logic1_raw_JacLSJac9_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {795, 796, 797, 798, 799, 800, 801};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 1827
type: SIMPLE_ASSIGN
$cse2 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic1_raw_eqFunction_1827(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1827};
  jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 1827;
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 = 4.172134052434367 * weaData.pAtm * $cse2 * weaBus.TWetBul.SeedNLSJac14 / ((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0
*/
void logic1_raw_eqFunction_1828(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1828};
  modelica_real tmp2;
  tmp2 = (-35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * (-0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * (jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */)));
  jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (4.172134052434367) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * ((jacobian->tmpVars[0] /* $cse2 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */,(tmp2 * tmp2),"((-35.719 + weaBus.TWetBul) * (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse2)) ^ 2.0"))));
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic1_raw_eqFunction_1829(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1829};
  modelica_real tmp3;
  tmp3 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[1] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */,(tmp3 * tmp3),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 1829;
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
$res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 - weaBus.TWetBul.SeedNLSJac14 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic1_raw_eqFunction_1830(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1830};
  jacobian->resultVars[0] /* $res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac14 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 1830;
}

OMC_DISABLE_OPT
int logic1_raw_functionJacNLSJac14_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_NLSJac14;
  
  
  return 0;
}

int logic1_raw_functionJacNLSJac14_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_NLSJac14;
  
  static void (*const eqFunctions[4])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic1_raw_eqFunction_1827,
    logic1_raw_eqFunction_1828,
    logic1_raw_eqFunction_1829,
    logic1_raw_eqFunction_1830
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

void logic1_raw_JacNLSJac14_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {1827, 1828, 1829, 1830};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 2357
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic1_raw_eqFunction_2357(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,2357};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2357;
}

/*
equation index: 2358
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic1_raw_eqFunction_2358(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,2358};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2358;
}

/*
equation index: 2359
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic1_raw_eqFunction_2359(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,2359};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2359;
}

/*
equation index: 2360
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic1_raw_eqFunction_2360(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,2360};
  jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2360;
}

/*
equation index: 2361
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18
*/
void logic1_raw_eqFunction_2361(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,2361};
  jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac18) SEED_VAR */));
  threadData->lastEquationSolved = 2361;
}

/*
equation index: 2362
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic1_raw_eqFunction_2362(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,2362};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2362;
}

/*
equation index: 2363
type: SIMPLE_ASSIGN
$res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 = cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18
*/
void logic1_raw_eqFunction_2363(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,2363};
  jacobian->resultVars[0] /* $res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 2363;
}

OMC_DISABLE_OPT
int logic1_raw_functionJacLSJac18_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_LSJac18;
  
  
  return 0;
}

int logic1_raw_functionJacLSJac18_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_LSJac18;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic1_raw_eqFunction_2357,
    logic1_raw_eqFunction_2358,
    logic1_raw_eqFunction_2359,
    logic1_raw_eqFunction_2360,
    logic1_raw_eqFunction_2361,
    logic1_raw_eqFunction_2362,
    logic1_raw_eqFunction_2363
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

void logic1_raw_JacLSJac18_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {2357, 2358, 2359, 2360, 2361, 2362, 2363};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3093
type: SIMPLE_ASSIGN
$cse94 = exp(4102.99 / (weaBus.TWetBul - 35.719) - 17.2799)
*/
void logic1_raw_eqFunction_3093(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3093};
  jacobian->tmpVars[0] /* $cse94 JACOBIAN_TMP_VAR */ = exp(DIVISION(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */) - 35.719,"weaBus.TWetBul - 35.719") - 17.2799);
  threadData->lastEquationSolved = 3093;
}

/*
equation index: 3094
type: SIMPLE_ASSIGN
$cse46.$pDERNLSJac21.dummyVarNLSJac21 = (-4102.99) * $cse94 * weaBus.TWetBul.SeedNLSJac21 / (-35.719 + weaBus.TWetBul) ^ 2.0
*/
void logic1_raw_eqFunction_3094(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3094};
  modelica_real tmp4;
  tmp4 = -35.719 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */);
  jacobian->tmpVars[1] /* $cse46.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (-4102.99) * ((jacobian->tmpVars[0] /* $cse94 JACOBIAN_TMP_VAR */) * (DIVISION(jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac21 SEED_VAR */,(tmp4 * tmp4),"(-35.719 + weaBus.TWetBul) ^ 2.0")));
  threadData->lastEquationSolved = 3094;
}

/*
equation index: 3095
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 = (-0.0010168521133208628) * weaData.pAtm * $cse46.$pDERNLSJac21.dummyVarNLSJac21 / (-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46) ^ 2.0
*/
void logic1_raw_eqFunction_3095(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3095};
  modelica_real tmp5;
  tmp5 = -0.378035286922501 + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* $cse46 variable */)));
  jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (-0.0010168521133208628) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.pAtm PARAM */)) * (DIVISION(jacobian->tmpVars[1] /* $cse46.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */,(tmp5 * tmp5),"(-0.378035286922501 + 0.0016349032219037793 * weaData.pAtm * $cse46) ^ 2.0")));
  threadData->lastEquationSolved = 3095;
}

/*
equation index: 3096
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 = (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) * weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 / (1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0
*/
void logic1_raw_eqFunction_3096(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3096};
  modelica_real tmp6;
  tmp6 = 1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* weaData.tWetBul_TDryBulXi.XiSat variable */);
  jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */ = (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) * (DIVISION(jacobian->tmpVars[2] /* weaData.tWetBul_TDryBulXi.XiSat.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */,(tmp6 * tmp6),"(1.0 - weaData.tWetBul_TDryBulXi.XiSat) ^ 2.0"));
  threadData->lastEquationSolved = 3096;
}

/*
equation index: 3097
type: SIMPLE_ASSIGN
$res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 = (-2324.0) * (273.15 - weaBus.TWetBul) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 + (-2.5010145e6) * weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 - weaBus.TWetBul.SeedNLSJac21 * (1006.0 * (1.0 - weaData.tWetBul_TDryBulXi.XiDryBul) + 1860.0 * weaData.tWetBul_TDryBulXi.XiSatRefIn + 4184.0 * (weaData.tWetBul_TDryBulXi.XiDryBul - weaData.tWetBul_TDryBulXi.XiSatRefIn))
*/
void logic1_raw_eqFunction_3097(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3097};
  jacobian->resultVars[0] /* $res_NLSJac21_1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (-2324.0) * ((273.15 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* weaBus.TWetBul variable */)) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */)) + (-2.5010145e6) * (jacobian->tmpVars[3] /* weaData.tWetBul_TDryBulXi.XiSatRefIn.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_TMP_VAR */) - ((jacobian->seedVars[0] /* weaBus.TWetBul.SeedNLSJac21 SEED_VAR */) * ((1006.0) * (1.0 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */)) + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */)) + (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1329]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* weaData.tWetBul_TDryBulXi.XiSatRefIn variable */))));
  threadData->lastEquationSolved = 3097;
}

OMC_DISABLE_OPT
int logic1_raw_functionJacNLSJac21_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_NLSJac21;
  
  
  return 0;
}

int logic1_raw_functionJacNLSJac21_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_NLSJac21;
  
  static void (*const eqFunctions[5])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic1_raw_eqFunction_3093,
    logic1_raw_eqFunction_3094,
    logic1_raw_eqFunction_3095,
    logic1_raw_eqFunction_3096,
    logic1_raw_eqFunction_3097
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

void logic1_raw_JacNLSJac21_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3093, 3094, 3095, 3096, 3097};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* constant equations */
/* dynamic equations */

/*
equation index: 3801
type: SIMPLE_ASSIGN
cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 = (-1.1843079200592153e-5) * cooCoi.ele[4].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic1_raw_eqFunction_3801(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,3801};
  jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (-1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[896]] /* cooCoi.ele[4].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3801;
}

/*
equation index: 3802
type: SIMPLE_ASSIGN
cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[3].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic1_raw_eqFunction_3802(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,3802};
  jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[895]] /* cooCoi.ele[3].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3802;
}

/*
equation index: 3803
type: SIMPLE_ASSIGN
cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic1_raw_eqFunction_3803(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,3803};
  jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[4] /* cooCoi.ele.3.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[2] /* cooCoi.ele.3.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3803;
}

/*
equation index: 3804
type: SIMPLE_ASSIGN
cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[2].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic1_raw_eqFunction_3804(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,3804};
  jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[894]] /* cooCoi.ele[2].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3804;
}

/*
equation index: 3805
type: SIMPLE_ASSIGN
cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic1_raw_eqFunction_3805(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,3805};
  jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = jacobian->tmpVars[5] /* cooCoi.ele.2.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[1] /* cooCoi.ele.2.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3805;
}

/*
equation index: 3806
type: SIMPLE_ASSIGN
cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 = 1.1843079200592153e-5 * cooCoi.ele[1].vol2.dynBal.fluidVolume * $DER.cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30
*/
void logic1_raw_eqFunction_3806(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,3806};
  jacobian->tmpVars[0] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[893]] /* cooCoi.ele[1].vol2.dynBal.fluidVolume PARAM */)) * (jacobian->seedVars[0] /* der(cooCoi.ele[1].vol2.dynBal.medium.p.SeedLSJac30) SEED_VAR */));
  threadData->lastEquationSolved = 3806;
}

/*
equation index: 3807
type: SIMPLE_ASSIGN
$res_LSJac30_1.$pDERLSJac30.dummyVarLSJac30 = cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 - cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30
*/
void logic1_raw_eqFunction_3807(DATA *data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,3807};
  jacobian->resultVars[0] /* $res_LSJac30_1.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* cooCoi.ele.1.m2_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */ - jacobian->tmpVars[0] /* cooCoi.ele.1.vol2.dynBal.mb_flow.$pDERLSJac30.dummyVarLSJac30 JACOBIAN_TMP_VAR */;
  threadData->lastEquationSolved = 3807;
}

OMC_DISABLE_OPT
int logic1_raw_functionJacLSJac30_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_LSJac30;
  
  
  return 0;
}

int logic1_raw_functionJacLSJac30_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_LSJac30;
  
  static void (*const eqFunctions[7])(DATA*, threadData_t*, JACOBIAN*, JACOBIAN*) = {
    logic1_raw_eqFunction_3801,
    logic1_raw_eqFunction_3802,
    logic1_raw_eqFunction_3803,
    logic1_raw_eqFunction_3804,
    logic1_raw_eqFunction_3805,
    logic1_raw_eqFunction_3806,
    logic1_raw_eqFunction_3807
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

void logic1_raw_JacLSJac30_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {3801, 3802, 3803, 3804, 3805, 3806, 3807};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

int logic1_raw_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic1_raw_JacADJ_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic1_raw_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic1_raw_JacH_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic1_raw_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic1_raw_JacF_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic1_raw_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic1_raw_JacD_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic1_raw_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic1_raw_JacC_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

int logic1_raw_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}

void logic1_raw_JacB_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian) { /* empty */ }

/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int logic1_raw_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_A;
  
  
  return 0;
}

int logic1_raw_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = logic1_raw_INDEX_JAC_A;
  
  
  return 0;
}

void logic1_raw_JacA_DAG(DATA* data, threadData_t* threadData, JACOBIAN* jacobian)
{
  const size_t eqMap[] = {};
  buildEvalDAG_Jac(jacobian, data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

OMC_DISABLE_OPT
int logic1_raw_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacNLSJac0.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, logic1_raw_functionJacNLSJac0_column, NULL, NULL);
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
int logic1_raw_initialAnalyticJacobianLSJac9(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacLSJac9.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic1_raw_functionJacLSJac9_column, NULL, NULL);
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
int logic1_raw_initialAnalyticJacobianNLSJac14(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacNLSJac14.bin");
  
  initJacobian(jacobian, 1, 1, 4, NULL, logic1_raw_functionJacNLSJac14_column, NULL, NULL);
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
int logic1_raw_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacLSJac18.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic1_raw_functionJacLSJac18_column, NULL, NULL);
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
int logic1_raw_initialAnalyticJacobianNLSJac21(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacNLSJac21.bin");
  
  initJacobian(jacobian, 1, 1, 5, NULL, logic1_raw_functionJacNLSJac21_column, NULL, NULL);
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
int logic1_raw_initialAnalyticJacobianLSJac30(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacLSJac30.bin");
  
  initJacobian(jacobian, 1, 1, 8, NULL, logic1_raw_functionJacLSJac30_column, NULL, NULL);
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
int logic1_raw_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic1_raw_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic1_raw_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic1_raw_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic1_raw_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int logic1_raw_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int logic1_raw_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "logic1_raw_JacA.bin");
  
  initJacobian(jacobian, 60, 60, 0, NULL, logic1_raw_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(60, 691, 22);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  jacobian->isRowEval = 0 /* false */;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 60+1, pFile, FALSE);
  if (count != 60+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 60+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 691, pFile, FALSE);
  if (count != 691) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 691, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 60);
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
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1, 60);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1, 60);
  /* color 9 with 3 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 3, 60);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1, 60);
  /* color 11 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 11, 1, 60);
  /* color 12 with 5 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 12, 5, 60);
  /* color 13 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 13, 4, 60);
  /* color 14 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 14, 1, 60);
  /* color 15 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 15, 1, 60);
  /* color 16 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 16, 4, 60);
  /* color 17 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 17, 4, 60);
  /* color 18 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 18, 2, 60);
  /* color 19 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 19, 2, 60);
  /* color 20 with 7 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 20, 7, 60);
  /* color 21 with 11 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 21, 11, 60);
  /* color 22 with 6 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 22, 6, 60);
  
  omc_fclose(pFile);
  
  return 0;
}


