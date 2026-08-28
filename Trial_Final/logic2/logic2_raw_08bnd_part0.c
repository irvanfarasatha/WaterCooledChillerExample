#include "logic2_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 4102
type: SIMPLE_ASSIGN
weaData.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2903]] /* weaData.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 4102;
}

/*
equation index: 4103
type: SIMPLE_ASSIGN
weaData.zenAng.lat = weaData.lat
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* weaData.zenAng.lat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2903]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 4103;
}

/*
equation index: 4104
type: SIMPLE_ASSIGN
$cse40 = cos(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse40 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 4104;
}

/*
equation index: 4105
type: SIMPLE_ASSIGN
$cse43 = sin(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse43 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2919]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 4105;
}

/*
equation index: 4106
type: SIMPLE_ASSIGN
weaData.datRea.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4106};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 4106;
}

/*
equation index: 4108
type: SIMPLE_ASSIGN
weaData.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea.fileName) then weaData.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea.verboseRead)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4108};
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT90, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */), _OMC_LIT91)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */):_OMC_LIT91), _OMC_LIT92, _OMC_LIT93, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[877]] /* weaData.datRea.verboseRead PARAM */));
  threadData->lastEquationSolved = 4108;
}

/*
equation index: 4109
type: SIMPLE_ASSIGN
weaData.datRea1.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4109};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 4109;
}

/*
equation index: 4111
type: SIMPLE_ASSIGN
weaData.datRea1.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea1.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea1.fileName) then weaData.datRea1.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea1.verboseRead)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4111};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT90, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */), _OMC_LIT91)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */):_OMC_LIT91), _OMC_LIT92, _OMC_LIT94, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[880]] /* weaData.datRea1.verboseRead PARAM */));
  threadData->lastEquationSolved = 4111;
}
extern void logic2_raw_eqFunction_1348(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_173(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1347(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1346(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1344(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1343(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1341(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1340(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1338(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1326(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1321(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1320(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void logic2_raw_eqFunction_1317(DATA *data, threadData_t *threadData);


/*
equation index: 4147
type: SIMPLE_ASSIGN
chiller1Capacity_TR = chillerCapacity_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* chillerCapacity_TR PARAM */);
  threadData->lastEquationSolved = 4147;
}

/*
equation index: 4148
type: SIMPLE_ASSIGN
chiller1Capacity = 1000.0 * chiller1Capacity_TR * kWPerTR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */) = (1000.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* kWPerTR PARAM */)));
  threadData->lastEquationSolved = 4148;
}

/*
equation index: 4149
type: SIMPLE_ASSIGN
mCW_flow_nominal = 2.380952380952381e-4 * chiller1Capacity / dTCon_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */) = (2.380952380952381e-4) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* dTCon_nominal PARAM */),"dTCon_nominal",equationIndexes));
  threadData->lastEquationSolved = 4149;
}

/*
equation index: 4150
type: SIMPLE_ASSIGN
chillerStagingCtrl.mCW_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.mCW_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4150;
}

/*
equation index: 4151
type: SIMPLE_ASSIGN
chillerStagingCtrl.samplePeriod = chillerStageSamplePeriod
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* chillerStagingCtrl.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* chillerStageSamplePeriod PARAM */);
  threadData->lastEquationSolved = 4151;
}

/*
equation index: 4152
type: SIMPLE_ASSIGN
chillerStagingCtrl.minimumLoad_TR = chillerMinimumLoad_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* chillerMinimumLoad_TR PARAM */);
  threadData->lastEquationSolved = 4152;
}

/*
equation index: 4153
type: SIMPLE_ASSIGN
chillerStagingCtrl.stage2OffThreshold_TR = chiller1Capacity_TR - chillerStageDeadband_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* chillerStageDeadband_TR PARAM */);
  threadData->lastEquationSolved = 4153;
}

/*
equation index: 4154
type: SIMPLE_ASSIGN
chillerStagingCtrl.stage2OnThreshold_TR = chiller1Capacity_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4154;
}

/*
equation index: 4155
type: SIMPLE_ASSIGN
chiller2Capacity_TR = chillerCapacity_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chiller2Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* chillerCapacity_TR PARAM */);
  threadData->lastEquationSolved = 4155;
}

/*
equation index: 4156
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2Capacity_TR = chiller2Capacity_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4156};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* chillerStagingCtrl.chiller2Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chiller2Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4156;
}

/*
equation index: 4157
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller1Capacity_TR = chiller1Capacity_TR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* chillerStagingCtrl.chiller1Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4157;
}

/*
equation index: 4158
type: SIMPLE_ASSIGN
chillerStagingCtrl.kWPerTR = kWPerTR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* kWPerTR PARAM */);
  threadData->lastEquationSolved = 4158;
}

/*
equation index: 4159
type: SIMPLE_ASSIGN
chwstCtrl2.TChiSetStart = TChiSetMin
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[438]] /* chwstCtrl2.TChiSetStart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */);
  threadData->lastEquationSolved = 4159;
}

/*
equation index: 4160
type: SIMPLE_ASSIGN
chwstCtrl2.TChiSetMax = TChiSetMax
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[436]] /* chwstCtrl2.TChiSetMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* TChiSetMax PARAM */);
  threadData->lastEquationSolved = 4160;
}

/*
equation index: 4161
type: SIMPLE_ASSIGN
chwstCtrl2.TChiSetMin = TChiSetMin
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[437]] /* chwstCtrl2.TChiSetMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */);
  threadData->lastEquationSolved = 4161;
}

/*
equation index: 4162
type: SIMPLE_ASSIGN
chwstCtrl2.TCHWRTSet = TCHWRTSet
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* chwstCtrl2.TCHWRTSet PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* TCHWRTSet PARAM */);
  threadData->lastEquationSolved = 4162;
}

/*
equation index: 4163
type: SIMPLE_ASSIGN
chwstCtrl1.TChiSetStart = TChiSetMin
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* chwstCtrl1.TChiSetStart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */);
  threadData->lastEquationSolved = 4163;
}

/*
equation index: 4164
type: SIMPLE_ASSIGN
chwstCtrl1.TChiSetMax = TChiSetMax
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4164};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* chwstCtrl1.TChiSetMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* TChiSetMax PARAM */);
  threadData->lastEquationSolved = 4164;
}

/*
equation index: 4165
type: SIMPLE_ASSIGN
chwstCtrl1.TChiSetMin = TChiSetMin
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* chwstCtrl1.TChiSetMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */);
  threadData->lastEquationSolved = 4165;
}

/*
equation index: 4166
type: SIMPLE_ASSIGN
chwstCtrl1.TCHWRTSet = TCHWRTSet
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* chwstCtrl1.TCHWRTSet PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* TCHWRTSet PARAM */);
  threadData->lastEquationSolved = 4166;
}

/*
equation index: 4167
type: SIMPLE_ASSIGN
mCHW_flow_nominal = 4.761904761904762e-5 * chiller1Capacity
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */) = (4.761904761904762e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */));
  threadData->lastEquationSolved = 4167;
}

/*
equation index: 4168
type: SIMPLE_ASSIGN
val8_2.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4168;
}

/*
equation index: 4169
type: SIMPLE_ASSIGN
val8_2.kFixed = 0.0030932931235336655 * val8_2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* val8_2.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4169;
}

/*
equation index: 4175
type: SIMPLE_ASSIGN
val8_2.dp_nominal = 104510.0 + val8_2.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* val8_2.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* val8_2.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 4175;
}

/*
equation index: 4176
type: SIMPLE_ASSIGN
val8_2.dp_nominal_pos = abs(val8_2.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* val8_2.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2804]] /* val8_2.dp_nominal PARAM */));
  threadData->lastEquationSolved = 4176;
}

/*
equation index: 4177
type: SIMPLE_ASSIGN
val8_2.m_flow_nominal_pos = abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2810]] /* val8_2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4177;
}

/*
equation index: 4180
type: SIMPLE_ASSIGN
val8_2.eta_default = logic2.val8_2.Medium.dynamicViscosity(val8_2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4180};
  logic2_val8__2_Medium_ThermodynamicState tmp0;
  logic2_val8__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* val8_2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* val8_2.eta_default PARAM */) = omc_logic2_val8__2_Medium_dynamicViscosity(threadData, tmp0);
  threadData->lastEquationSolved = 4180;
}

/*
equation index: 4181
type: SIMPLE_ASSIGN
val8_2.m_flow_turbulent = val8_2.deltaM * abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2801]] /* val8_2.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4181;
}

/*
equation index: 4188
type: SIMPLE_ASSIGN
val8_2.m_flow_small = 1e-4 * abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4188;
}

/*
equation index: 4196
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[3] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junCHWSup2.m_flow_nominal[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4196;
}

/*
equation index: 4197
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup2.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4197;
}

/*
equation index: 4198
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1877]] /* junCHWSup2.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4198;
}

/*
equation index: 4200
type: SIMPLE_ASSIGN
junCHWSup2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup2.m_flow_nominal[1]) + abs(junCHWSup2.m_flow_nominal[2]) + abs(junCHWSup2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1875]] /* junCHWSup2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1877]] /* junCHWSup2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junCHWSup2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4200;
}

/*
equation index: 4201
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_nominal = junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1875]] /* junCHWSup2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4201;
}

/*
equation index: 4202
type: SIMPLE_ASSIGN
junCHWSup2.vol.tau = junCHWSup2.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* junCHWSup2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1924]] /* junCHWSup2.tau PARAM */);
  threadData->lastEquationSolved = 4202;
}

/*
equation index: 4203
type: SIMPLE_ASSIGN
junCHWSup2.vol.V_nominal = 0.0010044335697769957 * junCHWSup2.vol.m_flow_nominal * junCHWSup2.vol.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4203};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1927]] /* junCHWSup2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1951]] /* junCHWSup2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4203;
}

/*
equation index: 4206
type: SIMPLE_ASSIGN
junCHWSup2.vol.T_start = junCHWSup2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4206};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup2.T_start PARAM */);
  threadData->lastEquationSolved = 4206;
}

/*
equation index: 4207
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.T = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4207};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4207;
}

/*
equation index: 4208
type: SIMPLE_ASSIGN
junCHWSup2.vol.p_start = junCHWSup2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.p_start PARAM */);
  threadData->lastEquationSolved = 4208;
}

/*
equation index: 4209
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.p = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4209};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4209;
}

/*
equation index: 4213
type: SIMPLE_ASSIGN
junCHWSup2.vol.rho_start = logic2.junCHWSup2.vol.Medium.density(junCHWSup2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4213};
  logic2_junCHWSup2_vol_Medium_ThermodynamicState tmp1;
  logic2_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1950]] /* junCHWSup2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.rho_start PARAM */) = omc_logic2_junCHWSup2_vol_Medium_density(threadData, tmp1);
  threadData->lastEquationSolved = 4213;
}

/*
equation index: 4214
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.p_start = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4214;
}

/*
equation index: 4215
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.T_start = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4215;
}

/*
equation index: 4216
type: SIMPLE_ASSIGN
junCHWSup2.vol.X_start[1] = junCHWSup2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4216;
}

/*
equation index: 4217
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.X_start[1] = junCHWSup2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4217;
}

/*
equation index: 4218
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.hStart = logic2.junCHWSup2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, junCHWSup2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4218};
  real_array tmp2;
  real_array_create(&tmp2, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.vol.dynBal.hStart PARAM */) = omc_logic2_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */), tmp2);
  threadData->lastEquationSolved = 4218;
}

/*
equation index: 4223
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.rho_start = logic2.junCHWSup2.vol.dynBal.Medium.density(logic2.junCHWSup2.vol.dynBal.Medium.setState_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.dynBal.rho_start PARAM */) = omc_logic2_junCHWSup2_vol_dynBal_Medium_density(threadData, omc_logic2_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4223;
}

/*
equation index: 4226
type: SIMPLE_ASSIGN
junCHWSup2.vol.V = junCHWSup2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4226};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1927]] /* junCHWSup2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4226;
}

/*
equation index: 4227
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.fluidVolume = junCHWSup2.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.vol.V PARAM */);
  threadData->lastEquationSolved = 4227;
}

/*
equation index: 4240
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_small = 1e-4 * abs(junCHWSup2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1942]] /* junCHWSup2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4240;
}

/*
equation index: 4253
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal = junCHWSup2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1918]] /* junCHWSup2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junCHWSup2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4253;
}

/*
equation index: 4254
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal_pos = abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junCHWSup2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1918]] /* junCHWSup2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4254;
}

/*
equation index: 4257
type: SIMPLE_ASSIGN
junCHWSup2.res3.eta_default = logic2.junCHWSup2.res3.Medium.dynamicViscosity(junCHWSup2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4257};
  logic2_junCHWSup2_res3_Medium_ThermodynamicState tmp3;
  logic2_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp3, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junCHWSup2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* junCHWSup2.res3.eta_default PARAM */) = omc_logic2_junCHWSup2_res3_Medium_dynamicViscosity(threadData, tmp3);
  threadData->lastEquationSolved = 4257;
}

/*
equation index: 4266
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_small = 1e-4 * abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4266};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1920]] /* junCHWSup2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1918]] /* junCHWSup2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4266;
}

/*
equation index: 4273
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal = junCHWSup2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4273};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1904]] /* junCHWSup2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4273;
}

/*
equation index: 4274
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal_pos = abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4274};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1905]] /* junCHWSup2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1904]] /* junCHWSup2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4274;
}

/*
equation index: 4277
type: SIMPLE_ASSIGN
junCHWSup2.res2.eta_default = logic2.junCHWSup2.res2.Medium.dynamicViscosity(junCHWSup2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4277};
  logic2_junCHWSup2_res2_Medium_ThermodynamicState tmp4;
  logic2_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp4, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junCHWSup2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* junCHWSup2.res2.eta_default PARAM */) = omc_logic2_junCHWSup2_res2_Medium_dynamicViscosity(threadData, tmp4);
  threadData->lastEquationSolved = 4277;
}

/*
equation index: 4286
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_small = 1e-4 * abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4286};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1906]] /* junCHWSup2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1904]] /* junCHWSup2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4286;
}

/*
equation index: 4293
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal = junCHWSup2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* junCHWSup2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1877]] /* junCHWSup2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4293;
}

/*
equation index: 4294
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal_pos = abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1891]] /* junCHWSup2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* junCHWSup2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4294;
}

/*
equation index: 4297
type: SIMPLE_ASSIGN
junCHWSup2.res1.eta_default = logic2.junCHWSup2.res1.Medium.dynamicViscosity(junCHWSup2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4297};
  logic2_junCHWSup2_res1_Medium_ThermodynamicState tmp5;
  logic2_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp5, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junCHWSup2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.res1.eta_default PARAM */) = omc_logic2_junCHWSup2_res1_Medium_dynamicViscosity(threadData, tmp5);
  threadData->lastEquationSolved = 4297;
}

/*
equation index: 4306
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_small = 1e-4 * abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4306};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1892]] /* junCHWSup2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* junCHWSup2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4306;
}

/*
equation index: 4308
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_small = 1e-4 * junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junCHWSup2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1875]] /* junCHWSup2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4308;
}

/*
equation index: 4325
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[3] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWRet2.m_flow_nominal[3] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4325;
}

/*
equation index: 4326
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet2.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4326;
}

/*
equation index: 4327
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4327};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWRet2.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4327;
}

/*
equation index: 4329
type: SIMPLE_ASSIGN
junCHWRet2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet2.m_flow_nominal[1]) + abs(junCHWRet2.m_flow_nominal[2]) + abs(junCHWRet2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4329};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1709]] /* junCHWRet2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWRet2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWRet2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4329;
}

/*
equation index: 4330
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_nominal = junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1709]] /* junCHWRet2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4330;
}

/*
equation index: 4331
type: SIMPLE_ASSIGN
junCHWRet2.vol.tau = junCHWRet2.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWRet2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1758]] /* junCHWRet2.tau PARAM */);
  threadData->lastEquationSolved = 4331;
}

/*
equation index: 4332
type: SIMPLE_ASSIGN
junCHWRet2.vol.V_nominal = 0.0010044335697769957 * junCHWRet2.vol.m_flow_nominal * junCHWRet2.vol.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4332};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1761]] /* junCHWRet2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1785]] /* junCHWRet2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4332;
}

/*
equation index: 4335
type: SIMPLE_ASSIGN
junCHWRet2.vol.T_start = junCHWRet2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet2.T_start PARAM */);
  threadData->lastEquationSolved = 4335;
}

/*
equation index: 4336
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.T = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4336;
}

/*
equation index: 4337
type: SIMPLE_ASSIGN
junCHWRet2.vol.p_start = junCHWRet2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.p_start PARAM */);
  threadData->lastEquationSolved = 4337;
}

/*
equation index: 4338
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.p = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4338;
}

/*
equation index: 4342
type: SIMPLE_ASSIGN
junCHWRet2.vol.rho_start = logic2.junCHWRet2.vol.Medium.density(junCHWRet2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4342};
  logic2_junCHWRet2_vol_Medium_ThermodynamicState tmp6;
  logic2_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp6, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1784]] /* junCHWRet2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.rho_start PARAM */) = omc_logic2_junCHWRet2_vol_Medium_density(threadData, tmp6);
  threadData->lastEquationSolved = 4342;
}

/*
equation index: 4343
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.p_start = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4343;
}

/*
equation index: 4344
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.T_start = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4344;
}

/*
equation index: 4345
type: SIMPLE_ASSIGN
junCHWRet2.vol.X_start[1] = junCHWRet2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4345};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4345;
}

/*
equation index: 4346
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.X_start[1] = junCHWRet2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4346};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4346;
}

/*
equation index: 4347
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.hStart = logic2.junCHWRet2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, junCHWRet2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4347};
  real_array tmp7;
  real_array_create(&tmp7, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.vol.dynBal.hStart PARAM */) = omc_logic2_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */), tmp7);
  threadData->lastEquationSolved = 4347;
}

/*
equation index: 4352
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.rho_start = logic2.junCHWRet2.vol.dynBal.Medium.density(logic2.junCHWRet2.vol.dynBal.Medium.setState_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.dynBal.rho_start PARAM */) = omc_logic2_junCHWRet2_vol_dynBal_Medium_density(threadData, omc_logic2_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4352;
}

/*
equation index: 4355
type: SIMPLE_ASSIGN
junCHWRet2.vol.V = junCHWRet2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1761]] /* junCHWRet2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4355;
}

/*
equation index: 4356
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.fluidVolume = junCHWRet2.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.vol.V PARAM */);
  threadData->lastEquationSolved = 4356;
}

/*
equation index: 4369
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_small = 1e-4 * abs(junCHWRet2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1776]] /* junCHWRet2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4369;
}

/*
equation index: 4382
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal = junCHWRet2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWRet2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWRet2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4382;
}

/*
equation index: 4383
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal_pos = abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* junCHWRet2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWRet2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4383;
}

/*
equation index: 4386
type: SIMPLE_ASSIGN
junCHWRet2.res3.eta_default = logic2.junCHWRet2.res3.Medium.dynamicViscosity(junCHWRet2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4386};
  logic2_junCHWRet2_res3_Medium_ThermodynamicState tmp8;
  logic2_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp8, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* junCHWRet2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1750]] /* junCHWRet2.res3.eta_default PARAM */) = omc_logic2_junCHWRet2_res3_Medium_dynamicViscosity(threadData, tmp8);
  threadData->lastEquationSolved = 4386;
}

/*
equation index: 4395
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_small = 1e-4 * abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1754]] /* junCHWRet2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWRet2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4395;
}

/*
equation index: 4402
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal = junCHWRet2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4402};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1738]] /* junCHWRet2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4402;
}

/*
equation index: 4403
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal_pos = abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4403};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWRet2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1738]] /* junCHWRet2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4403;
}

/*
equation index: 4406
type: SIMPLE_ASSIGN
junCHWRet2.res2.eta_default = logic2.junCHWRet2.res2.Medium.dynamicViscosity(junCHWRet2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4406};
  logic2_junCHWRet2_res2_Medium_ThermodynamicState tmp9;
  logic2_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp9, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1742]] /* junCHWRet2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1736]] /* junCHWRet2.res2.eta_default PARAM */) = omc_logic2_junCHWRet2_res2_Medium_dynamicViscosity(threadData, tmp9);
  threadData->lastEquationSolved = 4406;
}

/*
equation index: 4415
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_small = 1e-4 * abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1740]] /* junCHWRet2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1738]] /* junCHWRet2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4415;
}

/*
equation index: 4422
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal = junCHWRet2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1724]] /* junCHWRet2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWRet2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4422;
}

/*
equation index: 4423
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal_pos = abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWRet2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1724]] /* junCHWRet2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4423;
}

/*
equation index: 4426
type: SIMPLE_ASSIGN
junCHWRet2.res1.eta_default = logic2.junCHWRet2.res1.Medium.dynamicViscosity(junCHWRet2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4426};
  logic2_junCHWRet2_res1_Medium_ThermodynamicState tmp10;
  logic2_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1728]] /* junCHWRet2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.res1.eta_default PARAM */) = omc_logic2_junCHWRet2_res1_Medium_dynamicViscosity(threadData, tmp10);
  threadData->lastEquationSolved = 4426;
}

/*
equation index: 4435
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_small = 1e-4 * abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1726]] /* junCHWRet2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1724]] /* junCHWRet2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4435;
}

/*
equation index: 4437
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_small = 1e-4 * junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1714]] /* junCHWRet2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1709]] /* junCHWRet2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4437;
}

/*
equation index: 4454
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[3] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4454};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1630]] /* junCHWRet.m_flow_nominal[3] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4454;
}

/*
equation index: 4455
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4455};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4455;
}

/*
equation index: 4456
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4456;
}

/*
equation index: 4458
type: SIMPLE_ASSIGN
junCHWRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet.m_flow_nominal[1]) + abs(junCHWRet.m_flow_nominal[2]) + abs(junCHWRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1626]] /* junCHWRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1630]] /* junCHWRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4458;
}

/*
equation index: 4459
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_nominal = junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1626]] /* junCHWRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4459;
}

/*
equation index: 4460
type: SIMPLE_ASSIGN
junCHWRet.vol.tau = junCHWRet.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1675]] /* junCHWRet.tau PARAM */);
  threadData->lastEquationSolved = 4460;
}

/*
equation index: 4461
type: SIMPLE_ASSIGN
junCHWRet.vol.V_nominal = 0.0010044335697769957 * junCHWRet.vol.m_flow_nominal * junCHWRet.vol.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4461};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1678]] /* junCHWRet.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1702]] /* junCHWRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4461;
}

/*
equation index: 4464
type: SIMPLE_ASSIGN
junCHWRet.vol.T_start = junCHWRet.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1620]] /* junCHWRet.T_start PARAM */);
  threadData->lastEquationSolved = 4464;
}

/*
equation index: 4465
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.T = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4465};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4465;
}

/*
equation index: 4466
type: SIMPLE_ASSIGN
junCHWRet.vol.p_start = junCHWRet.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.p_start PARAM */);
  threadData->lastEquationSolved = 4466;
}

/*
equation index: 4467
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.p = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4467};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4467;
}

/*
equation index: 4471
type: SIMPLE_ASSIGN
junCHWRet.vol.rho_start = logic2.junCHWRet.vol.Medium.density(junCHWRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4471};
  logic2_junCHWRet_vol_Medium_ThermodynamicState tmp11;
  logic2_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp11, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1701]] /* junCHWRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.rho_start PARAM */) = omc_logic2_junCHWRet_vol_Medium_density(threadData, tmp11);
  threadData->lastEquationSolved = 4471;
}

/*
equation index: 4472
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.p_start = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4472;
}

/*
equation index: 4473
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.T_start = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4473;
}

/*
equation index: 4474
type: SIMPLE_ASSIGN
junCHWRet.vol.X_start[1] = junCHWRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1621]] /* junCHWRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4474;
}

/*
equation index: 4475
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.X_start[1] = junCHWRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4475;
}

/*
equation index: 4476
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.hStart = logic2.junCHWRet.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, junCHWRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4476};
  real_array tmp12;
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.vol.dynBal.hStart PARAM */) = omc_logic2_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */), tmp12);
  threadData->lastEquationSolved = 4476;
}

/*
equation index: 4481
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.rho_start = logic2.junCHWRet.vol.dynBal.Medium.density(logic2.junCHWRet.vol.dynBal.Medium.setState_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.dynBal.rho_start PARAM */) = omc_logic2_junCHWRet_vol_dynBal_Medium_density(threadData, omc_logic2_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4481;
}

/*
equation index: 4484
type: SIMPLE_ASSIGN
junCHWRet.vol.V = junCHWRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4484};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1678]] /* junCHWRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4484;
}

/*
equation index: 4485
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.fluidVolume = junCHWRet.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.vol.V PARAM */);
  threadData->lastEquationSolved = 4485;
}

/*
equation index: 4498
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_small = 1e-4 * abs(junCHWRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4498};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1693]] /* junCHWRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4498;
}

/*
equation index: 4511
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal = junCHWRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1630]] /* junCHWRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4511;
}

/*
equation index: 4512
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal_pos = abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4512};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1670]] /* junCHWRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4512;
}

/*
equation index: 4515
type: SIMPLE_ASSIGN
junCHWRet.res3.eta_default = logic2.junCHWRet.res3.Medium.dynamicViscosity(junCHWRet.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4515};
  logic2_junCHWRet_res3_Medium_ThermodynamicState tmp13;
  logic2_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp13, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1673]] /* junCHWRet.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1667]] /* junCHWRet.res3.eta_default PARAM */) = omc_logic2_junCHWRet_res3_Medium_dynamicViscosity(threadData, tmp13);
  threadData->lastEquationSolved = 4515;
}

/*
equation index: 4524
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_small = 1e-4 * abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1671]] /* junCHWRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4524;
}

/*
equation index: 4531
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal = junCHWRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4531};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1655]] /* junCHWRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4531;
}

/*
equation index: 4532
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal_pos = abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1655]] /* junCHWRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4532;
}

/*
equation index: 4535
type: SIMPLE_ASSIGN
junCHWRet.res2.eta_default = logic2.junCHWRet.res2.Medium.dynamicViscosity(junCHWRet.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4535};
  logic2_junCHWRet_res2_Medium_ThermodynamicState tmp14;
  logic2_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1660]] /* junCHWRet.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1659]] /* junCHWRet.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1653]] /* junCHWRet.res2.eta_default PARAM */) = omc_logic2_junCHWRet_res2_Medium_dynamicViscosity(threadData, tmp14);
  threadData->lastEquationSolved = 4535;
}

/*
equation index: 4544
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_small = 1e-4 * abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4544};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1657]] /* junCHWRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1655]] /* junCHWRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4544;
}

/*
equation index: 4551
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal = junCHWRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1641]] /* junCHWRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1628]] /* junCHWRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4551;
}

/*
equation index: 4552
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal_pos = abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1641]] /* junCHWRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4552;
}

/*
equation index: 4555
type: SIMPLE_ASSIGN
junCHWRet.res1.eta_default = logic2.junCHWRet.res1.Medium.dynamicViscosity(junCHWRet.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4555};
  logic2_junCHWRet_res1_Medium_ThermodynamicState tmp15;
  logic2_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp15, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1646]] /* junCHWRet.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1645]] /* junCHWRet.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1639]] /* junCHWRet.res1.eta_default PARAM */) = omc_logic2_junCHWRet_res1_Medium_dynamicViscosity(threadData, tmp15);
  threadData->lastEquationSolved = 4555;
}

/*
equation index: 4564
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_small = 1e-4 * abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1643]] /* junCHWRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1641]] /* junCHWRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4564;
}

/*
equation index: 4566
type: SIMPLE_ASSIGN
junCHWRet.m_flow_small = 1e-4 * junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1631]] /* junCHWRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1626]] /* junCHWRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4566;
}

/*
equation index: 4583
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[3] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4583};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* junCHWSup.m_flow_nominal[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4583;
}

/*
equation index: 4584
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4584};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4584;
}

/*
equation index: 4585
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4585};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4585;
}

/*
equation index: 4587
type: SIMPLE_ASSIGN
junCHWSup.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup.m_flow_nominal[1]) + abs(junCHWSup.m_flow_nominal[2]) + abs(junCHWSup.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* junCHWSup.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* junCHWSup.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4587;
}

/*
equation index: 4588
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_nominal = junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1859]] /* junCHWSup.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* junCHWSup.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4588;
}

/*
equation index: 4589
type: SIMPLE_ASSIGN
junCHWSup.vol.tau = junCHWSup.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4589};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1868]] /* junCHWSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1841]] /* junCHWSup.tau PARAM */);
  threadData->lastEquationSolved = 4589;
}

/*
equation index: 4590
type: SIMPLE_ASSIGN
junCHWSup.vol.V_nominal = 0.0010044335697769957 * junCHWSup.vol.m_flow_nominal * junCHWSup.vol.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1844]] /* junCHWSup.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1859]] /* junCHWSup.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1868]] /* junCHWSup.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4590;
}

/*
equation index: 4593
type: SIMPLE_ASSIGN
junCHWSup.vol.T_start = junCHWSup.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4593};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1842]] /* junCHWSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWSup.T_start PARAM */);
  threadData->lastEquationSolved = 4593;
}

/*
equation index: 4594
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.T = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junCHWSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1842]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4594;
}

/*
equation index: 4595
type: SIMPLE_ASSIGN
junCHWSup.vol.p_start = junCHWSup.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1861]] /* junCHWSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1798]] /* junCHWSup.p_start PARAM */);
  threadData->lastEquationSolved = 4595;
}

/*
equation index: 4596
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.p = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1867]] /* junCHWSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1861]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4596;
}

/*
equation index: 4600
type: SIMPLE_ASSIGN
junCHWSup.vol.rho_start = logic2.junCHWSup.vol.Medium.density(junCHWSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4600};
  logic2_junCHWSup_vol_Medium_ThermodynamicState tmp16;
  logic2_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp16, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1867]] /* junCHWSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junCHWSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junCHWSup.vol.rho_start PARAM */) = omc_logic2_junCHWSup_vol_Medium_density(threadData, tmp16);
  threadData->lastEquationSolved = 4600;
}

/*
equation index: 4601
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.p_start = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1861]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4601;
}

/*
equation index: 4602
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.T_start = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1842]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4602;
}

/*
equation index: 4603
type: SIMPLE_ASSIGN
junCHWSup.vol.X_start[1] = junCHWSup.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4603;
}

/*
equation index: 4604
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.X_start[1] = junCHWSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4604};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4604;
}

/*
equation index: 4605
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.hStart = logic2.junCHWSup.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, junCHWSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4605};
  real_array tmp17;
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1851]] /* junCHWSup.vol.dynBal.hStart PARAM */) = omc_logic2_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.vol.dynBal.T_start PARAM */), tmp17);
  threadData->lastEquationSolved = 4605;
}

/*
equation index: 4610
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.rho_start = logic2.junCHWSup.vol.dynBal.Medium.density(logic2.junCHWSup.vol.dynBal.Medium.setState_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup.vol.dynBal.rho_start PARAM */) = omc_logic2_junCHWSup_vol_dynBal_Medium_density(threadData, omc_logic2_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4610;
}

/*
equation index: 4613
type: SIMPLE_ASSIGN
junCHWSup.vol.V = junCHWSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4613};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1843]] /* junCHWSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1844]] /* junCHWSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4613;
}

/*
equation index: 4614
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.fluidVolume = junCHWSup.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4614};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1843]] /* junCHWSup.vol.V PARAM */);
  threadData->lastEquationSolved = 4614;
}

/*
equation index: 4627
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_small = 1e-4 * abs(junCHWSup.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4627};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1860]] /* junCHWSup.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1859]] /* junCHWSup.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4627;
}

/*
equation index: 4640
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal = junCHWSup.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* junCHWSup.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4640;
}

/*
equation index: 4641
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal_pos = abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1836]] /* junCHWSup.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4641;
}

/*
equation index: 4644
type: SIMPLE_ASSIGN
junCHWSup.res3.eta_default = logic2.junCHWSup.res3.Medium.dynamicViscosity(junCHWSup.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4644};
  logic2_junCHWSup_res3_Medium_ThermodynamicState tmp18;
  logic2_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp18, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1839]] /* junCHWSup.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1833]] /* junCHWSup.res3.eta_default PARAM */) = omc_logic2_junCHWSup_res3_Medium_dynamicViscosity(threadData, tmp18);
  threadData->lastEquationSolved = 4644;
}

/*
equation index: 4653
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_small = 1e-4 * abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1837]] /* junCHWSup.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4653;
}

/*
equation index: 4660
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal = junCHWSup.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4660};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1821]] /* junCHWSup.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4660;
}

/*
equation index: 4661
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal_pos = abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4661};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1821]] /* junCHWSup.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4661;
}

/*
equation index: 4664
type: SIMPLE_ASSIGN
junCHWSup.res2.eta_default = logic2.junCHWSup.res2.Medium.dynamicViscosity(junCHWSup.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4664};
  logic2_junCHWSup_res2_Medium_ThermodynamicState tmp19;
  logic2_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp19, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1826]] /* junCHWSup.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1825]] /* junCHWSup.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1819]] /* junCHWSup.res2.eta_default PARAM */) = omc_logic2_junCHWSup_res2_Medium_dynamicViscosity(threadData, tmp19);
  threadData->lastEquationSolved = 4664;
}

/*
equation index: 4673
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_small = 1e-4 * abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4673};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1823]] /* junCHWSup.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1821]] /* junCHWSup.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4673;
}

/*
equation index: 4680
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal = junCHWSup.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4680};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1807]] /* junCHWSup.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWSup.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4680;
}

/*
equation index: 4681
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal_pos = abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4681};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1807]] /* junCHWSup.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4681;
}

/*
equation index: 4684
type: SIMPLE_ASSIGN
junCHWSup.res1.eta_default = logic2.junCHWSup.res1.Medium.dynamicViscosity(junCHWSup.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4684};
  logic2_junCHWSup_res1_Medium_ThermodynamicState tmp20;
  logic2_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp20, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1812]] /* junCHWSup.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1811]] /* junCHWSup.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1805]] /* junCHWSup.res1.eta_default PARAM */) = omc_logic2_junCHWSup_res1_Medium_dynamicViscosity(threadData, tmp20);
  threadData->lastEquationSolved = 4684;
}

/*
equation index: 4693
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_small = 1e-4 * abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1809]] /* junCHWSup.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1807]] /* junCHWSup.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4693;
}

/*
equation index: 4695
type: SIMPLE_ASSIGN
junCHWSup.m_flow_small = 1e-4 * junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4695};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* junCHWSup.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1792]] /* junCHWSup.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4695;
}

/*
equation index: 4706
type: SIMPLE_ASSIGN
chi2.TConEnt_nominal_degC = -273.15 + chi2.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4706};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* chi2.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 4706;
}

/*
equation index: 4707
type: SIMPLE_ASSIGN
chiller2Capacity = 1000.0 * chiller2Capacity_TR * kWPerTR
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4707};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity PARAM */) = (1000.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chiller2Capacity_TR PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2151]] /* kWPerTR PARAM */)));
  threadData->lastEquationSolved = 4707;
}

/*
equation index: 4708
type: SIMPLE_ASSIGN
chi2.per.QEva_flow_nominal = -chiller2Capacity
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.per.QEva_flow_nominal PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity PARAM */));
  threadData->lastEquationSolved = 4708;
}

/*
equation index: 4709
type: SIMPLE_ASSIGN
chi2.QEva_flow_nominal = chi2.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* chi2.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4709;
}

/*
equation index: 4710
type: SIMPLE_ASSIGN
chi2.Q_flow_small = 1e-9 * chi2.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[263]] /* chi2.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* chi2.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4710;
}

/*
equation index: 4711
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal = chi2.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* chi2.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* chi2.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 4711;
}

/*
equation index: 4712
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal_degC = -273.15 + chi2.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4712};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* chi2.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* chi2.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 4712;
}

/*
equation index: 4713
type: SIMPLE_ASSIGN
chi2.mCon_flow_nominal = chi2.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[282]] /* chi2.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* chi2.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4713;
}

/*
equation index: 4714
type: SIMPLE_ASSIGN
chi2.mEva_flow_nominal = chi2.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4714};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* chi2.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* chi2.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4714;
}

/*
equation index: 4715
type: SIMPLE_ASSIGN
chi2.etaMotor = chi2.per.etaMotor
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4715};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* chi2.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 4715;
}

/*
equation index: 4716
type: SIMPLE_ASSIGN
chi2.PLRMin = chi2.per.PLRMin
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* chi2.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* chi2.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 4716;
}

/*
equation index: 4717
type: SIMPLE_ASSIGN
chi2.PLRMinUnl = chi2.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* chi2.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 4717;
}

/*
equation index: 4718
type: SIMPLE_ASSIGN
chi2.PLRMax = chi2.per.PLRMax
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* chi2.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* chi2.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 4718;
}

/*
equation index: 4719
type: SIMPLE_ASSIGN
chi2.COP_nominal = chi2.per.COP_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4719};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* chi2.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* chi2.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 4719;
}

/*
equation index: 4722
type: SIMPLE_ASSIGN
chi2.rho2_nominal = logic2.chi2.Medium2.density(chi2.sta2_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4722};
  logic2_chi2_Medium2_ThermodynamicState tmp21;
  logic2_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp21, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* chi2.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* chi2.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* chi2.rho2_nominal PARAM */) = omc_logic2_chi2_Medium2_density(threadData, tmp21);
  threadData->lastEquationSolved = 4722;
}

/*
equation index: 4725
type: SIMPLE_ASSIGN
chi2.rho1_nominal = logic2.chi2.Medium1.density(chi2.sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4725};
  logic2_chi2_Medium1_ThermodynamicState tmp22;
  logic2_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp22, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* chi2.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.rho1_nominal PARAM */) = omc_logic2_chi2_Medium1_density(threadData, tmp22);
  threadData->lastEquationSolved = 4725;
}

/*
equation index: 4731
type: SIMPLE_ASSIGN
chi2.m2_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4731;
}

/*
equation index: 4732
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_nominal = chi2.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* chi2.preDro2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4732;
}

/*
equation index: 4733
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_nominal_pos = abs(chi2.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* chi2.preDro2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* chi2.preDro2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4733;
}

/*
equation index: 4736
type: SIMPLE_ASSIGN
chi2.preDro2.eta_default = logic2.chi2.preDro2.Medium.dynamicViscosity(chi2.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4736};
  logic2_chi2_preDro2_Medium_ThermodynamicState tmp23;
  logic2_chi2_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp23, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* chi2.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* chi2.preDro2.eta_default PARAM */) = omc_logic2_chi2_preDro2_Medium_dynamicViscosity(threadData, tmp23);
  threadData->lastEquationSolved = 4736;
}

/*
equation index: 4745
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_small = 1e-4 * abs(chi2.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* chi2.preDro2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* chi2.preDro2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4745;
}

/*
equation index: 4752
type: SIMPLE_ASSIGN
chi2.m1_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4752;
}

/*
equation index: 4753
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_nominal = chi2.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4753;
}

/*
equation index: 4754
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_nominal_pos = abs(chi2.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4754;
}

/*
equation index: 4757
type: SIMPLE_ASSIGN
chi2.preDro1.eta_default = logic2.chi2.preDro1.Medium.dynamicViscosity(chi2.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4757};
  logic2_chi2_preDro1_Medium_ThermodynamicState tmp24;
  logic2_chi2_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp24, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* chi2.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.preDro1.eta_default PARAM */) = omc_logic2_chi2_preDro1_Medium_dynamicViscosity(threadData, tmp24);
  threadData->lastEquationSolved = 4757;
}

/*
equation index: 4766
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_small = 1e-4 * abs(chi2.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4766};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4766;
}

/*
equation index: 4770
type: SIMPLE_ASSIGN
chi2.vol2.T_start = chi2.T2_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4770};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* chi2.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 4770;
}

/*
equation index: 4771
type: SIMPLE_ASSIGN
chi2.vol2.state_start.T = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4771};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* chi2.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 4771;
}

/*
equation index: 4772
type: SIMPLE_ASSIGN
chi2.vol2.p_start = chi2.p2_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4772};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* chi2.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 4772;
}

/*
equation index: 4773
type: SIMPLE_ASSIGN
chi2.vol2.state_start.p = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4773};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chi2.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 4773;
}

/*
equation index: 4777
type: SIMPLE_ASSIGN
chi2.vol2.rho_start = logic2.chi2.vol2.Medium.density(chi2.vol2.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4777};
  logic2_chi2_vol2_Medium_ThermodynamicState tmp25;
  logic2_chi2_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp25, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chi2.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* chi2.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* chi2.vol2.rho_start PARAM */) = omc_logic2_chi2_vol2_Medium_density(threadData, tmp25);
  threadData->lastEquationSolved = 4777;
}

/*
equation index: 4778
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.p_start = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4778};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* chi2.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 4778;
}

/*
equation index: 4779
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.T_start = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4779};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 4779;
}

/*
equation index: 4780
type: SIMPLE_ASSIGN
chi2.vol2.X_start[1] = chi2.X2_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4780};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* chi2.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* chi2.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 4780;
}

/*
equation index: 4781
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.X_start[1] = chi2.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* chi2.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* chi2.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4781;
}

/*
equation index: 4782
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.hStart = logic2.chi2.vol2.dynBal.Medium.specificEnthalpy_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, chi2.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4782};
  real_array tmp26;
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* chi2.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* chi2.vol2.dynBal.hStart PARAM */) = omc_logic2_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */), tmp26);
  threadData->lastEquationSolved = 4782;
}

/*
equation index: 4787
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.rho_start = logic2.chi2.vol2.dynBal.Medium.density(logic2.chi2.vol2.dynBal.Medium.setState_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* chi2.vol2.dynBal.rho_start PARAM */) = omc_logic2_chi2_vol2_dynBal_Medium_density(threadData, omc_logic2_chi2_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4787;
}

/*
equation index: 4790
type: SIMPLE_ASSIGN
chi2.vol2.V = 30.0 * chi2.m2_flow_nominal / chi2.rho2_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* chi2.rho2_nominal PARAM */),"chi2.rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 4790;
}

/*
equation index: 4791
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.fluidVolume = chi2.vol2.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4791};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* chi2.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.V PARAM */);
  threadData->lastEquationSolved = 4791;
}

/*
equation index: 4804
type: SIMPLE_ASSIGN
chi2.vol2.m_flow_nominal = chi2.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4804};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* chi2.vol2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4804;
}

/*
equation index: 4805
type: SIMPLE_ASSIGN
chi2.vol2.m_flow_small = 1e-4 * abs(chi2.vol2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4805};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* chi2.vol2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* chi2.vol2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4805;
}

/*
equation index: 4814
type: SIMPLE_ASSIGN
chi2.vol1.T_start = chi2.T1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* chi2.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 4814;
}

/*
equation index: 4815
type: SIMPLE_ASSIGN
chi2.vol1.state_start.T = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* chi2.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 4815;
}

/*
equation index: 4816
type: SIMPLE_ASSIGN
chi2.vol1.p_start = chi2.p1_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* chi2.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 4816;
}

/*
equation index: 4817
type: SIMPLE_ASSIGN
chi2.vol1.state_start.p = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* chi2.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 4817;
}

/*
equation index: 4821
type: SIMPLE_ASSIGN
chi2.vol1.rho_start = logic2.chi2.vol1.Medium.density(chi2.vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4821};
  logic2_chi2_vol1_Medium_ThermodynamicState tmp27;
  logic2_chi2_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp27, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* chi2.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* chi2.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* chi2.vol1.rho_start PARAM */) = omc_logic2_chi2_vol1_Medium_density(threadData, tmp27);
  threadData->lastEquationSolved = 4821;
}

/*
equation index: 4822
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.p_start = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4822};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* chi2.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 4822;
}

/*
equation index: 4823
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.T_start = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 4823;
}

/*
equation index: 4824
type: SIMPLE_ASSIGN
chi2.vol1.X_start[1] = chi2.X1_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4824};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* chi2.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* chi2.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 4824;
}

/*
equation index: 4825
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.X_start[1] = chi2.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4825};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* chi2.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* chi2.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4825;
}

/*
equation index: 4826
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.hStart = logic2.chi2.vol1.dynBal.Medium.specificEnthalpy_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, chi2.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4826};
  real_array tmp28;
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* chi2.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* chi2.vol1.dynBal.hStart PARAM */) = omc_logic2_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */), tmp28);
  threadData->lastEquationSolved = 4826;
}

/*
equation index: 4831
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.rho_start = logic2.chi2.vol1.dynBal.Medium.density(logic2.chi2.vol1.dynBal.Medium.setState_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* chi2.vol1.dynBal.rho_start PARAM */) = omc_logic2_chi2_vol1_dynBal_Medium_density(threadData, omc_logic2_chi2_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4831;
}

/*
equation index: 4834
type: SIMPLE_ASSIGN
chi2.vol1.V = 30.0 * chi2.m1_flow_nominal / chi2.rho1_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4834};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.rho1_nominal PARAM */),"chi2.rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 4834;
}

/*
equation index: 4835
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.fluidVolume = chi2.vol1.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4835};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* chi2.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.V PARAM */);
  threadData->lastEquationSolved = 4835;
}

/*
equation index: 4848
type: SIMPLE_ASSIGN
chi2.vol1.m_flow_nominal = chi2.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4848};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* chi2.vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4848;
}

/*
equation index: 4849
type: SIMPLE_ASSIGN
chi2.vol1.m_flow_small = 1e-4 * abs(chi2.vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4849};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* chi2.vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* chi2.vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4849;
}

/*
equation index: 4873
type: SIMPLE_ASSIGN
chi2.m2_flow_small = 1e-4 * abs(chi2.m2_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4873};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[281]] /* chi2.m2_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4873;
}

/*
equation index: 4874
type: SIMPLE_ASSIGN
chi2.m1_flow_small = 1e-4 * abs(chi2.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4874};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[279]] /* chi2.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4874;
}

/*
equation index: 4877
type: SIMPLE_ASSIGN
TCWEntTow2.ratTau = TCWEntTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4877};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* TCWEntTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 4877;
}

/*
equation index: 4878
type: SIMPLE_ASSIGN
TCWEntTow2.tauHeaTraInv = if TCWEntTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWEntTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4878};
  modelica_boolean tmp29;
  tmp29 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* TCWEntTow2.tauHeaTraInv PARAM */) = (tmp29?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTra PARAM */),"TCWEntTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 4878;
}

/*
equation index: 4884
type: SIMPLE_ASSIGN
TCWEntTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* TCWEntTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4884;
}

/*
equation index: 4885
type: SIMPLE_ASSIGN
TCWEntTow2.m_flow_small = 1e-4 * TCWEntTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* TCWEntTow2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* TCWEntTow2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4885;
}

/*
equation index: 4887
type: SIMPLE_ASSIGN
TWCLeaTow2.ratTau = TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4887};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* TWCLeaTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* TWCLeaTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 4887;
}

/*
equation index: 4888
type: SIMPLE_ASSIGN
TWCLeaTow2.tauHeaTraInv = if TWCLeaTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4888};
  modelica_boolean tmp30;
  tmp30 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* TWCLeaTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* TWCLeaTow2.tauHeaTraInv PARAM */) = (tmp30?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* TWCLeaTow2.tauHeaTra PARAM */),"TWCLeaTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 4888;
}

/*
equation index: 4894
type: SIMPLE_ASSIGN
TWCLeaTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4894};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* TWCLeaTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4894;
}

/*
equation index: 4895
type: SIMPLE_ASSIGN
TWCLeaTow2.m_flow_small = 1e-4 * TWCLeaTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4895};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* TWCLeaTow2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* TWCLeaTow2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4895;
}

/*
equation index: 4897
type: SIMPLE_ASSIGN
val7.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4897};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4897;
}

/*
equation index: 4898
type: SIMPLE_ASSIGN
val7.kFixed = 0.003341138439631633 * val7.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4898};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* val7.kFixed PARAM */) = (0.003341138439631633) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4898;
}

/*
equation index: 4904
type: SIMPLE_ASSIGN
val7.dp_nominal = 89580.0 + val7.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4904};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2758]] /* val7.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* val7.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 4904;
}

/*
equation index: 4905
type: SIMPLE_ASSIGN
val7.dp_nominal_pos = abs(val7.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4905};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2759]] /* val7.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2758]] /* val7.dp_nominal PARAM */));
  threadData->lastEquationSolved = 4905;
}

/*
equation index: 4906
type: SIMPLE_ASSIGN
val7.m_flow_nominal_pos = abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4906};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2764]] /* val7.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4906;
}

/*
equation index: 4909
type: SIMPLE_ASSIGN
val7.eta_default = logic2.val7.Medium.dynamicViscosity(val7.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4909};
  logic2_val7_Medium_ThermodynamicState tmp31;
  logic2_val7_Medium_ThermodynamicState_wrap_vars(threadData,tmp31, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2770]] /* val7.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2769]] /* val7.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2760]] /* val7.eta_default PARAM */) = omc_logic2_val7_Medium_dynamicViscosity(threadData, tmp31);
  threadData->lastEquationSolved = 4909;
}

/*
equation index: 4910
type: SIMPLE_ASSIGN
val7.m_flow_turbulent = val7.deltaM * abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2755]] /* val7.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4910;
}

/*
equation index: 4917
type: SIMPLE_ASSIGN
val7.m_flow_small = 1e-4 * abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4917};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4917;
}

/*
equation index: 4919
type: SIMPLE_ASSIGN
expVesChi2.state_start.p = expVesChi2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4919};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1342]] /* expVesChi2.p_start PARAM */);
  threadData->lastEquationSolved = 4919;
}

/*
equation index: 4920
type: SIMPLE_ASSIGN
expVesChi2.state_start.T = expVesChi2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* expVesChi2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1337]] /* expVesChi2.T_start PARAM */);
  threadData->lastEquationSolved = 4920;
}

/*
equation index: 4921
type: SIMPLE_ASSIGN
expVesChi2.rho_start = logic2.expVesChi2.Medium.density(expVesChi2.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4921};
  logic2_expVesChi2_Medium_ThermodynamicState tmp32;
  logic2_expVesChi2_Medium_ThermodynamicState_wrap_vars(threadData,tmp32, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1344]] /* expVesChi2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1343]] /* expVesChi2.rho_start PARAM */) = omc_logic2_expVesChi2_Medium_density(threadData, tmp32);
  threadData->lastEquationSolved = 4921;
}

/*
equation index: 4967
type: SIMPLE_ASSIGN
pumCW2.eff.per.speeds_rpm[1] = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4967};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 4967;
}

/*
equation index: 4968
type: SIMPLE_ASSIGN
pumCW2.eff.per.constantSpeed_rpm = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4968};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2579]] /* pumCW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 4968;
}

/*
equation index: 4972
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4972};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[790]] /* pumCW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 4972;
}

/*
equation index: 4973
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.P[1] = pumCW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4973};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* pumCW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumCW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 4973;
}

/*
equation index: 4974
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.V_flow[1] = pumCW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4974};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* pumCW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumCW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 4974;
}

/*
equation index: 4975
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.eta[1] = pumCW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4975};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumCW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 4975;
}

/*
equation index: 4976
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.V_flow[1] = pumCW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4976};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumCW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 4976;
}

/*
equation index: 4977
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.eta[1] = pumCW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4977};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2616]] /* pumCW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 4977;
}

/*
equation index: 4978
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4978};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2580]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2615]] /* pumCW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 4978;
}

/*
equation index: 4992
type: SIMPLE_ASSIGN
pumCW2.heaDis.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4992};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[796]] /* pumCW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 4992;
}

/*
equation index: 4998
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4998};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2632]] /* pumCW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2609]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 4998;
}

/*
equation index: 4999
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_start = pumCW2.m_flow_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_4999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4999};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2633]] /* pumCW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2610]] /* pumCW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 4999;
}

/*
equation index: 5002
type: SIMPLE_ASSIGN
pumCW2.vol.tau = pumCW2.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5002};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* pumCW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* pumCW2.tau PARAM */);
  threadData->lastEquationSolved = 5002;
}

/*
equation index: 5003
type: SIMPLE_ASSIGN
pumCW2.vol.V_nominal = 12.5601875 * pumCW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5003};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* pumCW2.vol.V_nominal PARAM */) = (12.5601875) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* pumCW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 5003;
}

/*
equation index: 5006
type: SIMPLE_ASSIGN
pumCW2.vol.T_start = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5006};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* pumCW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 5006;
}

/*
equation index: 5007
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.T = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5007};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2666]] /* pumCW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5007;
}

/*
equation index: 5008
type: SIMPLE_ASSIGN
pumCW2.vol.p_start = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5008};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2661]] /* pumCW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2612]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 5008;
}

/*
equation index: 5009
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.p = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2667]] /* pumCW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2661]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5009;
}

/*
equation index: 5013
type: SIMPLE_ASSIGN
pumCW2.vol.rho_start = logic2.pumCW2.vol.Medium.density(pumCW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5013};
  logic2_pumCW2_vol_Medium_ThermodynamicState tmp33;
  logic2_pumCW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2667]] /* pumCW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2666]] /* pumCW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.rho_start PARAM */) = omc_logic2_pumCW2_vol_Medium_density(threadData, tmp33);
  threadData->lastEquationSolved = 5013;
}

/*
equation index: 5014
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.p_start = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumCW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2661]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5014;
}

/*
equation index: 5015
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.T_start = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* pumCW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5015;
}

/*
equation index: 5016
type: SIMPLE_ASSIGN
pumCW2.vol.X_start[1] = pumCW2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5016};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* pumCW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* pumCW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5016;
}

/*
equation index: 5017
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.X_start[1] = pumCW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5017};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumCW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* pumCW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5017;
}

/*
equation index: 5018
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.hStart = logic2.pumCW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, pumCW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5018};
  real_array tmp34;
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumCW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* pumCW2.vol.dynBal.hStart PARAM */) = omc_logic2_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* pumCW2.vol.dynBal.T_start PARAM */), tmp34);
  threadData->lastEquationSolved = 5018;
}

/*
equation index: 5023
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.rho_start = logic2.pumCW2.vol.dynBal.Medium.density(logic2.pumCW2.vol.dynBal.Medium.setState_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumCW2.vol.dynBal.rho_start PARAM */) = omc_logic2_pumCW2_vol_dynBal_Medium_density(threadData, omc_logic2_pumCW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* pumCW2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5023;
}

/*
equation index: 5026
type: SIMPLE_ASSIGN
pumCW2.vol.V = pumCW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5026};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* pumCW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* pumCW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5026;
}

/*
equation index: 5027
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.fluidVolume = pumCW2.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5027};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumCW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* pumCW2.vol.V PARAM */);
  threadData->lastEquationSolved = 5027;
}

/*
equation index: 5040
type: SIMPLE_ASSIGN
pumCW2.vol.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5040};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2660]] /* pumCW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2609]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5040;
}

/*
equation index: 5049
type: SIMPLE_ASSIGN
pumCW2.sta_start.p = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5049};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* pumCW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2612]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 5049;
}

/*
equation index: 5050
type: SIMPLE_ASSIGN
pumCW2.sta_start.T = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* pumCW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2544]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 5050;
}

/*
equation index: 5051
type: SIMPLE_ASSIGN
pumCW2.h_outflow_start = logic2.pumCW2.Medium.specificEnthalpy(pumCW2.sta_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5051};
  logic2_pumCW2_Medium_ThermodynamicState tmp35;
  logic2_pumCW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp35, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2639]] /* pumCW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* pumCW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2605]] /* pumCW2.h_outflow_start PARAM */) = omc_logic2_pumCW2_Medium_specificEnthalpy(threadData, tmp35);
  threadData->lastEquationSolved = 5051;
}

/*
equation index: 5063
type: SIMPLE_ASSIGN
pumCW2.stageInputs[1] = pumCW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* pumCW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2611]] /* pumCW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5063;
}

/*
equation index: 5064
type: SIMPLE_ASSIGN
pumCW2.constInput = pumCW2.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5064};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2550]] /* pumCW2.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2551]] /* pumCW2.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 5064;
}

/*
equation index: 5067
type: SIMPLE_ASSIGN
pumCW2.per.speeds_rpm[1] = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5067};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5067;
}

/*
equation index: 5068
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed_rpm = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5068};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2614]] /* pumCW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5068;
}

/*
equation index: 5069
type: SIMPLE_ASSIGN
pumCW2.per.speeds[1] = pumCW2.per.speeds_rpm[1] / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5069};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2627]] /* pumCW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5069;
}

/*
equation index: 5070
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed = pumCW2.per.constantSpeed_rpm / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5070};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2613]] /* pumCW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2614]] /* pumCW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5070;
}

/*
equation index: 5086
type: SIMPLE_ASSIGN
cooTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2155]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5086;
}

/*
equation index: 5087
type: SIMPLE_ASSIGN
cooTow2.mRef_flow = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5087};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1153]] /* cooTow2.mRef_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5087;
}

/*
equation index: 5092
type: SIMPLE_ASSIGN
cooTow2.rho_default = logic2.cooTow2.Medium.density(cooTow2.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5092};
  logic2_cooTow2_Medium_ThermodynamicState tmp36;
  logic2_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp36, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* cooTow2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* cooTow2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* cooTow2.rho_default PARAM */) = omc_logic2_cooTow2_Medium_density(threadData, tmp36);
  threadData->lastEquationSolved = 5092;
}

/*
equation index: 5095
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_nominal = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5095};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* cooTow2.preDro.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5095;
}

/*
equation index: 5096
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_nominal_pos = abs(cooTow2.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5096};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* cooTow2.preDro.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5096;
}

/*
equation index: 5097
type: SIMPLE_ASSIGN
cooTow2.preDro.k = 0.0030932931235336655 * cooTow2.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5097};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.preDro.k PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 5097;
}

/*
equation index: 5102
type: SIMPLE_ASSIGN
cooTow2.preDro.eta_default = logic2.cooTow2.preDro.Medium.dynamicViscosity(cooTow2.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5102};
  logic2_cooTow2_preDro_Medium_ThermodynamicState tmp37;
  logic2_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp37, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* cooTow2.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* cooTow2.preDro.eta_default PARAM */) = omc_logic2_cooTow2_preDro_Medium_dynamicViscosity(threadData, tmp37);
  threadData->lastEquationSolved = 5102;
}

/*
equation index: 5103
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_turbulent = 0.1 * cooTow2.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* cooTow2.preDro.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 5103;
}

/*
equation index: 5111
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_small = 1e-4 * abs(cooTow2.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* cooTow2.preDro.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* cooTow2.preDro.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5111;
}

/*
equation index: 5115
type: SIMPLE_ASSIGN
cooTow2.vol.T_start = cooTow2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* cooTow2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1129]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 5115;
}

/*
equation index: 5116
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.T = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* cooTow2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5116;
}

/*
equation index: 5117
type: SIMPLE_ASSIGN
cooTow2.vol.p_start = cooTow2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* cooTow2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 5117;
}

/*
equation index: 5118
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.p = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* cooTow2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5118;
}

/*
equation index: 5122
type: SIMPLE_ASSIGN
cooTow2.vol.rho_start = logic2.cooTow2.vol.Medium.density(cooTow2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5122};
  logic2_cooTow2_vol_Medium_ThermodynamicState tmp38;
  logic2_cooTow2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp38, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1203]] /* cooTow2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* cooTow2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* cooTow2.vol.rho_start PARAM */) = omc_logic2_cooTow2_vol_Medium_density(threadData, tmp38);
  threadData->lastEquationSolved = 5122;
}

/*
equation index: 5123
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.p_start = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5123;
}

/*
equation index: 5124
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.T_start = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5124;
}

/*
equation index: 5125
type: SIMPLE_ASSIGN
cooTow2.vol.X_start[1] = cooTow2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1130]] /* cooTow2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5125;
}

/*
equation index: 5126
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.X_start[1] = cooTow2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* cooTow2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5126;
}

/*
equation index: 5127
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.hStart = logic2.cooTow2.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, cooTow2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5127};
  real_array tmp39;
  real_array_create(&tmp39, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* cooTow2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* cooTow2.vol.dynBal.hStart PARAM */) = omc_logic2_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.vol.dynBal.T_start PARAM */), tmp39);
  threadData->lastEquationSolved = 5127;
}

/*
equation index: 5132
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.rho_start = logic2.cooTow2.vol.dynBal.Medium.density(logic2.cooTow2.vol.dynBal.Medium.setState_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* cooTow2.vol.dynBal.rho_start PARAM */) = omc_logic2_cooTow2_vol_dynBal_Medium_density(threadData, omc_logic2_cooTow2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5132;
}

/*
equation index: 5135
type: SIMPLE_ASSIGN
cooTow2.vol.V = cooTow2.m_flow_nominal * cooTow2.tau / cooTow2.rho_default
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* cooTow2.vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* cooTow2.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* cooTow2.rho_default PARAM */),"cooTow2.rho_default",equationIndexes));
  threadData->lastEquationSolved = 5135;
}

/*
equation index: 5136
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.fluidVolume = cooTow2.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* cooTow2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* cooTow2.vol.V PARAM */);
  threadData->lastEquationSolved = 5136;
}

/*
equation index: 5149
type: SIMPLE_ASSIGN
cooTow2.vol.m_flow_nominal = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* cooTow2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5149;
}

/*
equation index: 5150
type: SIMPLE_ASSIGN
cooTow2.vol.m_flow_small = 1e-4 * abs(cooTow2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5150};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* cooTow2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1195]] /* cooTow2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5150;
}

/*
equation index: 5169
type: SIMPLE_ASSIGN
cooTow2.m_flow_small = 1e-4 * abs(cooTow2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1155]] /* cooTow2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1154]] /* cooTow2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5169;
}

/*
equation index: 5171
type: SIMPLE_ASSIGN
TCHWChi2Out.ratTau = TCHWChi2Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* TCHWChi2Out.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 5171;
}

/*
equation index: 5172
type: SIMPLE_ASSIGN
TCHWChi2Out.tauHeaTraInv = if TCHWChi2Out.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi2Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5172};
  modelica_boolean tmp40;
  tmp40 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TCHWChi2Out.tauHeaTraInv PARAM */) = (tmp40?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */),"TCHWChi2Out.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 5172;
}

/*
equation index: 5178
type: SIMPLE_ASSIGN
TCHWChi2Out.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TCHWChi2Out.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5178;
}

/*
equation index: 5179
type: SIMPLE_ASSIGN
TCHWChi2Out.m_flow_small = 1e-4 * TCHWChi2Out.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* TCHWChi2Out.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TCHWChi2Out.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5179;
}

/*
equation index: 5181
type: SIMPLE_ASSIGN
TCHWChi2In.ratTau = TCHWChi2In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* TCHWChi2In.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 5181;
}

/*
equation index: 5182
type: SIMPLE_ASSIGN
TCHWChi2In.tauHeaTraInv = if TCHWChi2In.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi2In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5182};
  modelica_boolean tmp41;
  tmp41 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* TCHWChi2In.tauHeaTraInv PARAM */) = (tmp41?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */),"TCHWChi2In.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 5182;
}

/*
equation index: 5188
type: SIMPLE_ASSIGN
TCHWChi2In.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* TCHWChi2In.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5188;
}

/*
equation index: 5189
type: SIMPLE_ASSIGN
TCHWChi2In.m_flow_small = 1e-4 * TCHWChi2In.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* TCHWChi2In.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* TCHWChi2In.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5189;
}

/*
equation index: 5191
type: SIMPLE_ASSIGN
val8.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5191;
}

/*
equation index: 5192
type: SIMPLE_ASSIGN
val8.kFixed = 0.0030932931235336655 * val8.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* val8.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5192;
}

/*
equation index: 5198
type: SIMPLE_ASSIGN
val8.dp_nominal = 104510.0 + val8.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2781]] /* val8.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* val8.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5198;
}

/*
equation index: 5199
type: SIMPLE_ASSIGN
val8.dp_nominal_pos = abs(val8.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5199};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* val8.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2781]] /* val8.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5199;
}

/*
equation index: 5200
type: SIMPLE_ASSIGN
val8.m_flow_nominal_pos = abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2787]] /* val8.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5200;
}

/*
equation index: 5203
type: SIMPLE_ASSIGN
val8.eta_default = logic2.val8.Medium.dynamicViscosity(val8.sta_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5203};
  logic2_val8_Medium_ThermodynamicState tmp42;
  logic2_val8_Medium_ThermodynamicState_wrap_vars(threadData,tmp42, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2793]] /* val8.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* val8.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* val8.eta_default PARAM */) = omc_logic2_val8_Medium_dynamicViscosity(threadData, tmp42);
  threadData->lastEquationSolved = 5203;
}

/*
equation index: 5204
type: SIMPLE_ASSIGN
val8.m_flow_turbulent = val8.deltaM * abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* val8.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2778]] /* val8.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5204;
}

/*
equation index: 5211
type: SIMPLE_ASSIGN
val8.m_flow_small = 1e-4 * abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5211;
}

/*
equation index: 5253
type: SIMPLE_ASSIGN
pumCHW2.eff.per.speeds_rpm[1] = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* pumCHW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2335]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5253;
}

/*
equation index: 5254
type: SIMPLE_ASSIGN
pumCHW2.eff.per.constantSpeed_rpm = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5254};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2323]] /* pumCHW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2335]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5254;
}

/*
equation index: 5258
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5258};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[712]] /* pumCHW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[721]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5258;
}

/*
equation index: 5259
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.P[1] = pumCHW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2328]] /* pumCHW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2363]] /* pumCHW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5259;
}

/*
equation index: 5260
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.V_flow[1] = pumCHW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5260};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* pumCHW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2364]] /* pumCHW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5260;
}

/*
equation index: 5261
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.eta[1] = pumCHW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5261};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2362]] /* pumCHW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5261;
}

/*
equation index: 5262
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.V_flow[1] = pumCHW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2361]] /* pumCHW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5262;
}

/*
equation index: 5263
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.eta[1] = pumCHW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2325]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* pumCHW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5263;
}

/*
equation index: 5264
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5264};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2324]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* pumCHW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5264;
}

/*
equation index: 5278
type: SIMPLE_ASSIGN
pumCHW2.heaDis.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5278};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[718]] /* pumCHW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[721]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5278;
}

/*
equation index: 5284
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5284};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2376]] /* pumCHW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5284;
}

/*
equation index: 5285
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_start = pumCHW2.m_flow_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5285};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2377]] /* pumCHW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2354]] /* pumCHW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5285;
}

/*
equation index: 5288
type: SIMPLE_ASSIGN
pumCHW2.vol.tau = pumCHW2.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5288};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* pumCHW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2385]] /* pumCHW2.tau PARAM */);
  threadData->lastEquationSolved = 5288;
}

/*
equation index: 5289
type: SIMPLE_ASSIGN
pumCHW2.vol.V_nominal = 25.120375 * pumCHW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCHW2.vol.V_nominal PARAM */) = (25.120375) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* pumCHW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 5289;
}

/*
equation index: 5292
type: SIMPLE_ASSIGN
pumCHW2.vol.T_start = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5292};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCHW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 5292;
}

/*
equation index: 5293
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.T = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5293};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2410]] /* pumCHW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5293;
}

/*
equation index: 5294
type: SIMPLE_ASSIGN
pumCHW2.vol.p_start = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5294};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCHW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 5294;
}

/*
equation index: 5295
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.p = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2411]] /* pumCHW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5295;
}

/*
equation index: 5299
type: SIMPLE_ASSIGN
pumCHW2.vol.rho_start = logic2.pumCHW2.vol.Medium.density(pumCHW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5299};
  logic2_pumCHW2_vol_Medium_ThermodynamicState tmp43;
  logic2_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp43, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2411]] /* pumCHW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2410]] /* pumCHW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.rho_start PARAM */) = omc_logic2_pumCHW2_vol_Medium_density(threadData, tmp43);
  threadData->lastEquationSolved = 5299;
}

/*
equation index: 5300
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.p_start = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCHW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5300;
}

/*
equation index: 5301
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.T_start = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCHW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5301;
}

/*
equation index: 5302
type: SIMPLE_ASSIGN
pumCHW2.vol.X_start[1] = pumCHW2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCHW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5302;
}

/*
equation index: 5303
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.X_start[1] = pumCHW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5303};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCHW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5303;
}

/*
equation index: 5304
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.hStart = logic2.pumCHW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, pumCHW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5304};
  real_array tmp44;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2395]] /* pumCHW2.vol.dynBal.hStart PARAM */) = omc_logic2_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCHW2.vol.dynBal.T_start PARAM */), tmp44);
  threadData->lastEquationSolved = 5304;
}

/*
equation index: 5309
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.rho_start = logic2.pumCHW2.vol.dynBal.Medium.density(logic2.pumCHW2.vol.dynBal.Medium.setState_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* pumCHW2.vol.dynBal.rho_start PARAM */) = omc_logic2_pumCHW2_vol_dynBal_Medium_density(threadData, omc_logic2_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCHW2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5309;
}

/*
equation index: 5312
type: SIMPLE_ASSIGN
pumCHW2.vol.V = pumCHW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5312};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* pumCHW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCHW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5312;
}

/*
equation index: 5313
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.fluidVolume = pumCHW2.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5313};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* pumCHW2.vol.V PARAM */);
  threadData->lastEquationSolved = 5313;
}

/*
equation index: 5326
type: SIMPLE_ASSIGN
pumCHW2.vol.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5326};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2404]] /* pumCHW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2353]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5326;
}

/*
equation index: 5335
type: SIMPLE_ASSIGN
pumCHW2.sta_start.p = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5335};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2383]] /* pumCHW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 5335;
}

/*
equation index: 5336
type: SIMPLE_ASSIGN
pumCHW2.sta_start.T = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* pumCHW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2288]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 5336;
}

/*
equation index: 5337
type: SIMPLE_ASSIGN
pumCHW2.h_outflow_start = logic2.pumCHW2.Medium.specificEnthalpy(pumCHW2.sta_start)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5337};
  logic2_pumCHW2_Medium_ThermodynamicState tmp45;
  logic2_pumCHW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp45, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2383]] /* pumCHW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* pumCHW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2349]] /* pumCHW2.h_outflow_start PARAM */) = omc_logic2_pumCHW2_Medium_specificEnthalpy(threadData, tmp45);
  threadData->lastEquationSolved = 5337;
}

/*
equation index: 5349
type: SIMPLE_ASSIGN
pumCHW2.stageInputs[1] = pumCHW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2384]] /* pumCHW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* pumCHW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5349;
}

/*
equation index: 5350
type: SIMPLE_ASSIGN
pumCHW2.constInput = pumCHW2.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2294]] /* pumCHW2.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2295]] /* pumCHW2.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 5350;
}

/*
equation index: 5353
type: SIMPLE_ASSIGN
pumCHW2.per.speeds_rpm[1] = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5353;
}

/*
equation index: 5354
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed_rpm = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* pumCHW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5354;
}

/*
equation index: 5355
type: SIMPLE_ASSIGN
pumCHW2.per.speeds[1] = pumCHW2.per.speeds_rpm[1] / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2371]] /* pumCHW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5355;
}

/*
equation index: 5356
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed = pumCHW2.per.constantSpeed_rpm / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2357]] /* pumCHW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* pumCHW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5356;
}

/*
equation index: 5379
type: SIMPLE_ASSIGN
junOut.mDyn_flow_nominal = 0.3333333333333333 * (abs(junOut.m_flow_nominal[1]) + abs(junOut.m_flow_nominal[2]) + abs(junOut.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* junOut.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1961]] /* junOut.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junOut.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1963]] /* junOut.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 5379;
}

/*
equation index: 5380
type: SIMPLE_ASSIGN
junOut.vol.m_flow_nominal = junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2037]] /* junOut.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* junOut.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5380;
}

/*
equation index: 5381
type: SIMPLE_ASSIGN
junOut.vol.tau = junOut.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2050]] /* junOut.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2014]] /* junOut.tau PARAM */);
  threadData->lastEquationSolved = 5381;
}

/*
equation index: 5382
type: SIMPLE_ASSIGN
junOut.vol.V_nominal = 0.8333333333333334 * junOut.vol.m_flow_nominal * junOut.vol.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2017]] /* junOut.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2037]] /* junOut.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2050]] /* junOut.vol.tau PARAM */)));
  threadData->lastEquationSolved = 5382;
}

/*
equation index: 5395
type: SIMPLE_ASSIGN
junOut.vol.T_start = junOut.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2015]] /* junOut.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junOut.T_start PARAM */);
  threadData->lastEquationSolved = 5395;
}

/*
equation index: 5396
type: SIMPLE_ASSIGN
junOut.vol.dynBal.T_start = junOut.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junOut.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2015]] /* junOut.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5396;
}

/*
equation index: 5397
type: SIMPLE_ASSIGN
junOut.vol.X_start[1] = junOut.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junOut.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junOut.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5397;
}

/*
equation index: 5398
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[1] = junOut.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junOut.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junOut.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5398;
}

/*
equation index: 5399
type: SIMPLE_ASSIGN
junOut.vol.dynBal.hStart = 1006.0 * (-273.15 + junOut.vol.dynBal.T_start) * (1.0 - junOut.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junOut.vol.dynBal.T_start)) * junOut.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* junOut.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junOut.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junOut.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junOut.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junOut.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5399;
}

/*
equation index: 5407
type: SIMPLE_ASSIGN
junOut.vol.p_start = junOut.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5407};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2039]] /* junOut.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junOut.p_start PARAM */);
  threadData->lastEquationSolved = 5407;
}

/*
equation index: 5408
type: SIMPLE_ASSIGN
junOut.vol.dynBal.p_start = junOut.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5408};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junOut.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2039]] /* junOut.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5408;
}

/*
equation index: 5409
type: SIMPLE_ASSIGN
junOut.vol.dynBal.rho_start = 1.1843079200592153e-5 * junOut.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5409};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2030]] /* junOut.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junOut.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5409;
}

/*
equation index: 5412
type: SIMPLE_ASSIGN
junOut.vol.V = junOut.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2016]] /* junOut.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2017]] /* junOut.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5412;
}

/*
equation index: 5413
type: SIMPLE_ASSIGN
junOut.vol.dynBal.fluidVolume = junOut.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2016]] /* junOut.vol.V PARAM */);
  threadData->lastEquationSolved = 5413;
}

/*
equation index: 5421
type: SIMPLE_ASSIGN
junOut.vol.X_start[2] = junOut.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5421};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junOut.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junOut.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5421;
}

/*
equation index: 5422
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[2] = junOut.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5422};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2023]] /* junOut.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junOut.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5422;
}

/*
equation index: 5428
type: SIMPLE_ASSIGN
junOut.vol.m_flow_small = 1e-4 * abs(junOut.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2038]] /* junOut.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2037]] /* junOut.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5428;
}

/*
equation index: 5441
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal = junOut.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5441};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2006]] /* junOut.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1963]] /* junOut.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 5441;
}

/*
equation index: 5442
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal_pos = abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5442};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2007]] /* junOut.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2006]] /* junOut.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5442;
}

/*
equation index: 5444
type: SIMPLE_ASSIGN
junOut.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2004]] /* junOut.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2010]] /* junOut.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5444;
}

/*
equation index: 5456
type: SIMPLE_ASSIGN
junOut.res3.m_flow_small = 1e-4 * abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5456};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2008]] /* junOut.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2006]] /* junOut.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5456;
}

/*
equation index: 5463
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal = junOut.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5463};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1990]] /* junOut.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junOut.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 5463;
}

/*
equation index: 5464
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal_pos = abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1991]] /* junOut.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1990]] /* junOut.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5464;
}

/*
equation index: 5466
type: SIMPLE_ASSIGN
junOut.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5466};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1988]] /* junOut.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1994]] /* junOut.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5466;
}

/*
equation index: 5478
type: SIMPLE_ASSIGN
junOut.res2.m_flow_small = 1e-4 * abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1992]] /* junOut.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1990]] /* junOut.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5478;
}

/*
equation index: 5485
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal = junOut.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5485};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1974]] /* junOut.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1961]] /* junOut.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 5485;
}

/*
equation index: 5486
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal_pos = abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5486};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* junOut.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1974]] /* junOut.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5486;
}

/*
equation index: 5488
type: SIMPLE_ASSIGN
junOut.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1972]] /* junOut.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1978]] /* junOut.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5488;
}

/*
equation index: 5500
type: SIMPLE_ASSIGN
junOut.res1.m_flow_small = 1e-4 * abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1976]] /* junOut.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1974]] /* junOut.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5500;
}

/*
equation index: 5502
type: SIMPLE_ASSIGN
junOut.m_flow_small = 1e-4 * junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junOut.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* junOut.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5502;
}

/*
equation index: 5532
type: SIMPLE_ASSIGN
junRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junRet.m_flow_nominal[1]) + abs(junRet.m_flow_nominal[2]) + abs(junRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5532};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2058]] /* junRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2060]] /* junRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2061]] /* junRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* junRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 5532;
}

/*
equation index: 5533
type: SIMPLE_ASSIGN
junRet.vol.m_flow_nominal = junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5533};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2136]] /* junRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2058]] /* junRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5533;
}

/*
equation index: 5534
type: SIMPLE_ASSIGN
junRet.vol.tau = junRet.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2149]] /* junRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2113]] /* junRet.tau PARAM */);
  threadData->lastEquationSolved = 5534;
}

/*
equation index: 5535
type: SIMPLE_ASSIGN
junRet.vol.V_nominal = 0.8333333333333334 * junRet.vol.m_flow_nominal * junRet.vol.tau
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5535};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2116]] /* junRet.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2136]] /* junRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2149]] /* junRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 5535;
}

/*
equation index: 5548
type: SIMPLE_ASSIGN
junRet.vol.T_start = junRet.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2114]] /* junRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2051]] /* junRet.T_start PARAM */);
  threadData->lastEquationSolved = 5548;
}

/*
equation index: 5549
type: SIMPLE_ASSIGN
junRet.vol.dynBal.T_start = junRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2120]] /* junRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2114]] /* junRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5549;
}

/*
equation index: 5550
type: SIMPLE_ASSIGN
junRet.vol.X_start[1] = junRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2117]] /* junRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2052]] /* junRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5550;
}

/*
equation index: 5551
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[1] = junRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2121]] /* junRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2117]] /* junRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5551;
}

/*
equation index: 5552
type: SIMPLE_ASSIGN
junRet.vol.dynBal.hStart = 1006.0 * (-273.15 + junRet.vol.dynBal.T_start) * (1.0 - junRet.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junRet.vol.dynBal.T_start)) * junRet.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5552};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2125]] /* junRet.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2120]] /* junRet.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2121]] /* junRet.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2120]] /* junRet.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2121]] /* junRet.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5552;
}

/*
equation index: 5560
type: SIMPLE_ASSIGN
junRet.vol.p_start = junRet.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2138]] /* junRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2064]] /* junRet.p_start PARAM */);
  threadData->lastEquationSolved = 5560;
}

/*
equation index: 5561
type: SIMPLE_ASSIGN
junRet.vol.dynBal.p_start = junRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5561};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2127]] /* junRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2138]] /* junRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5561;
}

/*
equation index: 5562
type: SIMPLE_ASSIGN
junRet.vol.dynBal.rho_start = 1.1843079200592153e-5 * junRet.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5562};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2129]] /* junRet.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2127]] /* junRet.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5562;
}

/*
equation index: 5565
type: SIMPLE_ASSIGN
junRet.vol.V = junRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* junRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2116]] /* junRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5565;
}

/*
equation index: 5566
type: SIMPLE_ASSIGN
junRet.vol.dynBal.fluidVolume = junRet.vol.V
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* junRet.vol.V PARAM */);
  threadData->lastEquationSolved = 5566;
}

/*
equation index: 5574
type: SIMPLE_ASSIGN
junRet.vol.X_start[2] = junRet.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5574};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2118]] /* junRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5574;
}

/*
equation index: 5575
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[2] = junRet.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5575};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2122]] /* junRet.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2118]] /* junRet.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5575;
}

/*
equation index: 5581
type: SIMPLE_ASSIGN
junRet.vol.m_flow_small = 1e-4 * abs(junRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2137]] /* junRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2136]] /* junRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5581;
}

/*
equation index: 5594
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal = junRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5594};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* junRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* junRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 5594;
}

/*
equation index: 5595
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal_pos = abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5595};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* junRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* junRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5595;
}

/*
equation index: 5597
type: SIMPLE_ASSIGN
junRet.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* junRet.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2109]] /* junRet.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5597;
}

/*
equation index: 5609
type: SIMPLE_ASSIGN
junRet.res3.m_flow_small = 1e-4 * abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2107]] /* junRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2105]] /* junRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5609;
}

/*
equation index: 5616
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal = junRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5616};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2089]] /* junRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2061]] /* junRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 5616;
}

/*
equation index: 5617
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal_pos = abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2090]] /* junRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2089]] /* junRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5617;
}

/*
equation index: 5619
type: SIMPLE_ASSIGN
junRet.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2087]] /* junRet.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2093]] /* junRet.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5619;
}

/*
equation index: 5631
type: SIMPLE_ASSIGN
junRet.res2.m_flow_small = 1e-4 * abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2091]] /* junRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2089]] /* junRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5631;
}

/*
equation index: 5638
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal = junRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2073]] /* junRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2060]] /* junRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 5638;
}

/*
equation index: 5639
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal_pos = abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2074]] /* junRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2073]] /* junRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5639;
}

/*
equation index: 5641
type: SIMPLE_ASSIGN
junRet.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5641};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2071]] /* junRet.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2077]] /* junRet.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5641;
}

/*
equation index: 5653
type: SIMPLE_ASSIGN
junRet.res1.m_flow_small = 1e-4 * abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2075]] /* junRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2073]] /* junRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5653;
}

/*
equation index: 5655
type: SIMPLE_ASSIGN
junRet.m_flow_small = 1e-4 * junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* junRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2058]] /* junRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5655;
}

/*
equation index: 5666
type: SIMPLE_ASSIGN
damOA.cL[1] = (log(damOA.k0) + (-damOA.b) - damOA.a) / damOA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5666};
  modelica_real tmp46;
  modelica_real tmp47;
  tmp46 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.k0 PARAM */);
  if(!(tmp46 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k0) was %g should be > 0", tmp46);
    }
  }tmp47 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* damOA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* damOA.cL[1] PARAM */) = DIVISION_SIM(log(tmp46) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */),(tmp47 * tmp47),"damOA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5666;
}

/*
equation index: 5667
type: SIMPLE_ASSIGN
damOA.cL[2] = (2.0 * damOA.b + (-2.0) * log(damOA.k0) + 2.0 * damOA.a - damOA.b * damOA.yL) / damOA.yL
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5667};
  modelica_real tmp48;
  tmp48 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.k0 PARAM */);
  if(!(tmp48 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k0) was %g should be > 0", tmp48);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */)) + (-2.0) * (log(tmp48)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* damOA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* damOA.yL PARAM */),"damOA.yL",equationIndexes);
  threadData->lastEquationSolved = 5667;
}

/*
equation index: 5668
type: SIMPLE_ASSIGN
damOA.cL[3] = log(damOA.k0)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5668};
  modelica_real tmp49;
  tmp49 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.k0 PARAM */);
  if(!(tmp49 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k0) was %g should be > 0", tmp49);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.cL[3] PARAM */) = log(tmp49);
  threadData->lastEquationSolved = 5668;
}

/*
equation index: 5669
type: SIMPLE_ASSIGN
damOA.cU[1] = (log(damOA.k1) - damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5669};
  modelica_real tmp50;
  modelica_real tmp51;
  tmp50 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* damOA.k1 PARAM */);
  if(!(tmp50 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k1) was %g should be > 0", tmp50);
    }
  }tmp51 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* damOA.cU[1] PARAM */) = DIVISION_SIM(log(tmp50) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */),1.0 + (tmp51 * tmp51) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 5669;
}

/*
equation index: 5670
type: SIMPLE_ASSIGN
damOA.cU[2] = (damOA.b * damOA.yU ^ 2.0 + 2.0 * log(damOA.k1) * damOA.yU + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b) / (-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5670};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  tmp52 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */);
  tmp53 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* damOA.k1 PARAM */);
  if(!(tmp53 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k1) was %g should be > 0", tmp53);
    }
  }tmp54 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* damOA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */)) * ((tmp52 * tmp52)) + (2.0) * ((log(tmp53)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */)) - ((tmp54 * tmp54)),"-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5670;
}

/*
equation index: 5671
type: SIMPLE_ASSIGN
damOA.cU[3] = (damOA.yU ^ 2.0 * (log(damOA.k1) + damOA.b) + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b + damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5671};
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  tmp55 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */);
  tmp56 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* damOA.k1 PARAM */);
  if(!(tmp56 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damOA.k1) was %g should be > 0", tmp56);
    }
  }tmp57 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* damOA.cU[3] PARAM */) = DIVISION_SIM(((tmp55 * tmp55)) * (log(tmp56) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */),1.0 + (tmp57 * tmp57) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 5671;
}

/*
equation index: 5672
type: SIMPLE_ASSIGN
damOA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5672};
  real_array tmp58;
  real_array tmp59;
  real_array_create(&tmp58, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp59, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damOA.b PARAM */), tmp58, tmp59, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1277]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.yU PARAM */));
  threadData->lastEquationSolved = 5672;
}

/*
equation index: 5674
type: SIMPLE_ASSIGN
damOA.rho_default = 1.1843079200592153e-5 * damOA.sta_default.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* damOA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* damOA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5674;
}

/*
equation index: 5675
type: SIMPLE_ASSIGN
damOA.A = 55.989691542288554 / (damOA.v_nominal * damOA.rho_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damOA.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1276]] /* damOA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* damOA.rho_default PARAM */)),"damOA.v_nominal * damOA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5675;
}

/*
equation index: 5676
type: SIMPLE_ASSIGN
damOA.kDam_default = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / damOA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5676};
  modelica_real tmp60;
  tmp60 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* damOA.rho_default PARAM */);
  if(!(tmp60 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damOA.rho_default) was %g should be >= 0", tmp60);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* damOA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp60)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damOA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.kThetaSqRt_default PARAM */),"damOA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5676;
}

/*
equation index: 5677
type: SIMPLE_ASSIGN
damOA.facRouDuc = if damOA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* damOA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[373]] /* damOA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5677;
}

/*
equation index: 5683
type: SIMPLE_ASSIGN
damOA.dp_nominal = (55.989691542288554 / damOA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5683};
  modelica_real tmp61;
  tmp61 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* damOA.kDam_default PARAM */),"damOA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* damOA.dp_nominal PARAM */) = (tmp61 * tmp61);
  threadData->lastEquationSolved = 5683;
}

/*
equation index: 5684
type: SIMPLE_ASSIGN
damOA.dp_nominal_pos = abs(damOA.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5684};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* damOA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5684;
}

/*
equation index: 5687
type: SIMPLE_ASSIGN
damOA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damOA.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5687};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5687;
}

/*
equation index: 5690
type: SIMPLE_ASSIGN
damOA.m_flow_turbulent = if damOA.use_deltaM then damOA.deltaM * 55.989691542288554 else damOA.eta_default * damOA.ReC * sqrt(damOA.A) * damOA.facRouDuc
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5690};
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  tmp63 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[376]] /* damOA.use_deltaM PARAM */);
  if(tmp63)
  {
    tmp64 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* damOA.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp62 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damOA.A PARAM */);
    if(!(tmp62 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damOA.A) was %g should be >= 0", tmp62);
      }
    }
    tmp64 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damOA.ReC PARAM */))) * (sqrt(tmp62))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* damOA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* damOA.m_flow_turbulent PARAM */) = tmp64;
  threadData->lastEquationSolved = 5690;
}

/*
equation index: 5700
type: SIMPLE_ASSIGN
damEA.cL[1] = (log(damEA.k0) + (-damEA.b) - damEA.a) / damEA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5700};
  modelica_real tmp65;
  modelica_real tmp66;
  tmp65 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.k0 PARAM */);
  if(!(tmp65 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k0) was %g should be > 0", tmp65);
    }
  }tmp66 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* damEA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* damEA.cL[1] PARAM */) = DIVISION_SIM(log(tmp65) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */),(tmp66 * tmp66),"damEA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5700;
}

/*
equation index: 5701
type: SIMPLE_ASSIGN
damEA.cL[2] = (2.0 * damEA.b + (-2.0) * log(damEA.k0) + 2.0 * damEA.a - damEA.b * damEA.yL) / damEA.yL
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5701};
  modelica_real tmp67;
  tmp67 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.k0 PARAM */);
  if(!(tmp67 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k0) was %g should be > 0", tmp67);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */)) + (-2.0) * (log(tmp67)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* damEA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* damEA.yL PARAM */),"damEA.yL",equationIndexes);
  threadData->lastEquationSolved = 5701;
}

/*
equation index: 5702
type: SIMPLE_ASSIGN
damEA.cL[3] = log(damEA.k0)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5702};
  modelica_real tmp68;
  tmp68 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.k0 PARAM */);
  if(!(tmp68 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k0) was %g should be > 0", tmp68);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.cL[3] PARAM */) = log(tmp68);
  threadData->lastEquationSolved = 5702;
}

/*
equation index: 5703
type: SIMPLE_ASSIGN
damEA.cU[1] = (log(damEA.k1) - damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5703};
  modelica_real tmp69;
  modelica_real tmp70;
  tmp69 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* damEA.k1 PARAM */);
  if(!(tmp69 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k1) was %g should be > 0", tmp69);
    }
  }tmp70 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damEA.cU[1] PARAM */) = DIVISION_SIM(log(tmp69) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */),1.0 + (tmp70 * tmp70) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 5703;
}

/*
equation index: 5704
type: SIMPLE_ASSIGN
damEA.cU[2] = (damEA.b * damEA.yU ^ 2.0 + 2.0 * log(damEA.k1) * damEA.yU + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b) / (-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5704};
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */);
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* damEA.k1 PARAM */);
  if(!(tmp72 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k1) was %g should be > 0", tmp72);
    }
  }tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damEA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */)) * ((tmp71 * tmp71)) + (2.0) * ((log(tmp72)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */)) - ((tmp73 * tmp73)),"-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5704;
}

/*
equation index: 5705
type: SIMPLE_ASSIGN
damEA.cU[3] = (damEA.yU ^ 2.0 * (log(damEA.k1) + damEA.b) + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b + damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5705};
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */);
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* damEA.k1 PARAM */);
  if(!(tmp75 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of log(damEA.k1) was %g should be > 0", tmp75);
    }
  }tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damEA.cU[3] PARAM */) = DIVISION_SIM(((tmp74 * tmp74)) * (log(tmp75) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */),1.0 + (tmp76 * tmp76) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 5705;
}

/*
equation index: 5706
type: SIMPLE_ASSIGN
damEA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5706};
  real_array tmp77;
  real_array tmp78;
  real_array_create(&tmp77, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1214]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp78, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* damEA.b PARAM */), tmp77, tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1241]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.yU PARAM */));
  threadData->lastEquationSolved = 5706;
}

/*
equation index: 5708
type: SIMPLE_ASSIGN
damEA.rho_default = 1.1843079200592153e-5 * damEA.sta_default.p
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5708};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* damEA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* damEA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5708;
}

/*
equation index: 5709
type: SIMPLE_ASSIGN
damEA.A = 55.989691542288554 / (damEA.v_nominal * damEA.rho_default)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* damEA.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1240]] /* damEA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* damEA.rho_default PARAM */)),"damEA.v_nominal * damEA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5709;
}

/*
equation index: 5710
type: SIMPLE_ASSIGN
damEA.kDam_default = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / damEA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5710};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* damEA.rho_default PARAM */);
  if(!(tmp79 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(damEA.rho_default) was %g should be >= 0", tmp79);
    }
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* damEA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp79)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* damEA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.kThetaSqRt_default PARAM */),"damEA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5710;
}

/*
equation index: 5711
type: SIMPLE_ASSIGN
damEA.facRouDuc = if damEA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* damEA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[364]] /* damEA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5711;
}

/*
equation index: 5717
type: SIMPLE_ASSIGN
damEA.dp_nominal = (55.989691542288554 / damEA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5717};
  modelica_real tmp80;
  tmp80 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* damEA.kDam_default PARAM */),"damEA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* damEA.dp_nominal PARAM */) = (tmp80 * tmp80);
  threadData->lastEquationSolved = 5717;
}

/*
equation index: 5718
type: SIMPLE_ASSIGN
damEA.dp_nominal_pos = abs(damEA.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5718};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* damEA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5718;
}

/*
equation index: 5721
type: SIMPLE_ASSIGN
damEA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damEA.sta_default.T
*/
OMC_DISABLE_OPT
static void logic2_raw_eqFunction_5721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5721};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5721;
}
OMC_DISABLE_OPT
void logic2_raw_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[479])(DATA*, threadData_t*) = {
    logic2_raw_eqFunction_4102,
    logic2_raw_eqFunction_4103,
    logic2_raw_eqFunction_4104,
    logic2_raw_eqFunction_4105,
    logic2_raw_eqFunction_4106,
    logic2_raw_eqFunction_4108,
    logic2_raw_eqFunction_4109,
    logic2_raw_eqFunction_4111,
    logic2_raw_eqFunction_1348,
    logic2_raw_eqFunction_173,
    logic2_raw_eqFunction_1347,
    logic2_raw_eqFunction_1346,
    logic2_raw_eqFunction_1345,
    logic2_raw_eqFunction_1344,
    logic2_raw_eqFunction_1343,
    logic2_raw_eqFunction_1341,
    logic2_raw_eqFunction_1340,
    logic2_raw_eqFunction_1338,
    logic2_raw_eqFunction_1337,
    logic2_raw_eqFunction_1330,
    logic2_raw_eqFunction_1329,
    logic2_raw_eqFunction_1328,
    logic2_raw_eqFunction_1327,
    logic2_raw_eqFunction_1326,
    logic2_raw_eqFunction_1325,
    logic2_raw_eqFunction_1324,
    logic2_raw_eqFunction_1323,
    logic2_raw_eqFunction_1322,
    logic2_raw_eqFunction_1321,
    logic2_raw_eqFunction_1320,
    logic2_raw_eqFunction_1319,
    logic2_raw_eqFunction_1318,
    logic2_raw_eqFunction_1317,
    logic2_raw_eqFunction_4147,
    logic2_raw_eqFunction_4148,
    logic2_raw_eqFunction_4149,
    logic2_raw_eqFunction_4150,
    logic2_raw_eqFunction_4151,
    logic2_raw_eqFunction_4152,
    logic2_raw_eqFunction_4153,
    logic2_raw_eqFunction_4154,
    logic2_raw_eqFunction_4155,
    logic2_raw_eqFunction_4156,
    logic2_raw_eqFunction_4157,
    logic2_raw_eqFunction_4158,
    logic2_raw_eqFunction_4159,
    logic2_raw_eqFunction_4160,
    logic2_raw_eqFunction_4161,
    logic2_raw_eqFunction_4162,
    logic2_raw_eqFunction_4163,
    logic2_raw_eqFunction_4164,
    logic2_raw_eqFunction_4165,
    logic2_raw_eqFunction_4166,
    logic2_raw_eqFunction_4167,
    logic2_raw_eqFunction_4168,
    logic2_raw_eqFunction_4169,
    logic2_raw_eqFunction_4175,
    logic2_raw_eqFunction_4176,
    logic2_raw_eqFunction_4177,
    logic2_raw_eqFunction_4180,
    logic2_raw_eqFunction_4181,
    logic2_raw_eqFunction_4188,
    logic2_raw_eqFunction_4196,
    logic2_raw_eqFunction_4197,
    logic2_raw_eqFunction_4198,
    logic2_raw_eqFunction_4200,
    logic2_raw_eqFunction_4201,
    logic2_raw_eqFunction_4202,
    logic2_raw_eqFunction_4203,
    logic2_raw_eqFunction_4206,
    logic2_raw_eqFunction_4207,
    logic2_raw_eqFunction_4208,
    logic2_raw_eqFunction_4209,
    logic2_raw_eqFunction_4213,
    logic2_raw_eqFunction_4214,
    logic2_raw_eqFunction_4215,
    logic2_raw_eqFunction_4216,
    logic2_raw_eqFunction_4217,
    logic2_raw_eqFunction_4218,
    logic2_raw_eqFunction_4223,
    logic2_raw_eqFunction_4226,
    logic2_raw_eqFunction_4227,
    logic2_raw_eqFunction_4240,
    logic2_raw_eqFunction_4253,
    logic2_raw_eqFunction_4254,
    logic2_raw_eqFunction_4257,
    logic2_raw_eqFunction_4266,
    logic2_raw_eqFunction_4273,
    logic2_raw_eqFunction_4274,
    logic2_raw_eqFunction_4277,
    logic2_raw_eqFunction_4286,
    logic2_raw_eqFunction_4293,
    logic2_raw_eqFunction_4294,
    logic2_raw_eqFunction_4297,
    logic2_raw_eqFunction_4306,
    logic2_raw_eqFunction_4308,
    logic2_raw_eqFunction_4325,
    logic2_raw_eqFunction_4326,
    logic2_raw_eqFunction_4327,
    logic2_raw_eqFunction_4329,
    logic2_raw_eqFunction_4330,
    logic2_raw_eqFunction_4331,
    logic2_raw_eqFunction_4332,
    logic2_raw_eqFunction_4335,
    logic2_raw_eqFunction_4336,
    logic2_raw_eqFunction_4337,
    logic2_raw_eqFunction_4338,
    logic2_raw_eqFunction_4342,
    logic2_raw_eqFunction_4343,
    logic2_raw_eqFunction_4344,
    logic2_raw_eqFunction_4345,
    logic2_raw_eqFunction_4346,
    logic2_raw_eqFunction_4347,
    logic2_raw_eqFunction_4352,
    logic2_raw_eqFunction_4355,
    logic2_raw_eqFunction_4356,
    logic2_raw_eqFunction_4369,
    logic2_raw_eqFunction_4382,
    logic2_raw_eqFunction_4383,
    logic2_raw_eqFunction_4386,
    logic2_raw_eqFunction_4395,
    logic2_raw_eqFunction_4402,
    logic2_raw_eqFunction_4403,
    logic2_raw_eqFunction_4406,
    logic2_raw_eqFunction_4415,
    logic2_raw_eqFunction_4422,
    logic2_raw_eqFunction_4423,
    logic2_raw_eqFunction_4426,
    logic2_raw_eqFunction_4435,
    logic2_raw_eqFunction_4437,
    logic2_raw_eqFunction_4454,
    logic2_raw_eqFunction_4455,
    logic2_raw_eqFunction_4456,
    logic2_raw_eqFunction_4458,
    logic2_raw_eqFunction_4459,
    logic2_raw_eqFunction_4460,
    logic2_raw_eqFunction_4461,
    logic2_raw_eqFunction_4464,
    logic2_raw_eqFunction_4465,
    logic2_raw_eqFunction_4466,
    logic2_raw_eqFunction_4467,
    logic2_raw_eqFunction_4471,
    logic2_raw_eqFunction_4472,
    logic2_raw_eqFunction_4473,
    logic2_raw_eqFunction_4474,
    logic2_raw_eqFunction_4475,
    logic2_raw_eqFunction_4476,
    logic2_raw_eqFunction_4481,
    logic2_raw_eqFunction_4484,
    logic2_raw_eqFunction_4485,
    logic2_raw_eqFunction_4498,
    logic2_raw_eqFunction_4511,
    logic2_raw_eqFunction_4512,
    logic2_raw_eqFunction_4515,
    logic2_raw_eqFunction_4524,
    logic2_raw_eqFunction_4531,
    logic2_raw_eqFunction_4532,
    logic2_raw_eqFunction_4535,
    logic2_raw_eqFunction_4544,
    logic2_raw_eqFunction_4551,
    logic2_raw_eqFunction_4552,
    logic2_raw_eqFunction_4555,
    logic2_raw_eqFunction_4564,
    logic2_raw_eqFunction_4566,
    logic2_raw_eqFunction_4583,
    logic2_raw_eqFunction_4584,
    logic2_raw_eqFunction_4585,
    logic2_raw_eqFunction_4587,
    logic2_raw_eqFunction_4588,
    logic2_raw_eqFunction_4589,
    logic2_raw_eqFunction_4590,
    logic2_raw_eqFunction_4593,
    logic2_raw_eqFunction_4594,
    logic2_raw_eqFunction_4595,
    logic2_raw_eqFunction_4596,
    logic2_raw_eqFunction_4600,
    logic2_raw_eqFunction_4601,
    logic2_raw_eqFunction_4602,
    logic2_raw_eqFunction_4603,
    logic2_raw_eqFunction_4604,
    logic2_raw_eqFunction_4605,
    logic2_raw_eqFunction_4610,
    logic2_raw_eqFunction_4613,
    logic2_raw_eqFunction_4614,
    logic2_raw_eqFunction_4627,
    logic2_raw_eqFunction_4640,
    logic2_raw_eqFunction_4641,
    logic2_raw_eqFunction_4644,
    logic2_raw_eqFunction_4653,
    logic2_raw_eqFunction_4660,
    logic2_raw_eqFunction_4661,
    logic2_raw_eqFunction_4664,
    logic2_raw_eqFunction_4673,
    logic2_raw_eqFunction_4680,
    logic2_raw_eqFunction_4681,
    logic2_raw_eqFunction_4684,
    logic2_raw_eqFunction_4693,
    logic2_raw_eqFunction_4695,
    logic2_raw_eqFunction_4706,
    logic2_raw_eqFunction_4707,
    logic2_raw_eqFunction_4708,
    logic2_raw_eqFunction_4709,
    logic2_raw_eqFunction_4710,
    logic2_raw_eqFunction_4711,
    logic2_raw_eqFunction_4712,
    logic2_raw_eqFunction_4713,
    logic2_raw_eqFunction_4714,
    logic2_raw_eqFunction_4715,
    logic2_raw_eqFunction_4716,
    logic2_raw_eqFunction_4717,
    logic2_raw_eqFunction_4718,
    logic2_raw_eqFunction_4719,
    logic2_raw_eqFunction_4722,
    logic2_raw_eqFunction_4725,
    logic2_raw_eqFunction_4731,
    logic2_raw_eqFunction_4732,
    logic2_raw_eqFunction_4733,
    logic2_raw_eqFunction_4736,
    logic2_raw_eqFunction_4745,
    logic2_raw_eqFunction_4752,
    logic2_raw_eqFunction_4753,
    logic2_raw_eqFunction_4754,
    logic2_raw_eqFunction_4757,
    logic2_raw_eqFunction_4766,
    logic2_raw_eqFunction_4770,
    logic2_raw_eqFunction_4771,
    logic2_raw_eqFunction_4772,
    logic2_raw_eqFunction_4773,
    logic2_raw_eqFunction_4777,
    logic2_raw_eqFunction_4778,
    logic2_raw_eqFunction_4779,
    logic2_raw_eqFunction_4780,
    logic2_raw_eqFunction_4781,
    logic2_raw_eqFunction_4782,
    logic2_raw_eqFunction_4787,
    logic2_raw_eqFunction_4790,
    logic2_raw_eqFunction_4791,
    logic2_raw_eqFunction_4804,
    logic2_raw_eqFunction_4805,
    logic2_raw_eqFunction_4814,
    logic2_raw_eqFunction_4815,
    logic2_raw_eqFunction_4816,
    logic2_raw_eqFunction_4817,
    logic2_raw_eqFunction_4821,
    logic2_raw_eqFunction_4822,
    logic2_raw_eqFunction_4823,
    logic2_raw_eqFunction_4824,
    logic2_raw_eqFunction_4825,
    logic2_raw_eqFunction_4826,
    logic2_raw_eqFunction_4831,
    logic2_raw_eqFunction_4834,
    logic2_raw_eqFunction_4835,
    logic2_raw_eqFunction_4848,
    logic2_raw_eqFunction_4849,
    logic2_raw_eqFunction_4873,
    logic2_raw_eqFunction_4874,
    logic2_raw_eqFunction_4877,
    logic2_raw_eqFunction_4878,
    logic2_raw_eqFunction_4884,
    logic2_raw_eqFunction_4885,
    logic2_raw_eqFunction_4887,
    logic2_raw_eqFunction_4888,
    logic2_raw_eqFunction_4894,
    logic2_raw_eqFunction_4895,
    logic2_raw_eqFunction_4897,
    logic2_raw_eqFunction_4898,
    logic2_raw_eqFunction_4904,
    logic2_raw_eqFunction_4905,
    logic2_raw_eqFunction_4906,
    logic2_raw_eqFunction_4909,
    logic2_raw_eqFunction_4910,
    logic2_raw_eqFunction_4917,
    logic2_raw_eqFunction_4919,
    logic2_raw_eqFunction_4920,
    logic2_raw_eqFunction_4921,
    logic2_raw_eqFunction_4967,
    logic2_raw_eqFunction_4968,
    logic2_raw_eqFunction_4972,
    logic2_raw_eqFunction_4973,
    logic2_raw_eqFunction_4974,
    logic2_raw_eqFunction_4975,
    logic2_raw_eqFunction_4976,
    logic2_raw_eqFunction_4977,
    logic2_raw_eqFunction_4978,
    logic2_raw_eqFunction_4992,
    logic2_raw_eqFunction_4998,
    logic2_raw_eqFunction_4999,
    logic2_raw_eqFunction_5002,
    logic2_raw_eqFunction_5003,
    logic2_raw_eqFunction_5006,
    logic2_raw_eqFunction_5007,
    logic2_raw_eqFunction_5008,
    logic2_raw_eqFunction_5009,
    logic2_raw_eqFunction_5013,
    logic2_raw_eqFunction_5014,
    logic2_raw_eqFunction_5015,
    logic2_raw_eqFunction_5016,
    logic2_raw_eqFunction_5017,
    logic2_raw_eqFunction_5018,
    logic2_raw_eqFunction_5023,
    logic2_raw_eqFunction_5026,
    logic2_raw_eqFunction_5027,
    logic2_raw_eqFunction_5040,
    logic2_raw_eqFunction_5049,
    logic2_raw_eqFunction_5050,
    logic2_raw_eqFunction_5051,
    logic2_raw_eqFunction_5063,
    logic2_raw_eqFunction_5064,
    logic2_raw_eqFunction_5067,
    logic2_raw_eqFunction_5068,
    logic2_raw_eqFunction_5069,
    logic2_raw_eqFunction_5070,
    logic2_raw_eqFunction_5086,
    logic2_raw_eqFunction_5087,
    logic2_raw_eqFunction_5092,
    logic2_raw_eqFunction_5095,
    logic2_raw_eqFunction_5096,
    logic2_raw_eqFunction_5097,
    logic2_raw_eqFunction_5102,
    logic2_raw_eqFunction_5103,
    logic2_raw_eqFunction_5111,
    logic2_raw_eqFunction_5115,
    logic2_raw_eqFunction_5116,
    logic2_raw_eqFunction_5117,
    logic2_raw_eqFunction_5118,
    logic2_raw_eqFunction_5122,
    logic2_raw_eqFunction_5123,
    logic2_raw_eqFunction_5124,
    logic2_raw_eqFunction_5125,
    logic2_raw_eqFunction_5126,
    logic2_raw_eqFunction_5127,
    logic2_raw_eqFunction_5132,
    logic2_raw_eqFunction_5135,
    logic2_raw_eqFunction_5136,
    logic2_raw_eqFunction_5149,
    logic2_raw_eqFunction_5150,
    logic2_raw_eqFunction_5169,
    logic2_raw_eqFunction_5171,
    logic2_raw_eqFunction_5172,
    logic2_raw_eqFunction_5178,
    logic2_raw_eqFunction_5179,
    logic2_raw_eqFunction_5181,
    logic2_raw_eqFunction_5182,
    logic2_raw_eqFunction_5188,
    logic2_raw_eqFunction_5189,
    logic2_raw_eqFunction_5191,
    logic2_raw_eqFunction_5192,
    logic2_raw_eqFunction_5198,
    logic2_raw_eqFunction_5199,
    logic2_raw_eqFunction_5200,
    logic2_raw_eqFunction_5203,
    logic2_raw_eqFunction_5204,
    logic2_raw_eqFunction_5211,
    logic2_raw_eqFunction_5253,
    logic2_raw_eqFunction_5254,
    logic2_raw_eqFunction_5258,
    logic2_raw_eqFunction_5259,
    logic2_raw_eqFunction_5260,
    logic2_raw_eqFunction_5261,
    logic2_raw_eqFunction_5262,
    logic2_raw_eqFunction_5263,
    logic2_raw_eqFunction_5264,
    logic2_raw_eqFunction_5278,
    logic2_raw_eqFunction_5284,
    logic2_raw_eqFunction_5285,
    logic2_raw_eqFunction_5288,
    logic2_raw_eqFunction_5289,
    logic2_raw_eqFunction_5292,
    logic2_raw_eqFunction_5293,
    logic2_raw_eqFunction_5294,
    logic2_raw_eqFunction_5295,
    logic2_raw_eqFunction_5299,
    logic2_raw_eqFunction_5300,
    logic2_raw_eqFunction_5301,
    logic2_raw_eqFunction_5302,
    logic2_raw_eqFunction_5303,
    logic2_raw_eqFunction_5304,
    logic2_raw_eqFunction_5309,
    logic2_raw_eqFunction_5312,
    logic2_raw_eqFunction_5313,
    logic2_raw_eqFunction_5326,
    logic2_raw_eqFunction_5335,
    logic2_raw_eqFunction_5336,
    logic2_raw_eqFunction_5337,
    logic2_raw_eqFunction_5349,
    logic2_raw_eqFunction_5350,
    logic2_raw_eqFunction_5353,
    logic2_raw_eqFunction_5354,
    logic2_raw_eqFunction_5355,
    logic2_raw_eqFunction_5356,
    logic2_raw_eqFunction_5379,
    logic2_raw_eqFunction_5380,
    logic2_raw_eqFunction_5381,
    logic2_raw_eqFunction_5382,
    logic2_raw_eqFunction_5395,
    logic2_raw_eqFunction_5396,
    logic2_raw_eqFunction_5397,
    logic2_raw_eqFunction_5398,
    logic2_raw_eqFunction_5399,
    logic2_raw_eqFunction_5407,
    logic2_raw_eqFunction_5408,
    logic2_raw_eqFunction_5409,
    logic2_raw_eqFunction_5412,
    logic2_raw_eqFunction_5413,
    logic2_raw_eqFunction_5421,
    logic2_raw_eqFunction_5422,
    logic2_raw_eqFunction_5428,
    logic2_raw_eqFunction_5441,
    logic2_raw_eqFunction_5442,
    logic2_raw_eqFunction_5444,
    logic2_raw_eqFunction_5456,
    logic2_raw_eqFunction_5463,
    logic2_raw_eqFunction_5464,
    logic2_raw_eqFunction_5466,
    logic2_raw_eqFunction_5478,
    logic2_raw_eqFunction_5485,
    logic2_raw_eqFunction_5486,
    logic2_raw_eqFunction_5488,
    logic2_raw_eqFunction_5500,
    logic2_raw_eqFunction_5502,
    logic2_raw_eqFunction_5532,
    logic2_raw_eqFunction_5533,
    logic2_raw_eqFunction_5534,
    logic2_raw_eqFunction_5535,
    logic2_raw_eqFunction_5548,
    logic2_raw_eqFunction_5549,
    logic2_raw_eqFunction_5550,
    logic2_raw_eqFunction_5551,
    logic2_raw_eqFunction_5552,
    logic2_raw_eqFunction_5560,
    logic2_raw_eqFunction_5561,
    logic2_raw_eqFunction_5562,
    logic2_raw_eqFunction_5565,
    logic2_raw_eqFunction_5566,
    logic2_raw_eqFunction_5574,
    logic2_raw_eqFunction_5575,
    logic2_raw_eqFunction_5581,
    logic2_raw_eqFunction_5594,
    logic2_raw_eqFunction_5595,
    logic2_raw_eqFunction_5597,
    logic2_raw_eqFunction_5609,
    logic2_raw_eqFunction_5616,
    logic2_raw_eqFunction_5617,
    logic2_raw_eqFunction_5619,
    logic2_raw_eqFunction_5631,
    logic2_raw_eqFunction_5638,
    logic2_raw_eqFunction_5639,
    logic2_raw_eqFunction_5641,
    logic2_raw_eqFunction_5653,
    logic2_raw_eqFunction_5655,
    logic2_raw_eqFunction_5666,
    logic2_raw_eqFunction_5667,
    logic2_raw_eqFunction_5668,
    logic2_raw_eqFunction_5669,
    logic2_raw_eqFunction_5670,
    logic2_raw_eqFunction_5671,
    logic2_raw_eqFunction_5672,
    logic2_raw_eqFunction_5674,
    logic2_raw_eqFunction_5675,
    logic2_raw_eqFunction_5676,
    logic2_raw_eqFunction_5677,
    logic2_raw_eqFunction_5683,
    logic2_raw_eqFunction_5684,
    logic2_raw_eqFunction_5687,
    logic2_raw_eqFunction_5690,
    logic2_raw_eqFunction_5700,
    logic2_raw_eqFunction_5701,
    logic2_raw_eqFunction_5702,
    logic2_raw_eqFunction_5703,
    logic2_raw_eqFunction_5704,
    logic2_raw_eqFunction_5705,
    logic2_raw_eqFunction_5706,
    logic2_raw_eqFunction_5708,
    logic2_raw_eqFunction_5709,
    logic2_raw_eqFunction_5710,
    logic2_raw_eqFunction_5711,
    logic2_raw_eqFunction_5717,
    logic2_raw_eqFunction_5718,
    logic2_raw_eqFunction_5721
  };
  
  for (int id = 0; id < 479; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif