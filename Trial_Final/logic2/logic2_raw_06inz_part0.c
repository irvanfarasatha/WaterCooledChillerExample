#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1
type: SIMPLE_ASSIGN
fanSup.vol.U = 0.0
*/
void logic2_raw_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* fanSup.vol.U variable */) = 0.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
fanSup.vol.mXi[1] = 0.0
*/
void logic2_raw_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* fanSup.vol.mXi[1] variable */) = 0.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
fanSup.vol.m = 0.0
*/
void logic2_raw_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* fanSup.vol.m variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
fanSup.preSou.dp_internal = 0.0
*/
void logic2_raw_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* fanSup.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* fanSup.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* fanSup.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.Xi_outflow[1] = 0.0
*/
void logic2_raw_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* fanSup.senRelPre.port_a.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.Xi_outflow[1] = 0.0
*/
void logic2_raw_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[875]] /* fanSup.senRelPre.port_b.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
cooCoi.temSen_1.mNor_flow = 1.0
*/
void logic2_raw_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* cooCoi.temSen_1.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
cooCoi.temSen_1.k = 1.0
*/
void logic2_raw_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* cooCoi.temSen_1.k variable */) = 1.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
cooCoi.temSen_2.mNor_flow = 1.0
*/
void logic2_raw_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* cooCoi.temSen_2.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
cooCoi.temSen_2.k = 1.0
*/
void logic2_raw_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* cooCoi.temSen_2.k variable */) = 1.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* cooCoi.ele[1].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* cooCoi.ele[1].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* cooCoi.ele[2].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* cooCoi.ele[2].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* cooCoi.ele[3].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[569]] /* cooCoi.ele[3].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* cooCoi.ele[4].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[570]] /* cooCoi.ele[4].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* pumCHW.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* pumCHW.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
pumCHW.preSou.dp_internal = 0.0
*/
void logic2_raw_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* pumCHW.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* pumCHW.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* pumCHW.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* cooTow.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* cooTow.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* pumCW.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* pumCW.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
pumCW.preSou.dp_internal = 0.0
*/
void logic2_raw_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* pumCW.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* pumCW.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* pumCW.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* chi.vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
chi.vol1.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* chi.vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* chi.vol2.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
chi.vol2.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* chi.vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.TDryBul_degC = 0.0
*/
void logic2_raw_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1324]] /* weaData.tWetBul_TDryBulXi.TDryBul_degC variable */) = 0.0;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.rh_per = 0.0
*/
void logic2_raw_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1328]] /* weaData.tWetBul_TDryBulXi.rh_per variable */) = 0.0;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
conPIDTAirSup.I.y_reset_internal = 0.0
*/
void logic2_raw_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* conPIDTAirSup.I.y_reset_internal variable */) = 0.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
conPIDTAirSup.I.trigger_internal = false
*/
void logic2_raw_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* conPIDTAirSup.I.trigger_internal DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
conPIDTAirSup.y_reset_internal = 0.0
*/
void logic2_raw_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* conPIDTAirSup.y_reset_internal variable */) = 0.0;
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
fanRet.vol.U = 0.0
*/
void logic2_raw_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* fanRet.vol.U variable */) = 0.0;
  threadData->lastEquationSolved = 42;
}

/*
equation index: 43
type: SIMPLE_ASSIGN
fanRet.vol.mXi[1] = 0.0
*/
void logic2_raw_eqFunction_43(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* fanRet.vol.mXi[1] variable */) = 0.0;
  threadData->lastEquationSolved = 43;
}

/*
equation index: 44
type: SIMPLE_ASSIGN
fanRet.vol.m = 0.0
*/
void logic2_raw_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* fanRet.vol.m variable */) = 0.0;
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
fanRet.preSou.dp_internal = 0.0
*/
void logic2_raw_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* fanRet.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* fanRet.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* fanRet.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.Xi_outflow[1] = 0.0
*/
void logic2_raw_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* fanRet.senRelPre.port_a.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.Xi_outflow[1] = 0.0
*/
void logic2_raw_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* fanRet.senRelPre.port_b.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
PCHW.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* PCHW.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
PCHW.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* PCHW.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* pumCHW2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* pumCHW2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
pumCHW2.preSou.dp_internal = 0.0
*/
void logic2_raw_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* pumCHW2.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* pumCHW2.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* pumCHW2.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* cooTow2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* cooTow2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* pumCW2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* pumCW2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
pumCW2.preSou.dp_internal = 0.0
*/
void logic2_raw_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* pumCW2.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_a.h_outflow = 0.0
*/
void logic2_raw_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* pumCW2.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_b.h_outflow = 0.0
*/
void logic2_raw_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* pumCW2.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* chi2.vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* chi2.vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* chi2.vol2.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* chi2.vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* junCHWSup.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* junCHWSup.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* junCHWRet.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* junCHWRet.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* junCHWRet2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* junCHWRet2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.X[1] = 1.0
*/
void logic2_raw_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* junCHWSup2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.mWat_flow_internal = 0.0
*/
void logic2_raw_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* junCHWSup2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* cooCoi.ele[1].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* cooCoi.ele[1].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* cooCoi.ele[2].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* cooCoi.ele[2].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* cooCoi.ele[3].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* cooCoi.ele[3].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* cooCoi.ele[4].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* cooCoi.ele[4].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
cooCoi.THA1.y = 293.15
*/
void logic2_raw_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* cooCoi.THA1.y variable */) = 293.15;
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
cooCoi.THA2.y = 293.15
*/
void logic2_raw_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* cooCoi.THA2.y variable */) = 293.15;
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* pumCHW.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* pumCHW.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* cooTow.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* cooTow.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
cooTow.bou.TAirInWB_min = 238.74999999999997
*/
void logic2_raw_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cooTow.bou.TAirInWB_min variable */) = 238.74999999999997;
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
cooTow.bou.TAirInWB_max = 299.84999999999997
*/
void logic2_raw_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.bou.TAirInWB_max variable */) = 299.84999999999997;
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
cooTow.bou.TRan_min = 1.1
*/
void logic2_raw_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* cooTow.bou.TRan_min variable */) = 1.1;
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
cooTow.bou.TRan_max = 22.2
*/
void logic2_raw_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cooTow.bou.TRan_max variable */) = 22.2;
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
cooTow.bou.TApp_min = 1.1
*/
void logic2_raw_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* cooTow.bou.TApp_min variable */) = 1.1;
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
cooTow.bou.TApp_max = 40.0
*/
void logic2_raw_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* cooTow.bou.TApp_max variable */) = 40.0;
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
cooTow.bou.FRWat_min = 0.75
*/
void logic2_raw_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cooTow.bou.FRWat_min variable */) = 0.75;
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
cooTow.bou.FRWat_max = 1.25
*/
void logic2_raw_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cooTow.bou.FRWat_max variable */) = 1.25;
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* pumCW.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* pumCW.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* chi.vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* chi.vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* chi.vol2.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* chi.vol2.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* pumCHW2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* pumCHW2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* cooTow2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* cooTow2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
cooTow2.bou.TAirInWB_min = 238.74999999999997
*/
void logic2_raw_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* cooTow2.bou.TAirInWB_min variable */) = 238.74999999999997;
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
cooTow2.bou.TAirInWB_max = 299.84999999999997
*/
void logic2_raw_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.bou.TAirInWB_max variable */) = 299.84999999999997;
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
cooTow2.bou.TRan_min = 1.1
*/
void logic2_raw_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* cooTow2.bou.TRan_min variable */) = 1.1;
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
cooTow2.bou.TRan_max = 22.2
*/
void logic2_raw_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* cooTow2.bou.TRan_max variable */) = 22.2;
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
cooTow2.bou.TApp_min = 1.1
*/
void logic2_raw_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cooTow2.bou.TApp_min variable */) = 1.1;
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
cooTow2.bou.TApp_max = 40.0
*/
void logic2_raw_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.bou.TApp_max variable */) = 40.0;
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
cooTow2.bou.FRWat_min = 0.75
*/
void logic2_raw_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.bou.FRWat_min variable */) = 0.75;
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
cooTow2.bou.FRWat_max = 1.25
*/
void logic2_raw_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* cooTow2.bou.FRWat_max variable */) = 1.25;
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* pumCW2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* pumCW2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* chi2.vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* chi2.vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* chi2.vol2.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* chi2.vol2.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* junCHWSup.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* junCHWSup.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* junCHWRet.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* junCHWRet.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* junCHWRet2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* junCHWRet2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.R = 0.0
*/
void logic2_raw_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* junCHWSup2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.MM = 0.018015268
*/
void logic2_raw_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* junCHWSup2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flowInv = if noEvent(55.989691542288554 > fanSup.vol.steBal.deltaReg) or noEvent(55.989691542288554 < (-fanSup.vol.steBal.deltaReg)) then 0.017860430598098727 else if noEvent(55.989691542288554 < 0.5 * fanSup.vol.steBal.deltaReg) and noEvent(55.989691542288554 > (-0.5) * fanSup.vol.steBal.deltaReg) then 55.989691542288554 / fanSup.vol.steBal.deltaReg ^ 2.0 else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(55.989691542288554, fanSup.vol.steBal.deltaReg, fanSup.vol.steBal.deltaInvReg, fanSup.vol.steBal.aReg, fanSup.vol.steBal.bReg, fanSup.vol.steBal.cReg, fanSup.vol.steBal.dReg, fanSup.vol.steBal.eReg, fanSup.vol.steBal.fReg)
*/
void logic2_raw_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp0 = Greater(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */));
  tmp1 = Less(55.989691542288554,(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */)));
  tmp7 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp7)
  {
    tmp8 = 0.017860430598098727;
  }
  else
  {
    tmp2 = Less(55.989691542288554,(0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */)));
    tmp3 = Greater(55.989691542288554,(-0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */)));
    tmp5 = (modelica_boolean)(tmp2 && tmp3);
    if(tmp5)
    {
      tmp4 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */);
      tmp6 = DIVISION_SIM(55.989691542288554,(tmp4 * tmp4),"fanSup.vol.steBal.deltaReg ^ 2.0",equationIndexes);
    }
    else
    {
      tmp6 = omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, 55.989691542288554, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1608]] /* fanSup.vol.steBal.deltaReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1607]] /* fanSup.vol.steBal.deltaInvReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1602]] /* fanSup.vol.steBal.aReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1603]] /* fanSup.vol.steBal.bReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1604]] /* fanSup.vol.steBal.cReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1606]] /* fanSup.vol.steBal.dReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1609]] /* fanSup.vol.steBal.eReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1610]] /* fanSup.vol.steBal.fReg PARAM */));
    }
    tmp8 = tmp6;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* fanSup.vol.steBal.m_flowInv variable */) = tmp8;
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* cooCoi.ele[1].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* cooCoi.ele[2].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* cooCoi.ele[3].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* cooCoi.ele[4].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* pumCHW.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* cooTow.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* pumCW.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
chi.vol1.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* chi.vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 138;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
chi.vol2.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* chi.vol2.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 139;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
TAirSup.mNor_flow = 1.0
*/
void logic2_raw_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* TAirSup.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 140;
}

/*
equation index: 141
type: SIMPLE_ASSIGN
vol.dynBal.mb_flow = 0.0
*/
void logic2_raw_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 141;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flowInv = if noEvent(55.989691542288554 > fanRet.vol.steBal.deltaReg) or noEvent(55.989691542288554 < (-fanRet.vol.steBal.deltaReg)) then 0.017860430598098727 else if noEvent(55.989691542288554 < 0.5 * fanRet.vol.steBal.deltaReg) and noEvent(55.989691542288554 > (-0.5) * fanRet.vol.steBal.deltaReg) then 55.989691542288554 / fanRet.vol.steBal.deltaReg ^ 2.0 else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(55.989691542288554, fanRet.vol.steBal.deltaReg, fanRet.vol.steBal.deltaInvReg, fanRet.vol.steBal.aReg, fanRet.vol.steBal.bReg, fanRet.vol.steBal.cReg, fanRet.vol.steBal.dReg, fanRet.vol.steBal.eReg, fanRet.vol.steBal.fReg)
*/
void logic2_raw_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp9 = Greater(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */));
  tmp10 = Less(55.989691542288554,(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */)));
  tmp16 = (modelica_boolean)(tmp9 || tmp10);
  if(tmp16)
  {
    tmp17 = 0.017860430598098727;
  }
  else
  {
    tmp11 = Less(55.989691542288554,(0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */)));
    tmp12 = Greater(55.989691542288554,(-0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */)));
    tmp14 = (modelica_boolean)(tmp11 && tmp12);
    if(tmp14)
    {
      tmp13 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */);
      tmp15 = DIVISION_SIM(55.989691542288554,(tmp13 * tmp13),"fanRet.vol.steBal.deltaReg ^ 2.0",equationIndexes);
    }
    else
    {
      tmp15 = omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, 55.989691542288554, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1471]] /* fanRet.vol.steBal.deltaReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1470]] /* fanRet.vol.steBal.deltaInvReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1465]] /* fanRet.vol.steBal.aReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1466]] /* fanRet.vol.steBal.bReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1467]] /* fanRet.vol.steBal.cReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1469]] /* fanRet.vol.steBal.dReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1472]] /* fanRet.vol.steBal.eReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1473]] /* fanRet.vol.steBal.fReg PARAM */));
    }
    tmp17 = tmp15;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* fanRet.vol.steBal.m_flowInv variable */) = tmp17;
  threadData->lastEquationSolved = 142;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.m = 995.586 * junCHWSup2.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* junCHWSup2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 143;
}

/*
equation index: 144
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.m = 995.586 * junCHWRet2.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* junCHWRet2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.m = 995.586 * junCHWRet.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.m = 995.586 * junCHWSup.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* junCHWSup.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 146;
}

/*
equation index: 147
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.m = 995.586 * chi2.vol2.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* chi2.vol2.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* chi2.vol2.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 147;
}

/*
equation index: 148
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.m = 995.586 * chi2.vol1.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* chi2.vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* chi2.vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 148;
}

/*
equation index: 149
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.m = 995.586 * pumCW2.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* pumCW2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumCW2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 149;
}

/*
equation index: 150
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.m = 995.586 * cooTow2.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* cooTow2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 150;
}

/*
equation index: 151
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.m = 995.586 * pumCHW2.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* pumCHW2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 151;
}

/*
equation index: 152
type: SIMPLE_ASSIGN
kMinusU.y = kMinusU.k - damCon.k
*/
void logic2_raw_eqFunction_152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* kMinusU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2150]] /* kMinusU.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* damCon.k PARAM */);
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
damRet.k = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(kMinusU.y, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
void logic2_raw_eqFunction_153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,153};
  modelica_real tmp18;
  real_array tmp19;
  real_array tmp20;
  tmp18 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1306]] /* damRet.rho_default PARAM */);
  if(!(tmp18 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damRet.rho_default) was %g should be >= 0", tmp18);
    }
  }real_array_create(&tmp19, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp20, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1289]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* damRet.k variable */) = (1.4142135623730951) * ((sqrt(tmp18)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damRet.A PARAM */),omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* kMinusU.y variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1284]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damRet.b PARAM */), tmp19, tmp20, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1313]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1314]] /* damRet.yU PARAM */)),"Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(kMinusU.y, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)",equationIndexes)));
  threadData->lastEquationSolved = 153;
}

/*
equation index: 154
type: SIMPLE_ASSIGN
damOA.k = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
void logic2_raw_eqFunction_154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,154};
  modelica_real tmp21;
  real_array tmp22;
  real_array tmp23;
  tmp21 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* damOA.rho_default PARAM */);
  if(!(tmp21 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damOA.rho_default) was %g should be >= 0", tmp21);
    }
  }real_array_create(&tmp22, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp23, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* damOA.k variable */) = (1.4142135623730951) * ((sqrt(tmp21)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damOA.A PARAM */),omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* damCon.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */), tmp22, tmp23, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */)),"Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)",equationIndexes)));
  threadData->lastEquationSolved = 154;
}

/*
equation index: 155
type: SIMPLE_ASSIGN
damEA.k = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
void logic2_raw_eqFunction_155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,155};
  modelica_real tmp24;
  real_array tmp25;
  real_array tmp26;
  tmp24 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* damEA.rho_default PARAM */);
  if(!(tmp24 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damEA.rho_default) was %g should be >= 0", tmp24);
    }
  }real_array_create(&tmp25, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* damEA.k variable */) = (1.4142135623730951) * ((sqrt(tmp24)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* damEA.A PARAM */),omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* damCon.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */), tmp25, tmp26, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */)),"Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)",equationIndexes)));
  threadData->lastEquationSolved = 155;
}

/*
equation index: 156
type: SIMPLE_ASSIGN
chi.vol2.dynBal.m = 995.586 * chi.vol2.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* chi.vol2.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[240]] /* chi.vol2.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 156;
}

/*
equation index: 157
type: SIMPLE_ASSIGN
chi.vol1.dynBal.m = 995.586 * chi.vol1.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* chi.vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[215]] /* chi.vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 157;
}

/*
equation index: 158
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.m = 995.586 * pumCW.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* pumCW.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2522]] /* pumCW.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.m = 995.586 * cooTow.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* cooTow.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1103]] /* cooTow.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.m = 995.586 * pumCHW.vol.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* pumCHW.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2266]] /* pumCHW.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 160;
}

/*
equation index: 161
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.m = 995.586 * cooCoi.ele[4].vol1.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 161;
}

/*
equation index: 162
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.m = 995.586 * cooCoi.ele[3].vol1.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 162;
}

/*
equation index: 163
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.m = 995.586 * cooCoi.ele[2].vol1.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 163;
}

/*
equation index: 164
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.m = 995.586 * cooCoi.ele[1].vol1.dynBal.fluidVolume
*/
void logic2_raw_eqFunction_164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* cooCoi.ele[1].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 164;
}

/*
equation index: 165
type: SIMPLE_ASSIGN
weaData.conTim1.weaDatEndTim = weaData.timeSpan[2]
*/
void logic2_raw_eqFunction_165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* weaData.conTim1.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* weaData.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 165;
}

/*
equation index: 166
type: SIMPLE_ASSIGN
weaData.conTim1.weaDatStaTim = weaData.timeSpan[1]
*/
void logic2_raw_eqFunction_166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* weaData.conTim1.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* weaData.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 166;
}

/*
equation index: 167
type: SIMPLE_ASSIGN
weaData.conTim1.lenWea = weaData.conTim1.weaDatEndTim - weaData.conTim1.weaDatStaTim
*/
void logic2_raw_eqFunction_167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* weaData.conTim1.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2896]] /* weaData.conTim1.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2897]] /* weaData.conTim1.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 167;
}

/*
equation index: 168
type: SIMPLE_ASSIGN
weaData.conTim1.canRepeatWeatherFile = abs(mod(weaData.conTim1.lenWea, 3.1536e7)) < 0.01
*/
void logic2_raw_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  modelica_real tmp27;
  modelica_boolean tmp28;
  tmp27 = 3.1536e7;
  if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaData.conTim1.lenWea, 3.1536e7)");}
  tmp28 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* weaData.conTim1.lenWea PARAM */), tmp27)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) = tmp28;
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
weaData.conTim.weaDatEndTim = weaData.timeSpan[2]
*/
void logic2_raw_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* weaData.conTim.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2915]] /* weaData.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
weaData.conTim.weaDatStaTim = weaData.timeSpan[1]
*/
void logic2_raw_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* weaData.conTim.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2914]] /* weaData.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 170;
}

/*
equation index: 171
type: SIMPLE_ASSIGN
weaData.conTim.lenWea = weaData.conTim.weaDatEndTim - weaData.conTim.weaDatStaTim
*/
void logic2_raw_eqFunction_171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* weaData.conTim.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2893]] /* weaData.conTim.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2894]] /* weaData.conTim.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 171;
}

/*
equation index: 172
type: SIMPLE_ASSIGN
weaData.conTim.canRepeatWeatherFile = abs(mod(weaData.conTim.lenWea, 3.1536e7)) < 0.01
*/
void logic2_raw_eqFunction_172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,172};
  modelica_real tmp29;
  modelica_boolean tmp30;
  tmp29 = 3.1536e7;
  if (tmp29 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaData.conTim.lenWea, 3.1536e7)");}
  tmp30 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* weaData.conTim.lenWea PARAM */), tmp29)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */) = tmp30;
  threadData->lastEquationSolved = 172;
}

/*
equation index: 173
type: SIMPLE_ASSIGN
TAirSup.k = Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.0, -1.0, TAirSup.m_flow_small)
*/
void logic2_raw_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* TAirSup.k variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, 55.989691542288554, 1.0, -1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* TAirSup.m_flow_small PARAM */));
  threadData->lastEquationSolved = 173;
}
extern void logic2_raw_eqFunction_3006(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3007(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3017(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3018(DATA *data, threadData_t *threadData);


/*
equation index: 178
type: SIMPLE_ASSIGN
weaData.eqnTim.eqnTim = 60.0 * (9.87 * sin(2.0 * weaData.eqnTim.Bt) + (-7.53) * cos(weaData.eqnTim.Bt) + (-1.5) * sin(weaData.eqnTim.Bt))
*/
void logic2_raw_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1320]] /* weaData.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * (sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* weaData.eqnTim.Bt variable */)))) + (-7.53) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* weaData.eqnTim.Bt variable */))) + (-1.5) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1319]] /* weaData.eqnTim.Bt variable */))));
  threadData->lastEquationSolved = 178;
}
extern void logic2_raw_eqFunction_3023(DATA *data, threadData_t *threadData);


/*
equation index: 180
type: SIMPLE_ASSIGN
weaBus.solDec = asin((-0.3979486313076103) * cos((weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484))
*/
void logic2_raw_eqFunction_180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,180};
  modelica_real tmp31;
  tmp31 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* weaBus.cloTim variable */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp31 >= -1.0 && tmp31 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp31);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* weaBus.solDec variable */) = asin(tmp31);
  threadData->lastEquationSolved = 180;
}
extern void logic2_raw_eqFunction_3024(DATA *data, threadData_t *threadData);


/*
equation index: 182
type: SIMPLE_ASSIGN
weaBus.solZen = acos(cos(weaData.zenAng.lat) * cos(weaBus.solDec) * cos(weaBus.solHouAng) + sin(weaData.zenAng.lat) * sin(weaBus.solDec))
*/
void logic2_raw_eqFunction_182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,182};
  modelica_real tmp32;
  tmp32 = ((cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* weaData.zenAng.lat PARAM */))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* weaBus.solDec variable */)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* weaBus.solHouAng variable */))) + (sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* weaData.zenAng.lat PARAM */))) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* weaBus.solDec variable */)));
  if(!(tmp32 >= -1.0 && tmp32 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(cos(weaData.zenAng.lat) * cos(weaBus.solDec) * cos(weaBus.solHouAng) + sin(weaData.zenAng.lat) * sin(weaBus.solDec)) outside the domain -1.0 <= %g <= 1.0", tmp32);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* weaBus.solZen variable */) = acos(tmp32);
  threadData->lastEquationSolved = 182;
}
extern void logic2_raw_eqFunction_3100(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3142(DATA *data, threadData_t *threadData);


/*
equation index: 185
type: SIMPLE_ASSIGN
chillerStagingCtrl.roomHeatGain_TR = 0.001 * max(roomDemandSignal.y, 0.0) / chillerStagingCtrl.kWPerTR
*/
void logic2_raw_eqFunction_185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* chillerStagingCtrl.roomHeatGain_TR variable */) = (0.001) * (DIVISION_SIM(fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* roomDemandSignal.y variable */),0.0),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */),"chillerStagingCtrl.kWPerTR",equationIndexes));
  threadData->lastEquationSolved = 185;
}
extern void logic2_raw_eqFunction_3146(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3147(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3156(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3161(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3162(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3163(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3164(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3178(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3179(DATA *data, threadData_t *threadData);


/*
equation index: 195
type: SIMPLE_ASSIGN
cooTow.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(val5.m_flow, cooTow.preDro.k, cooTow.preDro.m_flow_turbulent), 104510.0 * val5.m_flow / cooTow.preDro.m_flow_nominal_pos)
*/
void logic2_raw_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* cooTow.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow.preDro.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1085]] /* cooTow.preDro.m_flow_turbulent PARAM */)), DIVISION_SIM((104510.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* val5.m_flow variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1083]] /* cooTow.preDro.m_flow_nominal_pos PARAM */),"cooTow.preDro.m_flow_nominal_pos",equationIndexes));
  threadData->lastEquationSolved = 195;
}
extern void logic2_raw_eqFunction_3143(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3148(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3151(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3196(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3197(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3198(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3199(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3200(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3203(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3204(DATA *data, threadData_t *threadData);


/*
equation index: 206
type: SIMPLE_ASSIGN
weaData.conTim.tNext = if weaData.conTim.canRepeatWeatherFile then weaData.conTim.lenWea * (1.0 + (*Real*)(integer(weaBus.cloTim / weaData.conTim.lenWea))) else time
*/
void logic2_raw_eqFunction_206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1344]] /* weaData.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* weaData.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2892]] /* weaData.conTim.lenWea PARAM */),"weaData.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 206;
}
extern void logic2_raw_eqFunction_3028(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3029(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3030(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3031(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3032(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3033(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3034(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3035(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3036(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3037(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3038(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3039(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3040(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3041(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3042(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3043(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3044(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3045(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3046(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3047(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3048(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3049(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3050(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3051(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3052(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3053(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3054(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3055(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3056(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3057(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3058(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3059(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3060(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3061(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3062(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3063(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3064(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3065(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3066(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3067(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3068(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3069(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3070(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3091(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3094(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3074(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3072(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3073(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3092(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3093(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3071(DATA *data, threadData_t *threadData);


/*
equation index: 258
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaBus.relHum / ((-0.378035286922501) * weaBus.relHum + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TDryBul - 35.719) - 17.2799))
*/
void logic2_raw_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1325]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2911]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* weaBus.TDryBul variable */) - 35.719,"weaBus.TDryBul - 35.719",equationIndexes) - 17.2799))),"(-0.378035286922501) * weaBus.relHum + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TDryBul - 35.719) - 17.2799)",equationIndexes));
  threadData->lastEquationSolved = 258;
}

void logic2_raw_eqFunction_259(DATA*, threadData_t*);
void logic2_raw_eqFunction_260(DATA*, threadData_t*);
void logic2_raw_eqFunction_261(DATA*, threadData_t*);
/*
equation index: 266
indexNonlinear: 0
type: NONLINEAR

vars: {weaBus.TWetBul}
eqns: {259, 260, 261}
*/
void logic2_raw_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 266 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,266};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 266 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 266;
}
extern void logic2_raw_eqFunction_3077(DATA *data, threadData_t *threadData);


/*
equation index: 268
type: SIMPLE_ASSIGN
weaData.TBlaSkyCom.epsSky = (0.787 + 0.764 * log((-weaData.TBlaSkyCom.TDewPoiK) / (-273.15))) * (1.0 + 0.0224 * weaData.TBlaSkyCom.nOpa10 + (-0.0035) * weaData.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaData.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void logic2_raw_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  tmp33 = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1288]] /* weaData.TBlaSkyCom.TDewPoiK variable */)),-273.15,"-273.15",equationIndexes);
  if(!(tmp33 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((-weaData.TBlaSkyCom.TDewPoiK) / (-273.15)) was %g should be > 0", tmp33);
    }
  }tmp34 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* weaData.TBlaSkyCom.nOpa10 variable */);
  tmp35 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* weaData.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* weaData.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * (log(tmp33))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* weaData.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp34 * tmp34)) + (2.8e-4) * ((tmp35 * tmp35 * tmp35)));
  threadData->lastEquationSolved = 268;
}
extern void logic2_raw_eqFunction_3080(DATA *data, threadData_t *threadData);


/*
equation index: 270
type: SIMPLE_ASSIGN
weaData.conTim1.tNext = if weaData.conTim1.canRepeatWeatherFile then weaData.conTim1.lenWea * (1.0 + (*Real*)(integer(weaData.add.y / weaData.conTim1.lenWea))) else time
*/
void logic2_raw_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1345]] /* weaData.conTim1.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* weaData.conTim1.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* weaData.add.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2895]] /* weaData.conTim1.lenWea PARAM */),"weaData.conTim1.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 270;
}
extern void logic2_raw_eqFunction_3010(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3011(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3012(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3013(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3014(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3015(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3016(DATA *data, threadData_t *threadData);


/*
equation index: 278
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.T = $START.cooCoi.ele[1].mas.T
*/
void logic2_raw_eqFunction_278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* cooCoi.ele[1].mas.T STATE(1,cooCoi.ele[1].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[18] /* cooCoi.ele[1].mas.T STATE(1,cooCoi.ele[1].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 278;
}

/*
equation index: 279
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.T = $START.cooCoi.ele[2].mas.T
*/
void logic2_raw_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* cooCoi.ele[2].mas.T STATE(1,cooCoi.ele[2].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[19] /* cooCoi.ele[2].mas.T STATE(1,cooCoi.ele[2].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 279;
}

/*
equation index: 280
type: SIMPLE_ASSIGN
cooCoi.ele[3].mas.T = $START.cooCoi.ele[3].mas.T
*/
void logic2_raw_eqFunction_280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* cooCoi.ele[3].mas.T STATE(1,cooCoi.ele[3].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[20] /* cooCoi.ele[3].mas.T STATE(1,cooCoi.ele[3].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 280;
}

/*
equation index: 281
type: SIMPLE_ASSIGN
cooCoi.ele[4].mas.T = $START.cooCoi.ele[4].mas.T
*/
void logic2_raw_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* cooCoi.ele[4].mas.T STATE(1,cooCoi.ele[4].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[21] /* cooCoi.ele[4].mas.T STATE(1,cooCoi.ele[4].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$PRE.weaData.conTim1.tNext = 0.0
*/
void logic2_raw_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realVarsPre[1345] /* weaData.conTim1.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$whenCondition5 = weaData.conTim1.canRepeatWeatherFile and weaData.add.y > $PRE.weaData.conTim1.tNext
*/
void logic2_raw_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  modelica_boolean tmp36;
  tmp36 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1291]] /* weaData.add.y variable */),(data->simulationInfo->realVarsPre[1345] /* weaData.conTim1.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[874]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) && tmp36);
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$PRE.weaData.conTim.tNext = 0.0
*/
void logic2_raw_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->simulationInfo->realVarsPre[1344] /* weaData.conTim.tNext DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
$whenCondition4 = weaData.conTim.canRepeatWeatherFile and weaBus.cloTim > $PRE.weaData.conTim.tNext
*/
void logic2_raw_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  modelica_boolean tmp37;
  tmp37 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* weaBus.cloTim variable */),(data->simulationInfo->realVarsPre[1344] /* weaData.conTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[873]] /* weaData.conTim.canRepeatWeatherFile PARAM */) && tmp37);
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
$PRE.chwstCtrl1.nextControlTime = 0.0
*/
void logic2_raw_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->simulationInfo->realVarsPre[1337] /* chwstCtrl1.nextControlTime DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
chwstCtrl1.TChiCmd = chwstCtrl1.TChiSetStart
*/
void logic2_raw_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* chwstCtrl1.TChiCmd STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* chwstCtrl1.TChiSetStart PARAM */);
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: SIMPLE_ASSIGN
$PRE.chwstCtrl2.nextControlTime = 0.0
*/
void logic2_raw_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  (data->simulationInfo->realVarsPre[1343] /* chwstCtrl2.nextControlTime DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 288;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
chwstCtrl2.TChiCmd = chwstCtrl2.TChiSetStart
*/
void logic2_raw_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* chwstCtrl2.TChiCmd STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* chwstCtrl2.TChiSetStart PARAM */);
  threadData->lastEquationSolved = 289;
}

/*
equation index: 290
type: SIMPLE_ASSIGN
val8_2.Kv_SI = val8_2.m_flow_nominal / sqrt(val8_2.dpValve_nominal)
*/
void logic2_raw_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  modelica_real tmp38;
  tmp38 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* val8_2.dpValve_nominal PARAM */);
  if(!(tmp38 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2.dpValve_nominal) was %g should be >= 0", tmp38);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* val8_2.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.m_flow_nominal PARAM */),sqrt(tmp38),"sqrt(val8_2.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 290;
}

/*
equation index: 291
type: SIMPLE_ASSIGN
val8_2.Kv = 1.1384199576606166e6 * val8_2.Kv_SI / val8_2.rhoStd
*/
void logic2_raw_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* val8_2.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* val8_2.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.rhoStd PARAM */),"val8_2.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 291;
}

/*
equation index: 292
type: SIMPLE_ASSIGN
val8_2.Cv = 83036.13671167512 * val8_2.Kv_SI / (val8_2.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* val8_2.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* val8_2.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.rhoStd PARAM */)) * (0.0631),"val8_2.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 292;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
val8_2.Av = val8_2.Kv_SI / sqrt(val8_2.rhoStd)
*/
void logic2_raw_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  modelica_real tmp39;
  tmp39 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.rhoStd PARAM */);
  if(!(tmp39 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8_2.rhoStd) was %g should be >= 0", tmp39);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2795]] /* val8_2.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* val8_2.Kv_SI PARAM */),sqrt(tmp39),"sqrt(val8_2.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 293;
}

/*
equation index: 294
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.T = junCHWSup2.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* junCHWSup2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 294;
}

/*
equation index: 295
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.T_degC = -273.15 + junCHWSup2.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* junCHWSup2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* junCHWSup2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 295;
}

/*
equation index: 296
type: SIMPLE_ASSIGN
junCHWSup2.vol.ports[3].h_outflow = 4184.0 * junCHWSup2.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* junCHWSup2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 296;
}
extern void logic2_raw_eqFunction_3594(DATA *data, threadData_t *threadData);


/*
equation index: 298
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.U = junCHWSup2.vol.dynBal.m * junCHWSup2.vol.ports[3].h_outflow
*/
void logic2_raw_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* junCHWSup2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* junCHWSup2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* junCHWSup2.vol.ports[3].h_outflow variable */));
  threadData->lastEquationSolved = 298;
}
extern void logic2_raw_eqFunction_3597(DATA *data, threadData_t *threadData);


/*
equation index: 300
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.T = junCHWRet2.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* junCHWRet2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.T_degC = -273.15 + junCHWRet2.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* junCHWRet2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* junCHWRet2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
val8_2.port_b.h_outflow = 4184.0 * junCHWRet2.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* junCHWRet2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 302;
}
extern void logic2_raw_eqFunction_3579(DATA *data, threadData_t *threadData);


/*
equation index: 304
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.U = junCHWRet2.vol.dynBal.m * val8_2.port_b.h_outflow
*/
void logic2_raw_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* junCHWRet2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* junCHWRet2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* val8_2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.T = junCHWRet.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* junCHWRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.T_degC = -273.15 + junCHWRet.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* junCHWRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* junCHWRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
junCHWRet.port_3.h_outflow = 4184.0 * junCHWRet.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* junCHWRet.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.U = junCHWRet.vol.dynBal.m * junCHWRet.port_3.h_outflow
*/
void logic2_raw_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* junCHWRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* junCHWRet.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* junCHWRet.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.T = junCHWSup.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* junCHWSup.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.T_degC = -273.15 + junCHWSup.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* junCHWSup.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* junCHWSup.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
junCHWSup.port_3.h_outflow = 4184.0 * junCHWSup.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* junCHWSup.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.U = junCHWSup.vol.dynBal.m * junCHWSup.port_3.h_outflow
*/
void logic2_raw_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* junCHWSup.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* junCHWSup.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* junCHWSup.port_3.h_outflow variable */));
  threadData->lastEquationSolved = 312;
}
extern void logic2_raw_eqFunction_3535(DATA *data, threadData_t *threadData);


/*
equation index: 314
type: SIMPLE_ASSIGN
chi2.sta2_start.p = chi2.p2_start
*/
void logic2_raw_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* chi2.sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
chi2.sta2_start.T = chi2.T2_start
*/
void logic2_raw_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* chi2.sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
chi2.h2_outflow_start = logic2.chi2.Medium2.specificEnthalpy(chi2.sta2_start)
*/
void logic2_raw_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  logic2_chi2_Medium2_ThermodynamicState tmp40;
  logic2_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp40, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* chi2.sta2_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* chi2.sta2_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.h2_outflow_start PARAM */) = omc_logic2_chi2_Medium2_specificEnthalpy(threadData, tmp40);
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
$START.val8.port_b.h_outflow = chi2.h2_outflow_start
*/
void logic2_raw_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  ((modelica_real *)((data->modelData->realVarsData[1227] /* val8.port_b.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[1227] /* val8.port_b.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[1227] /* val8.port_b.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
chi2.sta1_start.p = chi2.p1_start
*/
void logic2_raw_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* chi2.sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
chi2.sta1_start.T = chi2.T1_start
*/
void logic2_raw_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
chi2.h1_outflow_start = logic2.chi2.Medium1.specificEnthalpy(chi2.sta1_start)
*/
void logic2_raw_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  logic2_chi2_Medium1_ThermodynamicState tmp41;
  logic2_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp41, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* chi2.sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* chi2.h1_outflow_start PARAM */) = omc_logic2_chi2_Medium1_specificEnthalpy(threadData, tmp41);
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
$START.chi2.port_a1.h_outflow = chi2.h1_outflow_start
*/
void logic2_raw_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  ((modelica_real *)((data->modelData->realVarsData[409] /* chi2.port_a1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* chi2.h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[409] /* chi2.port_a1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[409] /* chi2.port_a1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.T = chi2.vol2.dynBal.T_start
*/
void logic2_raw_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* chi2.vol2.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.T_degC = -273.15 + chi2.vol2.dynBal.medium.T
*/
void logic2_raw_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* chi2.vol2.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* chi2.vol2.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
val8.port_b.h_outflow = 4184.0 * chi2.vol2.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* chi2.vol2.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.U = chi2.vol2.dynBal.m * val8.port_b.h_outflow
*/
void logic2_raw_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* chi2.vol2.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* chi2.vol2.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* val8.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.T = chi2.vol1.dynBal.T_start
*/
void logic2_raw_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* chi2.vol1.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.T_degC = -273.15 + chi2.vol1.dynBal.medium.T
*/
void logic2_raw_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* chi2.vol1.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* chi2.vol1.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
chi2.port_a1.h_outflow = 4184.0 * chi2.vol1.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* chi2.vol1.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 328;
}
extern void logic2_raw_eqFunction_3483(DATA *data, threadData_t *threadData);


/*
equation index: 330
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.U = chi2.vol1.dynBal.m * chi2.port_a1.h_outflow
*/
void logic2_raw_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* chi2.vol1.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* chi2.vol1.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */));
  threadData->lastEquationSolved = 330;
}

/*
equation index: 331
type: SIMPLE_ASSIGN
TWCLeaTow2.T_b_inflow = logic2.TWCLeaTow2.Medium.temperature(logic2.TWCLeaTow2.Medium.setState_phX(expVesChi2.p_start, chi2.port_a1.h_outflow, {}))
*/
void logic2_raw_eqFunction_331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* TWCLeaTow2.T_b_inflow variable */) = omc_logic2_TWCLeaTow2_Medium_temperature(threadData, omc_logic2_TWCLeaTow2_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1342]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* chi2.port_a1.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 331;
}

/*
equation index: 332
type: SIMPLE_ASSIGN
TCWEntTow2.T = TCWEntTow2.T_start
*/
void logic2_raw_eqFunction_332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* TCWEntTow2.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* TCWEntTow2.T_start PARAM */);
  threadData->lastEquationSolved = 332;
}

/*
equation index: 333
type: SIMPLE_ASSIGN
TWCLeaTow2.T = TWCLeaTow2.T_start
*/
void logic2_raw_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* TWCLeaTow2.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* TWCLeaTow2.T_start PARAM */);
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
val7.Kv_SI = val7.m_flow_nominal / sqrt(val7.dpValve_nominal)
*/
void logic2_raw_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  modelica_real tmp42;
  tmp42 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* val7.dpValve_nominal PARAM */);
  if(!(tmp42 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val7.dpValve_nominal) was %g should be >= 0", tmp42);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* val7.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.m_flow_nominal PARAM */),sqrt(tmp42),"sqrt(val7.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
val7.Kv = 1.1384199576606166e6 * val7.Kv_SI / val7.rhoStd
*/
void logic2_raw_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2751]] /* val7.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* val7.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* val7.rhoStd PARAM */),"val7.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: SIMPLE_ASSIGN
val7.Cv = 83036.13671167512 * val7.Kv_SI / (val7.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2750]] /* val7.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* val7.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* val7.rhoStd PARAM */)) * (0.0631),"val7.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
val7.Av = val7.Kv_SI / sqrt(val7.rhoStd)
*/
void logic2_raw_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  modelica_real tmp43;
  tmp43 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* val7.rhoStd PARAM */);
  if(!(tmp43 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val7.rhoStd) was %g should be >= 0", tmp43);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2749]] /* val7.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2752]] /* val7.Kv_SI PARAM */),sqrt(tmp43),"sqrt(val7.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 337;
}

/*
equation index: 338
type: SIMPLE_ASSIGN
expVesChi2.m = expVesChi2.V_start * expVesChi2.rho_start
*/
void logic2_raw_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* expVesChi2.m STATE(1) */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1338]] /* expVesChi2.V_start PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi2.rho_start PARAM */));
  threadData->lastEquationSolved = 338;
}

/*
equation index: 339
type: SIMPLE_ASSIGN
expVesChi2.H = expVesChi2.m * logic2.expVesChi2.Medium.specificInternalEnergy(logic2.expVesChi2.Medium.setState_pTX(expVesChi2.p_start, expVesChi2.T_start, {}))
*/
void logic2_raw_eqFunction_339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* expVesChi2.H STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* expVesChi2.m STATE(1) */)) * (omc_logic2_expVesChi2_Medium_specificInternalEnergy(threadData, omc_logic2_expVesChi2_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1342]] /* expVesChi2.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* expVesChi2.T_start PARAM */), _OMC_LIT83)));
  threadData->lastEquationSolved = 339;
}
extern void logic2_raw_eqFunction_3481(DATA *data, threadData_t *threadData);


/*
equation index: 341
type: SIMPLE_ASSIGN
pumCW2.eff.hydDer[1] = 0.0
*/
void logic2_raw_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2557]] /* pumCW2.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
pumCW2.eff.motDer[1] = 0.0
*/
void logic2_raw_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2559]] /* pumCW2.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 342;
}

/*
equation index: 343
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.T = pumCW2.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* pumCW2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 343;
}

/*
equation index: 344
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.T_degC = -273.15 + pumCW2.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* pumCW2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* pumCW2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 344;
}

/*
equation index: 345
type: SIMPLE_ASSIGN
TWCLeaTow2.port_b.h_outflow = 4184.0 * pumCW2.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* pumCW2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
chi2.TConEnt = logic2.chi2.Medium1.temperature(logic2.chi2.Medium1.setState_phX(expVesChi2.p_start, TWCLeaTow2.port_b.h_outflow, {1.0}))
*/
void logic2_raw_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* chi2.TConEnt variable */) = omc_logic2_chi2_Medium1_temperature(threadData, omc_logic2_chi2_Medium1_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1342]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT72));
  threadData->lastEquationSolved = 346;
}
extern void logic2_raw_eqFunction_3471(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3468(DATA *data, threadData_t *threadData);


/*
equation index: 349
type: SIMPLE_ASSIGN
TWCLeaTow2.T_a_inflow = logic2.TWCLeaTow2.Medium.temperature(logic2.TWCLeaTow2.Medium.setState_phX(expVesChi2.p_start, TWCLeaTow2.port_b.h_outflow, {}))
*/
void logic2_raw_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* TWCLeaTow2.T_a_inflow variable */) = omc_logic2_TWCLeaTow2_Medium_temperature(threadData, omc_logic2_TWCLeaTow2_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1342]] /* expVesChi2.p_start PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */), _OMC_LIT83));
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.U = pumCW2.vol.dynBal.m * TWCLeaTow2.port_b.h_outflow
*/
void logic2_raw_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* pumCW2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* pumCW2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* TWCLeaTow2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: ARRAY_CALL_ASSIGN

cooTow2.fanRelPowDer = Buildings.Utilities.Math.Functions.splineDerivatives(cooTow2.fanRelPow.r_V, cooTow2.fanRelPow.r_P, Buildings.Utilities.Math.Functions.isMonotonic(cooTow2.fanRelPow.r_P, false))
*/
void logic2_raw_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  real_array tmp44;
  real_array tmp45;
  real_array tmp46;
  real_array tmp47;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* cooTow2.fanRelPow.r_V[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp45, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp46, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1135]] /* cooTow2.fanRelPow.r_P[1] PARAM */))), 1, (_index_t)5);
  real_array_create(&tmp47, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1145]] /* cooTow2.fanRelPowDer[1] PARAM */))), 1, (_index_t)5);
  real_array_copy_data(omc_Buildings_Utilities_Math_Functions_splineDerivatives(threadData, tmp44, tmp45, omc_Buildings_Utilities_Math_Functions_isMonotonic(threadData, tmp46, 0 /* false */)), tmp47);
  threadData->lastEquationSolved = 351;
}

void logic2_raw_eqFunction_352(DATA*, threadData_t*);
/*
equation index: 353
indexNonlinear: 1
type: NONLINEAR

vars: {cooTow2.FRWat0}
eqns: {352}
*/
void logic2_raw_eqFunction_353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,353};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 353 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,353};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 353 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  threadData->lastEquationSolved = 353;
}

/*
equation index: 354
type: SIMPLE_ASSIGN
cooTow2.mRef_flow = cooTow2.m_flow_nominal / cooTow2.FRWat0
*/
void logic2_raw_eqFunction_354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* cooTow2.mRef_flow PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1122]] /* cooTow2.FRWat0 PARAM */),"cooTow2.FRWat0",equationIndexes);
  threadData->lastEquationSolved = 354;
}

/*
equation index: 355
type: SIMPLE_ASSIGN
cooTow2.sta_start.p = cooTow2.p_start
*/
void logic2_raw_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* cooTow2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: SIMPLE_ASSIGN
cooTow2.sta_start.T = cooTow2.T_start
*/
void logic2_raw_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 356;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
cooTow2.h_outflow_start = logic2.cooTow2.Medium.specificEnthalpy(cooTow2.sta_start)
*/
void logic2_raw_eqFunction_357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,357};
  logic2_cooTow2_Medium_ThermodynamicState tmp48;
  logic2_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp48, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* cooTow2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1152]] /* cooTow2.h_outflow_start PARAM */) = omc_logic2_cooTow2_Medium_specificEnthalpy(threadData, tmp48);
  threadData->lastEquationSolved = 357;
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$START.TCWEntTow2.port_a.h_outflow = cooTow2.h_outflow_start
*/
void logic2_raw_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  ((modelica_real *)((data->modelData->realVarsData[316] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1152]] /* cooTow2.h_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */) = ((modelica_real *)((data->modelData->realVarsData[316] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[316] /* TCWEntTow2.port_a.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* TCWEntTow2.port_a.h_outflow DUMMY_STATE */));
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.medium.T = 0.0
*/
void logic2_raw_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* der(cooTow2.vol.dynBal.medium.T) DUMMY_DER */) = 0.0;
  threadData->lastEquationSolved = 359;
}

/*
equation index: 360
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.medium.T_degC = $DER.cooTow2.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooTow2.vol.dynBal.medium.T_degC) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* der(cooTow2.vol.dynBal.medium.T) DUMMY_DER */);
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
$DER.TCWEntTow2.port_a.h_outflow = 4184.0 * $DER.cooTow2.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* der(TCWEntTow2.port_a.h_outflow) DUMMY_DER */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* der(cooTow2.vol.dynBal.medium.T_degC) DUMMY_DER */));
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
$DER.cooTow2.vol.dynBal.U = cooTow2.vol.dynBal.m * $DER.TCWEntTow2.port_a.h_outflow
*/
void logic2_raw_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* der(cooTow2.vol.dynBal.U) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* cooTow2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* der(TCWEntTow2.port_a.h_outflow) DUMMY_DER */));
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
TCHWChi2Out.T = TCHWChi2Out.T_start
*/
void logic2_raw_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* TCHWChi2Out.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* TCHWChi2Out.T_start PARAM */);
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
TCHWChi2In.T = TCHWChi2In.T_start
*/
void logic2_raw_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* TCHWChi2In.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* TCHWChi2In.T_start PARAM */);
  threadData->lastEquationSolved = 364;
}
extern void logic2_raw_eqFunction_3617(DATA *data, threadData_t *threadData);


/*
equation index: 366
type: SIMPLE_ASSIGN
val8.Kv_SI = val8.m_flow_nominal / sqrt(val8.dpValve_nominal)
*/
void logic2_raw_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  modelica_real tmp49;
  tmp49 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* val8.dpValve_nominal PARAM */);
  if(!(tmp49 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8.dpValve_nominal) was %g should be >= 0", tmp49);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* val8.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.m_flow_nominal PARAM */),sqrt(tmp49),"sqrt(val8.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
val8.Kv = 1.1384199576606166e6 * val8.Kv_SI / val8.rhoStd
*/
void logic2_raw_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val8.Kv PARAM */) = (1.1384199576606166e6) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* val8.Kv_SI PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* val8.rhoStd PARAM */),"val8.rhoStd",equationIndexes));
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
val8.Cv = 83036.13671167512 * val8.Kv_SI / (val8.rhoStd * 0.0631)
*/
void logic2_raw_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* val8.Cv PARAM */) = DIVISION_SIM((83036.13671167512) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* val8.Kv_SI PARAM */)),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* val8.rhoStd PARAM */)) * (0.0631),"val8.rhoStd * 0.0631",equationIndexes);
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
val8.Av = val8.Kv_SI / sqrt(val8.rhoStd)
*/
void logic2_raw_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  modelica_real tmp50;
  tmp50 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* val8.rhoStd PARAM */);
  if(!(tmp50 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(val8.rhoStd) was %g should be >= 0", tmp50);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* val8.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* val8.Kv_SI PARAM */),sqrt(tmp50),"sqrt(val8.rhoStd)",equationIndexes);
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
pumCHW2.eff.hydDer[1] = 0.0
*/
void logic2_raw_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2301]] /* pumCHW2.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: SIMPLE_ASSIGN
pumCHW2.eff.motDer[1] = 0.0
*/
void logic2_raw_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2303]] /* pumCHW2.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.T = pumCHW2.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCHW2.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 372;
}

/*
equation index: 373
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.T_degC = -273.15 + pumCHW2.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* pumCHW2.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* pumCHW2.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
val8_2.port_a.h_outflow = 4184.0 * pumCHW2.vol.dynBal.medium.T_degC
*/
void logic2_raw_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* pumCHW2.vol.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 374;
}
extern void logic2_raw_eqFunction_3456(DATA *data, threadData_t *threadData);


/*
equation index: 376
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.U = pumCHW2.vol.dynBal.m * val8_2.port_a.h_outflow
*/
void logic2_raw_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* pumCHW2.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* pumCHW2.vol.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* val8_2.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.Xi[1] = junOut.vol.dynBal.X_start[1]
*/
void logic2_raw_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junOut.vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 377;
}
extern void logic2_raw_eqFunction_3432(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3433(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3434(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3440(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3441(DATA *data, threadData_t *threadData);


/*
equation index: 383
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.p = junOut.vol.dynBal.p_start
*/
void logic2_raw_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* junOut.vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junOut.vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 383;
}
extern void logic2_raw_eqFunction_3424(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3421(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_386(DATA*, threadData_t*);
/*
equation index: 387
indexNonlinear: 2
type: NONLINEAR

vars: {damOA.m_flow}
eqns: {386}
*/
void logic2_raw_eqFunction_387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,387};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 387 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,387};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 387 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* damOA.m_flow variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  threadData->lastEquationSolved = 387;
}
extern void logic2_raw_eqFunction_3439(DATA *data, threadData_t *threadData);


/*
equation index: 389
type: SIMPLE_ASSIGN
junOut.vol.dynBal.m = 1.1843079200592153e-5 * junOut.vol.dynBal.fluidVolume * junOut.vol.dynBal.medium.p
*/
void logic2_raw_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* junOut.vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 389;
}

/*
equation index: 390
type: SIMPLE_ASSIGN
junOut.vol.dynBal.mXi[1] = junOut.vol.dynBal.m * junOut.vol.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* junOut.vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 390;
}
extern void logic2_raw_eqFunction_3425(DATA *data, threadData_t *threadData);


/*
equation index: 392
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.T = junOut.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* junOut.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junOut.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 392;
}

/*
equation index: 393
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.T_degC = -273.15 + junOut.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* junOut.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 393;
}

/*
equation index: 394
type: SIMPLE_ASSIGN
junOut.vol.ports[3].h_outflow = 1006.0 * junOut.vol.dynBal.medium.T_degC * junOut.vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * junOut.vol.dynBal.medium.T_degC) * junOut.vol.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* junOut.vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* junOut.vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 394;
}
extern void logic2_raw_eqFunction_3444(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3451(DATA *data, threadData_t *threadData);


/*
equation index: 397
type: SIMPLE_ASSIGN
junOut.vol.dynBal.medium.u = -84437.5 + junOut.vol.ports[3].h_outflow
*/
void logic2_raw_eqFunction_397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* junOut.vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */);
  threadData->lastEquationSolved = 397;
}

/*
equation index: 398
type: SIMPLE_ASSIGN
junOut.vol.dynBal.U = junOut.vol.dynBal.m * junOut.vol.dynBal.medium.u
*/
void logic2_raw_eqFunction_398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* junOut.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* junOut.vol.dynBal.m STATE(1,junOut.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* junOut.vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 398;
}
extern void logic2_raw_eqFunction_3452(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3453(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3454(DATA *data, threadData_t *threadData);


/*
equation index: 402
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.Xi[1] = junRet.vol.dynBal.X_start[1]
*/
void logic2_raw_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2121]] /* junRet.vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 402;
}
extern void logic2_raw_eqFunction_3403(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3404(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3405(DATA *data, threadData_t *threadData);


/*
equation index: 406
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.p = junRet.vol.dynBal.p_start
*/
void logic2_raw_eqFunction_406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* junRet.vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2127]] /* junRet.vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 406;
}
extern void logic2_raw_eqFunction_3394(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3391(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_409(DATA*, threadData_t*);
/*
equation index: 410
indexNonlinear: 3
type: NONLINEAR

vars: {damEA.m_flow}
eqns: {409}
*/
void logic2_raw_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 410 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,410};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 410 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_mXi_flow[2,1] = semiLinear(-damEA.m_flow, damOA.port_b.Xi_outflow[1], junRet.vol.dynBal.medium.Xi[1])
*/
void logic2_raw_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* junRet.vol.dynBal.ports_mXi_flow[2,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* damOA.port_b.Xi_outflow[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 411;
}
extern void logic2_raw_eqFunction_3426(DATA *data, threadData_t *threadData);


void logic2_raw_eqFunction_413(DATA*, threadData_t*);
/*
equation index: 414
indexNonlinear: 4
type: NONLINEAR

vars: {damRet.m_flow}
eqns: {413}
*/
void logic2_raw_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 414 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,414};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 414 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  threadData->lastEquationSolved = 414;
}
extern void logic2_raw_eqFunction_3438(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3429(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3430(DATA *data, threadData_t *threadData);


/*
equation index: 418
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_mXi_flow[3,1] = semiLinear(-damRet.m_flow, junOut.vol.dynBal.medium.Xi[1], junRet.vol.dynBal.medium.Xi[1])
*/
void logic2_raw_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* junRet.vol.dynBal.ports_mXi_flow[3,1] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* junOut.vol.dynBal.medium.Xi[1] variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 418;
}

/*
equation index: 419
type: SIMPLE_ASSIGN
junRet.vol.dynBal.m = 1.1843079200592153e-5 * junRet.vol.dynBal.fluidVolume * junRet.vol.dynBal.medium.p
*/
void logic2_raw_eqFunction_419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* junRet.vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 419;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
junRet.vol.dynBal.mXi[1] = junRet.vol.dynBal.m * junRet.vol.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* junRet.vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 420;
}
extern void logic2_raw_eqFunction_3395(DATA *data, threadData_t *threadData);


/*
equation index: 422
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.T = junRet.vol.dynBal.T_start
*/
void logic2_raw_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* junRet.vol.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2120]] /* junRet.vol.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.T_degC = -273.15 + junRet.vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* junRet.vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
fanRet.port_a.h_outflow = 1006.0 * junRet.vol.dynBal.medium.T_degC * junRet.vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * junRet.vol.dynBal.medium.T_degC) * junRet.vol.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* junRet.vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* junRet.vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* junRet.vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 424;
}
extern void logic2_raw_eqFunction_3412(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3450(DATA *data, threadData_t *threadData);


/*
equation index: 427
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_H_flow[3] = semiLinear(-damRet.m_flow, junOut.vol.ports[3].h_outflow, fanRet.port_a.h_outflow)
*/
void logic2_raw_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* junRet.vol.dynBal.ports_H_flow[3] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* damRet.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* junOut.vol.ports[3].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 427;
}

/*
equation index: 428
type: SIMPLE_ASSIGN
junRet.vol.dynBal.ports_H_flow[2] = semiLinear(-damEA.m_flow, out.ports[1].h_outflow, fanRet.port_a.h_outflow)
*/
void logic2_raw_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* junRet.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* damEA.m_flow variable */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* out.ports[1].h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
junRet.vol.dynBal.medium.u = -84437.5 + fanRet.port_a.h_outflow
*/
void logic2_raw_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* fanRet.port_a.h_outflow variable */);
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
junRet.vol.dynBal.U = junRet.vol.dynBal.m * junRet.vol.dynBal.medium.u
*/
void logic2_raw_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* junRet.vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* junRet.vol.dynBal.m STATE(1,junRet.vol.dynBal.mb_flow) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* junRet.vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
fanRet.eff.hydDer[1] = 0.0
*/
void logic2_raw_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* fanRet.eff.hydDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
fanRet.eff.motDer[1] = 0.0
*/
void logic2_raw_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1362]] /* fanRet.eff.motDer[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
conPIDTAirSup.I.y = 0.0
*/
void logic2_raw_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* conPIDTAirSup.I.y STATE(1) */) = 0.0;
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
vol.dynBal.medium.Xi[1] = vol.dynBal.X_start[1]
*/
void logic2_raw_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* vol.dynBal.medium.Xi[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2849]] /* vol.dynBal.X_start[1] PARAM */);
  threadData->lastEquationSolved = 434;
}
extern void logic2_raw_eqFunction_3408(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3436(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3437(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3407(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3406(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3111(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3112(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3113(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3114(DATA *data, threadData_t *threadData);


/*
equation index: 444
type: SIMPLE_ASSIGN
vol.dynBal.medium.p = vol.dynBal.p_start
*/
void logic2_raw_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2855]] /* vol.dynBal.p_start PARAM */);
  threadData->lastEquationSolved = 444;
}
extern void logic2_raw_eqFunction_3103(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3104(DATA *data, threadData_t *threadData);


/*
equation index: 447
type: SIMPLE_ASSIGN
fanRet.etaMot = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, fanRet.VMachine_flow, fanRet.eff.motDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.motorEfficiency, 46.65807628524046, fanRet.eff.motDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  real_array tmp51;
  real_array tmp52;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp53;
  real_array tmp54;
  real_array tmp55;
  real_array tmp56;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp57;
  real_array tmp58;
  real_array_create(&tmp51, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp52, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp53, tmp51, tmp52);
  real_array_create(&tmp54, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1362]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp55, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1385]] /* fanRet.eff.per.motorEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp56, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1386]] /* fanRet.eff.per.motorEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp57, tmp55, tmp56);
  real_array_create(&tmp58, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1362]] /* fanRet.eff.motDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* fanRet.etaMot variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp53, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* fanRet.VMachine_flow variable */), tmp54, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp57, 46.65807628524046, tmp58, 1.0, 0.05));
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
fanRet.etaHyd = homotopy(Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, fanRet.VMachine_flow, fanRet.eff.hydDer, 1.0, 0.05), Buildings.Fluid.Movers.BaseClasses.Characteristics.efficiency(fanRet.eff.per.hydraulicEfficiency, 46.65807628524046, fanRet.eff.hydDer, 1.0, 0.05))
*/
void logic2_raw_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  real_array tmp59;
  real_array tmp60;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp61;
  real_array tmp62;
  real_array tmp63;
  real_array tmp64;
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters tmp65;
  real_array tmp66;
  real_array_create(&tmp59, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp60, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1384]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp61, tmp59, tmp60);
  real_array_create(&tmp62, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp63, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1383]] /* fanRet.eff.per.hydraulicEfficiency.V_flow[1] PARAM */))), 1, (_index_t)1);
  real_array_create(&tmp64, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1384]] /* fanRet.eff.per.hydraulicEfficiency.eta[1] PARAM */))), 1, (_index_t)1);
  Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiencyParameters_wrap_vars(threadData,tmp65, tmp63, tmp64);
  real_array_create(&tmp66, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1360]] /* fanRet.eff.hydDer[1] PARAM */))), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* fanRet.etaHyd variable */) = homotopy(omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp61, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* fanRet.VMachine_flow variable */), tmp62, 1.0, 0.05), omc_Buildings_Fluid_Movers_BaseClasses_Characteristics_efficiency(threadData, tmp65, 46.65807628524046, tmp66, 1.0, 0.05));
  threadData->lastEquationSolved = 448;
}
extern void logic2_raw_eqFunction_3108(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3105(DATA *data, threadData_t *threadData);


/*
equation index: 451
type: SIMPLE_ASSIGN
fanRet.preSou.V_flow = 55.989691542288554 / Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * vol.dynBal.medium.p, 1.1843079200592153e-5 * junRet.vol.dynBal.medium.p, fanRet.preSou.m_flow_small)
*/
void logic2_raw_eqFunction_451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* fanRet.preSou.V_flow variable */) = DIVISION_SIM(55.989691542288554,omc_Modelica_Fluid_Utilities_regStep(threadData, 55.989691542288554, (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */)), (1.1843079200592153e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* junRet.vol.dynBal.medium.p variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1432]] /* fanRet.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(55.989691542288554, 1.1843079200592153e-5 * vol.dynBal.medium.p, 1.1843079200592153e-5 * junRet.vol.dynBal.medium.p, fanRet.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 451;
}
extern void logic2_raw_eqFunction_3399(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3102(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3396(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3398(DATA *data, threadData_t *threadData);


/*
equation index: 457
type: SIMPLE_ASSIGN
vol.dynBal.m = 1.1843079200592153e-5 * vol.dynBal.fluidVolume * vol.dynBal.medium.p
*/
void logic2_raw_eqFunction_457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* vol.dynBal.m STATE(1) */) = (1.1843079200592153e-5) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2852]] /* vol.dynBal.fluidVolume PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* vol.dynBal.medium.p variable */)));
  threadData->lastEquationSolved = 457;
}

/*
equation index: 458
type: SIMPLE_ASSIGN
vol.dynBal.mXi[1] = vol.dynBal.m * vol.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* vol.dynBal.mXi[1] STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 458;
}
extern void logic2_raw_eqFunction_3109(DATA *data, threadData_t *threadData);


/*
equation index: 460
type: SIMPLE_ASSIGN
vol.dynBal.medium.T = 293.15
*/
void logic2_raw_eqFunction_460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* vol.dynBal.medium.T variable */) = 293.15;
  threadData->lastEquationSolved = 460;
}

/*
equation index: 461
type: SIMPLE_ASSIGN
vol.dynBal.medium.T_degC = -273.15 + vol.dynBal.medium.T
*/
void logic2_raw_eqFunction_461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* vol.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* vol.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 461;
}

/*
equation index: 462
type: SIMPLE_ASSIGN
vol.ports[2].h_outflow = 1006.0 * vol.dynBal.medium.T_degC * vol.dynBal.medium.X[2] + (2.5010145e6 + 1860.0 * vol.dynBal.medium.T_degC) * vol.dynBal.medium.Xi[1]
*/
void logic2_raw_eqFunction_462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* vol.ports[2].h_outflow variable */) = (1006.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* vol.dynBal.medium.T_degC variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* vol.dynBal.medium.X[2] variable */))) + (2.5010145e6 + (1860.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* vol.dynBal.medium.T_degC variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* vol.dynBal.medium.Xi[1] variable */));
  threadData->lastEquationSolved = 462;
}
extern void logic2_raw_eqFunction_3117(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3134(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3118(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3119(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3120(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3121(DATA *data, threadData_t *threadData);


/*
equation index: 469
type: SIMPLE_ASSIGN
KMinusU.u = homotopy(smooth(0, if noEvent(conPIDTAirSup.limiter.simplifiedExpr > 1.0) then 1.0 else if noEvent(conPIDTAirSup.limiter.simplifiedExpr < 0.0) then 0.0 else conPIDTAirSup.limiter.simplifiedExpr), conPIDTAirSup.limiter.simplifiedExpr)
*/
void logic2_raw_eqFunction_469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,469};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  tmp67 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* conPIDTAirSup.limiter.simplifiedExpr variable */),1.0);
  tmp69 = (modelica_boolean)tmp67;
  if(tmp69)
  {
    tmp70 = 1.0;
  }
  else
  {
    tmp68 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* conPIDTAirSup.limiter.simplifiedExpr variable */),0.0);
    tmp70 = (tmp68?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* conPIDTAirSup.limiter.simplifiedExpr variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */) = homotopy(tmp70, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* conPIDTAirSup.limiter.simplifiedExpr variable */));
  threadData->lastEquationSolved = 469;
}

/*
equation index: 470
type: SIMPLE_ASSIGN
val1.phi = homotopy(Buildings.Fluid.Actuators.BaseClasses.equalPercentage(KMinusU.u, val1.R, val1.l, val1.delta0), val1.l + KMinusU.u * (1.0 - val1.l))
*/
void logic2_raw_eqFunction_470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* val1.phi variable */) = homotopy(omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2682]] /* val1.R PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* val1.l PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2685]] /* val1.delta0 PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* val1.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* KMinusU.u variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2693]] /* val1.l PARAM */)));
  threadData->lastEquationSolved = 470;
}
extern void logic2_raw_eqFunction_3123(DATA *data, threadData_t *threadData);


/*
equation index: 472
type: SIMPLE_ASSIGN
valByp.phi = homotopy(Buildings.Fluid.Actuators.BaseClasses.equalPercentage(KMinusU.y, valByp.R, valByp.l, valByp.delta0), valByp.l + KMinusU.y * (1.0 - valByp.l))
*/
void logic2_raw_eqFunction_472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* valByp.phi variable */) = homotopy(omc_Buildings_Fluid_Actuators_BaseClasses_equalPercentage(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* valByp.R PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* valByp.l PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2825]] /* valByp.delta0 PARAM */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* valByp.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* KMinusU.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2833]] /* valByp.l PARAM */)));
  threadData->lastEquationSolved = 472;
}
extern void logic2_raw_eqFunction_3130(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3131(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3132(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3133(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3135(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3136(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3387(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3388(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3418(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3448(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3449(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3416(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3417(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3415(DATA *data, threadData_t *threadData);


/*
equation index: 487
type: SIMPLE_ASSIGN
vol.dynBal.medium.u = -84437.5 + vol.ports[2].h_outflow
*/
void logic2_raw_eqFunction_487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* vol.dynBal.medium.u variable */) = -84437.5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* vol.ports[2].h_outflow variable */);
  threadData->lastEquationSolved = 487;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
vol.dynBal.U = vol.dynBal.m * vol.dynBal.medium.u
*/
void logic2_raw_eqFunction_488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* vol.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* vol.dynBal.m STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* vol.dynBal.medium.u variable */));
  threadData->lastEquationSolved = 488;
}
extern void logic2_raw_eqFunction_3140(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_3139(DATA *data, threadData_t *threadData);


/*
equation index: 491
type: SIMPLE_ASSIGN
TCHWLeaCoi.T = TCHWLeaCoi.T_start
*/
void logic2_raw_eqFunction_491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* TCHWLeaCoi.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* TCHWLeaCoi.T_start PARAM */);
  threadData->lastEquationSolved = 491;
}

/*
equation index: 492
type: SIMPLE_ASSIGN
valByp.Kv_SI = valByp.m_flow_nominal / sqrt(valByp.dpValve_nominal)
*/
void logic2_raw_eqFunction_492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,492};
  modelica_real tmp71;
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2828]] /* valByp.dpValve_nominal PARAM */);
  if(!(tmp71 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valByp.dpValve_nominal) was %g should be >= 0", tmp71);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* valByp.Kv_SI PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2834]] /* valByp.m_flow_nominal PARAM */),sqrt(tmp71),"sqrt(valByp.dpValve_nominal)",equationIndexes);
  threadData->lastEquationSolved = 492;
}
OMC_DISABLE_OPT
void logic2_raw_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[481])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_1,
    logic2_raw_eqFunction_2,
    logic2_raw_eqFunction_3,
    logic2_raw_eqFunction_4,
    logic2_raw_eqFunction_5,
    logic2_raw_eqFunction_6,
    logic2_raw_eqFunction_7,
    logic2_raw_eqFunction_8,
    logic2_raw_eqFunction_9,
    logic2_raw_eqFunction_10,
    logic2_raw_eqFunction_11,
    logic2_raw_eqFunction_12,
    logic2_raw_eqFunction_13,
    logic2_raw_eqFunction_14,
    logic2_raw_eqFunction_15,
    logic2_raw_eqFunction_16,
    logic2_raw_eqFunction_17,
    logic2_raw_eqFunction_18,
    logic2_raw_eqFunction_19,
    logic2_raw_eqFunction_20,
    logic2_raw_eqFunction_21,
    logic2_raw_eqFunction_22,
    logic2_raw_eqFunction_23,
    logic2_raw_eqFunction_24,
    logic2_raw_eqFunction_25,
    logic2_raw_eqFunction_26,
    logic2_raw_eqFunction_27,
    logic2_raw_eqFunction_28,
    logic2_raw_eqFunction_29,
    logic2_raw_eqFunction_30,
    logic2_raw_eqFunction_31,
    logic2_raw_eqFunction_32,
    logic2_raw_eqFunction_33,
    logic2_raw_eqFunction_34,
    logic2_raw_eqFunction_35,
    logic2_raw_eqFunction_36,
    logic2_raw_eqFunction_37,
    logic2_raw_eqFunction_38,
    logic2_raw_eqFunction_39,
    logic2_raw_eqFunction_40,
    logic2_raw_eqFunction_41,
    logic2_raw_eqFunction_42,
    logic2_raw_eqFunction_43,
    logic2_raw_eqFunction_44,
    logic2_raw_eqFunction_45,
    logic2_raw_eqFunction_46,
    logic2_raw_eqFunction_47,
    logic2_raw_eqFunction_48,
    logic2_raw_eqFunction_49,
    logic2_raw_eqFunction_50,
    logic2_raw_eqFunction_51,
    logic2_raw_eqFunction_52,
    logic2_raw_eqFunction_53,
    logic2_raw_eqFunction_54,
    logic2_raw_eqFunction_55,
    logic2_raw_eqFunction_56,
    logic2_raw_eqFunction_57,
    logic2_raw_eqFunction_58,
    logic2_raw_eqFunction_59,
    logic2_raw_eqFunction_60,
    logic2_raw_eqFunction_61,
    logic2_raw_eqFunction_62,
    logic2_raw_eqFunction_63,
    logic2_raw_eqFunction_64,
    logic2_raw_eqFunction_65,
    logic2_raw_eqFunction_66,
    logic2_raw_eqFunction_67,
    logic2_raw_eqFunction_68,
    logic2_raw_eqFunction_69,
    logic2_raw_eqFunction_70,
    logic2_raw_eqFunction_71,
    logic2_raw_eqFunction_72,
    logic2_raw_eqFunction_73,
    logic2_raw_eqFunction_74,
    logic2_raw_eqFunction_75,
    logic2_raw_eqFunction_76,
    logic2_raw_eqFunction_77,
    logic2_raw_eqFunction_78,
    logic2_raw_eqFunction_79,
    logic2_raw_eqFunction_80,
    logic2_raw_eqFunction_81,
    logic2_raw_eqFunction_82,
    logic2_raw_eqFunction_83,
    logic2_raw_eqFunction_84,
    logic2_raw_eqFunction_85,
    logic2_raw_eqFunction_86,
    logic2_raw_eqFunction_87,
    logic2_raw_eqFunction_88,
    logic2_raw_eqFunction_89,
    logic2_raw_eqFunction_90,
    logic2_raw_eqFunction_91,
    logic2_raw_eqFunction_92,
    logic2_raw_eqFunction_93,
    logic2_raw_eqFunction_94,
    logic2_raw_eqFunction_95,
    logic2_raw_eqFunction_96,
    logic2_raw_eqFunction_97,
    logic2_raw_eqFunction_98,
    logic2_raw_eqFunction_99,
    logic2_raw_eqFunction_100,
    logic2_raw_eqFunction_101,
    logic2_raw_eqFunction_102,
    logic2_raw_eqFunction_103,
    logic2_raw_eqFunction_104,
    logic2_raw_eqFunction_105,
    logic2_raw_eqFunction_106,
    logic2_raw_eqFunction_107,
    logic2_raw_eqFunction_108,
    logic2_raw_eqFunction_109,
    logic2_raw_eqFunction_110,
    logic2_raw_eqFunction_111,
    logic2_raw_eqFunction_112,
    logic2_raw_eqFunction_113,
    logic2_raw_eqFunction_114,
    logic2_raw_eqFunction_115,
    logic2_raw_eqFunction_116,
    logic2_raw_eqFunction_117,
    logic2_raw_eqFunction_118,
    logic2_raw_eqFunction_119,
    logic2_raw_eqFunction_120,
    logic2_raw_eqFunction_121,
    logic2_raw_eqFunction_122,
    logic2_raw_eqFunction_123,
    logic2_raw_eqFunction_124,
    logic2_raw_eqFunction_125,
    logic2_raw_eqFunction_126,
    logic2_raw_eqFunction_127,
    logic2_raw_eqFunction_128,
    logic2_raw_eqFunction_129,
    logic2_raw_eqFunction_130,
    logic2_raw_eqFunction_131,
    logic2_raw_eqFunction_132,
    logic2_raw_eqFunction_133,
    logic2_raw_eqFunction_134,
    logic2_raw_eqFunction_135,
    logic2_raw_eqFunction_136,
    logic2_raw_eqFunction_137,
    logic2_raw_eqFunction_138,
    logic2_raw_eqFunction_139,
    logic2_raw_eqFunction_140,
    logic2_raw_eqFunction_141,
    logic2_raw_eqFunction_142,
    logic2_raw_eqFunction_143,
    logic2_raw_eqFunction_144,
    logic2_raw_eqFunction_145,
    logic2_raw_eqFunction_146,
    logic2_raw_eqFunction_147,
    logic2_raw_eqFunction_148,
    logic2_raw_eqFunction_149,
    logic2_raw_eqFunction_150,
    logic2_raw_eqFunction_151,
    logic2_raw_eqFunction_152,
    logic2_raw_eqFunction_153,
    logic2_raw_eqFunction_154,
    logic2_raw_eqFunction_155,
    logic2_raw_eqFunction_156,
    logic2_raw_eqFunction_157,
    logic2_raw_eqFunction_158,
    logic2_raw_eqFunction_159,
    logic2_raw_eqFunction_160,
    logic2_raw_eqFunction_161,
    logic2_raw_eqFunction_162,
    logic2_raw_eqFunction_163,
    logic2_raw_eqFunction_164,
    logic2_raw_eqFunction_165,
    logic2_raw_eqFunction_166,
    logic2_raw_eqFunction_167,
    logic2_raw_eqFunction_168,
    logic2_raw_eqFunction_169,
    logic2_raw_eqFunction_170,
    logic2_raw_eqFunction_171,
    logic2_raw_eqFunction_172,
    logic2_raw_eqFunction_173,
    logic2_raw_eqFunction_3006,
    logic2_raw_eqFunction_3007,
    logic2_raw_eqFunction_3017,
    logic2_raw_eqFunction_3018,
    logic2_raw_eqFunction_178,
    logic2_raw_eqFunction_3023,
    logic2_raw_eqFunction_180,
    logic2_raw_eqFunction_3024,
    logic2_raw_eqFunction_182,
    logic2_raw_eqFunction_3100,
    logic2_raw_eqFunction_3142,
    logic2_raw_eqFunction_185,
    logic2_raw_eqFunction_3146,
    logic2_raw_eqFunction_3147,
    logic2_raw_eqFunction_3156,
    logic2_raw_eqFunction_3161,
    logic2_raw_eqFunction_3162,
    logic2_raw_eqFunction_3163,
    logic2_raw_eqFunction_3164,
    logic2_raw_eqFunction_3178,
    logic2_raw_eqFunction_3179,
    logic2_raw_eqFunction_195,
    logic2_raw_eqFunction_3143,
    logic2_raw_eqFunction_3148,
    logic2_raw_eqFunction_3151,
    logic2_raw_eqFunction_3196,
    logic2_raw_eqFunction_3197,
    logic2_raw_eqFunction_3198,
    logic2_raw_eqFunction_3199,
    logic2_raw_eqFunction_3200,
    logic2_raw_eqFunction_3203,
    logic2_raw_eqFunction_3204,
    logic2_raw_eqFunction_206,
    logic2_raw_eqFunction_3028,
    logic2_raw_eqFunction_3029,
    logic2_raw_eqFunction_3030,
    logic2_raw_eqFunction_3031,
    logic2_raw_eqFunction_3032,
    logic2_raw_eqFunction_3033,
    logic2_raw_eqFunction_3034,
    logic2_raw_eqFunction_3035,
    logic2_raw_eqFunction_3036,
    logic2_raw_eqFunction_3037,
    logic2_raw_eqFunction_3038,
    logic2_raw_eqFunction_3039,
    logic2_raw_eqFunction_3040,
    logic2_raw_eqFunction_3041,
    logic2_raw_eqFunction_3042,
    logic2_raw_eqFunction_3043,
    logic2_raw_eqFunction_3044,
    logic2_raw_eqFunction_3045,
    logic2_raw_eqFunction_3046,
    logic2_raw_eqFunction_3047,
    logic2_raw_eqFunction_3048,
    logic2_raw_eqFunction_3049,
    logic2_raw_eqFunction_3050,
    logic2_raw_eqFunction_3051,
    logic2_raw_eqFunction_3052,
    logic2_raw_eqFunction_3053,
    logic2_raw_eqFunction_3054,
    logic2_raw_eqFunction_3055,
    logic2_raw_eqFunction_3056,
    logic2_raw_eqFunction_3057,
    logic2_raw_eqFunction_3058,
    logic2_raw_eqFunction_3059,
    logic2_raw_eqFunction_3060,
    logic2_raw_eqFunction_3061,
    logic2_raw_eqFunction_3062,
    logic2_raw_eqFunction_3063,
    logic2_raw_eqFunction_3064,
    logic2_raw_eqFunction_3065,
    logic2_raw_eqFunction_3066,
    logic2_raw_eqFunction_3067,
    logic2_raw_eqFunction_3068,
    logic2_raw_eqFunction_3069,
    logic2_raw_eqFunction_3070,
    logic2_raw_eqFunction_3091,
    logic2_raw_eqFunction_3094,
    logic2_raw_eqFunction_3074,
    logic2_raw_eqFunction_3072,
    logic2_raw_eqFunction_3073,
    logic2_raw_eqFunction_3092,
    logic2_raw_eqFunction_3093,
    logic2_raw_eqFunction_3071,
    logic2_raw_eqFunction_258,
    logic2_raw_eqFunction_266,
    logic2_raw_eqFunction_3077,
    logic2_raw_eqFunction_268,
    logic2_raw_eqFunction_3080,
    logic2_raw_eqFunction_270,
    logic2_raw_eqFunction_3010,
    logic2_raw_eqFunction_3011,
    logic2_raw_eqFunction_3012,
    logic2_raw_eqFunction_3013,
    logic2_raw_eqFunction_3014,
    logic2_raw_eqFunction_3015,
    logic2_raw_eqFunction_3016,
    logic2_raw_eqFunction_278,
    logic2_raw_eqFunction_279,
    logic2_raw_eqFunction_280,
    logic2_raw_eqFunction_281,
    logic2_raw_eqFunction_282,
    logic2_raw_eqFunction_283,
    logic2_raw_eqFunction_284,
    logic2_raw_eqFunction_285,
    logic2_raw_eqFunction_286,
    logic2_raw_eqFunction_287,
    logic2_raw_eqFunction_288,
    logic2_raw_eqFunction_289,
    logic2_raw_eqFunction_290,
    logic2_raw_eqFunction_291,
    logic2_raw_eqFunction_292,
    logic2_raw_eqFunction_293,
    logic2_raw_eqFunction_294,
    logic2_raw_eqFunction_295,
    logic2_raw_eqFunction_296,
    logic2_raw_eqFunction_3594,
    logic2_raw_eqFunction_298,
    logic2_raw_eqFunction_3597,
    logic2_raw_eqFunction_300,
    logic2_raw_eqFunction_301,
    logic2_raw_eqFunction_302,
    logic2_raw_eqFunction_3579,
    logic2_raw_eqFunction_304,
    logic2_raw_eqFunction_305,
    logic2_raw_eqFunction_306,
    logic2_raw_eqFunction_307,
    logic2_raw_eqFunction_308,
    logic2_raw_eqFunction_309,
    logic2_raw_eqFunction_310,
    logic2_raw_eqFunction_311,
    logic2_raw_eqFunction_312,
    logic2_raw_eqFunction_3535,
    logic2_raw_eqFunction_314,
    logic2_raw_eqFunction_315,
    logic2_raw_eqFunction_316,
    logic2_raw_eqFunction_317,
    logic2_raw_eqFunction_318,
    logic2_raw_eqFunction_319,
    logic2_raw_eqFunction_320,
    logic2_raw_eqFunction_321,
    logic2_raw_eqFunction_322,
    logic2_raw_eqFunction_323,
    logic2_raw_eqFunction_324,
    logic2_raw_eqFunction_325,
    logic2_raw_eqFunction_326,
    logic2_raw_eqFunction_327,
    logic2_raw_eqFunction_328,
    logic2_raw_eqFunction_3483,
    logic2_raw_eqFunction_330,
    logic2_raw_eqFunction_331,
    logic2_raw_eqFunction_332,
    logic2_raw_eqFunction_333,
    logic2_raw_eqFunction_334,
    logic2_raw_eqFunction_335,
    logic2_raw_eqFunction_336,
    logic2_raw_eqFunction_337,
    logic2_raw_eqFunction_338,
    logic2_raw_eqFunction_339,
    logic2_raw_eqFunction_3481,
    logic2_raw_eqFunction_341,
    logic2_raw_eqFunction_342,
    logic2_raw_eqFunction_343,
    logic2_raw_eqFunction_344,
    logic2_raw_eqFunction_345,
    logic2_raw_eqFunction_346,
    logic2_raw_eqFunction_3471,
    logic2_raw_eqFunction_3468,
    logic2_raw_eqFunction_349,
    logic2_raw_eqFunction_350,
    logic2_raw_eqFunction_351,
    logic2_raw_eqFunction_353,
    logic2_raw_eqFunction_354,
    logic2_raw_eqFunction_355,
    logic2_raw_eqFunction_356,
    logic2_raw_eqFunction_357,
    logic2_raw_eqFunction_358,
    logic2_raw_eqFunction_359,
    logic2_raw_eqFunction_360,
    logic2_raw_eqFunction_361,
    logic2_raw_eqFunction_362,
    logic2_raw_eqFunction_363,
    logic2_raw_eqFunction_364,
    logic2_raw_eqFunction_3617,
    logic2_raw_eqFunction_366,
    logic2_raw_eqFunction_367,
    logic2_raw_eqFunction_368,
    logic2_raw_eqFunction_369,
    logic2_raw_eqFunction_370,
    logic2_raw_eqFunction_371,
    logic2_raw_eqFunction_372,
    logic2_raw_eqFunction_373,
    logic2_raw_eqFunction_374,
    logic2_raw_eqFunction_3456,
    logic2_raw_eqFunction_376,
    logic2_raw_eqFunction_377,
    logic2_raw_eqFunction_3432,
    logic2_raw_eqFunction_3433,
    logic2_raw_eqFunction_3434,
    logic2_raw_eqFunction_3440,
    logic2_raw_eqFunction_3441,
    logic2_raw_eqFunction_383,
    logic2_raw_eqFunction_3424,
    logic2_raw_eqFunction_3421,
    logic2_raw_eqFunction_387,
    logic2_raw_eqFunction_3439,
    logic2_raw_eqFunction_389,
    logic2_raw_eqFunction_390,
    logic2_raw_eqFunction_3425,
    logic2_raw_eqFunction_392,
    logic2_raw_eqFunction_393,
    logic2_raw_eqFunction_394,
    logic2_raw_eqFunction_3444,
    logic2_raw_eqFunction_3451,
    logic2_raw_eqFunction_397,
    logic2_raw_eqFunction_398,
    logic2_raw_eqFunction_3452,
    logic2_raw_eqFunction_3453,
    logic2_raw_eqFunction_3454,
    logic2_raw_eqFunction_402,
    logic2_raw_eqFunction_3403,
    logic2_raw_eqFunction_3404,
    logic2_raw_eqFunction_3405,
    logic2_raw_eqFunction_406,
    logic2_raw_eqFunction_3394,
    logic2_raw_eqFunction_3391,
    logic2_raw_eqFunction_410,
    logic2_raw_eqFunction_411,
    logic2_raw_eqFunction_3426,
    logic2_raw_eqFunction_414,
    logic2_raw_eqFunction_3438,
    logic2_raw_eqFunction_3429,
    logic2_raw_eqFunction_3430,
    logic2_raw_eqFunction_418,
    logic2_raw_eqFunction_419,
    logic2_raw_eqFunction_420,
    logic2_raw_eqFunction_3395,
    logic2_raw_eqFunction_422,
    logic2_raw_eqFunction_423,
    logic2_raw_eqFunction_424,
    logic2_raw_eqFunction_3412,
    logic2_raw_eqFunction_3450,
    logic2_raw_eqFunction_427,
    logic2_raw_eqFunction_428,
    logic2_raw_eqFunction_429,
    logic2_raw_eqFunction_430,
    logic2_raw_eqFunction_431,
    logic2_raw_eqFunction_432,
    logic2_raw_eqFunction_433,
    logic2_raw_eqFunction_434,
    logic2_raw_eqFunction_3408,
    logic2_raw_eqFunction_3436,
    logic2_raw_eqFunction_3437,
    logic2_raw_eqFunction_3407,
    logic2_raw_eqFunction_3406,
    logic2_raw_eqFunction_3111,
    logic2_raw_eqFunction_3112,
    logic2_raw_eqFunction_3113,
    logic2_raw_eqFunction_3114,
    logic2_raw_eqFunction_444,
    logic2_raw_eqFunction_3103,
    logic2_raw_eqFunction_3104,
    logic2_raw_eqFunction_447,
    logic2_raw_eqFunction_448,
    logic2_raw_eqFunction_3108,
    logic2_raw_eqFunction_3105,
    logic2_raw_eqFunction_451,
    logic2_raw_eqFunction_3399,
    logic2_raw_eqFunction_3102,
    logic2_raw_eqFunction_3396,
    logic2_raw_eqFunction_3397,
    logic2_raw_eqFunction_3398,
    logic2_raw_eqFunction_457,
    logic2_raw_eqFunction_458,
    logic2_raw_eqFunction_3109,
    logic2_raw_eqFunction_460,
    logic2_raw_eqFunction_461,
    logic2_raw_eqFunction_462,
    logic2_raw_eqFunction_3117,
    logic2_raw_eqFunction_3134,
    logic2_raw_eqFunction_3118,
    logic2_raw_eqFunction_3119,
    logic2_raw_eqFunction_3120,
    logic2_raw_eqFunction_3121,
    logic2_raw_eqFunction_469,
    logic2_raw_eqFunction_470,
    logic2_raw_eqFunction_3123,
    logic2_raw_eqFunction_472,
    logic2_raw_eqFunction_3130,
    logic2_raw_eqFunction_3131,
    logic2_raw_eqFunction_3132,
    logic2_raw_eqFunction_3133,
    logic2_raw_eqFunction_3135,
    logic2_raw_eqFunction_3136,
    logic2_raw_eqFunction_3387,
    logic2_raw_eqFunction_3388,
    logic2_raw_eqFunction_3418,
    logic2_raw_eqFunction_3448,
    logic2_raw_eqFunction_3449,
    logic2_raw_eqFunction_3416,
    logic2_raw_eqFunction_3417,
    logic2_raw_eqFunction_3415,
    logic2_raw_eqFunction_487,
    logic2_raw_eqFunction_488,
    logic2_raw_eqFunction_3140,
    logic2_raw_eqFunction_3139,
    logic2_raw_eqFunction_491,
    logic2_raw_eqFunction_492
  };
  
  for (int id = 0; id < 481; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif