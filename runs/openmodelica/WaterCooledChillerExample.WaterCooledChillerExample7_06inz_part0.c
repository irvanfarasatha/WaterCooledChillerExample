#include "WaterCooledChillerExample.WaterCooledChillerExample7_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1
type: SIMPLE_ASSIGN
fanSup.vol.U = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* fanSup.vol.U variable */) = 0.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
fanSup.vol.mXi[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* fanSup.vol.mXi[1] variable */) = 0.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
fanSup.vol.m = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* fanSup.vol.m variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
fanSup.preSou.dp_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* fanSup.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* fanSup.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* fanSup.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_a.Xi_outflow[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* fanSup.senRelPre.port_a.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
fanSup.senRelPre.port_b.Xi_outflow[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* fanSup.senRelPre.port_b.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
cooCoi.temSen_1.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[693]] /* cooCoi.temSen_1.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
cooCoi.temSen_1.k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[692]] /* cooCoi.temSen_1.k variable */) = 1.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
cooCoi.temSen_2.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[697]] /* cooCoi.temSen_2.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
cooCoi.temSen_2.k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[696]] /* cooCoi.temSen_2.k variable */) = 1.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* cooCoi.ele[1].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* cooCoi.ele[1].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* cooCoi.ele[2].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* cooCoi.ele[2].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* cooCoi.ele[3].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* cooCoi.ele[3].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* cooCoi.ele[4].vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* cooCoi.ele[4].vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_21(DATA *data, threadData_t *threadData)
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
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_22(DATA *data, threadData_t *threadData)
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
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* pumCHW.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
pumCHW.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_24(DATA *data, threadData_t *threadData)
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
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_25(DATA *data, threadData_t *threadData)
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
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* cooTow.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* cooTow.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* pumCW.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* pumCW.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
pumCW.preSou.dp_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* pumCW.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* pumCW.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
pumCW.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* pumCW.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* chi.vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
chi.vol1.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* chi.vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* chi.vol2.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
chi.vol2.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* chi.vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.TDryBul_degC = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* weaData.tWetBul_TDryBulXi.TDryBul_degC variable */) = 0.0;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.rh_per = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1882]] /* weaData.tWetBul_TDryBulXi.rh_per variable */) = 0.0;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
conPIDTAirSup.I.y_reset_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* conPIDTAirSup.I.y_reset_internal variable */) = 0.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
conPIDTAirSup.I.trigger_internal = false
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* conPIDTAirSup.I.trigger_internal DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
conPIDTAirSup.y_reset_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[449]] /* conPIDTAirSup.y_reset_internal variable */) = 0.0;
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
fanRet.vol.U = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* fanRet.vol.U variable */) = 0.0;
  threadData->lastEquationSolved = 42;
}

/*
equation index: 43
type: SIMPLE_ASSIGN
fanRet.vol.mXi[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_43(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* fanRet.vol.mXi[1] variable */) = 0.0;
  threadData->lastEquationSolved = 43;
}

/*
equation index: 44
type: SIMPLE_ASSIGN
fanRet.vol.m = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* fanRet.vol.m variable */) = 0.0;
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
fanRet.preSou.dp_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* fanRet.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* fanRet.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* fanRet.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_a.Xi_outflow[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* fanRet.senRelPre.port_a.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
fanRet.senRelPre.port_b.Xi_outflow[1] = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* fanRet.senRelPre.port_b.Xi_outflow[1] variable */) = 0.0;
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
PCHW.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* PCHW.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
PCHW.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* PCHW.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* pumCHW2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* pumCHW2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
pumCHW2.preSou.dp_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* pumCHW2.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* pumCHW2.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
pumCHW2.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* pumCHW2.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* cooTow2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* cooTow2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* pumCW2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* pumCW2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
pumCW2.preSou.dp_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* pumCW2.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* pumCW2.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
pumCW2.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* pumCW2.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* chi2.vol1.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* chi2.vol1.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* chi2.vol2.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* chi2.vol2.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* junCHWSup.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* junCHWSup.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* junCHWRet.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* junCHWRet.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* tan.vol[1].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1650]] /* tan.vol[1].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1675]] /* tan.vol[2].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1651]] /* tan.vol[2].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1676]] /* tan.vol[3].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1652]] /* tan.vol[3].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1677]] /* tan.vol[4].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* tan.vol[4].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
tan.H_a_flow.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1301]] /* tan.H_a_flow.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
tan.H_a_flow.k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1300]] /* tan.H_a_flow.k variable */) = 1.0;
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
tan.H_vol_flow[1].mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1316]] /* tan.H_vol_flow[1].mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
tan.H_vol_flow[1].k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1313]] /* tan.H_vol_flow[1].k variable */) = 1.0;
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
tan.H_vol_flow[2].mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1317]] /* tan.H_vol_flow[2].mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
tan.H_vol_flow[2].k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1314]] /* tan.H_vol_flow[2].k variable */) = 1.0;
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
tan.H_vol_flow[3].mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1318]] /* tan.H_vol_flow[3].mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
tan.H_vol_flow[3].k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1315]] /* tan.H_vol_flow[3].k variable */) = 1.0;
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
tan.H_b_flow.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* tan.H_b_flow.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
tan.H_b_flow.k = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1304]] /* tan.H_b_flow.k variable */) = 1.0;
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1558]] /* tan.indTanHex.vol[1].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1522]] /* tan.indTanHex.vol[1].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1559]] /* tan.indTanHex.vol[2].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1523]] /* tan.indTanHex.vol[2].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1560]] /* tan.indTanHex.vol[3].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1524]] /* tan.indTanHex.vol[3].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1561]] /* tan.indTanHex.vol[4].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1525]] /* tan.indTanHex.vol[4].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1562]] /* tan.indTanHex.vol[5].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1526]] /* tan.indTanHex.vol[5].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1563]] /* tan.indTanHex.vol[6].dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1527]] /* tan.indTanHex.vol[6].dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* junCHWRet2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* junCHWRet2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* junCHWSup2.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* junCHWSup2.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1293]] /* pumTanSup.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1287]] /* pumTanSup.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
pumTanSup.preSou.m_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* pumTanSup.preSou.m_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
pumTanSup.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* pumTanSup.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
pumTanSup.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* pumTanSup.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.medium.X[1] = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* pumTanRet.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.mWat_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* pumTanRet.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
pumTanRet.preSou.m_flow_internal = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* pumTanRet.preSou.m_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
pumTanRet.senRelPre.port_a.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* pumTanRet.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
pumTanRet.senRelPre.port_b.h_outflow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* pumTanRet.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* cooCoi.ele[1].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* cooCoi.ele[1].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* cooCoi.ele[2].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* cooCoi.ele[2].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* cooCoi.ele[3].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* cooCoi.ele[3].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[568]] /* cooCoi.ele[4].vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* cooCoi.ele[4].vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
cooCoi.THA1.y = 293.15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* cooCoi.THA1.y variable */) = 293.15;
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
cooCoi.THA2.y = 293.15
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* cooCoi.THA2.y variable */) = 293.15;
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* pumCHW.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* pumCHW.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* cooTow.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* cooTow.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
cooTow.bou.TAirInWB_min = 238.74999999999997
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* cooTow.bou.TAirInWB_min variable */) = 238.74999999999997;
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
cooTow.bou.TAirInWB_max = 299.84999999999997
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* cooTow.bou.TAirInWB_max variable */) = 299.84999999999997;
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
cooTow.bou.TRan_min = 1.1
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* cooTow.bou.TRan_min variable */) = 1.1;
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
cooTow.bou.TRan_max = 22.2
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* cooTow.bou.TRan_max variable */) = 22.2;
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
cooTow.bou.TApp_min = 1.1
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* cooTow.bou.TApp_min variable */) = 1.1;
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
cooTow.bou.TApp_max = 40.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* cooTow.bou.TApp_max variable */) = 40.0;
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
cooTow.bou.FRWat_min = 0.75
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* cooTow.bou.FRWat_min variable */) = 0.75;
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
cooTow.bou.FRWat_max = 1.25
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* cooTow.bou.FRWat_max variable */) = 1.25;
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* pumCW.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 138;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* pumCW.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 139;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* chi.vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 140;
}

/*
equation index: 141
type: SIMPLE_ASSIGN
chi.vol1.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* chi.vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 141;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* chi.vol2.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 142;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
chi.vol2.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* chi.vol2.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 143;
}

/*
equation index: 144
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* pumCHW2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* pumCHW2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* cooTow2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 146;
}

/*
equation index: 147
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* cooTow2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 147;
}

/*
equation index: 148
type: SIMPLE_ASSIGN
cooTow2.bou.TAirInWB_min = 238.74999999999997
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* cooTow2.bou.TAirInWB_min variable */) = 238.74999999999997;
  threadData->lastEquationSolved = 148;
}

/*
equation index: 149
type: SIMPLE_ASSIGN
cooTow2.bou.TAirInWB_max = 299.84999999999997
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* cooTow2.bou.TAirInWB_max variable */) = 299.84999999999997;
  threadData->lastEquationSolved = 149;
}

/*
equation index: 150
type: SIMPLE_ASSIGN
cooTow2.bou.TRan_min = 1.1
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[769]] /* cooTow2.bou.TRan_min variable */) = 1.1;
  threadData->lastEquationSolved = 150;
}

/*
equation index: 151
type: SIMPLE_ASSIGN
cooTow2.bou.TRan_max = 22.2
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* cooTow2.bou.TRan_max variable */) = 22.2;
  threadData->lastEquationSolved = 151;
}

/*
equation index: 152
type: SIMPLE_ASSIGN
cooTow2.bou.TApp_min = 1.1
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* cooTow2.bou.TApp_min variable */) = 1.1;
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
cooTow2.bou.TApp_max = 40.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* cooTow2.bou.TApp_max variable */) = 40.0;
  threadData->lastEquationSolved = 153;
}

/*
equation index: 154
type: SIMPLE_ASSIGN
cooTow2.bou.FRWat_min = 0.75
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* cooTow2.bou.FRWat_min variable */) = 0.75;
  threadData->lastEquationSolved = 154;
}

/*
equation index: 155
type: SIMPLE_ASSIGN
cooTow2.bou.FRWat_max = 1.25
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* cooTow2.bou.FRWat_max variable */) = 1.25;
  threadData->lastEquationSolved = 155;
}

/*
equation index: 156
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* pumCW2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 156;
}

/*
equation index: 157
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* pumCW2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 157;
}

/*
equation index: 158
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* chi2.vol1.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* chi2.vol1.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* chi2.vol2.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 160;
}

/*
equation index: 161
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* chi2.vol2.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 161;
}

/*
equation index: 162
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* junCHWSup.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 162;
}

/*
equation index: 163
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* junCHWSup.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 163;
}

/*
equation index: 164
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* junCHWRet.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 164;
}

/*
equation index: 165
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* junCHWRet.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 165;
}

/*
equation index: 166
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1662]] /* tan.vol[1].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 166;
}

/*
equation index: 167
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1658]] /* tan.vol[1].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 167;
}

/*
equation index: 168
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1663]] /* tan.vol[2].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* tan.vol[2].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1664]] /* tan.vol[3].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 170;
}

/*
equation index: 171
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* tan.vol[3].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 171;
}

/*
equation index: 172
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1665]] /* tan.vol[4].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 172;
}

/*
equation index: 173
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1661]] /* tan.vol[4].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 173;
}

/*
equation index: 174
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1540]] /* tan.indTanHex.vol[1].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 174;
}

/*
equation index: 175
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1534]] /* tan.indTanHex.vol[1].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 175;
}

/*
equation index: 176
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1541]] /* tan.indTanHex.vol[2].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 176;
}

/*
equation index: 177
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1535]] /* tan.indTanHex.vol[2].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 177;
}

/*
equation index: 178
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1542]] /* tan.indTanHex.vol[3].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 178;
}

/*
equation index: 179
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1536]] /* tan.indTanHex.vol[3].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 179;
}

/*
equation index: 180
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1543]] /* tan.indTanHex.vol[4].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 180;
}

/*
equation index: 181
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1537]] /* tan.indTanHex.vol[4].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 181;
}

/*
equation index: 182
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1544]] /* tan.indTanHex.vol[5].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 182;
}

/*
equation index: 183
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1538]] /* tan.indTanHex.vol[5].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 183;
}

/*
equation index: 184
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1545]] /* tan.indTanHex.vol[6].dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 184;
}

/*
equation index: 185
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1539]] /* tan.indTanHex.vol[6].dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 185;
}

/*
equation index: 186
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* junCHWRet2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 186;
}

/*
equation index: 187
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* junCHWRet2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 187;
}

/*
equation index: 188
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* junCHWSup2.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 188;
}

/*
equation index: 189
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* junCHWSup2.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 189;
}

/*
equation index: 190
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1290]] /* pumTanSup.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 190;
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1289]] /* pumTanSup.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 191;
}

/*
equation index: 192
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.medium.R = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1253]] /* pumTanRet.vol.dynBal.medium.R variable */) = 0.0;
  threadData->lastEquationSolved = 192;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.medium.MM = 0.018015268
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* pumTanRet.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 193;
}

/*
equation index: 194
type: SIMPLE_ASSIGN
fanSup.vol.steBal.m_flowInv = if noEvent(13.266998341625207 > fanSup.vol.steBal.deltaReg) or noEvent(13.266998341625207 < (-fanSup.vol.steBal.deltaReg)) then 0.075375 else if noEvent(13.266998341625207 < 0.5 * fanSup.vol.steBal.deltaReg) and noEvent(13.266998341625207 > (-0.5) * fanSup.vol.steBal.deltaReg) then 13.266998341625207 / fanSup.vol.steBal.deltaReg ^ 2.0 else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(13.266998341625207, fanSup.vol.steBal.deltaReg, fanSup.vol.steBal.deltaInvReg, fanSup.vol.steBal.aReg, fanSup.vol.steBal.bReg, fanSup.vol.steBal.cReg, fanSup.vol.steBal.dReg, fanSup.vol.steBal.eReg, fanSup.vol.steBal.fReg)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,194};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp0 = Greater(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */));
  tmp1 = Less(13.266998341625207,(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */)));
  tmp7 = (modelica_boolean)(tmp0 || tmp1);
  if(tmp7)
  {
    tmp8 = 0.075375;
  }
  else
  {
    tmp2 = Less(13.266998341625207,(0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */)));
    tmp3 = Greater(13.266998341625207,(-0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */)));
    tmp5 = (modelica_boolean)(tmp2 && tmp3);
    if(tmp5)
    {
      tmp4 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */);
      tmp6 = DIVISION_SIM(13.266998341625207,(tmp4 * tmp4),"fanSup.vol.steBal.deltaReg ^ 2.0",equationIndexes);
    }
    else
    {
      tmp6 = omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, 13.266998341625207, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1512]] /* fanSup.vol.steBal.deltaReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1511]] /* fanSup.vol.steBal.deltaInvReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1506]] /* fanSup.vol.steBal.aReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1507]] /* fanSup.vol.steBal.bReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1508]] /* fanSup.vol.steBal.cReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1510]] /* fanSup.vol.steBal.dReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1513]] /* fanSup.vol.steBal.eReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1514]] /* fanSup.vol.steBal.fReg PARAM */));
    }
    tmp8 = tmp6;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* fanSup.vol.steBal.m_flowInv variable */) = tmp8;
  threadData->lastEquationSolved = 194;
}

/*
equation index: 195
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* cooCoi.ele[1].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* cooCoi.ele[2].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 196;
}

/*
equation index: 197
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* cooCoi.ele[3].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 197;
}

/*
equation index: 198
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* cooCoi.ele[4].vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 198;
}

/*
equation index: 199
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* pumCHW.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 199;
}

/*
equation index: 200
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* cooTow.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 200;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* pumCW.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 201;
}

/*
equation index: 202
type: SIMPLE_ASSIGN
chi.vol1.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* chi.vol1.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 202;
}

/*
equation index: 203
type: SIMPLE_ASSIGN
chi.vol2.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* chi.vol2.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 203;
}

/*
equation index: 204
type: SIMPLE_ASSIGN
TAirSup.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* TAirSup.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 204;
}

/*
equation index: 205
type: SIMPLE_ASSIGN
TCWLeaTow.mNor_flow = 1.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* TCWLeaTow.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 205;
}

/*
equation index: 206
type: SIMPLE_ASSIGN
vol.dynBal.mb_flow = 0.0
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 206;
}

/*
equation index: 207
type: SIMPLE_ASSIGN
fanRet.vol.steBal.m_flowInv = if noEvent(13.266998341625207 > fanRet.vol.steBal.deltaReg) or noEvent(13.266998341625207 < (-fanRet.vol.steBal.deltaReg)) then 0.075375 else if noEvent(13.266998341625207 < 0.5 * fanRet.vol.steBal.deltaReg) and noEvent(13.266998341625207 > (-0.5) * fanRet.vol.steBal.deltaReg) then 13.266998341625207 / fanRet.vol.steBal.deltaReg ^ 2.0 else Buildings.Utilities.Math.Functions.BaseClasses.smoothTransition(13.266998341625207, fanRet.vol.steBal.deltaReg, fanRet.vol.steBal.deltaInvReg, fanRet.vol.steBal.aReg, fanRet.vol.steBal.bReg, fanRet.vol.steBal.cReg, fanRet.vol.steBal.dReg, fanRet.vol.steBal.eReg, fanRet.vol.steBal.fReg)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp9 = Greater(13.266998341625207,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */));
  tmp10 = Less(13.266998341625207,(-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */)));
  tmp16 = (modelica_boolean)(tmp9 || tmp10);
  if(tmp16)
  {
    tmp17 = 0.075375;
  }
  else
  {
    tmp11 = Less(13.266998341625207,(0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */)));
    tmp12 = Greater(13.266998341625207,(-0.5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */)));
    tmp14 = (modelica_boolean)(tmp11 && tmp12);
    if(tmp14)
    {
      tmp13 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */);
      tmp15 = DIVISION_SIM(13.266998341625207,(tmp13 * tmp13),"fanRet.vol.steBal.deltaReg ^ 2.0",equationIndexes);
    }
    else
    {
      tmp15 = omc_Buildings_Utilities_Math_Functions_BaseClasses_smoothTransition(threadData, 13.266998341625207, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1375]] /* fanRet.vol.steBal.deltaReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1374]] /* fanRet.vol.steBal.deltaInvReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1369]] /* fanRet.vol.steBal.aReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1370]] /* fanRet.vol.steBal.bReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1371]] /* fanRet.vol.steBal.cReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1373]] /* fanRet.vol.steBal.dReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1376]] /* fanRet.vol.steBal.eReg PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1377]] /* fanRet.vol.steBal.fReg PARAM */));
    }
    tmp17 = tmp15;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* fanRet.vol.steBal.m_flowInv variable */) = tmp17;
  threadData->lastEquationSolved = 207;
}

/*
equation index: 208
type: SIMPLE_ASSIGN
cooTow.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, 0.04909989084974072, 1.5873015873015874), 104510.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* cooTow.dp variable */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, 0.04909989084974072, 1.5873015873015874), 104510.0);
  threadData->lastEquationSolved = 208;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4399(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4400(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4410(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4411(DATA *data, threadData_t *threadData);


/*
equation index: 213
type: SIMPLE_ASSIGN
weaData.eqnTim.eqnTim = 60.0 * (9.87 * sin(2.0 * weaData.eqnTim.Bt) + (-7.53) * cos(weaData.eqnTim.Bt) + (-1.5) * sin(weaData.eqnTim.Bt))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1874]] /* weaData.eqnTim.eqnTim variable */) = (60.0) * ((9.87) * (sin((2.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* weaData.eqnTim.Bt variable */)))) + (-7.53) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* weaData.eqnTim.Bt variable */))) + (-1.5) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1873]] /* weaData.eqnTim.Bt variable */))));
  threadData->lastEquationSolved = 213;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4416(DATA *data, threadData_t *threadData);


/*
equation index: 215
type: SIMPLE_ASSIGN
weaBus.solDec = asin((-0.3979486313076103) * cos((weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,215};
  modelica_real tmp18;
  tmp18 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* weaBus.cloTim variable */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp18 >= -1.0 && tmp18 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((weaBus.cloTim / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp18);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* weaBus.solDec variable */) = asin(tmp18);
  threadData->lastEquationSolved = 215;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4417(DATA *data, threadData_t *threadData);


/*
equation index: 217
type: SIMPLE_ASSIGN
weaBus.solZen = acos(cos(weaData.zenAng.lat) * cos(weaBus.solDec) * cos(weaBus.solHouAng) + sin(weaData.zenAng.lat) * sin(weaBus.solDec))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,217};
  modelica_real tmp19;
  tmp19 = ((cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* weaData.zenAng.lat PARAM */))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* weaBus.solDec variable */)))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* weaBus.solHouAng variable */))) + (sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3677]] /* weaData.zenAng.lat PARAM */))) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* weaBus.solDec variable */)));
  if(!(tmp19 >= -1.0 && tmp19 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(cos(weaData.zenAng.lat) * cos(weaBus.solDec) * cos(weaBus.solHouAng) + sin(weaData.zenAng.lat) * sin(weaBus.solDec)) outside the domain -1.0 <= %g <= 1.0", tmp19);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1835]] /* weaBus.solZen variable */) = acos(tmp19);
  threadData->lastEquationSolved = 217;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4494(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4519(DATA *data, threadData_t *threadData);


/*
equation index: 220
type: SIMPLE_ASSIGN
cooTow2.dp = homotopy(Buildings.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(15.873015873015873, 0.04909989084974072, 1.5873015873015874), 104510.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1037]] /* cooTow2.dp PARAM */) = homotopy(omc_Buildings_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, 15.873015873015873, 0.04909989084974072, 1.5873015873015874), 104510.0);
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
chi2.sta2_start.p = chi2.p2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* chi2.sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
chi2.sta2_start.T = chi2.T2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* chi2.sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 222;
}

/*
equation index: 223
type: SIMPLE_ASSIGN
chi2.sta1_start.p = chi2.p1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* chi2.sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[227]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 223;
}

/*
equation index: 224
type: SIMPLE_ASSIGN
chi2.sta1_start.T = chi2.T1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* chi2.sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
cooTow2.sta_start.p = cooTow2.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1060]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
cooTow2.sta_start.T = cooTow2.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* cooTow2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1032]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
chi.sta2_start.p = chi.p2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* chi.sta2_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* chi.p2_start PARAM */);
  threadData->lastEquationSolved = 227;
}

/*
equation index: 228
type: SIMPLE_ASSIGN
chi.sta2_start.T = chi.T2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* chi.sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* chi.T2_start PARAM */);
  threadData->lastEquationSolved = 228;
}

/*
equation index: 229
type: SIMPLE_ASSIGN
chi.sta1_start.p = chi.p1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,229};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* chi.sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* chi.p1_start PARAM */);
  threadData->lastEquationSolved = 229;
}

/*
equation index: 230
type: SIMPLE_ASSIGN
chi.sta1_start.T = chi.T1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* chi.sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* chi.T1_start PARAM */);
  threadData->lastEquationSolved = 230;
}

/*
equation index: 231
type: SIMPLE_ASSIGN
cooTow.sta_start.p = cooTow.p_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* cooTow.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* cooTow.p_start PARAM */);
  threadData->lastEquationSolved = 231;
}

/*
equation index: 232
type: SIMPLE_ASSIGN
cooTow.sta_start.T = cooTow.T_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooTow.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[949]] /* cooTow.T_start PARAM */);
  threadData->lastEquationSolved = 232;
}

/*
equation index: 233
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta2_start.T = cooCoi.ele[4].T2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[632]] /* cooCoi.ele[4].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* cooCoi.ele[4].T2_start PARAM */);
  threadData->lastEquationSolved = 233;
}

/*
equation index: 234
type: ARRAY_CALL_ASSIGN

cooCoi.ele[4].sta2_start.X = cooCoi.ele[4].X2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,234};
  real_array tmp20;
  real_array tmp21;
  real_array_create(&tmp20, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* cooCoi.ele[4].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp21, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp20, tmp21);
  threadData->lastEquationSolved = 234;
}

/*
equation index: 235
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.p = cooCoi.ele[4].p1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[4].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* cooCoi.ele[4].p1_start PARAM */);
  threadData->lastEquationSolved = 235;
}

/*
equation index: 236
type: SIMPLE_ASSIGN
cooCoi.ele[4].sta1_start.T = cooCoi.ele[4].T1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[4].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* cooCoi.ele[4].T1_start PARAM */);
  threadData->lastEquationSolved = 236;
}

/*
equation index: 237
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta2_start.T = cooCoi.ele[3].T2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* cooCoi.ele[3].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* cooCoi.ele[3].T2_start PARAM */);
  threadData->lastEquationSolved = 237;
}

/*
equation index: 238
type: ARRAY_CALL_ASSIGN

cooCoi.ele[3].sta2_start.X = cooCoi.ele[3].X2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,238};
  real_array tmp22;
  real_array tmp23;
  real_array_create(&tmp22, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* cooCoi.ele[3].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp23, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp22, tmp23);
  threadData->lastEquationSolved = 238;
}

/*
equation index: 239
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.p = cooCoi.ele[3].p1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* cooCoi.ele[3].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* cooCoi.ele[3].p1_start PARAM */);
  threadData->lastEquationSolved = 239;
}

/*
equation index: 240
type: SIMPLE_ASSIGN
cooCoi.ele[3].sta1_start.T = cooCoi.ele[3].T1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* cooCoi.ele[3].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* cooCoi.ele[3].T1_start PARAM */);
  threadData->lastEquationSolved = 240;
}

/*
equation index: 241
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta2_start.T = cooCoi.ele[2].T2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* cooCoi.ele[2].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* cooCoi.ele[2].T2_start PARAM */);
  threadData->lastEquationSolved = 241;
}

/*
equation index: 242
type: ARRAY_CALL_ASSIGN

cooCoi.ele[2].sta2_start.X = cooCoi.ele[2].X2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  real_array tmp24;
  real_array tmp25;
  real_array_create(&tmp24, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* cooCoi.ele[2].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp25, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[635]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp24, tmp25);
  threadData->lastEquationSolved = 242;
}

/*
equation index: 243
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.p = cooCoi.ele[2].p1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[2].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* cooCoi.ele[2].p1_start PARAM */);
  threadData->lastEquationSolved = 243;
}

/*
equation index: 244
type: SIMPLE_ASSIGN
cooCoi.ele[2].sta1_start.T = cooCoi.ele[2].T1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* cooCoi.ele[2].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* cooCoi.ele[2].T1_start PARAM */);
  threadData->lastEquationSolved = 244;
}

/*
equation index: 245
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta2_start.T = cooCoi.ele[1].T2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* cooCoi.ele[1].sta2_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* cooCoi.ele[1].T2_start PARAM */);
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: ARRAY_CALL_ASSIGN

cooCoi.ele[1].sta2_start.X = cooCoi.ele[1].X2_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  real_array tmp26;
  real_array tmp27;
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* cooCoi.ele[1].X2_start[1] PARAM */))), 1, (_index_t)2);
  real_array_create(&tmp27, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))), 1, (_index_t)2);
  real_array_copy_data(tmp26, tmp27);
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.p = cooCoi.ele[1].p1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[1].sta1_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[461]] /* cooCoi.ele[1].p1_start PARAM */);
  threadData->lastEquationSolved = 247;
}

/*
equation index: 248
type: SIMPLE_ASSIGN
cooCoi.ele[1].sta1_start.T = cooCoi.ele[1].T1_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,248};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].sta1_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* cooCoi.ele[1].T1_start PARAM */);
  threadData->lastEquationSolved = 248;
}

/*
equation index: 249
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.U = $START.tan.indTanHex.vol[1].dynBal.U
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* tan.indTanHex.vol[1].dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[57] /* tan.indTanHex.vol[1].dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.U = $START.tan.indTanHex.vol[2].dynBal.U
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* tan.indTanHex.vol[2].dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[58] /* tan.indTanHex.vol[2].dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 250;
}

/*
equation index: 251
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.U = $START.tan.indTanHex.vol[3].dynBal.U
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* tan.indTanHex.vol[3].dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[59] /* tan.indTanHex.vol[3].dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 251;
}

/*
equation index: 252
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.U = $START.tan.indTanHex.vol[4].dynBal.U
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* tan.indTanHex.vol[4].dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[60] /* tan.indTanHex.vol[4].dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 252;
}

/*
equation index: 253
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.U = $START.tan.indTanHex.vol[5].dynBal.U
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* tan.indTanHex.vol[5].dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[61] /* tan.indTanHex.vol[5].dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 253;
}

/*
equation index: 254
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.U = $START.tan.indTanHex.vol[6].dynBal.U
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* tan.indTanHex.vol[6].dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[62] /* tan.indTanHex.vol[6].dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 254;
}

/*
equation index: 255
type: SIMPLE_ASSIGN
tan.indTanHex.cap[1].T = $START.tan.indTanHex.cap[1].T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* tan.indTanHex.cap[1].T STATE(1,tan.indTanHex.cap[1].der_T) */) = ((modelica_real *)((data->modelData->realVarsData[51] /* tan.indTanHex.cap[1].T STATE(1,tan.indTanHex.cap[1].der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
tan.indTanHex.cap[2].T = $START.tan.indTanHex.cap[2].T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* tan.indTanHex.cap[2].T STATE(1,tan.indTanHex.cap[2].der_T) */) = ((modelica_real *)((data->modelData->realVarsData[52] /* tan.indTanHex.cap[2].T STATE(1,tan.indTanHex.cap[2].der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
tan.indTanHex.cap[3].T = $START.tan.indTanHex.cap[3].T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* tan.indTanHex.cap[3].T STATE(1,tan.indTanHex.cap[3].der_T) */) = ((modelica_real *)((data->modelData->realVarsData[53] /* tan.indTanHex.cap[3].T STATE(1,tan.indTanHex.cap[3].der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
tan.indTanHex.cap[4].T = $START.tan.indTanHex.cap[4].T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* tan.indTanHex.cap[4].T STATE(1,tan.indTanHex.cap[4].der_T) */) = ((modelica_real *)((data->modelData->realVarsData[54] /* tan.indTanHex.cap[4].T STATE(1,tan.indTanHex.cap[4].der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 258;
}

/*
equation index: 259
type: SIMPLE_ASSIGN
tan.indTanHex.cap[5].T = $START.tan.indTanHex.cap[5].T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* tan.indTanHex.cap[5].T STATE(1,tan.indTanHex.cap[5].der_T) */) = ((modelica_real *)((data->modelData->realVarsData[55] /* tan.indTanHex.cap[5].T STATE(1,tan.indTanHex.cap[5].der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 259;
}

/*
equation index: 260
type: SIMPLE_ASSIGN
tan.indTanHex.cap[6].T = $START.tan.indTanHex.cap[6].T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* tan.indTanHex.cap[6].T STATE(1,tan.indTanHex.cap[6].der_T) */) = ((modelica_real *)((data->modelData->realVarsData[56] /* tan.indTanHex.cap[6].T STATE(1,tan.indTanHex.cap[6].der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 260;
}

/*
equation index: 261
type: SIMPLE_ASSIGN
val8_2.phi = val8_2.l + val8Con.k * (1.0 - val8_2.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1772]] /* val8_2.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3520]] /* val8_2.l PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3460]] /* val8Con.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3520]] /* val8_2.l PARAM */));
  threadData->lastEquationSolved = 261;
}

/*
equation index: 262
type: SIMPLE_ASSIGN
val7.phi = val7.l + val7Con.k * (1.0 - val7.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1743]] /* val7.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3426]] /* val7.l PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3436]] /* val7Con.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3426]] /* val7.l PARAM */));
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
val8.phi = val8.l + val8Con.k * (1.0 - val8.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1752]] /* val8.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3450]] /* val8.l PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3460]] /* val8Con.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3450]] /* val8.l PARAM */));
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
val6.phi = val6.l + val6Con.k * (1.0 - val6.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1736]] /* val6.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3402]] /* val6.l PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3412]] /* val6Con.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3402]] /* val6.l PARAM */));
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
val5.phi = val5.l + val5Con.k * (1.0 - val5.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1727]] /* val5.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* val5.l PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3388]] /* val5Con.k PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3378]] /* val5.l PARAM */));
  threadData->lastEquationSolved = 265;
}

/*
equation index: 266
type: SIMPLE_ASSIGN
val8Rel.y = kMinusU2.k - val8Con.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* val8Rel.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2055]] /* kMinusU2.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3460]] /* val8Con.k PARAM */);
  threadData->lastEquationSolved = 266;
}

/*
equation index: 267
type: SIMPLE_ASSIGN
val8Rel.phi = val8Rel.l + val8Rel.y * (1.0 - val8Rel.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1757]] /* val8Rel.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3474]] /* val8Rel.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* val8Rel.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3474]] /* val8Rel.l PARAM */));
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
val8_2Rel.phi = val8_2Rel.l + val8Rel.y * (1.0 - val8_2Rel.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* val8_2Rel.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3543]] /* val8_2Rel.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* val8Rel.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3543]] /* val8_2Rel.l PARAM */));
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
val8Sto.phi = val8Sto.l + val8Rel.y * (1.0 - val8Sto.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1765]] /* val8Sto.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3497]] /* val8Sto.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* val8Rel.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3497]] /* val8Sto.l PARAM */));
  threadData->lastEquationSolved = 269;
}

/*
equation index: 270
type: SIMPLE_ASSIGN
val8_2Sto.phi = val8_2Sto.l + val8Rel.y * (1.0 - val8_2Sto.l)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1783]] /* val8_2Sto.phi variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3566]] /* val8_2Sto.l PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1760]] /* val8Rel.y variable */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3566]] /* val8_2Sto.l PARAM */));
  threadData->lastEquationSolved = 270;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
pumTanRet.vol.dynBal.m = 995.586 * pumTanRet.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* pumTanRet.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2687]] /* pumTanRet.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 271;
}

/*
equation index: 272
type: SIMPLE_ASSIGN
pumTanSup.vol.dynBal.m = 995.586 * pumTanSup.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* pumTanSup.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* pumTanSup.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 272;
}

/*
equation index: 273
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.m = 995.586 * junCHWSup2.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* junCHWSup2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1837]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 273;
}

/*
equation index: 274
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.m = 995.586 * junCHWRet2.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* junCHWRet2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1671]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 274;
}

/*
equation index: 275
type: SIMPLE_ASSIGN
tan.indTanHex.vol[6].dynBal.m = 995.586 * tan.indTanHex.vol[6].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1521]] /* tan.indTanHex.vol[6].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3114]] /* tan.indTanHex.vol[6].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 275;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4703(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4704(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4705(DATA *data, threadData_t *threadData);


/*
equation index: 279
type: SIMPLE_ASSIGN
tan.indTanHex.vol[5].dynBal.m = 995.586 * tan.indTanHex.vol[5].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1520]] /* tan.indTanHex.vol[5].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3113]] /* tan.indTanHex.vol[5].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 279;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4700(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4701(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4702(DATA *data, threadData_t *threadData);


/*
equation index: 283
type: SIMPLE_ASSIGN
tan.indTanHex.vol[4].dynBal.m = 995.586 * tan.indTanHex.vol[4].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1519]] /* tan.indTanHex.vol[4].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3112]] /* tan.indTanHex.vol[4].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 283;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4697(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4698(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4699(DATA *data, threadData_t *threadData);


/*
equation index: 287
type: SIMPLE_ASSIGN
tan.indTanHex.vol[3].dynBal.m = 995.586 * tan.indTanHex.vol[3].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1518]] /* tan.indTanHex.vol[3].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3111]] /* tan.indTanHex.vol[3].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 287;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4694(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4695(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4696(DATA *data, threadData_t *threadData);


/*
equation index: 291
type: SIMPLE_ASSIGN
tan.indTanHex.vol[2].dynBal.m = 995.586 * tan.indTanHex.vol[2].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1517]] /* tan.indTanHex.vol[2].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3110]] /* tan.indTanHex.vol[2].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 291;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4691(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4692(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4693(DATA *data, threadData_t *threadData);


/*
equation index: 295
type: SIMPLE_ASSIGN
tan.indTanHex.vol[1].dynBal.m = 995.586 * tan.indTanHex.vol[1].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* tan.indTanHex.vol[1].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3109]] /* tan.indTanHex.vol[1].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 295;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4688(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4689(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4690(DATA *data, threadData_t *threadData);


/*
equation index: 299
type: SIMPLE_ASSIGN
tan.vol[4].dynBal.m = 995.586 * tan.vol[4].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1649]] /* tan.vol[4].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3269]] /* tan.vol[4].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 299;
}

/*
equation index: 300
type: SIMPLE_ASSIGN
tan.vol[3].dynBal.m = 995.586 * tan.vol[3].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1648]] /* tan.vol[3].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3268]] /* tan.vol[3].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
tan.vol[2].dynBal.m = 995.586 * tan.vol[2].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1647]] /* tan.vol[2].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3267]] /* tan.vol[2].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
tan.vol[1].dynBal.m = 995.586 * tan.vol[1].dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1646]] /* tan.vol[1].dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3266]] /* tan.vol[1].dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 302;
}

/*
equation index: 303
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.m = 995.586 * junCHWRet.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* junCHWRet.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1588]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 303;
}

/*
equation index: 304
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.m = 995.586 * junCHWSup.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* junCHWSup.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.m = 995.586 * chi2.vol2.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* chi2.vol2.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* chi2.vol2.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.m = 995.586 * chi2.vol1.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* chi2.vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* chi2.vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.m = 995.586 * pumCW2.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* pumCW2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2555]] /* pumCW2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.m = 995.586 * cooTow2.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* cooTow2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1090]] /* cooTow2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.m = 995.586 * pumCHW2.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* pumCHW2.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2297]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
kMinusU.y = kMinusU.k - damCon.k
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* kMinusU.y variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2054]] /* kMinusU.k PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* damCon.k PARAM */);
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
damRet.k = 1.4142135623730951 * sqrt(damRet.rho_default) * damRet.A / Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(kMinusU.y, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  modelica_real tmp28;
  real_array tmp29;
  real_array tmp30;
  tmp28 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damRet.rho_default PARAM */);
  if(!(tmp28 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damRet.rho_default) was %g should be >= 0", tmp28);
    }
  }real_array_create(&tmp29, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* damRet.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp30, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* damRet.cU[1] PARAM */))), 1, (_index_t)3);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* damRet.k variable */) = (1.4142135623730951) * ((sqrt(tmp28)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* damRet.A PARAM */),omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* kMinusU.y variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* damRet.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* damRet.b PARAM */), tmp29, tmp30, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damRet.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damRet.yU PARAM */)),"Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(kMinusU.y, damRet.a, damRet.b, damRet.cL, damRet.cU, damRet.yL, damRet.yU)",equationIndexes)));
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
damOA.k = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  modelica_real tmp31;
  real_array tmp32;
  real_array tmp33;
  tmp31 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* damOA.rho_default PARAM */);
  if(!(tmp31 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damOA.rho_default) was %g should be >= 0", tmp31);
    }
  }real_array_create(&tmp32, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp33, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* damOA.k variable */) = (1.4142135623730951) * ((sqrt(tmp31)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1150]] /* damOA.A PARAM */),omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* damCon.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* damOA.b PARAM */), tmp32, tmp33, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* damOA.yU PARAM */)),"Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)",equationIndexes)));
  threadData->lastEquationSolved = 312;
}

/*
equation index: 313
type: SIMPLE_ASSIGN
damEA.k = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,313};
  modelica_real tmp34;
  real_array tmp35;
  real_array tmp36;
  tmp34 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* damEA.rho_default PARAM */);
  if(!(tmp34 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damEA.rho_default) was %g should be >= 0", tmp34);
    }
  }real_array_create(&tmp35, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1120]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp36, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1123]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* damEA.k variable */) = (1.4142135623730951) * ((sqrt(tmp34)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1114]] /* damEA.A PARAM */),omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1113]] /* damCon.k PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1118]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1119]] /* damEA.b PARAM */), tmp35, tmp36, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1147]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1148]] /* damEA.yU PARAM */)),"Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(damCon.k, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)",equationIndexes)));
  threadData->lastEquationSolved = 313;
}

/*
equation index: 314
type: SIMPLE_ASSIGN
chi.vol2.dynBal.m = 995.586 * chi.vol2.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* chi.vol2.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[183]] /* chi.vol2.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
chi.vol1.dynBal.m = 995.586 * chi.vol1.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* chi.vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* chi.vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
pumCW.vol.dynBal.m = 995.586 * pumCW.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* pumCW.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2427]] /* pumCW.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
cooTow.vol.dynBal.m = 995.586 * cooTow.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* cooTow.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1006]] /* cooTow.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
pumCHW.vol.dynBal.m = 995.586 * pumCHW.vol.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* pumCHW.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2169]] /* pumCHW.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
cooCoi.ele[4].vol1.dynBal.m = 995.586 * cooCoi.ele[4].vol1.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* cooCoi.ele[4].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[688]] /* cooCoi.ele[4].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
cooCoi.ele[3].vol1.dynBal.m = 995.586 * cooCoi.ele[3].vol1.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* cooCoi.ele[3].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[687]] /* cooCoi.ele[3].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
cooCoi.ele[2].vol1.dynBal.m = 995.586 * cooCoi.ele[2].vol1.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* cooCoi.ele[2].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[686]] /* cooCoi.ele[2].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
cooCoi.ele[1].vol1.dynBal.m = 995.586 * cooCoi.ele[1].vol1.dynBal.fluidVolume
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* cooCoi.ele[1].vol1.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[685]] /* cooCoi.ele[1].vol1.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
cooCoi.ele[1].h1_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[1].sta1_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp37;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp37, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* cooCoi.ele[1].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* cooCoi.ele[1].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* cooCoi.ele[1].h1_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp37);
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
cooCoi.ele[1].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[1].sta2_start.T) * (1.0 - cooCoi.ele[1].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[1].sta2_start.T)) * cooCoi.ele[1].sta2_start.X[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* cooCoi.ele[1].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* cooCoi.ele[1].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* cooCoi.ele[1].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* cooCoi.ele[1].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
cooCoi.ele[2].h1_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[2].sta1_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp38;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp38, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[610]] /* cooCoi.ele[2].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* cooCoi.ele[2].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* cooCoi.ele[2].h1_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp38);
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
cooCoi.ele[2].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[2].sta2_start.T) * (1.0 - cooCoi.ele[2].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[2].sta2_start.T)) * cooCoi.ele[2].sta2_start.X[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* cooCoi.ele[2].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* cooCoi.ele[2].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[635]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[630]] /* cooCoi.ele[2].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[635]] /* cooCoi.ele[2].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
cooCoi.ele[3].h1_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[3].sta1_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp39;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp39, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* cooCoi.ele[3].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* cooCoi.ele[3].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* cooCoi.ele[3].h1_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp39);
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
cooCoi.ele[3].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[3].sta2_start.T) * (1.0 - cooCoi.ele[3].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[3].sta2_start.T)) * cooCoi.ele[3].sta2_start.X[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[439]] /* cooCoi.ele[3].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* cooCoi.ele[3].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* cooCoi.ele[3].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[637]] /* cooCoi.ele[3].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
cooCoi.ele[4].h1_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooCoi.ele.Medium1.specificEnthalpy(cooCoi.ele[4].sta1_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState tmp40;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_ThermodynamicState_wrap_vars(threadData,tmp40, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* cooCoi.ele[4].sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* cooCoi.ele[4].sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* cooCoi.ele[4].h1_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooCoi_ele_Medium1_specificEnthalpy(threadData, tmp40);
  threadData->lastEquationSolved = 329;
}

/*
equation index: 330
type: SIMPLE_ASSIGN
cooCoi.ele[4].h2_outflow_start = 1006.0 * (-273.15 + cooCoi.ele[4].sta2_start.T) * (1.0 - cooCoi.ele[4].sta2_start.X[1]) + (2.5010145e6 + 1860.0 * (-273.15 + cooCoi.ele[4].sta2_start.T)) * cooCoi.ele[4].sta2_start.X[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* cooCoi.ele[4].h2_outflow_start PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[632]] /* cooCoi.ele[4].sta2_start.T PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[632]] /* cooCoi.ele[4].sta2_start.T PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* cooCoi.ele[4].sta2_start.X[1] PARAM */));
  threadData->lastEquationSolved = 330;
}

/*
equation index: 331
type: SIMPLE_ASSIGN
cooTow.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow.Medium.specificEnthalpy(cooTow.sta_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,331};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_ThermodynamicState tmp41;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_ThermodynamicState_wrap_vars(threadData,tmp41, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[997]] /* cooTow.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[996]] /* cooTow.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[972]] /* cooTow.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow_Medium_specificEnthalpy(threadData, tmp41);
  threadData->lastEquationSolved = 331;
}

/*
equation index: 332
type: SIMPLE_ASSIGN
chi.h1_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium1.specificEnthalpy(chi.sta1_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,332};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_ThermodynamicState tmp42;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_ThermodynamicState_wrap_vars(threadData,tmp42, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* chi.sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* chi.sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* chi.h1_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium1_specificEnthalpy(threadData, tmp42);
  threadData->lastEquationSolved = 332;
}

/*
equation index: 333
type: SIMPLE_ASSIGN
chi.h2_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi.Medium2.specificEnthalpy(chi.sta2_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_ThermodynamicState tmp43;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_ThermodynamicState_wrap_vars(threadData,tmp43, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[148]] /* chi.sta2_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[147]] /* chi.sta2_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* chi.h2_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi_Medium2_specificEnthalpy(threadData, tmp43);
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
weaData.conTim1.weaDatEndTim = weaData.timeSpan[2]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3654]] /* weaData.conTim1.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3673]] /* weaData.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
weaData.conTim1.weaDatStaTim = weaData.timeSpan[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3655]] /* weaData.conTim1.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3672]] /* weaData.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: SIMPLE_ASSIGN
weaData.conTim1.lenWea = weaData.conTim1.weaDatEndTim - weaData.conTim1.weaDatStaTim
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3653]] /* weaData.conTim1.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3654]] /* weaData.conTim1.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3655]] /* weaData.conTim1.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
weaData.conTim1.canRepeatWeatherFile = abs(mod(weaData.conTim1.lenWea, 3.1536e7)) < 0.01
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  modelica_real tmp44;
  modelica_boolean tmp45;
  tmp44 = 3.1536e7;
  if (tmp44 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaData.conTim1.lenWea, 3.1536e7)");}
  tmp45 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3653]] /* weaData.conTim1.lenWea PARAM */), tmp44)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1105]] /* weaData.conTim1.canRepeatWeatherFile PARAM */) = tmp45;
  threadData->lastEquationSolved = 337;
}

/*
equation index: 338
type: SIMPLE_ASSIGN
weaData.conTim1.tNext = if weaData.conTim1.canRepeatWeatherFile then weaData.conTim1.lenWea * (1.0 + (*Real*)(integer(weaData.add.y / weaData.conTim1.lenWea))) else time
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* weaData.conTim1.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1105]] /* weaData.conTim1.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3653]] /* weaData.conTim1.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* weaData.add.y variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3653]] /* weaData.conTim1.lenWea PARAM */),"weaData.conTim1.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 338;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4403(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4404(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4405(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4406(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4407(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4408(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4409(DATA *data, threadData_t *threadData);


/*
equation index: 346
type: SIMPLE_ASSIGN
weaData.conTim.weaDatEndTim = weaData.timeSpan[2]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3651]] /* weaData.conTim.weaDatEndTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3673]] /* weaData.timeSpan[2] PARAM */);
  threadData->lastEquationSolved = 346;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
weaData.conTim.weaDatStaTim = weaData.timeSpan[1]
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3652]] /* weaData.conTim.weaDatStaTim PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3672]] /* weaData.timeSpan[1] PARAM */);
  threadData->lastEquationSolved = 347;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
weaData.conTim.lenWea = weaData.conTim.weaDatEndTim - weaData.conTim.weaDatStaTim
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3650]] /* weaData.conTim.lenWea PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3651]] /* weaData.conTim.weaDatEndTim PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3652]] /* weaData.conTim.weaDatStaTim PARAM */);
  threadData->lastEquationSolved = 348;
}

/*
equation index: 349
type: SIMPLE_ASSIGN
weaData.conTim.canRepeatWeatherFile = abs(mod(weaData.conTim.lenWea, 3.1536e7)) < 0.01
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  modelica_real tmp46;
  modelica_boolean tmp47;
  tmp46 = 3.1536e7;
  if (tmp46 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(weaData.conTim.lenWea, 3.1536e7)");}
  tmp47 = Less(fabs(modelica_real_mod((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3650]] /* weaData.conTim.lenWea PARAM */), tmp46)),0.01);
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1104]] /* weaData.conTim.canRepeatWeatherFile PARAM */) = tmp47;
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
weaData.conTim.tNext = if weaData.conTim.canRepeatWeatherFile then weaData.conTim.lenWea * (1.0 + (*Real*)(integer(weaBus.cloTim / weaData.conTim.lenWea))) else time
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* weaData.conTim.tNext DISCRETE */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1104]] /* weaData.conTim.canRepeatWeatherFile PARAM */)?((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3650]] /* weaData.conTim.lenWea PARAM */)) * (1.0 + ((modelica_real)((modelica_integer)floor(DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* weaBus.cloTim variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3650]] /* weaData.conTim.lenWea PARAM */),"weaData.conTim.lenWea",equationIndexes))))):data->localData[0]->timeValue);
  threadData->lastEquationSolved = 350;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4421(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4422(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4423(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4424(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4425(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4426(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4427(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4428(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4429(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4430(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4431(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4432(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4433(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4434(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4435(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4436(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4437(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4438(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4439(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4440(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4441(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4442(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4443(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4444(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4445(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4446(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4447(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4448(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4449(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4450(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4451(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4452(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4453(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4454(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4455(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4456(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4457(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4458(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4459(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4460(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4461(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4462(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4463(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4485(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4488(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4467(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4465(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4466(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4486(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4487(DATA *data, threadData_t *threadData);

extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4464(DATA *data, threadData_t *threadData);


/*
equation index: 402
type: SIMPLE_ASSIGN
weaData.tWetBul_TDryBulXi.XiDryBul = 0.621964713077499 * weaBus.relHum / ((-0.378035286922501) * weaBus.relHum + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TDryBul - 35.719) - 17.2799))
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* weaData.tWetBul_TDryBulXi.XiDryBul variable */) = (0.621964713077499) * (DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* weaBus.relHum variable */),(-0.378035286922501) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* weaBus.relHum variable */)) + (0.0016349032219037793) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3669]] /* weaData.pAtm PARAM */)) * (exp(DIVISION_SIM(4102.99,(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* weaBus.TDryBul variable */) - 35.719,"weaBus.TDryBul - 35.719",equationIndexes) - 17.2799))),"(-0.378035286922501) * weaBus.relHum + 0.0016349032219037793 * weaData.pAtm * exp(4102.99 / (weaBus.TDryBul - 35.719) - 17.2799)",equationIndexes));
  threadData->lastEquationSolved = 402;
}

void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_403(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_404(DATA*, threadData_t*);
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_405(DATA*, threadData_t*);
/*
equation index: 410
indexNonlinear: 0
type: NONLINEAR

vars: {weaBus.TWetBul}
eqns: {403, 404, 405}
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 410 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,410};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 410 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* weaBus.TWetBul variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 410;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4470(DATA *data, threadData_t *threadData);


/*
equation index: 412
type: SIMPLE_ASSIGN
weaData.TBlaSkyCom.epsSky = (0.787 + 0.764 * log((-weaData.TBlaSkyCom.TDewPoiK) / (-273.15))) * (1.0 + 0.0224 * weaData.TBlaSkyCom.nOpa10 + (-0.0035) * weaData.TBlaSkyCom.nOpa10 ^ 2.0 + 2.8e-4 * weaData.TBlaSkyCom.nOpa10 ^ 3.0)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,412};
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  tmp48 = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1842]] /* weaData.TBlaSkyCom.TDewPoiK variable */)),-273.15,"-273.15",equationIndexes);
  if(!(tmp48 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log((-weaData.TBlaSkyCom.TDewPoiK) / (-273.15)) was %g should be > 0", tmp48);
    }
  }tmp49 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* weaData.TBlaSkyCom.nOpa10 variable */);
  tmp50 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* weaData.TBlaSkyCom.nOpa10 variable */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* weaData.TBlaSkyCom.epsSky variable */) = (0.787 + (0.764) * (log(tmp48))) * (1.0 + (0.0224) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* weaData.TBlaSkyCom.nOpa10 variable */)) + (-0.0035) * ((tmp49 * tmp49)) + (2.8e-4) * ((tmp50 * tmp50 * tmp50)));
  threadData->lastEquationSolved = 412;
}
extern void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4473(DATA *data, threadData_t *threadData);


/*
equation index: 414
type: SIMPLE_ASSIGN
cooTow2.h_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.cooTow2.Medium.specificEnthalpy(cooTow2.sta_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_ThermodynamicState tmp51;
  WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp51, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1081]] /* cooTow2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1080]] /* cooTow2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1056]] /* cooTow2.h_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_cooTow2_Medium_specificEnthalpy(threadData, tmp51);
  threadData->lastEquationSolved = 414;
}

/*
equation index: 415
type: SIMPLE_ASSIGN
chi2.h1_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium1.specificEnthalpy(chi2.sta1_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,415};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_ThermodynamicState tmp52;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp52, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* chi2.sta1_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[290]] /* chi2.sta1_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[219]] /* chi2.h1_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium1_specificEnthalpy(threadData, tmp52);
  threadData->lastEquationSolved = 415;
}

/*
equation index: 416
type: SIMPLE_ASSIGN
chi2.h2_outflow_start = WaterCooledChillerExample.WaterCooledChillerExample7.chi2.Medium2.specificEnthalpy(chi2.sta2_start)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,416};
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_ThermodynamicState tmp53;
  WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp53, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* chi2.sta2_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* chi2.sta2_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[220]] /* chi2.h2_outflow_start PARAM */) = omc_WaterCooledChillerExample_WaterCooledChillerExample7_chi2_Medium2_specificEnthalpy(threadData, tmp53);
  threadData->lastEquationSolved = 416;
}

/*
equation index: 417
type: SIMPLE_ASSIGN
TWCLeaTow2.k = Modelica.Fluid.Utilities.regStep(15.873015873015873, 1.0, -1.0, TWCLeaTow2.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* TWCLeaTow2.k variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, 15.873015873015873, 1.0, -1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* TWCLeaTow2.m_flow_small PARAM */));
  threadData->lastEquationSolved = 417;
}

/*
equation index: 418
type: SIMPLE_ASSIGN
TCWLeaTow.k = Modelica.Fluid.Utilities.regStep(15.873015873015873, 1.0, -1.0, TCWLeaTow.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* TCWLeaTow.k variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, 15.873015873015873, 1.0, -1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* TCWLeaTow.m_flow_small PARAM */));
  threadData->lastEquationSolved = 418;
}

/*
equation index: 419
type: SIMPLE_ASSIGN
TAirSup.k = Modelica.Fluid.Utilities.regStep(13.266998341625207, 1.0, -1.0, TAirSup.m_flow_small)
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* TAirSup.k variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, 13.266998341625207, 1.0, -1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* TAirSup.m_flow_small PARAM */));
  threadData->lastEquationSolved = 419;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
$START.cooCoi.port_b1.h_outflow = cooCoi.ele[4].h1_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,420};
  ((modelica_real *)((data->modelData->realVarsData[680] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* cooCoi.ele[4].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[680] /* cooCoi.port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[680] /* cooCoi.port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* cooCoi.port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 420;
}

/*
equation index: 421
type: SIMPLE_ASSIGN
$START.cooCoi.port_a2.h_outflow = cooCoi.ele[4].h2_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  ((modelica_real *)((data->modelData->realVarsData[679] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* cooCoi.ele[4].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[679] /* cooCoi.port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[679] /* cooCoi.port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* cooCoi.port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
cooCoi.ele[1].mas.T = $START.cooCoi.ele[1].mas.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* cooCoi.ele[1].mas.T STATE(1,cooCoi.ele[1].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[10] /* cooCoi.ele[1].mas.T STATE(1,cooCoi.ele[1].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_b1.h_outflow = cooCoi.ele[2].h1_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  ((modelica_real *)((data->modelData->realVarsData[512] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* cooCoi.ele[2].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[512] /* cooCoi.ele[2].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[512] /* cooCoi.ele[2].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* cooCoi.ele[2].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
$START.cooCoi.ele[2].port_a2.h_outflow = cooCoi.ele[2].h2_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  ((modelica_real *)((data->modelData->realVarsData[510] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* cooCoi.ele[2].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[510] /* cooCoi.ele[2].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[510] /* cooCoi.ele[2].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* cooCoi.ele[2].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 424;
}

/*
equation index: 425
type: SIMPLE_ASSIGN
cooCoi.ele[2].mas.T = $START.cooCoi.ele[2].mas.T
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* cooCoi.ele[2].mas.T STATE(1,cooCoi.ele[2].mas.der_T) */) = ((modelica_real *)((data->modelData->realVarsData[11] /* cooCoi.ele[2].mas.T STATE(1,cooCoi.ele[2].mas.der_T) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_b1.h_outflow = cooCoi.ele[3].h1_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  ((modelica_real *)((data->modelData->realVarsData[513] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* cooCoi.ele[3].h1_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[513] /* cooCoi.ele[3].port_b1.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[513] /* cooCoi.ele[3].port_b1.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* cooCoi.ele[3].port_b1.h_outflow variable */));
  threadData->lastEquationSolved = 426;
}

/*
equation index: 427
type: SIMPLE_ASSIGN
$START.cooCoi.ele[3].port_a2.h_outflow = cooCoi.ele[3].h2_outflow_start
*/
void WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  ((modelica_real *)((data->modelData->realVarsData[511] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[439]] /* cooCoi.ele[3].h2_outflow_start PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */) = ((modelica_real *)((data->modelData->realVarsData[511] /* cooCoi.ele[3].port_a2.h_outflow variable */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[511] /* cooCoi.ele[3].port_a2.h_outflow */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* cooCoi.ele[3].port_a2.h_outflow variable */));
  threadData->lastEquationSolved = 427;
}
OMC_DISABLE_OPT
void WaterCooledChillerExample_WaterCooledChillerExample7_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[420])(DATA*, threadData_t*) = {
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_1,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_2,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_3,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_5,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_6,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_7,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_8,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_9,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_10,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_11,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_12,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_13,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_14,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_15,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_16,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_17,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_18,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_19,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_20,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_21,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_22,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_23,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_24,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_25,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_26,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_27,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_28,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_29,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_30,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_31,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_32,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_33,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_34,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_35,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_36,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_37,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_38,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_39,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_40,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_41,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_42,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_43,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_44,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_45,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_46,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_47,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_48,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_49,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_50,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_51,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_52,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_53,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_54,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_55,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_56,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_57,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_58,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_59,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_60,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_61,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_62,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_63,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_64,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_65,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_66,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_67,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_68,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_69,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_70,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_71,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_72,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_73,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_74,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_75,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_76,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_77,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_78,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_79,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_80,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_81,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_82,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_83,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_84,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_85,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_86,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_87,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_88,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_89,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_90,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_91,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_92,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_93,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_94,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_95,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_96,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_97,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_98,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_99,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_100,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_101,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_102,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_103,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_104,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_105,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_106,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_107,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_108,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_109,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_110,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_111,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_112,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_113,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_114,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_115,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_116,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_117,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_118,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_119,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_120,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_121,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_122,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_123,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_124,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_125,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_126,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_127,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_128,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_129,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_130,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_131,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_132,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_133,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_134,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_135,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_136,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_137,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_138,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_139,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_140,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_141,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_142,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_143,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_144,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_145,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_146,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_147,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_148,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_149,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_150,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_151,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_152,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_153,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_154,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_155,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_156,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_157,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_158,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_159,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_160,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_161,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_162,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_163,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_164,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_165,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_166,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_167,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_168,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_169,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_170,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_171,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_172,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_173,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_174,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_175,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_176,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_177,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_178,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_179,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_180,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_181,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_182,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_183,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_184,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_185,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_186,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_187,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_188,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_189,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_190,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_191,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_192,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_193,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_194,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_195,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_196,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_197,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_198,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_199,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_200,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_201,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_202,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_203,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_204,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_205,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_206,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_207,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_208,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4399,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4400,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4410,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4411,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_213,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4416,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_215,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4417,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_217,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4494,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4519,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_220,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_221,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_222,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_223,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_224,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_225,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_226,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_227,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_228,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_229,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_230,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_231,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_232,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_233,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_234,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_235,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_236,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_237,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_238,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_239,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_240,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_241,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_242,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_243,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_244,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_245,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_246,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_247,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_248,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_249,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_250,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_251,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_252,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_253,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_254,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_255,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_256,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_257,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_258,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_259,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_260,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_261,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_262,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_263,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_264,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_265,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_266,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_267,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_268,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_269,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_270,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_271,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_272,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_273,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_274,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_275,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4703,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4704,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4705,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_279,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4700,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4701,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4702,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_283,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4697,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4698,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4699,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_287,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4694,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4695,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4696,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_291,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4691,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4692,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4693,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_295,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4688,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4689,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4690,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_299,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_300,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_301,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_302,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_303,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_304,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_305,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_306,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_307,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_308,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_309,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_310,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_311,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_312,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_313,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_314,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_315,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_316,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_317,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_318,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_319,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_320,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_321,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_322,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_323,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_324,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_325,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_326,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_327,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_328,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_329,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_330,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_331,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_332,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_333,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_334,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_335,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_336,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_337,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_338,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4403,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4404,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4405,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4406,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4407,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4408,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4409,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_346,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_347,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_348,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_349,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_350,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4421,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4422,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4423,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4424,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4426,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4427,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4428,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4429,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4430,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4431,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4432,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4433,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4434,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4435,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4436,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4437,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4438,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4439,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4440,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4441,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4442,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4443,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4444,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4445,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4446,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4447,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4448,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4449,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4450,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4451,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4452,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4453,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4454,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4455,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4456,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4457,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4458,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4459,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4460,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4461,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4462,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4463,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4485,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4488,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4467,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4465,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4466,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4486,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4487,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4464,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_402,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_410,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4470,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_412,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_4473,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_414,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_415,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_416,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_417,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_418,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_419,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_420,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_421,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_422,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_423,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_424,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_425,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_426,
    WaterCooledChillerExample_WaterCooledChillerExample7_eqFunction_427
  };
  
  for (int id = 0; id < 420; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif