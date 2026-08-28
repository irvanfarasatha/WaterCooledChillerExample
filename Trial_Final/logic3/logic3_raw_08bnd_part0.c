#include "logic3_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 4134
type: SIMPLE_ASSIGN
weaData.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 4134;
}

/*
equation index: 4135
type: SIMPLE_ASSIGN
weaData.zenAng.lat = weaData.lat
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* weaData.zenAng.lat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2913]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 4135;
}

/*
equation index: 4136
type: SIMPLE_ASSIGN
$cse40 = cos(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse40 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 4136;
}

/*
equation index: 4137
type: SIMPLE_ASSIGN
$cse43 = sin(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse43 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2929]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 4137;
}

/*
equation index: 4138
type: SIMPLE_ASSIGN
weaData.datRea.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4138};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 4138;
}

/*
equation index: 4140
type: SIMPLE_ASSIGN
weaData.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea.fileName) then weaData.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea.verboseRead)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4140};
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT90, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */), _OMC_LIT91)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */):_OMC_LIT91), _OMC_LIT92, _OMC_LIT93, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[877]] /* weaData.datRea.verboseRead PARAM */));
  threadData->lastEquationSolved = 4140;
}

/*
equation index: 4141
type: SIMPLE_ASSIGN
weaData.datRea1.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4141};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 4141;
}

/*
equation index: 4143
type: SIMPLE_ASSIGN
weaData.datRea1.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea1.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea1.fileName) then weaData.datRea1.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea1.verboseRead)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4143};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT90, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */), _OMC_LIT91)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */):_OMC_LIT91), _OMC_LIT92, _OMC_LIT94, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[880]] /* weaData.datRea1.verboseRead PARAM */));
  threadData->lastEquationSolved = 4143;
}
extern void logic3_raw_eqFunction_1358(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_173(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1357(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1356(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1355(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1354(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1353(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1351(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1350(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1348(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1347(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1340(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1339(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1338(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1337(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1336(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1335(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1332(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void logic3_raw_eqFunction_1327(DATA *data, threadData_t *threadData);


/*
equation index: 4179
type: SIMPLE_ASSIGN
chiller1Capacity_TR = chillerCapacity_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* chillerCapacity_TR PARAM */);
  threadData->lastEquationSolved = 4179;
}

/*
equation index: 4180
type: SIMPLE_ASSIGN
chiller1Capacity = 1000.0 * chiller1Capacity_TR * kWPerTR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */) = (1000.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* kWPerTR PARAM */)));
  threadData->lastEquationSolved = 4180;
}

/*
equation index: 4181
type: SIMPLE_ASSIGN
mCW_flow_nominal = 2.380952380952381e-4 * chiller1Capacity / dTCon_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */) = (2.380952380952381e-4) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* dTCon_nominal PARAM */),"dTCon_nominal",equationIndexes));
  threadData->lastEquationSolved = 4181;
}

/*
equation index: 4182
type: SIMPLE_ASSIGN
chillerStagingCtrl.mCW_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.mCW_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4182;
}

/*
equation index: 4183
type: SIMPLE_ASSIGN
chillerStagingCtrl.samplePeriod = chillerStageSamplePeriod
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* chillerStagingCtrl.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* chillerStageSamplePeriod PARAM */);
  threadData->lastEquationSolved = 4183;
}

/*
equation index: 4184
type: SIMPLE_ASSIGN
chillerStagingCtrl.minimumLoad_TR = chillerMinimumLoad_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.minimumLoad_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* chillerMinimumLoad_TR PARAM */);
  threadData->lastEquationSolved = 4184;
}

/*
equation index: 4185
type: SIMPLE_ASSIGN
chillerStagingCtrl.stage2OffThreshold_TR = chiller1Capacity_TR - chillerStageDeadband_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[420]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* chillerStageDeadband_TR PARAM */);
  threadData->lastEquationSolved = 4185;
}

/*
equation index: 4186
type: SIMPLE_ASSIGN
chillerStagingCtrl.stage2OnThreshold_TR = chiller1Capacity_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4186;
}

/*
equation index: 4187
type: SIMPLE_ASSIGN
chiller2Capacity_TR = chillerCapacity_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chiller2Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* chillerCapacity_TR PARAM */);
  threadData->lastEquationSolved = 4187;
}

/*
equation index: 4188
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2Capacity_TR = chiller2Capacity_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4188};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* chillerStagingCtrl.chiller2Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chiller2Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4188;
}

/*
equation index: 4189
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller1Capacity_TR = chiller1Capacity_TR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4189};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* chillerStagingCtrl.chiller1Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller1Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4189;
}

/*
equation index: 4190
type: SIMPLE_ASSIGN
chillerStagingCtrl.kWPerTR = kWPerTR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4190};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.kWPerTR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* kWPerTR PARAM */);
  threadData->lastEquationSolved = 4190;
}

/*
equation index: 4191
type: SIMPLE_ASSIGN
combinedCtrl2.TChiSetMax = TChiSetMax
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[441]] /* combinedCtrl2.TChiSetMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* TChiSetMax PARAM */);
  threadData->lastEquationSolved = 4191;
}

/*
equation index: 4192
type: SIMPLE_ASSIGN
combinedCtrl2.TChiSetMin = TChiSetMin
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[442]] /* combinedCtrl2.TChiSetMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */);
  threadData->lastEquationSolved = 4192;
}

/*
equation index: 4193
type: SIMPLE_ASSIGN
combinedCtrl2.TCHWRTSet = TCHWRTSet
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[440]] /* combinedCtrl2.TCHWRTSet PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* TCHWRTSet PARAM */);
  threadData->lastEquationSolved = 4193;
}

/*
equation index: 4194
type: SIMPLE_ASSIGN
mCHW_flow_nominal = 4.761904761904762e-5 * chiller1Capacity
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */) = (4.761904761904762e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity PARAM */));
  threadData->lastEquationSolved = 4194;
}

/*
equation index: 4195
type: SIMPLE_ASSIGN
combinedCtrl2.mCHWStart = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* combinedCtrl2.mCHWStart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4195;
}

/*
equation index: 4196
type: SIMPLE_ASSIGN
combinedCtrl2.mCHWMax = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4196};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[449]] /* combinedCtrl2.mCHWMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4196;
}

/*
equation index: 4197
type: SIMPLE_ASSIGN
combinedCtrl2.mCHWMin = 0.3 * mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* combinedCtrl2.mCHWMin PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4197;
}

/*
equation index: 4198
type: SIMPLE_ASSIGN
combinedCtrl1.TChiSetMax = TChiSetMax
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4198};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[424]] /* combinedCtrl1.TChiSetMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* TChiSetMax PARAM */);
  threadData->lastEquationSolved = 4198;
}

/*
equation index: 4199
type: SIMPLE_ASSIGN
combinedCtrl1.TChiSetMin = TChiSetMin
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4199};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* combinedCtrl1.TChiSetMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* TChiSetMin PARAM */);
  threadData->lastEquationSolved = 4199;
}

/*
equation index: 4200
type: SIMPLE_ASSIGN
combinedCtrl1.TCHWRTSet = TCHWRTSet
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[423]] /* combinedCtrl1.TCHWRTSet PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* TCHWRTSet PARAM */);
  threadData->lastEquationSolved = 4200;
}

/*
equation index: 4201
type: SIMPLE_ASSIGN
combinedCtrl1.mCHWStart = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* combinedCtrl1.mCHWStart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4201;
}

/*
equation index: 4202
type: SIMPLE_ASSIGN
combinedCtrl1.mCHWMax = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* combinedCtrl1.mCHWMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4202;
}

/*
equation index: 4203
type: SIMPLE_ASSIGN
combinedCtrl1.mCHWMin = 0.3 * mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4203};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* combinedCtrl1.mCHWMin PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4203;
}

/*
equation index: 4204
type: SIMPLE_ASSIGN
val8_2.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* val8_2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4204;
}

/*
equation index: 4205
type: SIMPLE_ASSIGN
val8_2.kFixed = 0.0030932931235336655 * val8_2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4205};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* val8_2.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* val8_2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4205;
}

/*
equation index: 4211
type: SIMPLE_ASSIGN
val8_2.dp_nominal = 104510.0 + val8_2.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4211};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 4211;
}

/*
equation index: 4212
type: SIMPLE_ASSIGN
val8_2.dp_nominal_pos = abs(val8_2.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2815]] /* val8_2.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.dp_nominal PARAM */));
  threadData->lastEquationSolved = 4212;
}

/*
equation index: 4213
type: SIMPLE_ASSIGN
val8_2.m_flow_nominal_pos = abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2820]] /* val8_2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* val8_2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4213;
}

/*
equation index: 4216
type: SIMPLE_ASSIGN
val8_2.eta_default = logic3.val8_2.Medium.dynamicViscosity(val8_2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4216};
  logic3_val8__2_Medium_ThermodynamicState tmp0;
  logic3_val8__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2826]] /* val8_2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2825]] /* val8_2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2816]] /* val8_2.eta_default PARAM */) = omc_logic3_val8__2_Medium_dynamicViscosity(threadData, tmp0);
  threadData->lastEquationSolved = 4216;
}

/*
equation index: 4217
type: SIMPLE_ASSIGN
val8_2.m_flow_turbulent = val8_2.deltaM * abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2822]] /* val8_2.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* val8_2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4217;
}

/*
equation index: 4224
type: SIMPLE_ASSIGN
val8_2.m_flow_small = 1e-4 * abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2821]] /* val8_2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2819]] /* val8_2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4224;
}

/*
equation index: 4232
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[3] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1889]] /* junCHWSup2.m_flow_nominal[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4232;
}

/*
equation index: 4233
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4233;
}

/*
equation index: 4234
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1887]] /* junCHWSup2.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4234;
}

/*
equation index: 4236
type: SIMPLE_ASSIGN
junCHWSup2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup2.m_flow_nominal[1]) + abs(junCHWSup2.m_flow_nominal[2]) + abs(junCHWSup2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* junCHWSup2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1887]] /* junCHWSup2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1889]] /* junCHWSup2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4236;
}

/*
equation index: 4237
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_nominal = junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* junCHWSup2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4237;
}

/*
equation index: 4238
type: SIMPLE_ASSIGN
junCHWSup2.vol.tau = junCHWSup2.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1961]] /* junCHWSup2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.tau PARAM */);
  threadData->lastEquationSolved = 4238;
}

/*
equation index: 4239
type: SIMPLE_ASSIGN
junCHWSup2.vol.V_nominal = 0.0010044335697769957 * junCHWSup2.vol.m_flow_nominal * junCHWSup2.vol.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1937]] /* junCHWSup2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1961]] /* junCHWSup2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4239;
}

/*
equation index: 4242
type: SIMPLE_ASSIGN
junCHWSup2.vol.T_start = junCHWSup2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1935]] /* junCHWSup2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1879]] /* junCHWSup2.T_start PARAM */);
  threadData->lastEquationSolved = 4242;
}

/*
equation index: 4243
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.T = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* junCHWSup2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1935]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4243;
}

/*
equation index: 4244
type: SIMPLE_ASSIGN
junCHWSup2.vol.p_start = junCHWSup2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4244};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junCHWSup2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1891]] /* junCHWSup2.p_start PARAM */);
  threadData->lastEquationSolved = 4244;
}

/*
equation index: 4245
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.p = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4245};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1960]] /* junCHWSup2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4245;
}

/*
equation index: 4249
type: SIMPLE_ASSIGN
junCHWSup2.vol.rho_start = logic3.junCHWSup2.vol.Medium.density(junCHWSup2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4249};
  logic3_junCHWSup2_vol_Medium_ThermodynamicState tmp1;
  logic3_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1960]] /* junCHWSup2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1959]] /* junCHWSup2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1956]] /* junCHWSup2.vol.rho_start PARAM */) = omc_logic3_junCHWSup2_vol_Medium_density(threadData, tmp1);
  threadData->lastEquationSolved = 4249;
}

/*
equation index: 4250
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.p_start = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4250};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4250;
}

/*
equation index: 4251
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.T_start = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4251};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1935]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4251;
}

/*
equation index: 4252
type: SIMPLE_ASSIGN
junCHWSup2.vol.X_start[1] = junCHWSup2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4252};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junCHWSup2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4252;
}

/*
equation index: 4253
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.X_start[1] = junCHWSup2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4253};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1938]] /* junCHWSup2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4253;
}

/*
equation index: 4254
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.hStart = logic3.junCHWSup2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, junCHWSup2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4254};
  real_array tmp2;
  real_array_create(&tmp2, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1944]] /* junCHWSup2.vol.dynBal.hStart PARAM */) = omc_logic3_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.T_start PARAM */), tmp2);
  threadData->lastEquationSolved = 4254;
}

/*
equation index: 4259
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.rho_start = logic3.junCHWSup2.vol.dynBal.Medium.density(logic3.junCHWSup2.vol.dynBal.Medium.setState_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4259};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1948]] /* junCHWSup2.vol.dynBal.rho_start PARAM */) = omc_logic3_junCHWSup2_vol_dynBal_Medium_density(threadData, omc_logic3_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1940]] /* junCHWSup2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4259;
}

/*
equation index: 4262
type: SIMPLE_ASSIGN
junCHWSup2.vol.V = junCHWSup2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4262};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1937]] /* junCHWSup2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4262;
}

/*
equation index: 4263
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.fluidVolume = junCHWSup2.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4263};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1943]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.V PARAM */);
  threadData->lastEquationSolved = 4263;
}

/*
equation index: 4276
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_small = 1e-4 * abs(junCHWSup2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junCHWSup2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4276;
}

/*
equation index: 4289
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal = junCHWSup2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1889]] /* junCHWSup2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4289;
}

/*
equation index: 4290
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal_pos = abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junCHWSup2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4290;
}

/*
equation index: 4293
type: SIMPLE_ASSIGN
junCHWSup2.res3.eta_default = logic3.junCHWSup2.res3.Medium.dynamicViscosity(junCHWSup2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4293};
  logic3_junCHWSup2_res3_Medium_ThermodynamicState tmp3;
  logic3_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp3, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1932]] /* junCHWSup2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.res3.eta_default PARAM */) = omc_logic3_junCHWSup2_res3_Medium_dynamicViscosity(threadData, tmp3);
  threadData->lastEquationSolved = 4293;
}

/*
equation index: 4302
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_small = 1e-4 * abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4302;
}

/*
equation index: 4309
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal = junCHWSup2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1914]] /* junCHWSup2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1888]] /* junCHWSup2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4309;
}

/*
equation index: 4310
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal_pos = abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1915]] /* junCHWSup2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1914]] /* junCHWSup2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4310;
}

/*
equation index: 4313
type: SIMPLE_ASSIGN
junCHWSup2.res2.eta_default = logic3.junCHWSup2.res2.Medium.dynamicViscosity(junCHWSup2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4313};
  logic3_junCHWSup2_res2_Medium_ThermodynamicState tmp4;
  logic3_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp4, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junCHWSup2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1918]] /* junCHWSup2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junCHWSup2.res2.eta_default PARAM */) = omc_logic3_junCHWSup2_res2_Medium_dynamicViscosity(threadData, tmp4);
  threadData->lastEquationSolved = 4313;
}

/*
equation index: 4322
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_small = 1e-4 * abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1916]] /* junCHWSup2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1914]] /* junCHWSup2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4322;
}

/*
equation index: 4329
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal = junCHWSup2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4329};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* junCHWSup2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1887]] /* junCHWSup2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4329;
}

/*
equation index: 4330
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal_pos = abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1901]] /* junCHWSup2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* junCHWSup2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4330;
}

/*
equation index: 4333
type: SIMPLE_ASSIGN
junCHWSup2.res1.eta_default = logic3.junCHWSup2.res1.Medium.dynamicViscosity(junCHWSup2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4333};
  logic3_junCHWSup2_res1_Medium_ThermodynamicState tmp5;
  logic3_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp5, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1905]] /* junCHWSup2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1904]] /* junCHWSup2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junCHWSup2.res1.eta_default PARAM */) = omc_logic3_junCHWSup2_res1_Medium_dynamicViscosity(threadData, tmp5);
  threadData->lastEquationSolved = 4333;
}

/*
equation index: 4342
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_small = 1e-4 * abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1902]] /* junCHWSup2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1900]] /* junCHWSup2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4342;
}

/*
equation index: 4344
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_small = 1e-4 * junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1890]] /* junCHWSup2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1885]] /* junCHWSup2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4344;
}

/*
equation index: 4361
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[3] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1723]] /* junCHWRet2.m_flow_nominal[3] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4361;
}

/*
equation index: 4362
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4362;
}

/*
equation index: 4363
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1721]] /* junCHWRet2.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4363;
}

/*
equation index: 4365
type: SIMPLE_ASSIGN
junCHWRet2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet2.m_flow_nominal[1]) + abs(junCHWRet2.m_flow_nominal[2]) + abs(junCHWRet2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1719]] /* junCHWRet2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1721]] /* junCHWRet2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1723]] /* junCHWRet2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4365;
}

/*
equation index: 4366
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_nominal = junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1719]] /* junCHWRet2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4366;
}

/*
equation index: 4367
type: SIMPLE_ASSIGN
junCHWRet2.vol.tau = junCHWRet2.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWRet2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.tau PARAM */);
  threadData->lastEquationSolved = 4367;
}

/*
equation index: 4368
type: SIMPLE_ASSIGN
junCHWRet2.vol.V_nominal = 0.0010044335697769957 * junCHWRet2.vol.m_flow_nominal * junCHWRet2.vol.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWRet2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWRet2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4368;
}

/*
equation index: 4371
type: SIMPLE_ASSIGN
junCHWRet2.vol.T_start = junCHWRet2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* junCHWRet2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1713]] /* junCHWRet2.T_start PARAM */);
  threadData->lastEquationSolved = 4371;
}

/*
equation index: 4372
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.T = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1793]] /* junCHWRet2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4372;
}

/*
equation index: 4373
type: SIMPLE_ASSIGN
junCHWRet2.vol.p_start = junCHWRet2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4373};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1788]] /* junCHWRet2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWRet2.p_start PARAM */);
  threadData->lastEquationSolved = 4373;
}

/*
equation index: 4374
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.p = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4374};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWRet2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1788]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4374;
}

/*
equation index: 4378
type: SIMPLE_ASSIGN
junCHWRet2.vol.rho_start = logic3.junCHWRet2.vol.Medium.density(junCHWRet2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4378};
  logic3_junCHWRet2_vol_Medium_ThermodynamicState tmp6;
  logic3_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp6, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1794]] /* junCHWRet2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1793]] /* junCHWRet2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1790]] /* junCHWRet2.vol.rho_start PARAM */) = omc_logic3_junCHWRet2_vol_Medium_density(threadData, tmp6);
  threadData->lastEquationSolved = 4378;
}

/*
equation index: 4379
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.p_start = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4379};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1788]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4379;
}

/*
equation index: 4380
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.T_start = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4380};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1769]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4380;
}

/*
equation index: 4381
type: SIMPLE_ASSIGN
junCHWRet2.vol.X_start[1] = junCHWRet2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1714]] /* junCHWRet2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4381;
}

/*
equation index: 4382
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.X_start[1] = junCHWRet2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1772]] /* junCHWRet2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4382;
}

/*
equation index: 4383
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.hStart = logic3.junCHWRet2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, junCHWRet2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4383};
  real_array tmp7;
  real_array_create(&tmp7, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1778]] /* junCHWRet2.vol.dynBal.hStart PARAM */) = omc_logic3_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.T_start PARAM */), tmp7);
  threadData->lastEquationSolved = 4383;
}

/*
equation index: 4388
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.rho_start = logic3.junCHWRet2.vol.dynBal.Medium.density(logic3.junCHWRet2.vol.dynBal.Medium.setState_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4388};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1782]] /* junCHWRet2.vol.dynBal.rho_start PARAM */) = omc_logic3_junCHWRet2_vol_dynBal_Medium_density(threadData, omc_logic3_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1774]] /* junCHWRet2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4388;
}

/*
equation index: 4391
type: SIMPLE_ASSIGN
junCHWRet2.vol.V = junCHWRet2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWRet2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4391;
}

/*
equation index: 4392
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.fluidVolume = junCHWRet2.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1777]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.V PARAM */);
  threadData->lastEquationSolved = 4392;
}

/*
equation index: 4405
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_small = 1e-4 * abs(junCHWRet2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4405};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWRet2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4405;
}

/*
equation index: 4418
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal = junCHWRet2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1723]] /* junCHWRet2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4418;
}

/*
equation index: 4419
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal_pos = abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWRet2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4419;
}

/*
equation index: 4422
type: SIMPLE_ASSIGN
junCHWRet2.res3.eta_default = logic3.junCHWRet2.res3.Medium.dynamicViscosity(junCHWRet2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4422};
  logic3_junCHWRet2_res3_Medium_ThermodynamicState tmp8;
  logic3_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp8, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1766]] /* junCHWRet2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.res3.eta_default PARAM */) = omc_logic3_junCHWRet2_res3_Medium_dynamicViscosity(threadData, tmp8);
  threadData->lastEquationSolved = 4422;
}

/*
equation index: 4431
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_small = 1e-4 * abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4431;
}

/*
equation index: 4438
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal = junCHWRet2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWRet2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1722]] /* junCHWRet2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4438;
}

/*
equation index: 4439
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal_pos = abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1749]] /* junCHWRet2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWRet2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4439;
}

/*
equation index: 4442
type: SIMPLE_ASSIGN
junCHWRet2.res2.eta_default = logic3.junCHWRet2.res2.Medium.dynamicViscosity(junCHWRet2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4442};
  logic3_junCHWRet2_res2_Medium_ThermodynamicState tmp9;
  logic3_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp9, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* junCHWRet2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1752]] /* junCHWRet2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWRet2.res2.eta_default PARAM */) = omc_logic3_junCHWRet2_res2_Medium_dynamicViscosity(threadData, tmp9);
  threadData->lastEquationSolved = 4442;
}

/*
equation index: 4451
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_small = 1e-4 * abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1750]] /* junCHWRet2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1748]] /* junCHWRet2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4451;
}

/*
equation index: 4458
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal = junCHWRet2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1734]] /* junCHWRet2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1721]] /* junCHWRet2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4458;
}

/*
equation index: 4459
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal_pos = abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4459};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1735]] /* junCHWRet2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1734]] /* junCHWRet2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4459;
}

/*
equation index: 4462
type: SIMPLE_ASSIGN
junCHWRet2.res1.eta_default = logic3.junCHWRet2.res1.Medium.dynamicViscosity(junCHWRet2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4462};
  logic3_junCHWRet2_res1_Medium_ThermodynamicState tmp10;
  logic3_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWRet2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1738]] /* junCHWRet2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1732]] /* junCHWRet2.res1.eta_default PARAM */) = omc_logic3_junCHWRet2_res1_Medium_dynamicViscosity(threadData, tmp10);
  threadData->lastEquationSolved = 4462;
}

/*
equation index: 4471
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_small = 1e-4 * abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1736]] /* junCHWRet2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1734]] /* junCHWRet2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4471;
}

/*
equation index: 4473
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_small = 1e-4 * junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4473};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1724]] /* junCHWRet2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1719]] /* junCHWRet2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4473;
}

/*
equation index: 4490
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[3] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1640]] /* junCHWRet.m_flow_nominal[3] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4490;
}

/*
equation index: 4491
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1639]] /* junCHWRet.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4491;
}

/*
equation index: 4492
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1638]] /* junCHWRet.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4492;
}

/*
equation index: 4494
type: SIMPLE_ASSIGN
junCHWRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet.m_flow_nominal[1]) + abs(junCHWRet.m_flow_nominal[2]) + abs(junCHWRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1636]] /* junCHWRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1638]] /* junCHWRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1639]] /* junCHWRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1640]] /* junCHWRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4494;
}

/*
equation index: 4495
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_nominal = junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4495};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1636]] /* junCHWRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4495;
}

/*
equation index: 4496
type: SIMPLE_ASSIGN
junCHWRet.vol.tau = junCHWRet.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4496};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.tau PARAM */);
  threadData->lastEquationSolved = 4496;
}

/*
equation index: 4497
type: SIMPLE_ASSIGN
junCHWRet.vol.V_nominal = 0.0010044335697769957 * junCHWRet.vol.m_flow_nominal * junCHWRet.vol.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4497;
}

/*
equation index: 4500
type: SIMPLE_ASSIGN
junCHWRet.vol.T_start = junCHWRet.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1686]] /* junCHWRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1630]] /* junCHWRet.T_start PARAM */);
  threadData->lastEquationSolved = 4500;
}

/*
equation index: 4501
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.T = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1710]] /* junCHWRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1686]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4501;
}

/*
equation index: 4502
type: SIMPLE_ASSIGN
junCHWRet.vol.p_start = junCHWRet.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet.p_start PARAM */);
  threadData->lastEquationSolved = 4502;
}

/*
equation index: 4503
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.p = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4503};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4503;
}

/*
equation index: 4507
type: SIMPLE_ASSIGN
junCHWRet.vol.rho_start = logic3.junCHWRet.vol.Medium.density(junCHWRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4507};
  logic3_junCHWRet_vol_Medium_ThermodynamicState tmp11;
  logic3_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp11, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1711]] /* junCHWRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1710]] /* junCHWRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1707]] /* junCHWRet.vol.rho_start PARAM */) = omc_logic3_junCHWRet_vol_Medium_density(threadData, tmp11);
  threadData->lastEquationSolved = 4507;
}

/*
equation index: 4508
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.p_start = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4508};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4508;
}

/*
equation index: 4509
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.T_start = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4509};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1686]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4509;
}

/*
equation index: 4510
type: SIMPLE_ASSIGN
junCHWRet.vol.X_start[1] = junCHWRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4510};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1631]] /* junCHWRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4510;
}

/*
equation index: 4511
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.X_start[1] = junCHWRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4511};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1689]] /* junCHWRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4511;
}

/*
equation index: 4512
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.hStart = logic3.junCHWRet.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, junCHWRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4512};
  real_array tmp12;
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1695]] /* junCHWRet.vol.dynBal.hStart PARAM */) = omc_logic3_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.T_start PARAM */), tmp12);
  threadData->lastEquationSolved = 4512;
}

/*
equation index: 4517
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.rho_start = logic3.junCHWRet.vol.dynBal.Medium.density(logic3.junCHWRet.vol.dynBal.Medium.setState_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4517};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1699]] /* junCHWRet.vol.dynBal.rho_start PARAM */) = omc_logic3_junCHWRet_vol_dynBal_Medium_density(threadData, omc_logic3_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1691]] /* junCHWRet.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4517;
}

/*
equation index: 4520
type: SIMPLE_ASSIGN
junCHWRet.vol.V = junCHWRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4520};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4520;
}

/*
equation index: 4521
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.fluidVolume = junCHWRet.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1694]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.V PARAM */);
  threadData->lastEquationSolved = 4521;
}

/*
equation index: 4534
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_small = 1e-4 * abs(junCHWRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4534};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4534;
}

/*
equation index: 4547
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal = junCHWRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1640]] /* junCHWRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4547;
}

/*
equation index: 4548
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal_pos = abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4548;
}

/*
equation index: 4551
type: SIMPLE_ASSIGN
junCHWRet.res3.eta_default = logic3.junCHWRet.res3.Medium.dynamicViscosity(junCHWRet.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4551};
  logic3_junCHWRet_res3_Medium_ThermodynamicState tmp13;
  logic3_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp13, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1683]] /* junCHWRet.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.res3.eta_default PARAM */) = omc_logic3_junCHWRet_res3_Medium_dynamicViscosity(threadData, tmp13);
  threadData->lastEquationSolved = 4551;
}

/*
equation index: 4560
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_small = 1e-4 * abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4560;
}

/*
equation index: 4567
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal = junCHWRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1639]] /* junCHWRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4567;
}

/*
equation index: 4568
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal_pos = abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1666]] /* junCHWRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4568;
}

/*
equation index: 4571
type: SIMPLE_ASSIGN
junCHWRet.res2.eta_default = logic3.junCHWRet.res2.Medium.dynamicViscosity(junCHWRet.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4571};
  logic3_junCHWRet_res2_Medium_ThermodynamicState tmp14;
  logic3_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1670]] /* junCHWRet.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1669]] /* junCHWRet.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet.res2.eta_default PARAM */) = omc_logic3_junCHWRet_res2_Medium_dynamicViscosity(threadData, tmp14);
  threadData->lastEquationSolved = 4571;
}

/*
equation index: 4580
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_small = 1e-4 * abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4580};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1667]] /* junCHWRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1665]] /* junCHWRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4580;
}

/*
equation index: 4587
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal = junCHWRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1651]] /* junCHWRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1638]] /* junCHWRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4587;
}

/*
equation index: 4588
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal_pos = abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1652]] /* junCHWRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1651]] /* junCHWRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4588;
}

/*
equation index: 4591
type: SIMPLE_ASSIGN
junCHWRet.res1.eta_default = logic3.junCHWRet.res1.Medium.dynamicViscosity(junCHWRet.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4591};
  logic3_junCHWRet_res1_Medium_ThermodynamicState tmp15;
  logic3_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp15, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1655]] /* junCHWRet.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1649]] /* junCHWRet.res1.eta_default PARAM */) = omc_logic3_junCHWRet_res1_Medium_dynamicViscosity(threadData, tmp15);
  threadData->lastEquationSolved = 4591;
}

/*
equation index: 4600
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_small = 1e-4 * abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4600};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1653]] /* junCHWRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1651]] /* junCHWRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4600;
}

/*
equation index: 4602
type: SIMPLE_ASSIGN
junCHWRet.m_flow_small = 1e-4 * junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1641]] /* junCHWRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1636]] /* junCHWRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4602;
}

/*
equation index: 4619
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[3] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* junCHWSup.m_flow_nominal[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4619;
}

/*
equation index: 4620
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1805]] /* junCHWSup.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4620;
}

/*
equation index: 4621
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4621};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1804]] /* junCHWSup.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4621;
}

/*
equation index: 4623
type: SIMPLE_ASSIGN
junCHWSup.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup.m_flow_nominal[1]) + abs(junCHWSup.m_flow_nominal[2]) + abs(junCHWSup.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4623};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1802]] /* junCHWSup.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1804]] /* junCHWSup.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1805]] /* junCHWSup.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* junCHWSup.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4623;
}

/*
equation index: 4624
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_nominal = junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4624};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1802]] /* junCHWSup.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4624;
}

/*
equation index: 4625
type: SIMPLE_ASSIGN
junCHWSup.vol.tau = junCHWSup.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1851]] /* junCHWSup.tau PARAM */);
  threadData->lastEquationSolved = 4625;
}

/*
equation index: 4626
type: SIMPLE_ASSIGN
junCHWSup.vol.V_nominal = 0.0010044335697769957 * junCHWSup.vol.m_flow_nominal * junCHWSup.vol.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4626;
}

/*
equation index: 4629
type: SIMPLE_ASSIGN
junCHWSup.vol.T_start = junCHWSup.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1852]] /* junCHWSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1796]] /* junCHWSup.T_start PARAM */);
  threadData->lastEquationSolved = 4629;
}

/*
equation index: 4630
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.T = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1876]] /* junCHWSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1852]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4630;
}

/*
equation index: 4631
type: SIMPLE_ASSIGN
junCHWSup.vol.p_start = junCHWSup.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup.p_start PARAM */);
  threadData->lastEquationSolved = 4631;
}

/*
equation index: 4632
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.p = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1877]] /* junCHWSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4632;
}

/*
equation index: 4636
type: SIMPLE_ASSIGN
junCHWSup.vol.rho_start = logic3.junCHWSup.vol.Medium.density(junCHWSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4636};
  logic3_junCHWSup_vol_Medium_ThermodynamicState tmp16;
  logic3_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp16, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1877]] /* junCHWSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1876]] /* junCHWSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1873]] /* junCHWSup.vol.rho_start PARAM */) = omc_logic3_junCHWSup_vol_Medium_density(threadData, tmp16);
  threadData->lastEquationSolved = 4636;
}

/*
equation index: 4637
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.p_start = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4637};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junCHWSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4637;
}

/*
equation index: 4638
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.T_start = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4638};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1857]] /* junCHWSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1852]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4638;
}

/*
equation index: 4639
type: SIMPLE_ASSIGN
junCHWSup.vol.X_start[1] = junCHWSup.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4639};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* junCHWSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4639;
}

/*
equation index: 4640
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.X_start[1] = junCHWSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4640};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1858]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1855]] /* junCHWSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4640;
}

/*
equation index: 4641
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.hStart = logic3.junCHWSup.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, junCHWSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4641};
  real_array tmp17;
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1858]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1861]] /* junCHWSup.vol.dynBal.hStart PARAM */) = omc_logic3_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1857]] /* junCHWSup.vol.dynBal.T_start PARAM */), tmp17);
  threadData->lastEquationSolved = 4641;
}

/*
equation index: 4646
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.rho_start = logic3.junCHWSup.vol.dynBal.Medium.density(logic3.junCHWSup.vol.dynBal.Medium.setState_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4646};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1865]] /* junCHWSup.vol.dynBal.rho_start PARAM */) = omc_logic3_junCHWSup_vol_dynBal_Medium_density(threadData, omc_logic3_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1857]] /* junCHWSup.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4646;
}

/*
equation index: 4649
type: SIMPLE_ASSIGN
junCHWSup.vol.V = junCHWSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4649};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4649;
}

/*
equation index: 4650
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.fluidVolume = junCHWSup.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4650};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1860]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup.vol.V PARAM */);
  threadData->lastEquationSolved = 4650;
}

/*
equation index: 4663
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_small = 1e-4 * abs(junCHWSup.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4663};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4663;
}

/*
equation index: 4676
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal = junCHWSup.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1806]] /* junCHWSup.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4676;
}

/*
equation index: 4677
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal_pos = abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4677;
}

/*
equation index: 4680
type: SIMPLE_ASSIGN
junCHWSup.res3.eta_default = logic3.junCHWSup.res3.Medium.dynamicViscosity(junCHWSup.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4680};
  logic3_junCHWSup_res3_Medium_ThermodynamicState tmp18;
  logic3_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp18, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1849]] /* junCHWSup.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1843]] /* junCHWSup.res3.eta_default PARAM */) = omc_logic3_junCHWSup_res3_Medium_dynamicViscosity(threadData, tmp18);
  threadData->lastEquationSolved = 4680;
}

/*
equation index: 4689
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_small = 1e-4 * abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4689;
}

/*
equation index: 4696
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal = junCHWSup.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1805]] /* junCHWSup.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4696;
}

/*
equation index: 4697
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal_pos = abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1832]] /* junCHWSup.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4697;
}

/*
equation index: 4700
type: SIMPLE_ASSIGN
junCHWSup.res2.eta_default = logic3.junCHWSup.res2.Medium.dynamicViscosity(junCHWSup.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4700};
  logic3_junCHWSup_res2_Medium_ThermodynamicState tmp19;
  logic3_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp19, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1836]] /* junCHWSup.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1835]] /* junCHWSup.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup.res2.eta_default PARAM */) = omc_logic3_junCHWSup_res2_Medium_dynamicViscosity(threadData, tmp19);
  threadData->lastEquationSolved = 4700;
}

/*
equation index: 4709
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_small = 1e-4 * abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1833]] /* junCHWSup.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1831]] /* junCHWSup.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4709;
}

/*
equation index: 4716
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal = junCHWSup.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4716};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1817]] /* junCHWSup.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1804]] /* junCHWSup.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4716;
}

/*
equation index: 4717
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal_pos = abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4717};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1818]] /* junCHWSup.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1817]] /* junCHWSup.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4717;
}

/*
equation index: 4720
type: SIMPLE_ASSIGN
junCHWSup.res1.eta_default = logic3.junCHWSup.res1.Medium.dynamicViscosity(junCHWSup.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4720};
  logic3_junCHWSup_res1_Medium_ThermodynamicState tmp20;
  logic3_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp20, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1821]] /* junCHWSup.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1815]] /* junCHWSup.res1.eta_default PARAM */) = omc_logic3_junCHWSup_res1_Medium_dynamicViscosity(threadData, tmp20);
  threadData->lastEquationSolved = 4720;
}

/*
equation index: 4729
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_small = 1e-4 * abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1819]] /* junCHWSup.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1817]] /* junCHWSup.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4729;
}

/*
equation index: 4731
type: SIMPLE_ASSIGN
junCHWSup.m_flow_small = 1e-4 * junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1807]] /* junCHWSup.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1802]] /* junCHWSup.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4731;
}

/*
equation index: 4742
type: SIMPLE_ASSIGN
chi2.TConEnt_nominal_degC = -273.15 + chi2.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4742};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* chi2.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 4742;
}

/*
equation index: 4743
type: SIMPLE_ASSIGN
chiller2Capacity = 1000.0 * chiller2Capacity_TR * kWPerTR
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4743};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity PARAM */) = (1000.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chiller2Capacity_TR PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2161]] /* kWPerTR PARAM */)));
  threadData->lastEquationSolved = 4743;
}

/*
equation index: 4744
type: SIMPLE_ASSIGN
chi2.per.QEva_flow_nominal = -chiller2Capacity
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.per.QEva_flow_nominal PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity PARAM */));
  threadData->lastEquationSolved = 4744;
}

/*
equation index: 4745
type: SIMPLE_ASSIGN
chi2.QEva_flow_nominal = chi2.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* chi2.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4745;
}

/*
equation index: 4746
type: SIMPLE_ASSIGN
chi2.Q_flow_small = 1e-9 * chi2.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4746};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[263]] /* chi2.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* chi2.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4746;
}

/*
equation index: 4747
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal = chi2.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* chi2.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* chi2.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 4747;
}

/*
equation index: 4748
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal_degC = -273.15 + chi2.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* chi2.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* chi2.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 4748;
}

/*
equation index: 4749
type: SIMPLE_ASSIGN
chi2.mCon_flow_nominal = chi2.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[282]] /* chi2.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* chi2.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4749;
}

/*
equation index: 4750
type: SIMPLE_ASSIGN
chi2.mEva_flow_nominal = chi2.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4750};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* chi2.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* chi2.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4750;
}

/*
equation index: 4751
type: SIMPLE_ASSIGN
chi2.etaMotor = chi2.per.etaMotor
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4751};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* chi2.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 4751;
}

/*
equation index: 4752
type: SIMPLE_ASSIGN
chi2.PLRMin = chi2.per.PLRMin
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4752};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* chi2.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* chi2.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 4752;
}

/*
equation index: 4753
type: SIMPLE_ASSIGN
chi2.PLRMinUnl = chi2.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4753};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* chi2.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[298]] /* chi2.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 4753;
}

/*
equation index: 4754
type: SIMPLE_ASSIGN
chi2.PLRMax = chi2.per.PLRMax
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4754};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* chi2.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* chi2.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 4754;
}

/*
equation index: 4755
type: SIMPLE_ASSIGN
chi2.COP_nominal = chi2.per.COP_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4755};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* chi2.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[286]] /* chi2.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 4755;
}

/*
equation index: 4758
type: SIMPLE_ASSIGN
chi2.rho2_nominal = logic3.chi2.Medium2.density(chi2.sta2_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4758};
  logic3_chi2_Medium2_ThermodynamicState tmp21;
  logic3_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp21, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* chi2.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* chi2.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* chi2.rho2_nominal PARAM */) = omc_logic3_chi2_Medium2_density(threadData, tmp21);
  threadData->lastEquationSolved = 4758;
}

/*
equation index: 4761
type: SIMPLE_ASSIGN
chi2.rho1_nominal = logic3.chi2.Medium1.density(chi2.sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4761};
  logic3_chi2_Medium1_ThermodynamicState tmp22;
  logic3_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp22, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* chi2.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.rho1_nominal PARAM */) = omc_logic3_chi2_Medium1_density(threadData, tmp22);
  threadData->lastEquationSolved = 4761;
}

/*
equation index: 4767
type: SIMPLE_ASSIGN
chi2.m2_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4767};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4767;
}

/*
equation index: 4768
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_nominal = chi2.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* chi2.preDro2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4768;
}

/*
equation index: 4769
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_nominal_pos = abs(chi2.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* chi2.preDro2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* chi2.preDro2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4769;
}

/*
equation index: 4772
type: SIMPLE_ASSIGN
chi2.preDro2.eta_default = logic3.chi2.preDro2.Medium.dynamicViscosity(chi2.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4772};
  logic3_chi2_preDro2_Medium_ThermodynamicState tmp23;
  logic3_chi2_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp23, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* chi2.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* chi2.preDro2.eta_default PARAM */) = omc_logic3_chi2_preDro2_Medium_dynamicViscosity(threadData, tmp23);
  threadData->lastEquationSolved = 4772;
}

/*
equation index: 4781
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_small = 1e-4 * abs(chi2.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4781};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* chi2.preDro2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* chi2.preDro2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4781;
}

/*
equation index: 4788
type: SIMPLE_ASSIGN
chi2.m1_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4788;
}

/*
equation index: 4789
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_nominal = chi2.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4789;
}

/*
equation index: 4790
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_nominal_pos = abs(chi2.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4790};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4790;
}

/*
equation index: 4793
type: SIMPLE_ASSIGN
chi2.preDro1.eta_default = logic3.chi2.preDro1.Medium.dynamicViscosity(chi2.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4793};
  logic3_chi2_preDro1_Medium_ThermodynamicState tmp24;
  logic3_chi2_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp24, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* chi2.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[327]] /* chi2.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.preDro1.eta_default PARAM */) = omc_logic3_chi2_preDro1_Medium_dynamicViscosity(threadData, tmp24);
  threadData->lastEquationSolved = 4793;
}

/*
equation index: 4802
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_small = 1e-4 * abs(chi2.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4802};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* chi2.preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4802;
}

/*
equation index: 4806
type: SIMPLE_ASSIGN
chi2.vol2.T_start = chi2.T2_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* chi2.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 4806;
}

/*
equation index: 4807
type: SIMPLE_ASSIGN
chi2.vol2.state_start.T = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* chi2.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 4807;
}

/*
equation index: 4808
type: SIMPLE_ASSIGN
chi2.vol2.p_start = chi2.p2_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4808};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* chi2.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[285]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 4808;
}

/*
equation index: 4809
type: SIMPLE_ASSIGN
chi2.vol2.state_start.p = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4809};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chi2.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 4809;
}

/*
equation index: 4813
type: SIMPLE_ASSIGN
chi2.vol2.rho_start = logic3.chi2.vol2.Medium.density(chi2.vol2.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4813};
  logic3_chi2_vol2_Medium_ThermodynamicState tmp25;
  logic3_chi2_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp25, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chi2.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[403]] /* chi2.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* chi2.vol2.rho_start PARAM */) = omc_logic3_chi2_vol2_Medium_density(threadData, tmp25);
  threadData->lastEquationSolved = 4813;
}

/*
equation index: 4814
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.p_start = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4814};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* chi2.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 4814;
}

/*
equation index: 4815
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.T_start = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4815};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[380]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 4815;
}

/*
equation index: 4816
type: SIMPLE_ASSIGN
chi2.vol2.X_start[1] = chi2.X2_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4816};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* chi2.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[270]] /* chi2.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 4816;
}

/*
equation index: 4817
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.X_start[1] = chi2.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4817};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* chi2.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* chi2.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4817;
}

/*
equation index: 4818
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.hStart = logic3.chi2.vol2.dynBal.Medium.specificEnthalpy_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, chi2.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4818};
  real_array tmp26;
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* chi2.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[388]] /* chi2.vol2.dynBal.hStart PARAM */) = omc_logic3_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */), tmp26);
  threadData->lastEquationSolved = 4818;
}

/*
equation index: 4823
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.rho_start = logic3.chi2.vol2.dynBal.Medium.density(logic3.chi2.vol2.dynBal.Medium.setState_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4823};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[392]] /* chi2.vol2.dynBal.rho_start PARAM */) = omc_logic3_chi2_vol2_dynBal_Medium_density(threadData, omc_logic3_chi2_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[390]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4823;
}

/*
equation index: 4826
type: SIMPLE_ASSIGN
chi2.vol2.V = 30.0 * chi2.m2_flow_nominal / chi2.rho2_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4826};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* chi2.rho2_nominal PARAM */),"chi2.rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 4826;
}

/*
equation index: 4827
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.fluidVolume = chi2.vol2.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4827};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* chi2.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.V PARAM */);
  threadData->lastEquationSolved = 4827;
}

/*
equation index: 4840
type: SIMPLE_ASSIGN
chi2.vol2.m_flow_nominal = chi2.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* chi2.vol2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4840;
}

/*
equation index: 4841
type: SIMPLE_ASSIGN
chi2.vol2.m_flow_small = 1e-4 * abs(chi2.vol2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* chi2.vol2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* chi2.vol2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4841;
}

/*
equation index: 4850
type: SIMPLE_ASSIGN
chi2.vol1.T_start = chi2.T1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* chi2.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 4850;
}

/*
equation index: 4851
type: SIMPLE_ASSIGN
chi2.vol1.state_start.T = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* chi2.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 4851;
}

/*
equation index: 4852
type: SIMPLE_ASSIGN
chi2.vol1.p_start = chi2.p1_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4852};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* chi2.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 4852;
}

/*
equation index: 4853
type: SIMPLE_ASSIGN
chi2.vol1.state_start.p = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4853};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* chi2.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 4853;
}

/*
equation index: 4857
type: SIMPLE_ASSIGN
chi2.vol1.rho_start = logic3.chi2.vol1.Medium.density(chi2.vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4857};
  logic3_chi2_vol1_Medium_ThermodynamicState tmp27;
  logic3_chi2_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp27, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* chi2.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* chi2.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* chi2.vol1.rho_start PARAM */) = omc_logic3_chi2_vol1_Medium_density(threadData, tmp27);
  threadData->lastEquationSolved = 4857;
}

/*
equation index: 4858
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.p_start = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4858};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* chi2.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 4858;
}

/*
equation index: 4859
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.T_start = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4859};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 4859;
}

/*
equation index: 4860
type: SIMPLE_ASSIGN
chi2.vol1.X_start[1] = chi2.X1_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4860};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* chi2.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* chi2.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 4860;
}

/*
equation index: 4861
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.X_start[1] = chi2.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4861};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* chi2.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* chi2.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4861;
}

/*
equation index: 4862
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.hStart = logic3.chi2.vol1.dynBal.Medium.specificEnthalpy_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, chi2.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4862};
  real_array tmp28;
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* chi2.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[363]] /* chi2.vol1.dynBal.hStart PARAM */) = omc_logic3_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */), tmp28);
  threadData->lastEquationSolved = 4862;
}

/*
equation index: 4867
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.rho_start = logic3.chi2.vol1.dynBal.Medium.density(logic3.chi2.vol1.dynBal.Medium.setState_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4867};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* chi2.vol1.dynBal.rho_start PARAM */) = omc_logic3_chi2_vol1_dynBal_Medium_density(threadData, omc_logic3_chi2_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4867;
}

/*
equation index: 4870
type: SIMPLE_ASSIGN
chi2.vol1.V = 30.0 * chi2.m1_flow_nominal / chi2.rho1_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4870};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.rho1_nominal PARAM */),"chi2.rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 4870;
}

/*
equation index: 4871
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.fluidVolume = chi2.vol1.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4871};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* chi2.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.V PARAM */);
  threadData->lastEquationSolved = 4871;
}

/*
equation index: 4884
type: SIMPLE_ASSIGN
chi2.vol1.m_flow_nominal = chi2.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4884};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* chi2.vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4884;
}

/*
equation index: 4885
type: SIMPLE_ASSIGN
chi2.vol1.m_flow_small = 1e-4 * abs(chi2.vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4885};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* chi2.vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* chi2.vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4885;
}

/*
equation index: 4909
type: SIMPLE_ASSIGN
chi2.m2_flow_small = 1e-4 * abs(chi2.m2_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4909};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[281]] /* chi2.m2_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.m2_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4909;
}

/*
equation index: 4910
type: SIMPLE_ASSIGN
chi2.m1_flow_small = 1e-4 * abs(chi2.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[279]] /* chi2.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4910;
}

/*
equation index: 4913
type: SIMPLE_ASSIGN
TCWEntTow2.ratTau = TCWEntTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* TCWEntTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 4913;
}

/*
equation index: 4914
type: SIMPLE_ASSIGN
TCWEntTow2.tauHeaTraInv = if TCWEntTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWEntTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4914};
  modelica_boolean tmp29;
  tmp29 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* TCWEntTow2.tauHeaTraInv PARAM */) = (tmp29?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTra PARAM */),"TCWEntTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 4914;
}

/*
equation index: 4920
type: SIMPLE_ASSIGN
TCWEntTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* TCWEntTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4920;
}

/*
equation index: 4921
type: SIMPLE_ASSIGN
TCWEntTow2.m_flow_small = 1e-4 * TCWEntTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* TCWEntTow2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* TCWEntTow2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4921;
}

/*
equation index: 4923
type: SIMPLE_ASSIGN
TWCLeaTow2.ratTau = TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4923};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* TWCLeaTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* TWCLeaTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 4923;
}

/*
equation index: 4924
type: SIMPLE_ASSIGN
TWCLeaTow2.tauHeaTraInv = if TWCLeaTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4924};
  modelica_boolean tmp30;
  tmp30 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* TWCLeaTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* TWCLeaTow2.tauHeaTraInv PARAM */) = (tmp30?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* TWCLeaTow2.tauHeaTra PARAM */),"TWCLeaTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 4924;
}

/*
equation index: 4930
type: SIMPLE_ASSIGN
TWCLeaTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4930};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* TWCLeaTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4930;
}

/*
equation index: 4931
type: SIMPLE_ASSIGN
TWCLeaTow2.m_flow_small = 1e-4 * TWCLeaTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4931};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* TWCLeaTow2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* TWCLeaTow2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4931;
}

/*
equation index: 4933
type: SIMPLE_ASSIGN
val7.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* val7.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4933;
}

/*
equation index: 4934
type: SIMPLE_ASSIGN
val7.kFixed = 0.003341138439631633 * val7.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4934};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2771]] /* val7.kFixed PARAM */) = (0.003341138439631633) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* val7.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4934;
}

/*
equation index: 4940
type: SIMPLE_ASSIGN
val7.dp_nominal = 89580.0 + val7.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4940};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2768]] /* val7.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* val7.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 4940;
}

/*
equation index: 4941
type: SIMPLE_ASSIGN
val7.dp_nominal_pos = abs(val7.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4941};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2769]] /* val7.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2768]] /* val7.dp_nominal PARAM */));
  threadData->lastEquationSolved = 4941;
}

/*
equation index: 4942
type: SIMPLE_ASSIGN
val7.m_flow_nominal_pos = abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4942};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2774]] /* val7.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* val7.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4942;
}

/*
equation index: 4945
type: SIMPLE_ASSIGN
val7.eta_default = logic3.val7.Medium.dynamicViscosity(val7.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4945};
  logic3_val7_Medium_ThermodynamicState tmp31;
  logic3_val7_Medium_ThermodynamicState_wrap_vars(threadData,tmp31, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* val7.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2779]] /* val7.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2770]] /* val7.eta_default PARAM */) = omc_logic3_val7_Medium_dynamicViscosity(threadData, tmp31);
  threadData->lastEquationSolved = 4945;
}

/*
equation index: 4946
type: SIMPLE_ASSIGN
val7.m_flow_turbulent = val7.deltaM * abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4946};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2776]] /* val7.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* val7.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4946;
}

/*
equation index: 4953
type: SIMPLE_ASSIGN
val7.m_flow_small = 1e-4 * abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4953};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2775]] /* val7.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2773]] /* val7.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4953;
}

/*
equation index: 4955
type: SIMPLE_ASSIGN
expVesChi2.state_start.p = expVesChi2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4955};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* expVesChi2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1352]] /* expVesChi2.p_start PARAM */);
  threadData->lastEquationSolved = 4955;
}

/*
equation index: 4956
type: SIMPLE_ASSIGN
expVesChi2.state_start.T = expVesChi2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4956};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1354]] /* expVesChi2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* expVesChi2.T_start PARAM */);
  threadData->lastEquationSolved = 4956;
}

/*
equation index: 4957
type: SIMPLE_ASSIGN
expVesChi2.rho_start = logic3.expVesChi2.Medium.density(expVesChi2.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_4957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4957};
  logic3_expVesChi2_Medium_ThermodynamicState tmp32;
  logic3_expVesChi2_Medium_ThermodynamicState_wrap_vars(threadData,tmp32, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1355]] /* expVesChi2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1354]] /* expVesChi2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1353]] /* expVesChi2.rho_start PARAM */) = omc_logic3_expVesChi2_Medium_density(threadData, tmp32);
  threadData->lastEquationSolved = 4957;
}

/*
equation index: 5003
type: SIMPLE_ASSIGN
pumCW2.eff.per.speeds_rpm[1] = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5003};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2603]] /* pumCW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2601]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5003;
}

/*
equation index: 5004
type: SIMPLE_ASSIGN
pumCW2.eff.per.constantSpeed_rpm = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5004};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2589]] /* pumCW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2601]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5004;
}

/*
equation index: 5008
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5008};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[790]] /* pumCW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5008;
}

/*
equation index: 5009
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.P[1] = pumCW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5009};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2594]] /* pumCW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2629]] /* pumCW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5009;
}

/*
equation index: 5010
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.V_flow[1] = pumCW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5010};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2595]] /* pumCW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* pumCW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5010;
}

/*
equation index: 5011
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.eta[1] = pumCW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5011};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5011;
}

/*
equation index: 5012
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.V_flow[1] = pumCW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5012};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2592]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2627]] /* pumCW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5012;
}

/*
equation index: 5013
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.eta[1] = pumCW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5013};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2591]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2626]] /* pumCW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5013;
}

/*
equation index: 5014
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2590]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2625]] /* pumCW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5014;
}

/*
equation index: 5028
type: SIMPLE_ASSIGN
pumCW2.heaDis.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5028};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[796]] /* pumCW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5028;
}

/*
equation index: 5034
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5034};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* pumCW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5034;
}

/*
equation index: 5035
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_start = pumCW2.m_flow_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5035};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* pumCW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumCW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5035;
}

/*
equation index: 5038
type: SIMPLE_ASSIGN
pumCW2.vol.tau = pumCW2.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5038};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* pumCW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2651]] /* pumCW2.tau PARAM */);
  threadData->lastEquationSolved = 5038;
}

/*
equation index: 5039
type: SIMPLE_ASSIGN
pumCW2.vol.V_nominal = 12.5601875 * pumCW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* pumCW2.vol.V_nominal PARAM */) = (12.5601875) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2678]] /* pumCW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 5039;
}

/*
equation index: 5042
type: SIMPLE_ASSIGN
pumCW2.vol.T_start = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* pumCW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2554]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 5042;
}

/*
equation index: 5043
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.T = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* pumCW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5043;
}

/*
equation index: 5044
type: SIMPLE_ASSIGN
pumCW2.vol.p_start = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5044};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2671]] /* pumCW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 5044;
}

/*
equation index: 5045
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.p = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5045};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* pumCW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2671]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5045;
}

/*
equation index: 5049
type: SIMPLE_ASSIGN
pumCW2.vol.rho_start = logic3.pumCW2.vol.Medium.density(pumCW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5049};
  logic3_pumCW2_vol_Medium_ThermodynamicState tmp33;
  logic3_pumCW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2677]] /* pumCW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2676]] /* pumCW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2673]] /* pumCW2.vol.rho_start PARAM */) = omc_logic3_pumCW2_vol_Medium_density(threadData, tmp33);
  threadData->lastEquationSolved = 5049;
}

/*
equation index: 5050
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.p_start = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5050};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2671]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5050;
}

/*
equation index: 5051
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.T_start = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5051};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* pumCW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5051;
}

/*
equation index: 5052
type: SIMPLE_ASSIGN
pumCW2.vol.X_start[1] = pumCW2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5052};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumCW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2556]] /* pumCW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5052;
}

/*
equation index: 5053
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.X_start[1] = pumCW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5053};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2658]] /* pumCW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumCW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5053;
}

/*
equation index: 5054
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.hStart = logic3.pumCW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, pumCW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5054};
  real_array tmp34;
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2658]] /* pumCW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2661]] /* pumCW2.vol.dynBal.hStart PARAM */) = omc_logic3_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* pumCW2.vol.dynBal.T_start PARAM */), tmp34);
  threadData->lastEquationSolved = 5054;
}

/*
equation index: 5059
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.rho_start = logic3.pumCW2.vol.dynBal.Medium.density(logic3.pumCW2.vol.dynBal.Medium.setState_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5059};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* pumCW2.vol.dynBal.rho_start PARAM */) = omc_logic3_pumCW2_vol_dynBal_Medium_density(threadData, omc_logic3_pumCW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* pumCW2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5059;
}

/*
equation index: 5062
type: SIMPLE_ASSIGN
pumCW2.vol.V = pumCW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5062};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumCW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2654]] /* pumCW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5062;
}

/*
equation index: 5063
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.fluidVolume = pumCW2.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5063};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2660]] /* pumCW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumCW2.vol.V PARAM */);
  threadData->lastEquationSolved = 5063;
}

/*
equation index: 5076
type: SIMPLE_ASSIGN
pumCW2.vol.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5076};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* pumCW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5076;
}

/*
equation index: 5085
type: SIMPLE_ASSIGN
pumCW2.sta_start.p = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumCW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 5085;
}

/*
equation index: 5086
type: SIMPLE_ASSIGN
pumCW2.sta_start.T = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumCW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2554]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 5086;
}

/*
equation index: 5087
type: SIMPLE_ASSIGN
pumCW2.h_outflow_start = logic3.pumCW2.Medium.specificEnthalpy(pumCW2.sta_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5087};
  logic3_pumCW2_Medium_ThermodynamicState tmp35;
  logic3_pumCW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp35, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumCW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2648]] /* pumCW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2615]] /* pumCW2.h_outflow_start PARAM */) = omc_logic3_pumCW2_Medium_specificEnthalpy(threadData, tmp35);
  threadData->lastEquationSolved = 5087;
}

/*
equation index: 5099
type: SIMPLE_ASSIGN
pumCW2.stageInputs[1] = pumCW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5099};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumCW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2621]] /* pumCW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5099;
}

/*
equation index: 5100
type: SIMPLE_ASSIGN
pumCW2.constInput = pumCW2.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5100};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2560]] /* pumCW2.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2561]] /* pumCW2.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 5100;
}

/*
equation index: 5103
type: SIMPLE_ASSIGN
pumCW2.per.speeds_rpm[1] = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* pumCW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2636]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5103;
}

/*
equation index: 5104
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed_rpm = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2624]] /* pumCW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2636]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5104;
}

/*
equation index: 5105
type: SIMPLE_ASSIGN
pumCW2.per.speeds[1] = pumCW2.per.speeds_rpm[1] / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2637]] /* pumCW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2638]] /* pumCW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2636]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5105;
}

/*
equation index: 5106
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed = pumCW2.per.constantSpeed_rpm / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2623]] /* pumCW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2624]] /* pumCW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2636]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5106;
}

/*
equation index: 5122
type: SIMPLE_ASSIGN
cooTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2165]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5122;
}

/*
equation index: 5123
type: SIMPLE_ASSIGN
cooTow2.mRef_flow = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1163]] /* cooTow2.mRef_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5123;
}

/*
equation index: 5128
type: SIMPLE_ASSIGN
cooTow2.rho_default = logic3.cooTow2.Medium.density(cooTow2.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5128};
  logic3_cooTow2_Medium_ThermodynamicState tmp36;
  logic3_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp36, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1185]] /* cooTow2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* cooTow2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.rho_default PARAM */) = omc_logic3_cooTow2_Medium_density(threadData, tmp36);
  threadData->lastEquationSolved = 5128;
}

/*
equation index: 5131
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_nominal = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* cooTow2.preDro.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5131;
}

/*
equation index: 5132
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_nominal_pos = abs(cooTow2.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* cooTow2.preDro.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5132;
}

/*
equation index: 5133
type: SIMPLE_ASSIGN
cooTow2.preDro.k = 0.0030932931235336655 * cooTow2.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1174]] /* cooTow2.preDro.k PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 5133;
}

/*
equation index: 5138
type: SIMPLE_ASSIGN
cooTow2.preDro.eta_default = logic3.cooTow2.preDro.Medium.dynamicViscosity(cooTow2.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5138};
  logic3_cooTow2_preDro_Medium_ThermodynamicState tmp37;
  logic3_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp37, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1180]] /* cooTow2.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1179]] /* cooTow2.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* cooTow2.preDro.eta_default PARAM */) = omc_logic3_cooTow2_preDro_Medium_dynamicViscosity(threadData, tmp37);
  threadData->lastEquationSolved = 5138;
}

/*
equation index: 5139
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_turbulent = 0.1 * cooTow2.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* cooTow2.preDro.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 5139;
}

/*
equation index: 5147
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_small = 1e-4 * abs(cooTow2.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* cooTow2.preDro.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1175]] /* cooTow2.preDro.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5147;
}

/*
equation index: 5151
type: SIMPLE_ASSIGN
cooTow2.vol.T_start = cooTow2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1139]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 5151;
}

/*
equation index: 5152
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.T = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* cooTow2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5152;
}

/*
equation index: 5153
type: SIMPLE_ASSIGN
cooTow2.vol.p_start = cooTow2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 5153;
}

/*
equation index: 5154
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.p = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5154};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* cooTow2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5154;
}

/*
equation index: 5158
type: SIMPLE_ASSIGN
cooTow2.vol.rho_start = logic3.cooTow2.vol.Medium.density(cooTow2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5158};
  logic3_cooTow2_vol_Medium_ThermodynamicState tmp38;
  logic3_cooTow2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp38, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1213]] /* cooTow2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1212]] /* cooTow2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1209]] /* cooTow2.vol.rho_start PARAM */) = omc_logic3_cooTow2_vol_Medium_density(threadData, tmp38);
  threadData->lastEquationSolved = 5158;
}

/*
equation index: 5159
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.p_start = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5159};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* cooTow2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1207]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5159;
}

/*
equation index: 5160
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.T_start = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* cooTow2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5160;
}

/*
equation index: 5161
type: SIMPLE_ASSIGN
cooTow2.vol.X_start[1] = cooTow2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* cooTow2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1140]] /* cooTow2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5161;
}

/*
equation index: 5162
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.X_start[1] = cooTow2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* cooTow2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1191]] /* cooTow2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5162;
}

/*
equation index: 5163
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.hStart = logic3.cooTow2.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, cooTow2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5163};
  real_array tmp39;
  real_array_create(&tmp39, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* cooTow2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1197]] /* cooTow2.vol.dynBal.hStart PARAM */) = omc_logic3_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* cooTow2.vol.dynBal.T_start PARAM */), tmp39);
  threadData->lastEquationSolved = 5163;
}

/*
equation index: 5168
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.rho_start = logic3.cooTow2.vol.dynBal.Medium.density(logic3.cooTow2.vol.dynBal.Medium.setState_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1201]] /* cooTow2.vol.dynBal.rho_start PARAM */) = omc_logic3_cooTow2_vol_dynBal_Medium_density(threadData, omc_logic3_cooTow2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1193]] /* cooTow2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5168;
}

/*
equation index: 5171
type: SIMPLE_ASSIGN
cooTow2.vol.V = cooTow2.m_flow_nominal * cooTow2.tau / cooTow2.rho_default
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* cooTow2.vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.m_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1188]] /* cooTow2.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.rho_default PARAM */),"cooTow2.rho_default",equationIndexes));
  threadData->lastEquationSolved = 5171;
}

/*
equation index: 5172
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.fluidVolume = cooTow2.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1196]] /* cooTow2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* cooTow2.vol.V PARAM */);
  threadData->lastEquationSolved = 5172;
}

/*
equation index: 5185
type: SIMPLE_ASSIGN
cooTow2.vol.m_flow_nominal = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* cooTow2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5185;
}

/*
equation index: 5186
type: SIMPLE_ASSIGN
cooTow2.vol.m_flow_small = 1e-4 * abs(cooTow2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5186};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* cooTow2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* cooTow2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5186;
}

/*
equation index: 5205
type: SIMPLE_ASSIGN
cooTow2.m_flow_small = 1e-4 * abs(cooTow2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5205};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1165]] /* cooTow2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1164]] /* cooTow2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5205;
}

/*
equation index: 5207
type: SIMPLE_ASSIGN
TCHWChi2Out.ratTau = TCHWChi2Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5207};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* TCHWChi2Out.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 5207;
}

/*
equation index: 5208
type: SIMPLE_ASSIGN
TCHWChi2Out.tauHeaTraInv = if TCHWChi2Out.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi2Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5208};
  modelica_boolean tmp40;
  tmp40 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TCHWChi2Out.tauHeaTraInv PARAM */) = (tmp40?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */),"TCHWChi2Out.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 5208;
}

/*
equation index: 5214
type: SIMPLE_ASSIGN
TCHWChi2Out.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TCHWChi2Out.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5214;
}

/*
equation index: 5215
type: SIMPLE_ASSIGN
TCHWChi2Out.m_flow_small = 1e-4 * TCHWChi2Out.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* TCHWChi2Out.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TCHWChi2Out.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5215;
}

/*
equation index: 5217
type: SIMPLE_ASSIGN
TCHWChi2In.ratTau = TCHWChi2In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* TCHWChi2In.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 5217;
}

/*
equation index: 5218
type: SIMPLE_ASSIGN
TCHWChi2In.tauHeaTraInv = if TCHWChi2In.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi2In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5218};
  modelica_boolean tmp41;
  tmp41 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* TCHWChi2In.tauHeaTraInv PARAM */) = (tmp41?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */),"TCHWChi2In.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 5218;
}

/*
equation index: 5224
type: SIMPLE_ASSIGN
TCHWChi2In.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* TCHWChi2In.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5224;
}

/*
equation index: 5225
type: SIMPLE_ASSIGN
TCHWChi2In.m_flow_small = 1e-4 * TCHWChi2In.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* TCHWChi2In.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* TCHWChi2In.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5225;
}

/*
equation index: 5227
type: SIMPLE_ASSIGN
val8.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* val8.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2164]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5227;
}

/*
equation index: 5228
type: SIMPLE_ASSIGN
val8.kFixed = 0.0030932931235336655 * val8.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5228};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* val8.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* val8.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5228;
}

/*
equation index: 5234
type: SIMPLE_ASSIGN
val8.dp_nominal = 104510.0 + val8.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5234};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* val8.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* val8.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5234;
}

/*
equation index: 5235
type: SIMPLE_ASSIGN
val8.dp_nominal_pos = abs(val8.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5235};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2792]] /* val8.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* val8.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5235;
}

/*
equation index: 5236
type: SIMPLE_ASSIGN
val8.m_flow_nominal_pos = abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5236};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2797]] /* val8.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* val8.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5236;
}

/*
equation index: 5239
type: SIMPLE_ASSIGN
val8.eta_default = logic3.val8.Medium.dynamicViscosity(val8.sta_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5239};
  logic3_val8_Medium_ThermodynamicState tmp42;
  logic3_val8_Medium_ThermodynamicState_wrap_vars(threadData,tmp42, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* val8.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2802]] /* val8.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2793]] /* val8.eta_default PARAM */) = omc_logic3_val8_Medium_dynamicViscosity(threadData, tmp42);
  threadData->lastEquationSolved = 5239;
}

/*
equation index: 5240
type: SIMPLE_ASSIGN
val8.m_flow_turbulent = val8.deltaM * abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2799]] /* val8.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* val8.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5240;
}

/*
equation index: 5247
type: SIMPLE_ASSIGN
val8.m_flow_small = 1e-4 * abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5247};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2798]] /* val8.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2796]] /* val8.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5247;
}

/*
equation index: 5289
type: SIMPLE_ASSIGN
pumCHW2.eff.per.speeds_rpm[1] = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2347]] /* pumCHW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2345]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5289;
}

/*
equation index: 5290
type: SIMPLE_ASSIGN
pumCHW2.eff.per.constantSpeed_rpm = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2333]] /* pumCHW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2345]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5290;
}

/*
equation index: 5294
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5294};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[712]] /* pumCHW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[721]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5294;
}

/*
equation index: 5295
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.P[1] = pumCHW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5295};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2338]] /* pumCHW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2373]] /* pumCHW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5295;
}

/*
equation index: 5296
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.V_flow[1] = pumCHW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5296};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2339]] /* pumCHW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2374]] /* pumCHW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5296;
}

/*
equation index: 5297
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.eta[1] = pumCHW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5297};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5297;
}

/*
equation index: 5298
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.V_flow[1] = pumCHW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5298};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2336]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2371]] /* pumCHW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5298;
}

/*
equation index: 5299
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.eta[1] = pumCHW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5299};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2335]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2370]] /* pumCHW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5299;
}

/*
equation index: 5300
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2334]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2369]] /* pumCHW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5300;
}

/*
equation index: 5314
type: SIMPLE_ASSIGN
pumCHW2.heaDis.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5314};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[718]] /* pumCHW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[721]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5314;
}

/*
equation index: 5320
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5320};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCHW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2363]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5320;
}

/*
equation index: 5321
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_start = pumCHW2.m_flow_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5321};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* pumCHW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2364]] /* pumCHW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5321;
}

/*
equation index: 5324
type: SIMPLE_ASSIGN
pumCHW2.vol.tau = pumCHW2.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCHW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2395]] /* pumCHW2.tau PARAM */);
  threadData->lastEquationSolved = 5324;
}

/*
equation index: 5325
type: SIMPLE_ASSIGN
pumCHW2.vol.V_nominal = 25.120375 * pumCHW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2398]] /* pumCHW2.vol.V_nominal PARAM */) = (25.120375) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2422]] /* pumCHW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 5325;
}

/*
equation index: 5328
type: SIMPLE_ASSIGN
pumCHW2.vol.T_start = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5328};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* pumCHW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 5328;
}

/*
equation index: 5329
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.T = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5329};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCHW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5329;
}

/*
equation index: 5330
type: SIMPLE_ASSIGN
pumCHW2.vol.p_start = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5330};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCHW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2366]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 5330;
}

/*
equation index: 5331
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.p = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5331};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* pumCHW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5331;
}

/*
equation index: 5335
type: SIMPLE_ASSIGN
pumCHW2.vol.rho_start = logic3.pumCHW2.vol.Medium.density(pumCHW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5335};
  logic3_pumCHW2_vol_Medium_ThermodynamicState tmp43;
  logic3_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp43, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2421]] /* pumCHW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2420]] /* pumCHW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2417]] /* pumCHW2.vol.rho_start PARAM */) = omc_logic3_pumCHW2_vol_Medium_density(threadData, tmp43);
  threadData->lastEquationSolved = 5335;
}

/*
equation index: 5336
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.p_start = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5336};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2415]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5336;
}

/*
equation index: 5337
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.T_start = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* pumCHW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5337;
}

/*
equation index: 5338
type: SIMPLE_ASSIGN
pumCHW2.vol.X_start[1] = pumCHW2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* pumCHW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2300]] /* pumCHW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5338;
}

/*
equation index: 5339
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.X_start[1] = pumCHW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2402]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* pumCHW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5339;
}

/*
equation index: 5340
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.hStart = logic3.pumCHW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, pumCHW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5340};
  real_array tmp44;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2402]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2405]] /* pumCHW2.vol.dynBal.hStart PARAM */) = omc_logic3_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* pumCHW2.vol.dynBal.T_start PARAM */), tmp44);
  threadData->lastEquationSolved = 5340;
}

/*
equation index: 5345
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.rho_start = logic3.pumCHW2.vol.dynBal.Medium.density(logic3.pumCHW2.vol.dynBal.Medium.setState_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5345};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* pumCHW2.vol.dynBal.rho_start PARAM */) = omc_logic3_pumCHW2_vol_dynBal_Medium_density(threadData, omc_logic3_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* pumCHW2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5345;
}

/*
equation index: 5348
type: SIMPLE_ASSIGN
pumCHW2.vol.V = pumCHW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCHW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2398]] /* pumCHW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5348;
}

/*
equation index: 5349
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.fluidVolume = pumCHW2.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2404]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCHW2.vol.V PARAM */);
  threadData->lastEquationSolved = 5349;
}

/*
equation index: 5362
type: SIMPLE_ASSIGN
pumCHW2.vol.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2414]] /* pumCHW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2363]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5362;
}

/*
equation index: 5371
type: SIMPLE_ASSIGN
pumCHW2.sta_start.p = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCHW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2366]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 5371;
}

/*
equation index: 5372
type: SIMPLE_ASSIGN
pumCHW2.sta_start.T = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* pumCHW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2298]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 5372;
}

/*
equation index: 5373
type: SIMPLE_ASSIGN
pumCHW2.h_outflow_start = logic3.pumCHW2.Medium.specificEnthalpy(pumCHW2.sta_start)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5373};
  logic3_pumCHW2_Medium_ThermodynamicState tmp45;
  logic3_pumCHW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp45, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCHW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2392]] /* pumCHW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* pumCHW2.h_outflow_start PARAM */) = omc_logic3_pumCHW2_Medium_specificEnthalpy(threadData, tmp45);
  threadData->lastEquationSolved = 5373;
}

/*
equation index: 5385
type: SIMPLE_ASSIGN
pumCHW2.stageInputs[1] = pumCHW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCHW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* pumCHW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5385;
}

/*
equation index: 5386
type: SIMPLE_ASSIGN
pumCHW2.constInput = pumCHW2.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2304]] /* pumCHW2.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2305]] /* pumCHW2.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 5386;
}

/*
equation index: 5389
type: SIMPLE_ASSIGN
pumCHW2.per.speeds_rpm[1] = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* pumCHW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2380]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5389;
}

/*
equation index: 5390
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed_rpm = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* pumCHW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2380]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5390;
}

/*
equation index: 5391
type: SIMPLE_ASSIGN
pumCHW2.per.speeds[1] = pumCHW2.per.speeds_rpm[1] / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2381]] /* pumCHW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2382]] /* pumCHW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2380]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5391;
}

/*
equation index: 5392
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed = pumCHW2.per.constantSpeed_rpm / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2367]] /* pumCHW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2368]] /* pumCHW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2380]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5392;
}

/*
equation index: 5415
type: SIMPLE_ASSIGN
junOut.mDyn_flow_nominal = 0.3333333333333333 * (abs(junOut.m_flow_nominal[1]) + abs(junOut.m_flow_nominal[2]) + abs(junOut.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1969]] /* junOut.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1971]] /* junOut.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1972]] /* junOut.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1973]] /* junOut.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 5415;
}

/*
equation index: 5416
type: SIMPLE_ASSIGN
junOut.vol.m_flow_nominal = junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5416};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2047]] /* junOut.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1969]] /* junOut.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5416;
}

/*
equation index: 5417
type: SIMPLE_ASSIGN
junOut.vol.tau = junOut.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5417};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2060]] /* junOut.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junOut.tau PARAM */);
  threadData->lastEquationSolved = 5417;
}

/*
equation index: 5418
type: SIMPLE_ASSIGN
junOut.vol.V_nominal = 0.8333333333333334 * junOut.vol.m_flow_nominal * junOut.vol.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2027]] /* junOut.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2047]] /* junOut.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2060]] /* junOut.vol.tau PARAM */)));
  threadData->lastEquationSolved = 5418;
}

/*
equation index: 5431
type: SIMPLE_ASSIGN
junOut.vol.T_start = junOut.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junOut.T_start PARAM */);
  threadData->lastEquationSolved = 5431;
}

/*
equation index: 5432
type: SIMPLE_ASSIGN
junOut.vol.dynBal.T_start = junOut.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5432};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junOut.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5432;
}

/*
equation index: 5433
type: SIMPLE_ASSIGN
junOut.vol.X_start[1] = junOut.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5433};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junOut.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1963]] /* junOut.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5433;
}

/*
equation index: 5434
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[1] = junOut.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5434};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2032]] /* junOut.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junOut.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5434;
}

/*
equation index: 5435
type: SIMPLE_ASSIGN
junOut.vol.dynBal.hStart = 1006.0 * (-273.15 + junOut.vol.dynBal.T_start) * (1.0 - junOut.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junOut.vol.dynBal.T_start)) * junOut.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5435};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2036]] /* junOut.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junOut.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2032]] /* junOut.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junOut.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2032]] /* junOut.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5435;
}

/*
equation index: 5443
type: SIMPLE_ASSIGN
junOut.vol.p_start = junOut.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5443};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2049]] /* junOut.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* junOut.p_start PARAM */);
  threadData->lastEquationSolved = 5443;
}

/*
equation index: 5444
type: SIMPLE_ASSIGN
junOut.vol.dynBal.p_start = junOut.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2038]] /* junOut.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2049]] /* junOut.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5444;
}

/*
equation index: 5445
type: SIMPLE_ASSIGN
junOut.vol.dynBal.rho_start = 1.1843079200592153e-5 * junOut.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5445};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junOut.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2038]] /* junOut.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5445;
}

/*
equation index: 5448
type: SIMPLE_ASSIGN
junOut.vol.V = junOut.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5448};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* junOut.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2027]] /* junOut.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5448;
}

/*
equation index: 5449
type: SIMPLE_ASSIGN
junOut.vol.dynBal.fluidVolume = junOut.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5449};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2035]] /* junOut.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* junOut.vol.V PARAM */);
  threadData->lastEquationSolved = 5449;
}

/*
equation index: 5457
type: SIMPLE_ASSIGN
junOut.vol.X_start[2] = junOut.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* junOut.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junOut.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5457;
}

/*
equation index: 5458
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[2] = junOut.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2033]] /* junOut.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* junOut.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5458;
}

/*
equation index: 5464
type: SIMPLE_ASSIGN
junOut.vol.m_flow_small = 1e-4 * abs(junOut.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5464};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2048]] /* junOut.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2047]] /* junOut.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5464;
}

/*
equation index: 5477
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal = junOut.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2016]] /* junOut.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1973]] /* junOut.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 5477;
}

/*
equation index: 5478
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal_pos = abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5478};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2017]] /* junOut.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2016]] /* junOut.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5478;
}

/*
equation index: 5480
type: SIMPLE_ASSIGN
junOut.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2014]] /* junOut.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junOut.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5480;
}

/*
equation index: 5492
type: SIMPLE_ASSIGN
junOut.res3.m_flow_small = 1e-4 * abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5492};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junOut.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2016]] /* junOut.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5492;
}

/*
equation index: 5499
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal = junOut.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5499};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* junOut.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1972]] /* junOut.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 5499;
}

/*
equation index: 5500
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal_pos = abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2001]] /* junOut.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* junOut.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5500;
}

/*
equation index: 5502
type: SIMPLE_ASSIGN
junOut.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1998]] /* junOut.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2004]] /* junOut.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5502;
}

/*
equation index: 5514
type: SIMPLE_ASSIGN
junOut.res2.m_flow_small = 1e-4 * abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2002]] /* junOut.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2000]] /* junOut.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5514;
}

/*
equation index: 5521
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal = junOut.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5521};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* junOut.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1971]] /* junOut.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 5521;
}

/*
equation index: 5522
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal_pos = abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5522};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1985]] /* junOut.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* junOut.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5522;
}

/*
equation index: 5524
type: SIMPLE_ASSIGN
junOut.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5524};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1982]] /* junOut.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1988]] /* junOut.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5524;
}

/*
equation index: 5536
type: SIMPLE_ASSIGN
junOut.res1.m_flow_small = 1e-4 * abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5536};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1986]] /* junOut.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1984]] /* junOut.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5536;
}

/*
equation index: 5538
type: SIMPLE_ASSIGN
junOut.m_flow_small = 1e-4 * junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5538};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1974]] /* junOut.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1969]] /* junOut.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5538;
}

/*
equation index: 5568
type: SIMPLE_ASSIGN
junRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junRet.m_flow_nominal[1]) + abs(junRet.m_flow_nominal[2]) + abs(junRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2068]] /* junRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2070]] /* junRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2071]] /* junRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2072]] /* junRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 5568;
}

/*
equation index: 5569
type: SIMPLE_ASSIGN
junRet.vol.m_flow_nominal = junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5569};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2146]] /* junRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2068]] /* junRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5569;
}

/*
equation index: 5570
type: SIMPLE_ASSIGN
junRet.vol.tau = junRet.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5570};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2159]] /* junRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* junRet.tau PARAM */);
  threadData->lastEquationSolved = 5570;
}

/*
equation index: 5571
type: SIMPLE_ASSIGN
junRet.vol.V_nominal = 0.8333333333333334 * junRet.vol.m_flow_nominal * junRet.vol.tau
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5571};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2126]] /* junRet.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2146]] /* junRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2159]] /* junRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 5571;
}

/*
equation index: 5584
type: SIMPLE_ASSIGN
junRet.vol.T_start = junRet.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5584};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2061]] /* junRet.T_start PARAM */);
  threadData->lastEquationSolved = 5584;
}

/*
equation index: 5585
type: SIMPLE_ASSIGN
junRet.vol.dynBal.T_start = junRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5585};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* junRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5585;
}

/*
equation index: 5586
type: SIMPLE_ASSIGN
junRet.vol.X_start[1] = junRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5586};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2127]] /* junRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2062]] /* junRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5586;
}

/*
equation index: 5587
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[1] = junRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5587};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* junRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2127]] /* junRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5587;
}

/*
equation index: 5588
type: SIMPLE_ASSIGN
junRet.vol.dynBal.hStart = 1006.0 * (-273.15 + junRet.vol.dynBal.T_start) * (1.0 - junRet.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junRet.vol.dynBal.T_start)) * junRet.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5588};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2135]] /* junRet.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* junRet.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* junRet.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* junRet.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2131]] /* junRet.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5588;
}

/*
equation index: 5596
type: SIMPLE_ASSIGN
junRet.vol.p_start = junRet.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5596};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2148]] /* junRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2074]] /* junRet.p_start PARAM */);
  threadData->lastEquationSolved = 5596;
}

/*
equation index: 5597
type: SIMPLE_ASSIGN
junRet.vol.dynBal.p_start = junRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2137]] /* junRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2148]] /* junRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5597;
}

/*
equation index: 5598
type: SIMPLE_ASSIGN
junRet.vol.dynBal.rho_start = 1.1843079200592153e-5 * junRet.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5598};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2139]] /* junRet.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2137]] /* junRet.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5598;
}

/*
equation index: 5601
type: SIMPLE_ASSIGN
junRet.vol.V = junRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2125]] /* junRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2126]] /* junRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5601;
}

/*
equation index: 5602
type: SIMPLE_ASSIGN
junRet.vol.dynBal.fluidVolume = junRet.vol.V
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5602};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2134]] /* junRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2125]] /* junRet.vol.V PARAM */);
  threadData->lastEquationSolved = 5602;
}

/*
equation index: 5610
type: SIMPLE_ASSIGN
junRet.vol.X_start[2] = junRet.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* junRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* junRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5610;
}

/*
equation index: 5611
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[2] = junRet.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* junRet.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* junRet.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5611;
}

/*
equation index: 5617
type: SIMPLE_ASSIGN
junRet.vol.m_flow_small = 1e-4 * abs(junRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2147]] /* junRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2146]] /* junRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5617;
}

/*
equation index: 5630
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal = junRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* junRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2072]] /* junRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 5630;
}

/*
equation index: 5631
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal_pos = abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5631};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2116]] /* junRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* junRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5631;
}

/*
equation index: 5633
type: SIMPLE_ASSIGN
junRet.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2113]] /* junRet.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2119]] /* junRet.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5633;
}

/*
equation index: 5645
type: SIMPLE_ASSIGN
junRet.res3.m_flow_small = 1e-4 * abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5645};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2117]] /* junRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2115]] /* junRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5645;
}

/*
equation index: 5652
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal = junRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5652};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* junRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2071]] /* junRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 5652;
}

/*
equation index: 5653
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal_pos = abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5653};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2100]] /* junRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* junRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5653;
}

/*
equation index: 5655
type: SIMPLE_ASSIGN
junRet.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2097]] /* junRet.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2103]] /* junRet.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5655;
}

/*
equation index: 5667
type: SIMPLE_ASSIGN
junRet.res2.m_flow_small = 1e-4 * abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5667};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2101]] /* junRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2099]] /* junRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5667;
}

/*
equation index: 5674
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal = junRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5674};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2083]] /* junRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2070]] /* junRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 5674;
}

/*
equation index: 5675
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal_pos = abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5675};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2084]] /* junRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2083]] /* junRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5675;
}

/*
equation index: 5677
type: SIMPLE_ASSIGN
junRet.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2081]] /* junRet.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2087]] /* junRet.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5677;
}

/*
equation index: 5689
type: SIMPLE_ASSIGN
junRet.res1.m_flow_small = 1e-4 * abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2085]] /* junRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2083]] /* junRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5689;
}

/*
equation index: 5691
type: SIMPLE_ASSIGN
junRet.m_flow_small = 1e-4 * junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2073]] /* junRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2068]] /* junRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5691;
}

/*
equation index: 5702
type: SIMPLE_ASSIGN
damOA.cL[1] = (log(damOA.k0) + (-damOA.b) - damOA.a) / damOA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5702};
  modelica_real tmp46;
  modelica_real tmp47;
  tmp46 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* damOA.k0 PARAM */);
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
  }tmp47 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damOA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* damOA.cL[1] PARAM */) = DIVISION_SIM(log(tmp46) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */),(tmp47 * tmp47),"damOA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5702;
}

/*
equation index: 5703
type: SIMPLE_ASSIGN
damOA.cL[2] = (2.0 * damOA.b + (-2.0) * log(damOA.k0) + 2.0 * damOA.a - damOA.b * damOA.yL) / damOA.yL
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5703};
  modelica_real tmp48;
  tmp48 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* damOA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */)) + (-2.0) * (log(tmp48)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damOA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damOA.yL PARAM */),"damOA.yL",equationIndexes);
  threadData->lastEquationSolved = 5703;
}

/*
equation index: 5704
type: SIMPLE_ASSIGN
damOA.cL[3] = log(damOA.k0)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5704};
  modelica_real tmp49;
  tmp49 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1271]] /* damOA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* damOA.cL[3] PARAM */) = log(tmp49);
  threadData->lastEquationSolved = 5704;
}

/*
equation index: 5705
type: SIMPLE_ASSIGN
damOA.cU[1] = (log(damOA.k1) - damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5705};
  modelica_real tmp50;
  modelica_real tmp51;
  tmp50 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.k1 PARAM */);
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
  }tmp51 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* damOA.cU[1] PARAM */) = DIVISION_SIM(log(tmp50) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */),1.0 + (tmp51 * tmp51) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 5705;
}

/*
equation index: 5706
type: SIMPLE_ASSIGN
damOA.cU[2] = (damOA.b * damOA.yU ^ 2.0 + 2.0 * log(damOA.k1) * damOA.yU + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b) / (-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5706};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  tmp52 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */);
  tmp53 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.k1 PARAM */);
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
  }tmp54 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* damOA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */)) * ((tmp52 * tmp52)) + (2.0) * ((log(tmp53)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */)) - ((tmp54 * tmp54)),"-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5706;
}

/*
equation index: 5707
type: SIMPLE_ASSIGN
damOA.cU[3] = (damOA.yU ^ 2.0 * (log(damOA.k1) + damOA.b) + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b + damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5707};
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  tmp55 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */);
  tmp56 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.k1 PARAM */);
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
  }tmp57 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.cU[3] PARAM */) = DIVISION_SIM(((tmp55 * tmp55)) * (log(tmp56) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */),1.0 + (tmp57 * tmp57) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 5707;
}

/*
equation index: 5708
type: SIMPLE_ASSIGN
damOA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5708};
  real_array tmp58;
  real_array tmp59;
  real_array_create(&tmp58, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp59, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* damOA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.b PARAM */), tmp58, tmp59, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1287]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1288]] /* damOA.yU PARAM */));
  threadData->lastEquationSolved = 5708;
}

/*
equation index: 5710
type: SIMPLE_ASSIGN
damOA.rho_default = 1.1843079200592153e-5 * damOA.sta_default.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5710};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1285]] /* damOA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5710;
}

/*
equation index: 5711
type: SIMPLE_ASSIGN
damOA.A = 55.989691542288554 / (damOA.v_nominal * damOA.rho_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* damOA.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1286]] /* damOA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.rho_default PARAM */)),"damOA.v_nominal * damOA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5711;
}

/*
equation index: 5712
type: SIMPLE_ASSIGN
damOA.kDam_default = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / damOA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5712};
  modelica_real tmp60;
  tmp60 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.rho_default PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* damOA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp60)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* damOA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* damOA.kThetaSqRt_default PARAM */),"damOA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5712;
}

/*
equation index: 5713
type: SIMPLE_ASSIGN
damOA.facRouDuc = if damOA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5713};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* damOA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[373]] /* damOA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5713;
}

/*
equation index: 5719
type: SIMPLE_ASSIGN
damOA.dp_nominal = (55.989691542288554 / damOA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5719};
  modelica_real tmp61;
  tmp61 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* damOA.kDam_default PARAM */),"damOA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* damOA.dp_nominal PARAM */) = (tmp61 * tmp61);
  threadData->lastEquationSolved = 5719;
}

/*
equation index: 5720
type: SIMPLE_ASSIGN
damOA.dp_nominal_pos = abs(damOA.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5720};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* damOA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1267]] /* damOA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5720;
}

/*
equation index: 5723
type: SIMPLE_ASSIGN
damOA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damOA.sta_default.T
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* damOA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1282]] /* damOA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5723;
}

/*
equation index: 5726
type: SIMPLE_ASSIGN
damOA.m_flow_turbulent = if damOA.use_deltaM then damOA.deltaM * 55.989691542288554 else damOA.eta_default * damOA.ReC * sqrt(damOA.A) * damOA.facRouDuc
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5726};
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  tmp63 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[376]] /* damOA.use_deltaM PARAM */);
  if(tmp63)
  {
    tmp64 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* damOA.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp62 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* damOA.A PARAM */);
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
    tmp64 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1269]] /* damOA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* damOA.ReC PARAM */))) * (sqrt(tmp62))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1270]] /* damOA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1279]] /* damOA.m_flow_turbulent PARAM */) = tmp64;
  threadData->lastEquationSolved = 5726;
}

/*
equation index: 5736
type: SIMPLE_ASSIGN
damEA.cL[1] = (log(damEA.k0) + (-damEA.b) - damEA.a) / damEA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5736};
  modelica_real tmp65;
  modelica_real tmp66;
  tmp65 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1235]] /* damEA.k0 PARAM */);
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
  }tmp66 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damEA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* damEA.cL[1] PARAM */) = DIVISION_SIM(log(tmp65) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */),(tmp66 * tmp66),"damEA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5736;
}

/*
equation index: 5737
type: SIMPLE_ASSIGN
damEA.cL[2] = (2.0 * damEA.b + (-2.0) * log(damEA.k0) + 2.0 * damEA.a - damEA.b * damEA.yL) / damEA.yL
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5737};
  modelica_real tmp67;
  tmp67 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1235]] /* damEA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1225]] /* damEA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */)) + (-2.0) * (log(tmp67)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damEA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damEA.yL PARAM */),"damEA.yL",equationIndexes);
  threadData->lastEquationSolved = 5737;
}

/*
equation index: 5738
type: SIMPLE_ASSIGN
damEA.cL[3] = log(damEA.k0)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5738};
  modelica_real tmp68;
  tmp68 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1235]] /* damEA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1226]] /* damEA.cL[3] PARAM */) = log(tmp68);
  threadData->lastEquationSolved = 5738;
}

/*
equation index: 5739
type: SIMPLE_ASSIGN
damEA.cU[1] = (log(damEA.k1) - damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5739};
  modelica_real tmp69;
  modelica_real tmp70;
  tmp69 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.k1 PARAM */);
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
  }tmp70 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* damEA.cU[1] PARAM */) = DIVISION_SIM(log(tmp69) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */),1.0 + (tmp70 * tmp70) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 5739;
}

/*
equation index: 5740
type: SIMPLE_ASSIGN
damEA.cU[2] = (damEA.b * damEA.yU ^ 2.0 + 2.0 * log(damEA.k1) * damEA.yU + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b) / (-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5740};
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */);
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.k1 PARAM */);
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
  }tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* damEA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */)) * ((tmp71 * tmp71)) + (2.0) * ((log(tmp72)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */)) - ((tmp73 * tmp73)),"-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5740;
}

/*
equation index: 5741
type: SIMPLE_ASSIGN
damEA.cU[3] = (damEA.yU ^ 2.0 * (log(damEA.k1) + damEA.b) + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b + damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5741};
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */);
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1236]] /* damEA.k1 PARAM */);
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
  }tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.cU[3] PARAM */) = DIVISION_SIM(((tmp74 * tmp74)) * (log(tmp75) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */),1.0 + (tmp76 * tmp76) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 5741;
}

/*
equation index: 5742
type: SIMPLE_ASSIGN
damEA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5742};
  real_array tmp77;
  real_array tmp78;
  real_array_create(&tmp77, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1224]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp78, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* damEA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1223]] /* damEA.b PARAM */), tmp77, tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damEA.yU PARAM */));
  threadData->lastEquationSolved = 5742;
}

/*
equation index: 5744
type: SIMPLE_ASSIGN
damEA.rho_default = 1.1843079200592153e-5 * damEA.sta_default.p
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5744};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1249]] /* damEA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5744;
}

/*
equation index: 5745
type: SIMPLE_ASSIGN
damEA.A = 55.989691542288554 / (damEA.v_nominal * damEA.rho_default)
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5745};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damEA.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1250]] /* damEA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.rho_default PARAM */)),"damEA.v_nominal * damEA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5745;
}

/*
equation index: 5746
type: SIMPLE_ASSIGN
damEA.kDam_default = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / damEA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5746};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.rho_default PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* damEA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp79)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damEA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1239]] /* damEA.kThetaSqRt_default PARAM */),"damEA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5746;
}

/*
equation index: 5747
type: SIMPLE_ASSIGN
damEA.facRouDuc = if damEA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic3_raw_eqFunction_5747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1234]] /* damEA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[364]] /* damEA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5747;
}
OMC_DISABLE_OPT
void logic3_raw_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[480])(DATA*, threadData_t*) = {
    logic3_raw_eqFunction_4134,
    logic3_raw_eqFunction_4135,
    logic3_raw_eqFunction_4136,
    logic3_raw_eqFunction_4137,
    logic3_raw_eqFunction_4138,
    logic3_raw_eqFunction_4140,
    logic3_raw_eqFunction_4141,
    logic3_raw_eqFunction_4143,
    logic3_raw_eqFunction_1358,
    logic3_raw_eqFunction_173,
    logic3_raw_eqFunction_1357,
    logic3_raw_eqFunction_1356,
    logic3_raw_eqFunction_1355,
    logic3_raw_eqFunction_1354,
    logic3_raw_eqFunction_1353,
    logic3_raw_eqFunction_1351,
    logic3_raw_eqFunction_1350,
    logic3_raw_eqFunction_1348,
    logic3_raw_eqFunction_1347,
    logic3_raw_eqFunction_1340,
    logic3_raw_eqFunction_1339,
    logic3_raw_eqFunction_1338,
    logic3_raw_eqFunction_1337,
    logic3_raw_eqFunction_1336,
    logic3_raw_eqFunction_1335,
    logic3_raw_eqFunction_1334,
    logic3_raw_eqFunction_1333,
    logic3_raw_eqFunction_1332,
    logic3_raw_eqFunction_1331,
    logic3_raw_eqFunction_1330,
    logic3_raw_eqFunction_1329,
    logic3_raw_eqFunction_1328,
    logic3_raw_eqFunction_1327,
    logic3_raw_eqFunction_4179,
    logic3_raw_eqFunction_4180,
    logic3_raw_eqFunction_4181,
    logic3_raw_eqFunction_4182,
    logic3_raw_eqFunction_4183,
    logic3_raw_eqFunction_4184,
    logic3_raw_eqFunction_4185,
    logic3_raw_eqFunction_4186,
    logic3_raw_eqFunction_4187,
    logic3_raw_eqFunction_4188,
    logic3_raw_eqFunction_4189,
    logic3_raw_eqFunction_4190,
    logic3_raw_eqFunction_4191,
    logic3_raw_eqFunction_4192,
    logic3_raw_eqFunction_4193,
    logic3_raw_eqFunction_4194,
    logic3_raw_eqFunction_4195,
    logic3_raw_eqFunction_4196,
    logic3_raw_eqFunction_4197,
    logic3_raw_eqFunction_4198,
    logic3_raw_eqFunction_4199,
    logic3_raw_eqFunction_4200,
    logic3_raw_eqFunction_4201,
    logic3_raw_eqFunction_4202,
    logic3_raw_eqFunction_4203,
    logic3_raw_eqFunction_4204,
    logic3_raw_eqFunction_4205,
    logic3_raw_eqFunction_4211,
    logic3_raw_eqFunction_4212,
    logic3_raw_eqFunction_4213,
    logic3_raw_eqFunction_4216,
    logic3_raw_eqFunction_4217,
    logic3_raw_eqFunction_4224,
    logic3_raw_eqFunction_4232,
    logic3_raw_eqFunction_4233,
    logic3_raw_eqFunction_4234,
    logic3_raw_eqFunction_4236,
    logic3_raw_eqFunction_4237,
    logic3_raw_eqFunction_4238,
    logic3_raw_eqFunction_4239,
    logic3_raw_eqFunction_4242,
    logic3_raw_eqFunction_4243,
    logic3_raw_eqFunction_4244,
    logic3_raw_eqFunction_4245,
    logic3_raw_eqFunction_4249,
    logic3_raw_eqFunction_4250,
    logic3_raw_eqFunction_4251,
    logic3_raw_eqFunction_4252,
    logic3_raw_eqFunction_4253,
    logic3_raw_eqFunction_4254,
    logic3_raw_eqFunction_4259,
    logic3_raw_eqFunction_4262,
    logic3_raw_eqFunction_4263,
    logic3_raw_eqFunction_4276,
    logic3_raw_eqFunction_4289,
    logic3_raw_eqFunction_4290,
    logic3_raw_eqFunction_4293,
    logic3_raw_eqFunction_4302,
    logic3_raw_eqFunction_4309,
    logic3_raw_eqFunction_4310,
    logic3_raw_eqFunction_4313,
    logic3_raw_eqFunction_4322,
    logic3_raw_eqFunction_4329,
    logic3_raw_eqFunction_4330,
    logic3_raw_eqFunction_4333,
    logic3_raw_eqFunction_4342,
    logic3_raw_eqFunction_4344,
    logic3_raw_eqFunction_4361,
    logic3_raw_eqFunction_4362,
    logic3_raw_eqFunction_4363,
    logic3_raw_eqFunction_4365,
    logic3_raw_eqFunction_4366,
    logic3_raw_eqFunction_4367,
    logic3_raw_eqFunction_4368,
    logic3_raw_eqFunction_4371,
    logic3_raw_eqFunction_4372,
    logic3_raw_eqFunction_4373,
    logic3_raw_eqFunction_4374,
    logic3_raw_eqFunction_4378,
    logic3_raw_eqFunction_4379,
    logic3_raw_eqFunction_4380,
    logic3_raw_eqFunction_4381,
    logic3_raw_eqFunction_4382,
    logic3_raw_eqFunction_4383,
    logic3_raw_eqFunction_4388,
    logic3_raw_eqFunction_4391,
    logic3_raw_eqFunction_4392,
    logic3_raw_eqFunction_4405,
    logic3_raw_eqFunction_4418,
    logic3_raw_eqFunction_4419,
    logic3_raw_eqFunction_4422,
    logic3_raw_eqFunction_4431,
    logic3_raw_eqFunction_4438,
    logic3_raw_eqFunction_4439,
    logic3_raw_eqFunction_4442,
    logic3_raw_eqFunction_4451,
    logic3_raw_eqFunction_4458,
    logic3_raw_eqFunction_4459,
    logic3_raw_eqFunction_4462,
    logic3_raw_eqFunction_4471,
    logic3_raw_eqFunction_4473,
    logic3_raw_eqFunction_4490,
    logic3_raw_eqFunction_4491,
    logic3_raw_eqFunction_4492,
    logic3_raw_eqFunction_4494,
    logic3_raw_eqFunction_4495,
    logic3_raw_eqFunction_4496,
    logic3_raw_eqFunction_4497,
    logic3_raw_eqFunction_4500,
    logic3_raw_eqFunction_4501,
    logic3_raw_eqFunction_4502,
    logic3_raw_eqFunction_4503,
    logic3_raw_eqFunction_4507,
    logic3_raw_eqFunction_4508,
    logic3_raw_eqFunction_4509,
    logic3_raw_eqFunction_4510,
    logic3_raw_eqFunction_4511,
    logic3_raw_eqFunction_4512,
    logic3_raw_eqFunction_4517,
    logic3_raw_eqFunction_4520,
    logic3_raw_eqFunction_4521,
    logic3_raw_eqFunction_4534,
    logic3_raw_eqFunction_4547,
    logic3_raw_eqFunction_4548,
    logic3_raw_eqFunction_4551,
    logic3_raw_eqFunction_4560,
    logic3_raw_eqFunction_4567,
    logic3_raw_eqFunction_4568,
    logic3_raw_eqFunction_4571,
    logic3_raw_eqFunction_4580,
    logic3_raw_eqFunction_4587,
    logic3_raw_eqFunction_4588,
    logic3_raw_eqFunction_4591,
    logic3_raw_eqFunction_4600,
    logic3_raw_eqFunction_4602,
    logic3_raw_eqFunction_4619,
    logic3_raw_eqFunction_4620,
    logic3_raw_eqFunction_4621,
    logic3_raw_eqFunction_4623,
    logic3_raw_eqFunction_4624,
    logic3_raw_eqFunction_4625,
    logic3_raw_eqFunction_4626,
    logic3_raw_eqFunction_4629,
    logic3_raw_eqFunction_4630,
    logic3_raw_eqFunction_4631,
    logic3_raw_eqFunction_4632,
    logic3_raw_eqFunction_4636,
    logic3_raw_eqFunction_4637,
    logic3_raw_eqFunction_4638,
    logic3_raw_eqFunction_4639,
    logic3_raw_eqFunction_4640,
    logic3_raw_eqFunction_4641,
    logic3_raw_eqFunction_4646,
    logic3_raw_eqFunction_4649,
    logic3_raw_eqFunction_4650,
    logic3_raw_eqFunction_4663,
    logic3_raw_eqFunction_4676,
    logic3_raw_eqFunction_4677,
    logic3_raw_eqFunction_4680,
    logic3_raw_eqFunction_4689,
    logic3_raw_eqFunction_4696,
    logic3_raw_eqFunction_4697,
    logic3_raw_eqFunction_4700,
    logic3_raw_eqFunction_4709,
    logic3_raw_eqFunction_4716,
    logic3_raw_eqFunction_4717,
    logic3_raw_eqFunction_4720,
    logic3_raw_eqFunction_4729,
    logic3_raw_eqFunction_4731,
    logic3_raw_eqFunction_4742,
    logic3_raw_eqFunction_4743,
    logic3_raw_eqFunction_4744,
    logic3_raw_eqFunction_4745,
    logic3_raw_eqFunction_4746,
    logic3_raw_eqFunction_4747,
    logic3_raw_eqFunction_4748,
    logic3_raw_eqFunction_4749,
    logic3_raw_eqFunction_4750,
    logic3_raw_eqFunction_4751,
    logic3_raw_eqFunction_4752,
    logic3_raw_eqFunction_4753,
    logic3_raw_eqFunction_4754,
    logic3_raw_eqFunction_4755,
    logic3_raw_eqFunction_4758,
    logic3_raw_eqFunction_4761,
    logic3_raw_eqFunction_4767,
    logic3_raw_eqFunction_4768,
    logic3_raw_eqFunction_4769,
    logic3_raw_eqFunction_4772,
    logic3_raw_eqFunction_4781,
    logic3_raw_eqFunction_4788,
    logic3_raw_eqFunction_4789,
    logic3_raw_eqFunction_4790,
    logic3_raw_eqFunction_4793,
    logic3_raw_eqFunction_4802,
    logic3_raw_eqFunction_4806,
    logic3_raw_eqFunction_4807,
    logic3_raw_eqFunction_4808,
    logic3_raw_eqFunction_4809,
    logic3_raw_eqFunction_4813,
    logic3_raw_eqFunction_4814,
    logic3_raw_eqFunction_4815,
    logic3_raw_eqFunction_4816,
    logic3_raw_eqFunction_4817,
    logic3_raw_eqFunction_4818,
    logic3_raw_eqFunction_4823,
    logic3_raw_eqFunction_4826,
    logic3_raw_eqFunction_4827,
    logic3_raw_eqFunction_4840,
    logic3_raw_eqFunction_4841,
    logic3_raw_eqFunction_4850,
    logic3_raw_eqFunction_4851,
    logic3_raw_eqFunction_4852,
    logic3_raw_eqFunction_4853,
    logic3_raw_eqFunction_4857,
    logic3_raw_eqFunction_4858,
    logic3_raw_eqFunction_4859,
    logic3_raw_eqFunction_4860,
    logic3_raw_eqFunction_4861,
    logic3_raw_eqFunction_4862,
    logic3_raw_eqFunction_4867,
    logic3_raw_eqFunction_4870,
    logic3_raw_eqFunction_4871,
    logic3_raw_eqFunction_4884,
    logic3_raw_eqFunction_4885,
    logic3_raw_eqFunction_4909,
    logic3_raw_eqFunction_4910,
    logic3_raw_eqFunction_4913,
    logic3_raw_eqFunction_4914,
    logic3_raw_eqFunction_4920,
    logic3_raw_eqFunction_4921,
    logic3_raw_eqFunction_4923,
    logic3_raw_eqFunction_4924,
    logic3_raw_eqFunction_4930,
    logic3_raw_eqFunction_4931,
    logic3_raw_eqFunction_4933,
    logic3_raw_eqFunction_4934,
    logic3_raw_eqFunction_4940,
    logic3_raw_eqFunction_4941,
    logic3_raw_eqFunction_4942,
    logic3_raw_eqFunction_4945,
    logic3_raw_eqFunction_4946,
    logic3_raw_eqFunction_4953,
    logic3_raw_eqFunction_4955,
    logic3_raw_eqFunction_4956,
    logic3_raw_eqFunction_4957,
    logic3_raw_eqFunction_5003,
    logic3_raw_eqFunction_5004,
    logic3_raw_eqFunction_5008,
    logic3_raw_eqFunction_5009,
    logic3_raw_eqFunction_5010,
    logic3_raw_eqFunction_5011,
    logic3_raw_eqFunction_5012,
    logic3_raw_eqFunction_5013,
    logic3_raw_eqFunction_5014,
    logic3_raw_eqFunction_5028,
    logic3_raw_eqFunction_5034,
    logic3_raw_eqFunction_5035,
    logic3_raw_eqFunction_5038,
    logic3_raw_eqFunction_5039,
    logic3_raw_eqFunction_5042,
    logic3_raw_eqFunction_5043,
    logic3_raw_eqFunction_5044,
    logic3_raw_eqFunction_5045,
    logic3_raw_eqFunction_5049,
    logic3_raw_eqFunction_5050,
    logic3_raw_eqFunction_5051,
    logic3_raw_eqFunction_5052,
    logic3_raw_eqFunction_5053,
    logic3_raw_eqFunction_5054,
    logic3_raw_eqFunction_5059,
    logic3_raw_eqFunction_5062,
    logic3_raw_eqFunction_5063,
    logic3_raw_eqFunction_5076,
    logic3_raw_eqFunction_5085,
    logic3_raw_eqFunction_5086,
    logic3_raw_eqFunction_5087,
    logic3_raw_eqFunction_5099,
    logic3_raw_eqFunction_5100,
    logic3_raw_eqFunction_5103,
    logic3_raw_eqFunction_5104,
    logic3_raw_eqFunction_5105,
    logic3_raw_eqFunction_5106,
    logic3_raw_eqFunction_5122,
    logic3_raw_eqFunction_5123,
    logic3_raw_eqFunction_5128,
    logic3_raw_eqFunction_5131,
    logic3_raw_eqFunction_5132,
    logic3_raw_eqFunction_5133,
    logic3_raw_eqFunction_5138,
    logic3_raw_eqFunction_5139,
    logic3_raw_eqFunction_5147,
    logic3_raw_eqFunction_5151,
    logic3_raw_eqFunction_5152,
    logic3_raw_eqFunction_5153,
    logic3_raw_eqFunction_5154,
    logic3_raw_eqFunction_5158,
    logic3_raw_eqFunction_5159,
    logic3_raw_eqFunction_5160,
    logic3_raw_eqFunction_5161,
    logic3_raw_eqFunction_5162,
    logic3_raw_eqFunction_5163,
    logic3_raw_eqFunction_5168,
    logic3_raw_eqFunction_5171,
    logic3_raw_eqFunction_5172,
    logic3_raw_eqFunction_5185,
    logic3_raw_eqFunction_5186,
    logic3_raw_eqFunction_5205,
    logic3_raw_eqFunction_5207,
    logic3_raw_eqFunction_5208,
    logic3_raw_eqFunction_5214,
    logic3_raw_eqFunction_5215,
    logic3_raw_eqFunction_5217,
    logic3_raw_eqFunction_5218,
    logic3_raw_eqFunction_5224,
    logic3_raw_eqFunction_5225,
    logic3_raw_eqFunction_5227,
    logic3_raw_eqFunction_5228,
    logic3_raw_eqFunction_5234,
    logic3_raw_eqFunction_5235,
    logic3_raw_eqFunction_5236,
    logic3_raw_eqFunction_5239,
    logic3_raw_eqFunction_5240,
    logic3_raw_eqFunction_5247,
    logic3_raw_eqFunction_5289,
    logic3_raw_eqFunction_5290,
    logic3_raw_eqFunction_5294,
    logic3_raw_eqFunction_5295,
    logic3_raw_eqFunction_5296,
    logic3_raw_eqFunction_5297,
    logic3_raw_eqFunction_5298,
    logic3_raw_eqFunction_5299,
    logic3_raw_eqFunction_5300,
    logic3_raw_eqFunction_5314,
    logic3_raw_eqFunction_5320,
    logic3_raw_eqFunction_5321,
    logic3_raw_eqFunction_5324,
    logic3_raw_eqFunction_5325,
    logic3_raw_eqFunction_5328,
    logic3_raw_eqFunction_5329,
    logic3_raw_eqFunction_5330,
    logic3_raw_eqFunction_5331,
    logic3_raw_eqFunction_5335,
    logic3_raw_eqFunction_5336,
    logic3_raw_eqFunction_5337,
    logic3_raw_eqFunction_5338,
    logic3_raw_eqFunction_5339,
    logic3_raw_eqFunction_5340,
    logic3_raw_eqFunction_5345,
    logic3_raw_eqFunction_5348,
    logic3_raw_eqFunction_5349,
    logic3_raw_eqFunction_5362,
    logic3_raw_eqFunction_5371,
    logic3_raw_eqFunction_5372,
    logic3_raw_eqFunction_5373,
    logic3_raw_eqFunction_5385,
    logic3_raw_eqFunction_5386,
    logic3_raw_eqFunction_5389,
    logic3_raw_eqFunction_5390,
    logic3_raw_eqFunction_5391,
    logic3_raw_eqFunction_5392,
    logic3_raw_eqFunction_5415,
    logic3_raw_eqFunction_5416,
    logic3_raw_eqFunction_5417,
    logic3_raw_eqFunction_5418,
    logic3_raw_eqFunction_5431,
    logic3_raw_eqFunction_5432,
    logic3_raw_eqFunction_5433,
    logic3_raw_eqFunction_5434,
    logic3_raw_eqFunction_5435,
    logic3_raw_eqFunction_5443,
    logic3_raw_eqFunction_5444,
    logic3_raw_eqFunction_5445,
    logic3_raw_eqFunction_5448,
    logic3_raw_eqFunction_5449,
    logic3_raw_eqFunction_5457,
    logic3_raw_eqFunction_5458,
    logic3_raw_eqFunction_5464,
    logic3_raw_eqFunction_5477,
    logic3_raw_eqFunction_5478,
    logic3_raw_eqFunction_5480,
    logic3_raw_eqFunction_5492,
    logic3_raw_eqFunction_5499,
    logic3_raw_eqFunction_5500,
    logic3_raw_eqFunction_5502,
    logic3_raw_eqFunction_5514,
    logic3_raw_eqFunction_5521,
    logic3_raw_eqFunction_5522,
    logic3_raw_eqFunction_5524,
    logic3_raw_eqFunction_5536,
    logic3_raw_eqFunction_5538,
    logic3_raw_eqFunction_5568,
    logic3_raw_eqFunction_5569,
    logic3_raw_eqFunction_5570,
    logic3_raw_eqFunction_5571,
    logic3_raw_eqFunction_5584,
    logic3_raw_eqFunction_5585,
    logic3_raw_eqFunction_5586,
    logic3_raw_eqFunction_5587,
    logic3_raw_eqFunction_5588,
    logic3_raw_eqFunction_5596,
    logic3_raw_eqFunction_5597,
    logic3_raw_eqFunction_5598,
    logic3_raw_eqFunction_5601,
    logic3_raw_eqFunction_5602,
    logic3_raw_eqFunction_5610,
    logic3_raw_eqFunction_5611,
    logic3_raw_eqFunction_5617,
    logic3_raw_eqFunction_5630,
    logic3_raw_eqFunction_5631,
    logic3_raw_eqFunction_5633,
    logic3_raw_eqFunction_5645,
    logic3_raw_eqFunction_5652,
    logic3_raw_eqFunction_5653,
    logic3_raw_eqFunction_5655,
    logic3_raw_eqFunction_5667,
    logic3_raw_eqFunction_5674,
    logic3_raw_eqFunction_5675,
    logic3_raw_eqFunction_5677,
    logic3_raw_eqFunction_5689,
    logic3_raw_eqFunction_5691,
    logic3_raw_eqFunction_5702,
    logic3_raw_eqFunction_5703,
    logic3_raw_eqFunction_5704,
    logic3_raw_eqFunction_5705,
    logic3_raw_eqFunction_5706,
    logic3_raw_eqFunction_5707,
    logic3_raw_eqFunction_5708,
    logic3_raw_eqFunction_5710,
    logic3_raw_eqFunction_5711,
    logic3_raw_eqFunction_5712,
    logic3_raw_eqFunction_5713,
    logic3_raw_eqFunction_5719,
    logic3_raw_eqFunction_5720,
    logic3_raw_eqFunction_5723,
    logic3_raw_eqFunction_5726,
    logic3_raw_eqFunction_5736,
    logic3_raw_eqFunction_5737,
    logic3_raw_eqFunction_5738,
    logic3_raw_eqFunction_5739,
    logic3_raw_eqFunction_5740,
    logic3_raw_eqFunction_5741,
    logic3_raw_eqFunction_5742,
    logic3_raw_eqFunction_5744,
    logic3_raw_eqFunction_5745,
    logic3_raw_eqFunction_5746,
    logic3_raw_eqFunction_5747
  };
  
  for (int id = 0; id < 480; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif