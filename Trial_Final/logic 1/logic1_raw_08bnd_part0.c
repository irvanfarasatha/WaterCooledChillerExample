#include "logic1_raw_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 4116
type: SIMPLE_ASSIGN
weaData.lat = Buildings.BoundaryConditions.WeatherData.BaseClasses.getLatitudeTMY3(weaData.filNam)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* weaData.lat PARAM */) = omc_Buildings_BoundaryConditions_WeatherData_BaseClasses_getLatitudeTMY3(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */));
  threadData->lastEquationSolved = 4116;
}

/*
equation index: 4117
type: SIMPLE_ASSIGN
weaData.zenAng.lat = weaData.lat
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4117};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.zenAng.lat PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2905]] /* weaData.lat PARAM */);
  threadData->lastEquationSolved = 4117;
}

/*
equation index: 4118
type: SIMPLE_ASSIGN
$cse40 = cos(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* $cse40 PARAM */) = cos((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 4118;
}

/*
equation index: 4119
type: SIMPLE_ASSIGN
$cse43 = sin(weaData.zenAng.lat)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* $cse43 PARAM */) = sin((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2921]] /* weaData.zenAng.lat PARAM */));
  threadData->lastEquationSolved = 4119;
}

/*
equation index: 4120
type: SIMPLE_ASSIGN
weaData.datRea.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4120};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 4120;
}

/*
equation index: 4122
type: SIMPLE_ASSIGN
weaData.datRea.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea.fileName) then weaData.datRea.fileName else "NoName", {}, {2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea.verboseRead)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4122};
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT90, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */), _OMC_LIT91)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* weaData.datRea.fileName PARAM */):_OMC_LIT91), _OMC_LIT92, _OMC_LIT93, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[877]] /* weaData.datRea.verboseRead PARAM */));
  threadData->lastEquationSolved = 4122;
}

/*
equation index: 4123
type: SIMPLE_ASSIGN
weaData.datRea1.fileName = weaData.filNam
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4123};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */) = (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[4]] /* weaData.filNam PARAM */);
  threadData->lastEquationSolved = 4123;
}

/*
equation index: 4125
type: SIMPLE_ASSIGN
weaData.datRea1.tableID = Modelica.Blocks.Types.ExternalCombiTable1D.constructor("tab1", if weaData.datRea1.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(weaData.datRea1.fileName) then weaData.datRea1.fileName else "NoName", {}, {9, 10, 11}, Modelica.Blocks.Types.Smoothness.ContinuousDerivative, Modelica.Blocks.Types.Extrapolation.LastTwoPoints, weaData.datRea1.verboseRead)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4125};
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTable1D_constructor(threadData, _OMC_LIT90, (((!stringEqual((data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */), _OMC_LIT91)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */))))?(data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[2]] /* weaData.datRea1.fileName PARAM */):_OMC_LIT91), _OMC_LIT92, _OMC_LIT94, 2, 2, (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[880]] /* weaData.datRea1.verboseRead PARAM */));
  threadData->lastEquationSolved = 4125;
}
extern void logic1_raw_eqFunction_1352(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_173(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1351(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1350(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1349(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1348(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1347(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1345(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1344(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1342(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1341(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1334(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1333(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1332(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1331(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1330(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1329(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1328(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1327(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1326(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1325(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void logic1_raw_eqFunction_1321(DATA *data, threadData_t *threadData);


/*
equation index: 4161
type: SIMPLE_ASSIGN
chiller1Capacity_TR = chillerCapacity_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chillerCapacity_TR PARAM */);
  threadData->lastEquationSolved = 4161;
}

/*
equation index: 4162
type: SIMPLE_ASSIGN
chiller1Capacity = 1000.0 * chiller1Capacity_TR * kWPerTR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chiller1Capacity PARAM */) = (1000.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity_TR PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* kWPerTR PARAM */)));
  threadData->lastEquationSolved = 4162;
}

/*
equation index: 4163
type: SIMPLE_ASSIGN
mCW_flow_nominal = 2.380952380952381e-4 * chiller1Capacity / dTCon_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */) = (2.380952380952381e-4) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chiller1Capacity PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1208]] /* dTCon_nominal PARAM */),"dTCon_nominal",equationIndexes));
  threadData->lastEquationSolved = 4163;
}

/*
equation index: 4164
type: SIMPLE_ASSIGN
chillerStagingCtrl.mCW_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4164};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[415]] /* chillerStagingCtrl.mCW_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4164;
}

/*
equation index: 4165
type: SIMPLE_ASSIGN
chillerStagingCtrl.samplePeriod = chillerStageSamplePeriod
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* chillerStagingCtrl.samplePeriod PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* chillerStageSamplePeriod PARAM */);
  threadData->lastEquationSolved = 4165;
}

/*
equation index: 4166
type: SIMPLE_ASSIGN
chillerStagingCtrl.minimumLoad_TR = chillerMinimumLoad_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[416]] /* chillerStagingCtrl.minimumLoad_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[409]] /* chillerMinimumLoad_TR PARAM */);
  threadData->lastEquationSolved = 4166;
}

/*
equation index: 4167
type: SIMPLE_ASSIGN
chillerStagingCtrl.stage2OffThreshold_TR = chiller1Capacity_TR - chillerStageDeadband_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4167};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[419]] /* chillerStagingCtrl.stage2OffThreshold_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity_TR PARAM */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* chillerStageDeadband_TR PARAM */);
  threadData->lastEquationSolved = 4167;
}

/*
equation index: 4168
type: SIMPLE_ASSIGN
chillerStagingCtrl.stage2OnThreshold_TR = chiller1Capacity_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4168};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* chillerStagingCtrl.stage2OnThreshold_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4168;
}

/*
equation index: 4169
type: SIMPLE_ASSIGN
chiller2Capacity_TR = chillerCapacity_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[408]] /* chillerCapacity_TR PARAM */);
  threadData->lastEquationSolved = 4169;
}

/*
equation index: 4170
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller2Capacity_TR = chiller2Capacity_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4170};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* chillerStagingCtrl.chiller2Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4170;
}

/*
equation index: 4171
type: SIMPLE_ASSIGN
chillerStagingCtrl.chiller1Capacity_TR = chiller1Capacity_TR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* chillerStagingCtrl.chiller1Capacity_TR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[405]] /* chiller1Capacity_TR PARAM */);
  threadData->lastEquationSolved = 4171;
}

/*
equation index: 4172
type: SIMPLE_ASSIGN
chillerStagingCtrl.kWPerTR = kWPerTR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4172};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* chillerStagingCtrl.kWPerTR PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* kWPerTR PARAM */);
  threadData->lastEquationSolved = 4172;
}

/*
equation index: 4173
type: SIMPLE_ASSIGN
mCHW_flow_nominal = 4.761904761904762e-5 * chiller1Capacity
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4173};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */) = (4.761904761904762e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[404]] /* chiller1Capacity PARAM */));
  threadData->lastEquationSolved = 4173;
}

/*
equation index: 4174
type: SIMPLE_ASSIGN
chwPump2PID.kP = 0.05 * mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4174};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[443]] /* chwPump2PID.kP PARAM */) = (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4174;
}

/*
equation index: 4175
type: SIMPLE_ASSIGN
chwPump2PID.mCHWStart = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4175};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[447]] /* chwPump2PID.mCHWStart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4175;
}

/*
equation index: 4176
type: SIMPLE_ASSIGN
chwPump2PID.mCHWMax = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4176};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* chwPump2PID.mCHWMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4176;
}

/*
equation index: 4177
type: SIMPLE_ASSIGN
chwPump2PID.mCHWMin = 0.3 * mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4177};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[446]] /* chwPump2PID.mCHWMin PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4177;
}

/*
equation index: 4178
type: SIMPLE_ASSIGN
chwPump2PID.minHead = dp_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[448]] /* chwPump2PID.minHead PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* dp_nominal PARAM */);
  threadData->lastEquationSolved = 4178;
}

/*
equation index: 4179
type: SIMPLE_ASSIGN
chwPump1PID.kP = 0.05 * mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[429]] /* chwPump1PID.kP PARAM */) = (0.05) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4179;
}

/*
equation index: 4180
type: SIMPLE_ASSIGN
chwPump1PID.mCHWStart = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[433]] /* chwPump1PID.mCHWStart PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4180;
}

/*
equation index: 4181
type: SIMPLE_ASSIGN
chwPump1PID.mCHWMax = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[431]] /* chwPump1PID.mCHWMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4181;
}

/*
equation index: 4182
type: SIMPLE_ASSIGN
chwPump1PID.mCHWMin = 0.3 * mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[432]] /* chwPump1PID.mCHWMin PARAM */) = (0.3) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4182;
}

/*
equation index: 4183
type: SIMPLE_ASSIGN
chwPump1PID.minHead = dp_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4183};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[434]] /* chwPump1PID.minHead PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1321]] /* dp_nominal PARAM */);
  threadData->lastEquationSolved = 4183;
}

/*
equation index: 4184
type: SIMPLE_ASSIGN
val8_2.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4184};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4184;
}

/*
equation index: 4185
type: SIMPLE_ASSIGN
val8_2.kFixed = 0.0030932931235336655 * val8_2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2809]] /* val8_2.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4185;
}

/*
equation index: 4191
type: SIMPLE_ASSIGN
val8_2.dp_nominal = 104510.0 + val8_2.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4191};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* val8_2.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2805]] /* val8_2.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 4191;
}

/*
equation index: 4192
type: SIMPLE_ASSIGN
val8_2.dp_nominal_pos = abs(val8_2.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4192};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2807]] /* val8_2.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2806]] /* val8_2.dp_nominal PARAM */));
  threadData->lastEquationSolved = 4192;
}

/*
equation index: 4193
type: SIMPLE_ASSIGN
val8_2.m_flow_nominal_pos = abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4193};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2812]] /* val8_2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4193;
}

/*
equation index: 4196
type: SIMPLE_ASSIGN
val8_2.eta_default = logic1.val8_2.Medium.dynamicViscosity(val8_2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4196};
  logic1_val8__2_Medium_ThermodynamicState tmp0;
  logic1_val8__2_Medium_ThermodynamicState_wrap_vars(threadData,tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2818]] /* val8_2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2817]] /* val8_2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2808]] /* val8_2.eta_default PARAM */) = omc_logic1_val8__2_Medium_dynamicViscosity(threadData, tmp0);
  threadData->lastEquationSolved = 4196;
}

/*
equation index: 4197
type: SIMPLE_ASSIGN
val8_2.m_flow_turbulent = val8_2.deltaM * abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2814]] /* val8_2.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2803]] /* val8_2.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4197;
}

/*
equation index: 4204
type: SIMPLE_ASSIGN
val8_2.m_flow_small = 1e-4 * abs(val8_2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2813]] /* val8_2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2811]] /* val8_2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4204;
}

/*
equation index: 4212
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[3] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4212};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* junCHWSup2.m_flow_nominal[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4212;
}

/*
equation index: 4213
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4213};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4213;
}

/*
equation index: 4214
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junCHWSup2.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4214;
}

/*
equation index: 4216
type: SIMPLE_ASSIGN
junCHWSup2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup2.m_flow_nominal[1]) + abs(junCHWSup2.m_flow_nominal[2]) + abs(junCHWSup2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junCHWSup2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* junCHWSup2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4216;
}

/*
equation index: 4217
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_nominal = junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4217};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4217;
}

/*
equation index: 4218
type: SIMPLE_ASSIGN
junCHWSup2.vol.tau = junCHWSup2.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4218};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junCHWSup2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1927]] /* junCHWSup2.tau PARAM */);
  threadData->lastEquationSolved = 4218;
}

/*
equation index: 4219
type: SIMPLE_ASSIGN
junCHWSup2.vol.V_nominal = 0.0010044335697769957 * junCHWSup2.vol.m_flow_nominal * junCHWSup2.vol.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4219};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1954]] /* junCHWSup2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4219;
}

/*
equation index: 4222
type: SIMPLE_ASSIGN
junCHWSup2.vol.T_start = junCHWSup2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1872]] /* junCHWSup2.T_start PARAM */);
  threadData->lastEquationSolved = 4222;
}

/*
equation index: 4223
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.T = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4223;
}

/*
equation index: 4224
type: SIMPLE_ASSIGN
junCHWSup2.vol.p_start = junCHWSup2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1884]] /* junCHWSup2.p_start PARAM */);
  threadData->lastEquationSolved = 4224;
}

/*
equation index: 4225
type: SIMPLE_ASSIGN
junCHWSup2.vol.state_start.p = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4225};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junCHWSup2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4225;
}

/*
equation index: 4229
type: SIMPLE_ASSIGN
junCHWSup2.vol.rho_start = logic1.junCHWSup2.vol.Medium.density(junCHWSup2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4229};
  logic1_junCHWSup2_vol_Medium_ThermodynamicState tmp1;
  logic1_junCHWSup2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1953]] /* junCHWSup2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1952]] /* junCHWSup2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1949]] /* junCHWSup2.vol.rho_start PARAM */) = omc_logic1_junCHWSup2_vol_Medium_density(threadData, tmp1);
  threadData->lastEquationSolved = 4229;
}

/*
equation index: 4230
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.p_start = junCHWSup2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4230};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1947]] /* junCHWSup2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4230;
}

/*
equation index: 4231
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.T_start = junCHWSup2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4231};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1928]] /* junCHWSup2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4231;
}

/*
equation index: 4232
type: SIMPLE_ASSIGN
junCHWSup2.vol.X_start[1] = junCHWSup2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4232};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1873]] /* junCHWSup2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4232;
}

/*
equation index: 4233
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.X_start[1] = junCHWSup2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1931]] /* junCHWSup2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4233;
}

/*
equation index: 4234
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.hStart = logic1.junCHWSup2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, junCHWSup2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4234};
  real_array tmp2;
  real_array_create(&tmp2, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1934]] /* junCHWSup2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1937]] /* junCHWSup2.vol.dynBal.hStart PARAM */) = omc_logic1_junCHWSup2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.T_start PARAM */), tmp2);
  threadData->lastEquationSolved = 4234;
}

/*
equation index: 4239
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.rho_start = logic1.junCHWSup2.vol.dynBal.Medium.density(logic1.junCHWSup2.vol.dynBal.Medium.setState_pTX(junCHWSup2.vol.dynBal.p_start, junCHWSup2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1941]] /* junCHWSup2.vol.dynBal.rho_start PARAM */) = omc_logic1_junCHWSup2_vol_dynBal_Medium_density(threadData, omc_logic1_junCHWSup2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1939]] /* junCHWSup2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1933]] /* junCHWSup2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4239;
}

/*
equation index: 4242
type: SIMPLE_ASSIGN
junCHWSup2.vol.V = junCHWSup2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4242};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junCHWSup2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1930]] /* junCHWSup2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4242;
}

/*
equation index: 4243
type: SIMPLE_ASSIGN
junCHWSup2.vol.dynBal.fluidVolume = junCHWSup2.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4243};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1936]] /* junCHWSup2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1929]] /* junCHWSup2.vol.V PARAM */);
  threadData->lastEquationSolved = 4243;
}

/*
equation index: 4256
type: SIMPLE_ASSIGN
junCHWSup2.vol.m_flow_small = 1e-4 * abs(junCHWSup2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4256};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1946]] /* junCHWSup2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1945]] /* junCHWSup2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4256;
}

/*
equation index: 4269
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal = junCHWSup2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junCHWSup2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1882]] /* junCHWSup2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4269;
}

/*
equation index: 4270
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_nominal_pos = abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1922]] /* junCHWSup2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junCHWSup2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4270;
}

/*
equation index: 4273
type: SIMPLE_ASSIGN
junCHWSup2.res3.eta_default = logic1.junCHWSup2.res3.Medium.dynamicViscosity(junCHWSup2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4273};
  logic1_junCHWSup2_res3_Medium_ThermodynamicState tmp3;
  logic1_junCHWSup2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp3, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1926]] /* junCHWSup2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1925]] /* junCHWSup2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1919]] /* junCHWSup2.res3.eta_default PARAM */) = omc_logic1_junCHWSup2_res3_Medium_dynamicViscosity(threadData, tmp3);
  threadData->lastEquationSolved = 4273;
}

/*
equation index: 4282
type: SIMPLE_ASSIGN
junCHWSup2.res3.m_flow_small = 1e-4 * abs(junCHWSup2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4282};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1923]] /* junCHWSup2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1921]] /* junCHWSup2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4282;
}

/*
equation index: 4289
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal = junCHWSup2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4289};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1907]] /* junCHWSup2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1881]] /* junCHWSup2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4289;
}

/*
equation index: 4290
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_nominal_pos = abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4290};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1908]] /* junCHWSup2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1907]] /* junCHWSup2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4290;
}

/*
equation index: 4293
type: SIMPLE_ASSIGN
junCHWSup2.res2.eta_default = logic1.junCHWSup2.res2.Medium.dynamicViscosity(junCHWSup2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4293};
  logic1_junCHWSup2_res2_Medium_ThermodynamicState tmp4;
  logic1_junCHWSup2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp4, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1912]] /* junCHWSup2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1911]] /* junCHWSup2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1905]] /* junCHWSup2.res2.eta_default PARAM */) = omc_logic1_junCHWSup2_res2_Medium_dynamicViscosity(threadData, tmp4);
  threadData->lastEquationSolved = 4293;
}

/*
equation index: 4302
type: SIMPLE_ASSIGN
junCHWSup2.res2.m_flow_small = 1e-4 * abs(junCHWSup2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4302};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1909]] /* junCHWSup2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1907]] /* junCHWSup2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4302;
}

/*
equation index: 4309
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal = junCHWSup2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* junCHWSup2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1880]] /* junCHWSup2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4309;
}

/*
equation index: 4310
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_nominal_pos = abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1894]] /* junCHWSup2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* junCHWSup2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4310;
}

/*
equation index: 4313
type: SIMPLE_ASSIGN
junCHWSup2.res1.eta_default = logic1.junCHWSup2.res1.Medium.dynamicViscosity(junCHWSup2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4313};
  logic1_junCHWSup2_res1_Medium_ThermodynamicState tmp5;
  logic1_junCHWSup2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp5, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1898]] /* junCHWSup2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1897]] /* junCHWSup2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1891]] /* junCHWSup2.res1.eta_default PARAM */) = omc_logic1_junCHWSup2_res1_Medium_dynamicViscosity(threadData, tmp5);
  threadData->lastEquationSolved = 4313;
}

/*
equation index: 4322
type: SIMPLE_ASSIGN
junCHWSup2.res1.m_flow_small = 1e-4 * abs(junCHWSup2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4322};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1895]] /* junCHWSup2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1893]] /* junCHWSup2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4322;
}

/*
equation index: 4324
type: SIMPLE_ASSIGN
junCHWSup2.m_flow_small = 1e-4 * junCHWSup2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4324};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1883]] /* junCHWSup2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1878]] /* junCHWSup2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4324;
}

/*
equation index: 4341
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[3] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* junCHWRet2.m_flow_nominal[3] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4341;
}

/*
equation index: 4342
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4342;
}

/*
equation index: 4343
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1714]] /* junCHWRet2.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4343;
}

/*
equation index: 4345
type: SIMPLE_ASSIGN
junCHWRet2.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet2.m_flow_nominal[1]) + abs(junCHWRet2.m_flow_nominal[2]) + abs(junCHWRet2.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4345};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet2.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1714]] /* junCHWRet2.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* junCHWRet2.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4345;
}

/*
equation index: 4346
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_nominal = junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4346};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet2.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4346;
}

/*
equation index: 4347
type: SIMPLE_ASSIGN
junCHWRet2.vol.tau = junCHWRet2.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1788]] /* junCHWRet2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1761]] /* junCHWRet2.tau PARAM */);
  threadData->lastEquationSolved = 4347;
}

/*
equation index: 4348
type: SIMPLE_ASSIGN
junCHWRet2.vol.V_nominal = 0.0010044335697769957 * junCHWRet2.vol.m_flow_nominal * junCHWRet2.vol.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1788]] /* junCHWRet2.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4348;
}

/*
equation index: 4351
type: SIMPLE_ASSIGN
junCHWRet2.vol.T_start = junCHWRet2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1706]] /* junCHWRet2.T_start PARAM */);
  threadData->lastEquationSolved = 4351;
}

/*
equation index: 4352
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.T = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4352;
}

/*
equation index: 4353
type: SIMPLE_ASSIGN
junCHWRet2.vol.p_start = junCHWRet2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1718]] /* junCHWRet2.p_start PARAM */);
  threadData->lastEquationSolved = 4353;
}

/*
equation index: 4354
type: SIMPLE_ASSIGN
junCHWRet2.vol.state_start.p = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWRet2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4354;
}

/*
equation index: 4358
type: SIMPLE_ASSIGN
junCHWRet2.vol.rho_start = logic1.junCHWRet2.vol.Medium.density(junCHWRet2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4358};
  logic1_junCHWRet2_vol_Medium_ThermodynamicState tmp6;
  logic1_junCHWRet2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp6, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1787]] /* junCHWRet2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1786]] /* junCHWRet2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1783]] /* junCHWRet2.vol.rho_start PARAM */) = omc_logic1_junCHWRet2_vol_Medium_density(threadData, tmp6);
  threadData->lastEquationSolved = 4358;
}

/*
equation index: 4359
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.p_start = junCHWRet2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1781]] /* junCHWRet2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4359;
}

/*
equation index: 4360
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.T_start = junCHWRet2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1762]] /* junCHWRet2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4360;
}

/*
equation index: 4361
type: SIMPLE_ASSIGN
junCHWRet2.vol.X_start[1] = junCHWRet2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1707]] /* junCHWRet2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4361;
}

/*
equation index: 4362
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.X_start[1] = junCHWRet2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1765]] /* junCHWRet2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4362;
}

/*
equation index: 4363
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.hStart = logic1.junCHWRet2.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, junCHWRet2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4363};
  real_array tmp7;
  real_array_create(&tmp7, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1768]] /* junCHWRet2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1771]] /* junCHWRet2.vol.dynBal.hStart PARAM */) = omc_logic1_junCHWRet2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.T_start PARAM */), tmp7);
  threadData->lastEquationSolved = 4363;
}

/*
equation index: 4368
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.rho_start = logic1.junCHWRet2.vol.dynBal.Medium.density(logic1.junCHWRet2.vol.dynBal.Medium.setState_pTX(junCHWRet2.vol.dynBal.p_start, junCHWRet2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1775]] /* junCHWRet2.vol.dynBal.rho_start PARAM */) = omc_logic1_junCHWRet2_vol_dynBal_Medium_density(threadData, omc_logic1_junCHWRet2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1773]] /* junCHWRet2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1767]] /* junCHWRet2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4368;
}

/*
equation index: 4371
type: SIMPLE_ASSIGN
junCHWRet2.vol.V = junCHWRet2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWRet2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1764]] /* junCHWRet2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4371;
}

/*
equation index: 4372
type: SIMPLE_ASSIGN
junCHWRet2.vol.dynBal.fluidVolume = junCHWRet2.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1770]] /* junCHWRet2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1763]] /* junCHWRet2.vol.V PARAM */);
  threadData->lastEquationSolved = 4372;
}

/*
equation index: 4385
type: SIMPLE_ASSIGN
junCHWRet2.vol.m_flow_small = 1e-4 * abs(junCHWRet2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1780]] /* junCHWRet2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1779]] /* junCHWRet2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4385;
}

/*
equation index: 4398
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal = junCHWRet2.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWRet2.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1716]] /* junCHWRet2.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4398;
}

/*
equation index: 4399
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_nominal_pos = abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4399};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1756]] /* junCHWRet2.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWRet2.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4399;
}

/*
equation index: 4402
type: SIMPLE_ASSIGN
junCHWRet2.res3.eta_default = logic1.junCHWRet2.res3.Medium.dynamicViscosity(junCHWRet2.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4402};
  logic1_junCHWRet2_res3_Medium_ThermodynamicState tmp8;
  logic1_junCHWRet2_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp8, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1760]] /* junCHWRet2.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1759]] /* junCHWRet2.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1753]] /* junCHWRet2.res3.eta_default PARAM */) = omc_logic1_junCHWRet2_res3_Medium_dynamicViscosity(threadData, tmp8);
  threadData->lastEquationSolved = 4402;
}

/*
equation index: 4411
type: SIMPLE_ASSIGN
junCHWRet2.res3.m_flow_small = 1e-4 * abs(junCHWRet2.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1757]] /* junCHWRet2.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1755]] /* junCHWRet2.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4411;
}

/*
equation index: 4418
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal = junCHWRet2.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4418};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWRet2.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1715]] /* junCHWRet2.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4418;
}

/*
equation index: 4419
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_nominal_pos = abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4419};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1742]] /* junCHWRet2.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWRet2.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4419;
}

/*
equation index: 4422
type: SIMPLE_ASSIGN
junCHWRet2.res2.eta_default = logic1.junCHWRet2.res2.Medium.dynamicViscosity(junCHWRet2.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4422};
  logic1_junCHWRet2_res2_Medium_ThermodynamicState tmp9;
  logic1_junCHWRet2_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp9, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1746]] /* junCHWRet2.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1745]] /* junCHWRet2.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1739]] /* junCHWRet2.res2.eta_default PARAM */) = omc_logic1_junCHWRet2_res2_Medium_dynamicViscosity(threadData, tmp9);
  threadData->lastEquationSolved = 4422;
}

/*
equation index: 4431
type: SIMPLE_ASSIGN
junCHWRet2.res2.m_flow_small = 1e-4 * abs(junCHWRet2.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4431};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1743]] /* junCHWRet2.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1741]] /* junCHWRet2.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4431;
}

/*
equation index: 4438
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal = junCHWRet2.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWRet2.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1714]] /* junCHWRet2.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4438;
}

/*
equation index: 4439
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_nominal_pos = abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4439};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1728]] /* junCHWRet2.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWRet2.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4439;
}

/*
equation index: 4442
type: SIMPLE_ASSIGN
junCHWRet2.res1.eta_default = logic1.junCHWRet2.res1.Medium.dynamicViscosity(junCHWRet2.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4442};
  logic1_junCHWRet2_res1_Medium_ThermodynamicState tmp10;
  logic1_junCHWRet2_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1732]] /* junCHWRet2.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1731]] /* junCHWRet2.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1725]] /* junCHWRet2.res1.eta_default PARAM */) = omc_logic1_junCHWRet2_res1_Medium_dynamicViscosity(threadData, tmp10);
  threadData->lastEquationSolved = 4442;
}

/*
equation index: 4451
type: SIMPLE_ASSIGN
junCHWRet2.res1.m_flow_small = 1e-4 * abs(junCHWRet2.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4451};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1729]] /* junCHWRet2.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1727]] /* junCHWRet2.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4451;
}

/*
equation index: 4453
type: SIMPLE_ASSIGN
junCHWRet2.m_flow_small = 1e-4 * junCHWRet2.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4453};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1717]] /* junCHWRet2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1712]] /* junCHWRet2.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4453;
}

/*
equation index: 4470
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[3] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4470};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1633]] /* junCHWRet.m_flow_nominal[3] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4470;
}

/*
equation index: 4471
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4471};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4471;
}

/*
equation index: 4472
type: SIMPLE_ASSIGN
junCHWRet.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1631]] /* junCHWRet.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4472;
}

/*
equation index: 4474
type: SIMPLE_ASSIGN
junCHWRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWRet.m_flow_nominal[1]) + abs(junCHWRet.m_flow_nominal[2]) + abs(junCHWRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4474};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1631]] /* junCHWRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1633]] /* junCHWRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4474;
}

/*
equation index: 4475
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_nominal = junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4475};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4475;
}

/*
equation index: 4476
type: SIMPLE_ASSIGN
junCHWRet.vol.tau = junCHWRet.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4476};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1678]] /* junCHWRet.tau PARAM */);
  threadData->lastEquationSolved = 4476;
}

/*
equation index: 4477
type: SIMPLE_ASSIGN
junCHWRet.vol.V_nominal = 0.0010044335697769957 * junCHWRet.vol.m_flow_nominal * junCHWRet.vol.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4477};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1705]] /* junCHWRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4477;
}

/*
equation index: 4480
type: SIMPLE_ASSIGN
junCHWRet.vol.T_start = junCHWRet.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1623]] /* junCHWRet.T_start PARAM */);
  threadData->lastEquationSolved = 4480;
}

/*
equation index: 4481
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.T = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4481};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4481;
}

/*
equation index: 4482
type: SIMPLE_ASSIGN
junCHWRet.vol.p_start = junCHWRet.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1635]] /* junCHWRet.p_start PARAM */);
  threadData->lastEquationSolved = 4482;
}

/*
equation index: 4483
type: SIMPLE_ASSIGN
junCHWRet.vol.state_start.p = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4483};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4483;
}

/*
equation index: 4487
type: SIMPLE_ASSIGN
junCHWRet.vol.rho_start = logic1.junCHWRet.vol.Medium.density(junCHWRet.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4487};
  logic1_junCHWRet_vol_Medium_ThermodynamicState tmp11;
  logic1_junCHWRet_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp11, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1704]] /* junCHWRet.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1703]] /* junCHWRet.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1700]] /* junCHWRet.vol.rho_start PARAM */) = omc_logic1_junCHWRet_vol_Medium_density(threadData, tmp11);
  threadData->lastEquationSolved = 4487;
}

/*
equation index: 4488
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.p_start = junCHWRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4488};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1698]] /* junCHWRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4488;
}

/*
equation index: 4489
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.T_start = junCHWRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4489};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1679]] /* junCHWRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4489;
}

/*
equation index: 4490
type: SIMPLE_ASSIGN
junCHWRet.vol.X_start[1] = junCHWRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4490};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1624]] /* junCHWRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4490;
}

/*
equation index: 4491
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.X_start[1] = junCHWRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4491};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1682]] /* junCHWRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4491;
}

/*
equation index: 4492
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.hStart = logic1.junCHWRet.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, junCHWRet.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4492};
  real_array tmp12;
  real_array_create(&tmp12, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1685]] /* junCHWRet.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1688]] /* junCHWRet.vol.dynBal.hStart PARAM */) = omc_logic1_junCHWRet_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.T_start PARAM */), tmp12);
  threadData->lastEquationSolved = 4492;
}

/*
equation index: 4497
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.rho_start = logic1.junCHWRet.vol.dynBal.Medium.density(logic1.junCHWRet.vol.dynBal.Medium.setState_pTX(junCHWRet.vol.dynBal.p_start, junCHWRet.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4497};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1692]] /* junCHWRet.vol.dynBal.rho_start PARAM */) = omc_logic1_junCHWRet_vol_dynBal_Medium_density(threadData, omc_logic1_junCHWRet_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1690]] /* junCHWRet.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1684]] /* junCHWRet.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4497;
}

/*
equation index: 4500
type: SIMPLE_ASSIGN
junCHWRet.vol.V = junCHWRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4500};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1681]] /* junCHWRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4500;
}

/*
equation index: 4501
type: SIMPLE_ASSIGN
junCHWRet.vol.dynBal.fluidVolume = junCHWRet.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1687]] /* junCHWRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1680]] /* junCHWRet.vol.V PARAM */);
  threadData->lastEquationSolved = 4501;
}

/*
equation index: 4514
type: SIMPLE_ASSIGN
junCHWRet.vol.m_flow_small = 1e-4 * abs(junCHWRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4514};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1697]] /* junCHWRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1696]] /* junCHWRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4514;
}

/*
equation index: 4527
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal = junCHWRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4527};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* junCHWRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1633]] /* junCHWRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4527;
}

/*
equation index: 4528
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_nominal_pos = abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4528};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1673]] /* junCHWRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* junCHWRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4528;
}

/*
equation index: 4531
type: SIMPLE_ASSIGN
junCHWRet.res3.eta_default = logic1.junCHWRet.res3.Medium.dynamicViscosity(junCHWRet.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4531};
  logic1_junCHWRet_res3_Medium_ThermodynamicState tmp13;
  logic1_junCHWRet_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp13, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1677]] /* junCHWRet.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1676]] /* junCHWRet.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1670]] /* junCHWRet.res3.eta_default PARAM */) = omc_logic1_junCHWRet_res3_Medium_dynamicViscosity(threadData, tmp13);
  threadData->lastEquationSolved = 4531;
}

/*
equation index: 4540
type: SIMPLE_ASSIGN
junCHWRet.res3.m_flow_small = 1e-4 * abs(junCHWRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4540};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1674]] /* junCHWRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1672]] /* junCHWRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4540;
}

/*
equation index: 4547
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal = junCHWRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4547};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1658]] /* junCHWRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1632]] /* junCHWRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4547;
}

/*
equation index: 4548
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_nominal_pos = abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1659]] /* junCHWRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1658]] /* junCHWRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4548;
}

/*
equation index: 4551
type: SIMPLE_ASSIGN
junCHWRet.res2.eta_default = logic1.junCHWRet.res2.Medium.dynamicViscosity(junCHWRet.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4551};
  logic1_junCHWRet_res2_Medium_ThermodynamicState tmp14;
  logic1_junCHWRet_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1663]] /* junCHWRet.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1662]] /* junCHWRet.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1656]] /* junCHWRet.res2.eta_default PARAM */) = omc_logic1_junCHWRet_res2_Medium_dynamicViscosity(threadData, tmp14);
  threadData->lastEquationSolved = 4551;
}

/*
equation index: 4560
type: SIMPLE_ASSIGN
junCHWRet.res2.m_flow_small = 1e-4 * abs(junCHWRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4560};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1660]] /* junCHWRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1658]] /* junCHWRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4560;
}

/*
equation index: 4567
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal = junCHWRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* junCHWRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1631]] /* junCHWRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4567;
}

/*
equation index: 4568
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_nominal_pos = abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1645]] /* junCHWRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* junCHWRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4568;
}

/*
equation index: 4571
type: SIMPLE_ASSIGN
junCHWRet.res1.eta_default = logic1.junCHWRet.res1.Medium.dynamicViscosity(junCHWRet.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4571};
  logic1_junCHWRet_res1_Medium_ThermodynamicState tmp15;
  logic1_junCHWRet_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp15, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1649]] /* junCHWRet.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1648]] /* junCHWRet.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1642]] /* junCHWRet.res1.eta_default PARAM */) = omc_logic1_junCHWRet_res1_Medium_dynamicViscosity(threadData, tmp15);
  threadData->lastEquationSolved = 4571;
}

/*
equation index: 4580
type: SIMPLE_ASSIGN
junCHWRet.res1.m_flow_small = 1e-4 * abs(junCHWRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4580};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1646]] /* junCHWRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1644]] /* junCHWRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4580;
}

/*
equation index: 4582
type: SIMPLE_ASSIGN
junCHWRet.m_flow_small = 1e-4 * junCHWRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1634]] /* junCHWRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1629]] /* junCHWRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4582;
}

/*
equation index: 4599
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[3] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4599};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* junCHWSup.m_flow_nominal[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4599;
}

/*
equation index: 4600
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[2] = -mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4600};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1798]] /* junCHWSup.m_flow_nominal[2] PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4600;
}

/*
equation index: 4601
type: SIMPLE_ASSIGN
junCHWSup.m_flow_nominal[1] = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4601};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* junCHWSup.m_flow_nominal[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4601;
}

/*
equation index: 4603
type: SIMPLE_ASSIGN
junCHWSup.mDyn_flow_nominal = 0.3333333333333333 * (abs(junCHWSup.m_flow_nominal[1]) + abs(junCHWSup.m_flow_nominal[2]) + abs(junCHWSup.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4603};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* junCHWSup.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1798]] /* junCHWSup.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* junCHWSup.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 4603;
}

/*
equation index: 4604
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_nominal = junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4604};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1862]] /* junCHWSup.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4604;
}

/*
equation index: 4605
type: SIMPLE_ASSIGN
junCHWSup.vol.tau = junCHWSup.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4605};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1844]] /* junCHWSup.tau PARAM */);
  threadData->lastEquationSolved = 4605;
}

/*
equation index: 4606
type: SIMPLE_ASSIGN
junCHWSup.vol.V_nominal = 0.0010044335697769957 * junCHWSup.vol.m_flow_nominal * junCHWSup.vol.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4606};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.vol.V_nominal PARAM */) = (0.0010044335697769957) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1862]] /* junCHWSup.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1871]] /* junCHWSup.vol.tau PARAM */)));
  threadData->lastEquationSolved = 4606;
}

/*
equation index: 4609
type: SIMPLE_ASSIGN
junCHWSup.vol.T_start = junCHWSup.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4609};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1789]] /* junCHWSup.T_start PARAM */);
  threadData->lastEquationSolved = 4609;
}

/*
equation index: 4610
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.T = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4610;
}

/*
equation index: 4611
type: SIMPLE_ASSIGN
junCHWSup.vol.p_start = junCHWSup.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1864]] /* junCHWSup.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1801]] /* junCHWSup.p_start PARAM */);
  threadData->lastEquationSolved = 4611;
}

/*
equation index: 4612
type: SIMPLE_ASSIGN
junCHWSup.vol.state_start.p = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4612};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1864]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4612;
}

/*
equation index: 4616
type: SIMPLE_ASSIGN
junCHWSup.vol.rho_start = logic1.junCHWSup.vol.Medium.density(junCHWSup.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4616};
  logic1_junCHWSup_vol_Medium_ThermodynamicState tmp16;
  logic1_junCHWSup_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp16, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1870]] /* junCHWSup.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1869]] /* junCHWSup.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1866]] /* junCHWSup.vol.rho_start PARAM */) = omc_logic1_junCHWSup_vol_Medium_density(threadData, tmp16);
  threadData->lastEquationSolved = 4616;
}

/*
equation index: 4617
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.p_start = junCHWSup.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4617};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* junCHWSup.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1864]] /* junCHWSup.vol.p_start PARAM */);
  threadData->lastEquationSolved = 4617;
}

/*
equation index: 4618
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.T_start = junCHWSup.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4618};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1845]] /* junCHWSup.vol.T_start PARAM */);
  threadData->lastEquationSolved = 4618;
}

/*
equation index: 4619
type: SIMPLE_ASSIGN
junCHWSup.vol.X_start[1] = junCHWSup.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4619};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1790]] /* junCHWSup.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4619;
}

/*
equation index: 4620
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.X_start[1] = junCHWSup.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4620};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1851]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1848]] /* junCHWSup.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4620;
}

/*
equation index: 4621
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.hStart = logic1.junCHWSup.vol.dynBal.Medium.specificEnthalpy_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, junCHWSup.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4621};
  real_array tmp17;
  real_array_create(&tmp17, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1851]] /* junCHWSup.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1854]] /* junCHWSup.vol.dynBal.hStart PARAM */) = omc_logic1_junCHWSup_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup.vol.dynBal.T_start PARAM */), tmp17);
  threadData->lastEquationSolved = 4621;
}

/*
equation index: 4626
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.rho_start = logic1.junCHWSup.vol.dynBal.Medium.density(logic1.junCHWSup.vol.dynBal.Medium.setState_pTX(junCHWSup.vol.dynBal.p_start, junCHWSup.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4626};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1858]] /* junCHWSup.vol.dynBal.rho_start PARAM */) = omc_logic1_junCHWSup_vol_dynBal_Medium_density(threadData, omc_logic1_junCHWSup_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1856]] /* junCHWSup.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1850]] /* junCHWSup.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4626;
}

/*
equation index: 4629
type: SIMPLE_ASSIGN
junCHWSup.vol.V = junCHWSup.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4629};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1847]] /* junCHWSup.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 4629;
}

/*
equation index: 4630
type: SIMPLE_ASSIGN
junCHWSup.vol.dynBal.fluidVolume = junCHWSup.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4630};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1853]] /* junCHWSup.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1846]] /* junCHWSup.vol.V PARAM */);
  threadData->lastEquationSolved = 4630;
}

/*
equation index: 4643
type: SIMPLE_ASSIGN
junCHWSup.vol.m_flow_small = 1e-4 * abs(junCHWSup.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4643};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1863]] /* junCHWSup.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1862]] /* junCHWSup.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4643;
}

/*
equation index: 4656
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal = junCHWSup.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4656};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1838]] /* junCHWSup.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1799]] /* junCHWSup.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 4656;
}

/*
equation index: 4657
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_nominal_pos = abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1839]] /* junCHWSup.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1838]] /* junCHWSup.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4657;
}

/*
equation index: 4660
type: SIMPLE_ASSIGN
junCHWSup.res3.eta_default = logic1.junCHWSup.res3.Medium.dynamicViscosity(junCHWSup.res3.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4660};
  logic1_junCHWSup_res3_Medium_ThermodynamicState tmp18;
  logic1_junCHWSup_res3_Medium_ThermodynamicState_wrap_vars(threadData,tmp18, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1843]] /* junCHWSup.res3.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1842]] /* junCHWSup.res3.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1836]] /* junCHWSup.res3.eta_default PARAM */) = omc_logic1_junCHWSup_res3_Medium_dynamicViscosity(threadData, tmp18);
  threadData->lastEquationSolved = 4660;
}

/*
equation index: 4669
type: SIMPLE_ASSIGN
junCHWSup.res3.m_flow_small = 1e-4 * abs(junCHWSup.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4669};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1840]] /* junCHWSup.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1838]] /* junCHWSup.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4669;
}

/*
equation index: 4676
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal = junCHWSup.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4676};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1824]] /* junCHWSup.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1798]] /* junCHWSup.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 4676;
}

/*
equation index: 4677
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_nominal_pos = abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4677};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1825]] /* junCHWSup.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1824]] /* junCHWSup.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4677;
}

/*
equation index: 4680
type: SIMPLE_ASSIGN
junCHWSup.res2.eta_default = logic1.junCHWSup.res2.Medium.dynamicViscosity(junCHWSup.res2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4680};
  logic1_junCHWSup_res2_Medium_ThermodynamicState tmp19;
  logic1_junCHWSup_res2_Medium_ThermodynamicState_wrap_vars(threadData,tmp19, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1829]] /* junCHWSup.res2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1828]] /* junCHWSup.res2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1822]] /* junCHWSup.res2.eta_default PARAM */) = omc_logic1_junCHWSup_res2_Medium_dynamicViscosity(threadData, tmp19);
  threadData->lastEquationSolved = 4680;
}

/*
equation index: 4689
type: SIMPLE_ASSIGN
junCHWSup.res2.m_flow_small = 1e-4 * abs(junCHWSup.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4689};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1826]] /* junCHWSup.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1824]] /* junCHWSup.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4689;
}

/*
equation index: 4696
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal = junCHWSup.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4696};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1810]] /* junCHWSup.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1797]] /* junCHWSup.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 4696;
}

/*
equation index: 4697
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_nominal_pos = abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4697};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1811]] /* junCHWSup.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1810]] /* junCHWSup.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4697;
}

/*
equation index: 4700
type: SIMPLE_ASSIGN
junCHWSup.res1.eta_default = logic1.junCHWSup.res1.Medium.dynamicViscosity(junCHWSup.res1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4700};
  logic1_junCHWSup_res1_Medium_ThermodynamicState tmp20;
  logic1_junCHWSup_res1_Medium_ThermodynamicState_wrap_vars(threadData,tmp20, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1815]] /* junCHWSup.res1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1814]] /* junCHWSup.res1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1808]] /* junCHWSup.res1.eta_default PARAM */) = omc_logic1_junCHWSup_res1_Medium_dynamicViscosity(threadData, tmp20);
  threadData->lastEquationSolved = 4700;
}

/*
equation index: 4709
type: SIMPLE_ASSIGN
junCHWSup.res1.m_flow_small = 1e-4 * abs(junCHWSup.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4709};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1812]] /* junCHWSup.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1810]] /* junCHWSup.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4709;
}

/*
equation index: 4711
type: SIMPLE_ASSIGN
junCHWSup.m_flow_small = 1e-4 * junCHWSup.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4711};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1800]] /* junCHWSup.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1795]] /* junCHWSup.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4711;
}

/*
equation index: 4722
type: SIMPLE_ASSIGN
chi2.TConEnt_nominal_degC = -273.15 + chi2.per.TConEnt_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4722};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[263]] /* chi2.TConEnt_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[299]] /* chi2.per.TConEnt_nominal PARAM */);
  threadData->lastEquationSolved = 4722;
}

/*
equation index: 4723
type: SIMPLE_ASSIGN
chiller2Capacity = 1000.0 * chiller2Capacity_TR * kWPerTR
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4723};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller2Capacity PARAM */) = (1000.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* chiller2Capacity_TR PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2154]] /* kWPerTR PARAM */)));
  threadData->lastEquationSolved = 4723;
}

/*
equation index: 4724
type: SIMPLE_ASSIGN
chi2.per.QEva_flow_nominal = -chiller2Capacity
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* chi2.per.QEva_flow_nominal PARAM */) = (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* chiller2Capacity PARAM */));
  threadData->lastEquationSolved = 4724;
}

/*
equation index: 4725
type: SIMPLE_ASSIGN
chi2.QEva_flow_nominal = chi2.per.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* chi2.QEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* chi2.per.QEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4725;
}

/*
equation index: 4726
type: SIMPLE_ASSIGN
chi2.Q_flow_small = 1e-9 * chi2.QEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4726};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[260]] /* chi2.Q_flow_small PARAM */) = (1e-9) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[259]] /* chi2.QEva_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4726;
}

/*
equation index: 4727
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal = chi2.per.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.TEvaLvg_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* chi2.per.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 4727;
}

/*
equation index: 4728
type: SIMPLE_ASSIGN
chi2.TEvaLvg_nominal_degC = -273.15 + chi2.TEvaLvg_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4728};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* chi2.TEvaLvg_nominal_degC PARAM */) = -273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[264]] /* chi2.TEvaLvg_nominal PARAM */);
  threadData->lastEquationSolved = 4728;
}

/*
equation index: 4729
type: SIMPLE_ASSIGN
chi2.mCon_flow_nominal = chi2.per.mCon_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4729};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[279]] /* chi2.mCon_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* chi2.per.mCon_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4729;
}

/*
equation index: 4730
type: SIMPLE_ASSIGN
chi2.mEva_flow_nominal = chi2.per.mEva_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4730};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* chi2.mEva_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[311]] /* chi2.per.mEva_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4730;
}

/*
equation index: 4731
type: SIMPLE_ASSIGN
chi2.etaMotor = chi2.per.etaMotor
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4731};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* chi2.etaMotor PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* chi2.per.etaMotor PARAM */);
  threadData->lastEquationSolved = 4731;
}

/*
equation index: 4732
type: SIMPLE_ASSIGN
chi2.PLRMin = chi2.per.PLRMin
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4732};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[257]] /* chi2.PLRMin PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[294]] /* chi2.per.PLRMin PARAM */);
  threadData->lastEquationSolved = 4732;
}

/*
equation index: 4733
type: SIMPLE_ASSIGN
chi2.PLRMinUnl = chi2.per.PLRMinUnl
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4733};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[258]] /* chi2.PLRMinUnl PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[295]] /* chi2.per.PLRMinUnl PARAM */);
  threadData->lastEquationSolved = 4733;
}

/*
equation index: 4734
type: SIMPLE_ASSIGN
chi2.PLRMax = chi2.per.PLRMax
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4734};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* chi2.PLRMax PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[293]] /* chi2.per.PLRMax PARAM */);
  threadData->lastEquationSolved = 4734;
}

/*
equation index: 4735
type: SIMPLE_ASSIGN
chi2.COP_nominal = chi2.per.COP_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4735};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* chi2.COP_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[283]] /* chi2.per.COP_nominal PARAM */);
  threadData->lastEquationSolved = 4735;
}

/*
equation index: 4738
type: SIMPLE_ASSIGN
chi2.rho2_nominal = logic1.chi2.Medium2.density(chi2.sta2_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4738};
  logic1_chi2_Medium2_ThermodynamicState tmp21;
  logic1_chi2_Medium2_ThermodynamicState_wrap_vars(threadData,tmp21, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* chi2.sta2_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* chi2.sta2_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.rho2_nominal PARAM */) = omc_logic1_chi2_Medium2_density(threadData, tmp21);
  threadData->lastEquationSolved = 4738;
}

/*
equation index: 4741
type: SIMPLE_ASSIGN
chi2.rho1_nominal = logic1.chi2.Medium1.density(chi2.sta1_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4741};
  logic1_chi2_Medium1_ThermodynamicState tmp22;
  logic1_chi2_Medium1_ThermodynamicState_wrap_vars(threadData,tmp22, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* chi2.sta1_nominal.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* chi2.sta1_nominal.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* chi2.rho1_nominal PARAM */) = omc_logic1_chi2_Medium1_density(threadData, tmp22);
  threadData->lastEquationSolved = 4741;
}

/*
equation index: 4747
type: SIMPLE_ASSIGN
chi2.m2_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4747};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.m2_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4747;
}

/*
equation index: 4748
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_nominal = chi2.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4748};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* chi2.preDro2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4748;
}

/*
equation index: 4749
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_nominal_pos = abs(chi2.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4749};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* chi2.preDro2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* chi2.preDro2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4749;
}

/*
equation index: 4752
type: SIMPLE_ASSIGN
chi2.preDro2.eta_default = logic1.chi2.preDro2.Medium.dynamicViscosity(chi2.preDro2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4752};
  logic1_chi2_preDro2_Medium_ThermodynamicState tmp23;
  logic1_chi2_preDro2_Medium_ThermodynamicState_wrap_vars(threadData,tmp23, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* chi2.preDro2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[338]] /* chi2.preDro2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* chi2.preDro2.eta_default PARAM */) = omc_logic1_chi2_preDro2_Medium_dynamicViscosity(threadData, tmp23);
  threadData->lastEquationSolved = 4752;
}

/*
equation index: 4761
type: SIMPLE_ASSIGN
chi2.preDro2.m_flow_small = 1e-4 * abs(chi2.preDro2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4761};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[336]] /* chi2.preDro2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* chi2.preDro2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4761;
}

/*
equation index: 4768
type: SIMPLE_ASSIGN
chi2.m1_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4768};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.m1_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4768;
}

/*
equation index: 4769
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_nominal = chi2.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4769};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* chi2.preDro1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4769;
}

/*
equation index: 4770
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_nominal_pos = abs(chi2.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4770};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[321]] /* chi2.preDro1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* chi2.preDro1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4770;
}

/*
equation index: 4773
type: SIMPLE_ASSIGN
chi2.preDro1.eta_default = logic1.chi2.preDro1.Medium.dynamicViscosity(chi2.preDro1.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4773};
  logic1_chi2_preDro1_Medium_ThermodynamicState tmp24;
  logic1_chi2_preDro1_Medium_ThermodynamicState_wrap_vars(threadData,tmp24, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* chi2.preDro1.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[324]] /* chi2.preDro1.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* chi2.preDro1.eta_default PARAM */) = omc_logic1_chi2_preDro1_Medium_dynamicViscosity(threadData, tmp24);
  threadData->lastEquationSolved = 4773;
}

/*
equation index: 4782
type: SIMPLE_ASSIGN
chi2.preDro1.m_flow_small = 1e-4 * abs(chi2.preDro1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4782};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[322]] /* chi2.preDro1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[320]] /* chi2.preDro1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4782;
}

/*
equation index: 4786
type: SIMPLE_ASSIGN
chi2.vol2.T_start = chi2.T2_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4786};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* chi2.vol2.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* chi2.T2_start PARAM */);
  threadData->lastEquationSolved = 4786;
}

/*
equation index: 4787
type: SIMPLE_ASSIGN
chi2.vol2.state_start.T = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4787};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* chi2.vol2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 4787;
}

/*
equation index: 4788
type: SIMPLE_ASSIGN
chi2.vol2.p_start = chi2.p2_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4788};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* chi2.vol2.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[282]] /* chi2.p2_start PARAM */);
  threadData->lastEquationSolved = 4788;
}

/*
equation index: 4789
type: SIMPLE_ASSIGN
chi2.vol2.state_start.p = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4789};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* chi2.vol2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 4789;
}

/*
equation index: 4793
type: SIMPLE_ASSIGN
chi2.vol2.rho_start = logic1.chi2.vol2.Medium.density(chi2.vol2.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4793};
  logic1_chi2_vol2_Medium_ThermodynamicState tmp25;
  logic1_chi2_vol2_Medium_ThermodynamicState_wrap_vars(threadData,tmp25, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[401]] /* chi2.vol2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[400]] /* chi2.vol2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* chi2.vol2.rho_start PARAM */) = omc_logic1_chi2_vol2_Medium_density(threadData, tmp25);
  threadData->lastEquationSolved = 4793;
}

/*
equation index: 4794
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.p_start = chi2.vol2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4794};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* chi2.vol2.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[395]] /* chi2.vol2.p_start PARAM */);
  threadData->lastEquationSolved = 4794;
}

/*
equation index: 4795
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.T_start = chi2.vol2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4795};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* chi2.vol2.T_start PARAM */);
  threadData->lastEquationSolved = 4795;
}

/*
equation index: 4796
type: SIMPLE_ASSIGN
chi2.vol2.X_start[1] = chi2.X2_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4796};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* chi2.vol2.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* chi2.X2_start[1] PARAM */);
  threadData->lastEquationSolved = 4796;
}

/*
equation index: 4797
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.X_start[1] = chi2.vol2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4797};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* chi2.vol2.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* chi2.vol2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4797;
}

/*
equation index: 4798
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.hStart = logic1.chi2.vol2.dynBal.Medium.specificEnthalpy_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, chi2.vol2.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4798};
  real_array tmp26;
  real_array_create(&tmp26, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[382]] /* chi2.vol2.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[385]] /* chi2.vol2.dynBal.hStart PARAM */) = omc_logic1_chi2_vol2_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.dynBal.T_start PARAM */), tmp26);
  threadData->lastEquationSolved = 4798;
}

/*
equation index: 4803
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.rho_start = logic1.chi2.vol2.dynBal.Medium.density(logic1.chi2.vol2.dynBal.Medium.setState_pTX(chi2.vol2.dynBal.p_start, chi2.vol2.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4803};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[389]] /* chi2.vol2.dynBal.rho_start PARAM */) = omc_logic1_chi2_vol2_dynBal_Medium_density(threadData, omc_logic1_chi2_vol2_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[387]] /* chi2.vol2.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[381]] /* chi2.vol2.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4803;
}

/*
equation index: 4806
type: SIMPLE_ASSIGN
chi2.vol2.V = 30.0 * chi2.m2_flow_nominal / chi2.rho2_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4806};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* chi2.vol2.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.m2_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* chi2.rho2_nominal PARAM */),"chi2.rho2_nominal",equationIndexes));
  threadData->lastEquationSolved = 4806;
}

/*
equation index: 4807
type: SIMPLE_ASSIGN
chi2.vol2.dynBal.fluidVolume = chi2.vol2.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4807};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* chi2.vol2.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* chi2.vol2.V PARAM */);
  threadData->lastEquationSolved = 4807;
}

/*
equation index: 4820
type: SIMPLE_ASSIGN
chi2.vol2.m_flow_nominal = chi2.m2_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4820};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* chi2.vol2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.m2_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4820;
}

/*
equation index: 4821
type: SIMPLE_ASSIGN
chi2.vol2.m_flow_small = 1e-4 * abs(chi2.vol2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4821};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* chi2.vol2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* chi2.vol2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4821;
}

/*
equation index: 4830
type: SIMPLE_ASSIGN
chi2.vol1.T_start = chi2.T1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4830};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* chi2.vol1.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* chi2.T1_start PARAM */);
  threadData->lastEquationSolved = 4830;
}

/*
equation index: 4831
type: SIMPLE_ASSIGN
chi2.vol1.state_start.T = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4831};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* chi2.vol1.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 4831;
}

/*
equation index: 4832
type: SIMPLE_ASSIGN
chi2.vol1.p_start = chi2.p1_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4832};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* chi2.vol1.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[281]] /* chi2.p1_start PARAM */);
  threadData->lastEquationSolved = 4832;
}

/*
equation index: 4833
type: SIMPLE_ASSIGN
chi2.vol1.state_start.p = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4833};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* chi2.vol1.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 4833;
}

/*
equation index: 4837
type: SIMPLE_ASSIGN
chi2.vol1.rho_start = logic1.chi2.vol1.Medium.density(chi2.vol1.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4837};
  logic1_chi2_vol1_Medium_ThermodynamicState tmp27;
  logic1_chi2_vol1_Medium_ThermodynamicState_wrap_vars(threadData,tmp27, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* chi2.vol1.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* chi2.vol1.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* chi2.vol1.rho_start PARAM */) = omc_logic1_chi2_vol1_Medium_density(threadData, tmp27);
  threadData->lastEquationSolved = 4837;
}

/*
equation index: 4838
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.p_start = chi2.vol1.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4838};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* chi2.vol1.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* chi2.vol1.p_start PARAM */);
  threadData->lastEquationSolved = 4838;
}

/*
equation index: 4839
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.T_start = chi2.vol1.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4839};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* chi2.vol1.T_start PARAM */);
  threadData->lastEquationSolved = 4839;
}

/*
equation index: 4840
type: SIMPLE_ASSIGN
chi2.vol1.X_start[1] = chi2.X1_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4840};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* chi2.vol1.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* chi2.X1_start[1] PARAM */);
  threadData->lastEquationSolved = 4840;
}

/*
equation index: 4841
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.X_start[1] = chi2.vol1.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4841};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* chi2.vol1.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* chi2.vol1.X_start[1] PARAM */);
  threadData->lastEquationSolved = 4841;
}

/*
equation index: 4842
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.hStart = logic1.chi2.vol1.dynBal.Medium.specificEnthalpy_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, chi2.vol1.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4842};
  real_array tmp28;
  real_array_create(&tmp28, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* chi2.vol1.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* chi2.vol1.dynBal.hStart PARAM */) = omc_logic1_chi2_vol1_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.dynBal.T_start PARAM */), tmp28);
  threadData->lastEquationSolved = 4842;
}

/*
equation index: 4847
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.rho_start = logic1.chi2.vol1.dynBal.Medium.density(logic1.chi2.vol1.dynBal.Medium.setState_pTX(chi2.vol1.dynBal.p_start, chi2.vol1.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4847};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* chi2.vol1.dynBal.rho_start PARAM */) = omc_logic1_chi2_vol1_dynBal_Medium_density(threadData, omc_logic1_chi2_vol1_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* chi2.vol1.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[356]] /* chi2.vol1.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 4847;
}

/*
equation index: 4850
type: SIMPLE_ASSIGN
chi2.vol1.V = 30.0 * chi2.m1_flow_nominal / chi2.rho1_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4850};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* chi2.vol1.V PARAM */) = (30.0) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.m1_flow_nominal PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* chi2.rho1_nominal PARAM */),"chi2.rho1_nominal",equationIndexes));
  threadData->lastEquationSolved = 4850;
}

/*
equation index: 4851
type: SIMPLE_ASSIGN
chi2.vol1.dynBal.fluidVolume = chi2.vol1.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4851};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* chi2.vol1.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* chi2.vol1.V PARAM */);
  threadData->lastEquationSolved = 4851;
}

/*
equation index: 4864
type: SIMPLE_ASSIGN
chi2.vol1.m_flow_nominal = chi2.m1_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4864};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* chi2.vol1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.m1_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4864;
}

/*
equation index: 4865
type: SIMPLE_ASSIGN
chi2.vol1.m_flow_small = 1e-4 * abs(chi2.vol1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4865};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* chi2.vol1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* chi2.vol1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4865;
}

/*
equation index: 4889
type: SIMPLE_ASSIGN
chi2.m2_flow_small = 1e-4 * abs(chi2.m2_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4889};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* chi2.m2_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* chi2.m2_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4889;
}

/*
equation index: 4890
type: SIMPLE_ASSIGN
chi2.m1_flow_small = 1e-4 * abs(chi2.m1_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4890};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* chi2.m1_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[275]] /* chi2.m1_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4890;
}

/*
equation index: 4893
type: SIMPLE_ASSIGN
TCWEntTow2.ratTau = TCWEntTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4893};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* TCWEntTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* TCWEntTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 4893;
}

/*
equation index: 4894
type: SIMPLE_ASSIGN
TCWEntTow2.tauHeaTraInv = if TCWEntTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCWEntTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4894};
  modelica_boolean tmp29;
  tmp29 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* TCWEntTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* TCWEntTow2.tauHeaTraInv PARAM */) = (tmp29?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* TCWEntTow2.tauHeaTra PARAM */),"TCWEntTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 4894;
}

/*
equation index: 4900
type: SIMPLE_ASSIGN
TCWEntTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4900};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* TCWEntTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4900;
}

/*
equation index: 4901
type: SIMPLE_ASSIGN
TCWEntTow2.m_flow_small = 1e-4 * TCWEntTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4901};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* TCWEntTow2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* TCWEntTow2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4901;
}

/*
equation index: 4903
type: SIMPLE_ASSIGN
TWCLeaTow2.ratTau = TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4903};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* TWCLeaTow2.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* TWCLeaTow2.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 4903;
}

/*
equation index: 4904
type: SIMPLE_ASSIGN
TWCLeaTow2.tauHeaTraInv = if TWCLeaTow2.tauHeaTra < 1e-10 then 0.0 else 1.0 / TWCLeaTow2.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4904};
  modelica_boolean tmp30;
  tmp30 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* TWCLeaTow2.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* TWCLeaTow2.tauHeaTraInv PARAM */) = (tmp30?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* TWCLeaTow2.tauHeaTra PARAM */),"TWCLeaTow2.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 4904;
}

/*
equation index: 4910
type: SIMPLE_ASSIGN
TWCLeaTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4910};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* TWCLeaTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4910;
}

/*
equation index: 4911
type: SIMPLE_ASSIGN
TWCLeaTow2.m_flow_small = 1e-4 * TWCLeaTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4911};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* TWCLeaTow2.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* TWCLeaTow2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4911;
}

/*
equation index: 4913
type: SIMPLE_ASSIGN
val7.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4913};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 4913;
}

/*
equation index: 4914
type: SIMPLE_ASSIGN
val7.kFixed = 0.003341138439631633 * val7.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4914};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2763]] /* val7.kFixed PARAM */) = (0.003341138439631633) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4914;
}

/*
equation index: 4920
type: SIMPLE_ASSIGN
val7.dp_nominal = 89580.0 + val7.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4920};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2760]] /* val7.dp_nominal PARAM */) = 89580.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2759]] /* val7.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 4920;
}

/*
equation index: 4921
type: SIMPLE_ASSIGN
val7.dp_nominal_pos = abs(val7.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4921};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2761]] /* val7.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2760]] /* val7.dp_nominal PARAM */));
  threadData->lastEquationSolved = 4921;
}

/*
equation index: 4922
type: SIMPLE_ASSIGN
val7.m_flow_nominal_pos = abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4922};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2766]] /* val7.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 4922;
}

/*
equation index: 4925
type: SIMPLE_ASSIGN
val7.eta_default = logic1.val7.Medium.dynamicViscosity(val7.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4925};
  logic1_val7_Medium_ThermodynamicState tmp31;
  logic1_val7_Medium_ThermodynamicState_wrap_vars(threadData,tmp31, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2772]] /* val7.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2771]] /* val7.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2762]] /* val7.eta_default PARAM */) = omc_logic1_val7_Medium_dynamicViscosity(threadData, tmp31);
  threadData->lastEquationSolved = 4925;
}

/*
equation index: 4926
type: SIMPLE_ASSIGN
val7.m_flow_turbulent = val7.deltaM * abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4926};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2768]] /* val7.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2757]] /* val7.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4926;
}

/*
equation index: 4933
type: SIMPLE_ASSIGN
val7.m_flow_small = 1e-4 * abs(val7.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4933};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2767]] /* val7.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2765]] /* val7.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 4933;
}

/*
equation index: 4935
type: SIMPLE_ASSIGN
expVesChi2.state_start.p = expVesChi2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4935};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* expVesChi2.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1345]] /* expVesChi2.p_start PARAM */);
  threadData->lastEquationSolved = 4935;
}

/*
equation index: 4936
type: SIMPLE_ASSIGN
expVesChi2.state_start.T = expVesChi2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4936};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* expVesChi2.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1340]] /* expVesChi2.T_start PARAM */);
  threadData->lastEquationSolved = 4936;
}

/*
equation index: 4937
type: SIMPLE_ASSIGN
expVesChi2.rho_start = logic1.expVesChi2.Medium.density(expVesChi2.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4937};
  logic1_expVesChi2_Medium_ThermodynamicState tmp32;
  logic1_expVesChi2_Medium_ThermodynamicState_wrap_vars(threadData,tmp32, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1348]] /* expVesChi2.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1347]] /* expVesChi2.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1346]] /* expVesChi2.rho_start PARAM */) = omc_logic1_expVesChi2_Medium_density(threadData, tmp32);
  threadData->lastEquationSolved = 4937;
}

/*
equation index: 4983
type: SIMPLE_ASSIGN
pumCW2.eff.per.speeds_rpm[1] = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4983};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2595]] /* pumCW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 4983;
}

/*
equation index: 4984
type: SIMPLE_ASSIGN
pumCW2.eff.per.constantSpeed_rpm = pumCW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4984};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2581]] /* pumCW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2593]] /* pumCW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 4984;
}

/*
equation index: 4988
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4988};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[790]] /* pumCW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 4988;
}

/*
equation index: 4989
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.P[1] = pumCW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4989};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2586]] /* pumCW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2621]] /* pumCW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 4989;
}

/*
equation index: 4990
type: SIMPLE_ASSIGN
pumCW2.eff.per.power.V_flow[1] = pumCW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4990};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2587]] /* pumCW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2622]] /* pumCW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 4990;
}

/*
equation index: 4991
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.eta[1] = pumCW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4991};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2585]] /* pumCW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2620]] /* pumCW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 4991;
}

/*
equation index: 4992
type: SIMPLE_ASSIGN
pumCW2.eff.per.motorEfficiency.V_flow[1] = pumCW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4992};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2584]] /* pumCW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2619]] /* pumCW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 4992;
}

/*
equation index: 4993
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.eta[1] = pumCW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4993};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2583]] /* pumCW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2618]] /* pumCW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 4993;
}

/*
equation index: 4994
type: SIMPLE_ASSIGN
pumCW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_4994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4994};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2582]] /* pumCW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2617]] /* pumCW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 4994;
}

/*
equation index: 5008
type: SIMPLE_ASSIGN
pumCW2.heaDis.motorCooledByFluid = pumCW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5008};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[796]] /* pumCW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[799]] /* pumCW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5008;
}

/*
equation index: 5014
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5014};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2634]] /* pumCW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2611]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5014;
}

/*
equation index: 5015
type: SIMPLE_ASSIGN
pumCW2.preSou.m_flow_start = pumCW2.m_flow_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5015};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2635]] /* pumCW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2612]] /* pumCW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5015;
}

/*
equation index: 5018
type: SIMPLE_ASSIGN
pumCW2.vol.tau = pumCW2.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5018};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* pumCW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2643]] /* pumCW2.tau PARAM */);
  threadData->lastEquationSolved = 5018;
}

/*
equation index: 5019
type: SIMPLE_ASSIGN
pumCW2.vol.V_nominal = 12.5601875 * pumCW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5019};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2646]] /* pumCW2.vol.V_nominal PARAM */) = (12.5601875) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2670]] /* pumCW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 5019;
}

/*
equation index: 5022
type: SIMPLE_ASSIGN
pumCW2.vol.T_start = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5022};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* pumCW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 5022;
}

/*
equation index: 5023
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.T = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5023};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* pumCW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5023;
}

/*
equation index: 5024
type: SIMPLE_ASSIGN
pumCW2.vol.p_start = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5024};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2614]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 5024;
}

/*
equation index: 5025
type: SIMPLE_ASSIGN
pumCW2.vol.state_start.p = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5025};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* pumCW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5025;
}

/*
equation index: 5029
type: SIMPLE_ASSIGN
pumCW2.vol.rho_start = logic1.pumCW2.vol.Medium.density(pumCW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5029};
  logic1_pumCW2_vol_Medium_ThermodynamicState tmp33;
  logic1_pumCW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2669]] /* pumCW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2668]] /* pumCW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2665]] /* pumCW2.vol.rho_start PARAM */) = omc_logic1_pumCW2_vol_Medium_density(threadData, tmp33);
  threadData->lastEquationSolved = 5029;
}

/*
equation index: 5030
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.p_start = pumCW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5030};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumCW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2663]] /* pumCW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5030;
}

/*
equation index: 5031
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.T_start = pumCW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5031};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumCW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2644]] /* pumCW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5031;
}

/*
equation index: 5032
type: SIMPLE_ASSIGN
pumCW2.vol.X_start[1] = pumCW2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5032};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* pumCW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2548]] /* pumCW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5032;
}

/*
equation index: 5033
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.X_start[1] = pumCW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5033};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumCW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2647]] /* pumCW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5033;
}

/*
equation index: 5034
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.hStart = logic1.pumCW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, pumCW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5034};
  real_array tmp34;
  real_array_create(&tmp34, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2650]] /* pumCW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2653]] /* pumCW2.vol.dynBal.hStart PARAM */) = omc_logic1_pumCW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumCW2.vol.dynBal.T_start PARAM */), tmp34);
  threadData->lastEquationSolved = 5034;
}

/*
equation index: 5039
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.rho_start = logic1.pumCW2.vol.dynBal.Medium.density(logic1.pumCW2.vol.dynBal.Medium.setState_pTX(pumCW2.vol.dynBal.p_start, pumCW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5039};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2657]] /* pumCW2.vol.dynBal.rho_start PARAM */) = omc_logic1_pumCW2_vol_dynBal_Medium_density(threadData, omc_logic1_pumCW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2655]] /* pumCW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2649]] /* pumCW2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5039;
}

/*
equation index: 5042
type: SIMPLE_ASSIGN
pumCW2.vol.V = pumCW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5042};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* pumCW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2646]] /* pumCW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5042;
}

/*
equation index: 5043
type: SIMPLE_ASSIGN
pumCW2.vol.dynBal.fluidVolume = pumCW2.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5043};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2652]] /* pumCW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2645]] /* pumCW2.vol.V PARAM */);
  threadData->lastEquationSolved = 5043;
}

/*
equation index: 5056
type: SIMPLE_ASSIGN
pumCW2.vol.m_flow_small = pumCW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5056};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2662]] /* pumCW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2611]] /* pumCW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5056;
}

/*
equation index: 5065
type: SIMPLE_ASSIGN
pumCW2.sta_start.p = pumCW2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5065};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* pumCW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2614]] /* pumCW2.p_start PARAM */);
  threadData->lastEquationSolved = 5065;
}

/*
equation index: 5066
type: SIMPLE_ASSIGN
pumCW2.sta_start.T = pumCW2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5066};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* pumCW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2546]] /* pumCW2.T_start PARAM */);
  threadData->lastEquationSolved = 5066;
}

/*
equation index: 5067
type: SIMPLE_ASSIGN
pumCW2.h_outflow_start = logic1.pumCW2.Medium.specificEnthalpy(pumCW2.sta_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5067};
  logic1_pumCW2_Medium_ThermodynamicState tmp35;
  logic1_pumCW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp35, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2641]] /* pumCW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2640]] /* pumCW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2607]] /* pumCW2.h_outflow_start PARAM */) = omc_logic1_pumCW2_Medium_specificEnthalpy(threadData, tmp35);
  threadData->lastEquationSolved = 5067;
}

/*
equation index: 5079
type: SIMPLE_ASSIGN
pumCW2.stageInputs[1] = pumCW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5079};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2642]] /* pumCW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2613]] /* pumCW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5079;
}

/*
equation index: 5080
type: SIMPLE_ASSIGN
pumCW2.constInput = pumCW2.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5080};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2552]] /* pumCW2.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2553]] /* pumCW2.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 5080;
}

/*
equation index: 5083
type: SIMPLE_ASSIGN
pumCW2.per.speeds_rpm[1] = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5083};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* pumCW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5083;
}

/*
equation index: 5084
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed_rpm = pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5084};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2616]] /* pumCW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5084;
}

/*
equation index: 5085
type: SIMPLE_ASSIGN
pumCW2.per.speeds[1] = pumCW2.per.speeds_rpm[1] / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5085};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2629]] /* pumCW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2630]] /* pumCW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5085;
}

/*
equation index: 5086
type: SIMPLE_ASSIGN
pumCW2.per.constantSpeed = pumCW2.per.constantSpeed_rpm / pumCW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5086};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2615]] /* pumCW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2616]] /* pumCW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2628]] /* pumCW2.per.speed_rpm_nominal PARAM */),"pumCW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5086;
}

/*
equation index: 5102
type: SIMPLE_ASSIGN
cooTow2.m_flow_nominal = mCW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5102};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* cooTow2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2157]] /* mCW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5102;
}

/*
equation index: 5103
type: SIMPLE_ASSIGN
cooTow2.mRef_flow = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1156]] /* cooTow2.mRef_flow PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5103;
}

/*
equation index: 5108
type: SIMPLE_ASSIGN
cooTow2.rho_default = logic1.cooTow2.Medium.density(cooTow2.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5108};
  logic1_cooTow2_Medium_ThermodynamicState tmp36;
  logic1_cooTow2_Medium_ThermodynamicState_wrap_vars(threadData,tmp36, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1178]] /* cooTow2.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1177]] /* cooTow2.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.rho_default PARAM */) = omc_logic1_cooTow2_Medium_density(threadData, tmp36);
  threadData->lastEquationSolved = 5108;
}

/*
equation index: 5111
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_nominal = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* cooTow2.preDro.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5111;
}

/*
equation index: 5112
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_nominal_pos = abs(cooTow2.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* cooTow2.preDro.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5112;
}

/*
equation index: 5113
type: SIMPLE_ASSIGN
cooTow2.preDro.k = 0.0030932931235336655 * cooTow2.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1167]] /* cooTow2.preDro.k PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 5113;
}

/*
equation index: 5118
type: SIMPLE_ASSIGN
cooTow2.preDro.eta_default = logic1.cooTow2.preDro.Medium.dynamicViscosity(cooTow2.preDro.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5118};
  logic1_cooTow2_preDro_Medium_ThermodynamicState tmp37;
  logic1_cooTow2_preDro_Medium_ThermodynamicState_wrap_vars(threadData,tmp37, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1173]] /* cooTow2.preDro.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1172]] /* cooTow2.preDro.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1166]] /* cooTow2.preDro.eta_default PARAM */) = omc_logic1_cooTow2_preDro_Medium_dynamicViscosity(threadData, tmp37);
  threadData->lastEquationSolved = 5118;
}

/*
equation index: 5119
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_turbulent = 0.1 * cooTow2.preDro.m_flow_nominal_pos
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1171]] /* cooTow2.preDro.m_flow_turbulent PARAM */) = (0.1) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1169]] /* cooTow2.preDro.m_flow_nominal_pos PARAM */));
  threadData->lastEquationSolved = 5119;
}

/*
equation index: 5127
type: SIMPLE_ASSIGN
cooTow2.preDro.m_flow_small = 1e-4 * abs(cooTow2.preDro.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1170]] /* cooTow2.preDro.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1168]] /* cooTow2.preDro.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5127;
}

/*
equation index: 5131
type: SIMPLE_ASSIGN
cooTow2.vol.T_start = cooTow2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* cooTow2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1132]] /* cooTow2.T_start PARAM */);
  threadData->lastEquationSolved = 5131;
}

/*
equation index: 5132
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.T = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* cooTow2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5132;
}

/*
equation index: 5133
type: SIMPLE_ASSIGN
cooTow2.vol.p_start = cooTow2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* cooTow2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1159]] /* cooTow2.p_start PARAM */);
  threadData->lastEquationSolved = 5133;
}

/*
equation index: 5134
type: SIMPLE_ASSIGN
cooTow2.vol.state_start.p = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* cooTow2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5134;
}

/*
equation index: 5138
type: SIMPLE_ASSIGN
cooTow2.vol.rho_start = logic1.cooTow2.vol.Medium.density(cooTow2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5138};
  logic1_cooTow2_vol_Medium_ThermodynamicState tmp38;
  logic1_cooTow2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp38, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1206]] /* cooTow2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1205]] /* cooTow2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1202]] /* cooTow2.vol.rho_start PARAM */) = omc_logic1_cooTow2_vol_Medium_density(threadData, tmp38);
  threadData->lastEquationSolved = 5138;
}

/*
equation index: 5139
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.p_start = cooTow2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* cooTow2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1200]] /* cooTow2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5139;
}

/*
equation index: 5140
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.T_start = cooTow2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5140};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* cooTow2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1182]] /* cooTow2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5140;
}

/*
equation index: 5141
type: SIMPLE_ASSIGN
cooTow2.vol.X_start[1] = cooTow2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* cooTow2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1133]] /* cooTow2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5141;
}

/*
equation index: 5142
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.X_start[1] = cooTow2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* cooTow2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1184]] /* cooTow2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5142;
}

/*
equation index: 5143
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.hStart = logic1.cooTow2.vol.dynBal.Medium.specificEnthalpy_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, cooTow2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5143};
  real_array tmp39;
  real_array_create(&tmp39, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1187]] /* cooTow2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1190]] /* cooTow2.vol.dynBal.hStart PARAM */) = omc_logic1_cooTow2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* cooTow2.vol.dynBal.T_start PARAM */), tmp39);
  threadData->lastEquationSolved = 5143;
}

/*
equation index: 5148
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.rho_start = logic1.cooTow2.vol.dynBal.Medium.density(logic1.cooTow2.vol.dynBal.Medium.setState_pTX(cooTow2.vol.dynBal.p_start, cooTow2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1194]] /* cooTow2.vol.dynBal.rho_start PARAM */) = omc_logic1_cooTow2_vol_dynBal_Medium_density(threadData, omc_logic1_cooTow2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1192]] /* cooTow2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1186]] /* cooTow2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5148;
}

/*
equation index: 5151
type: SIMPLE_ASSIGN
cooTow2.vol.V = cooTow2.m_flow_nominal * cooTow2.tau / cooTow2.rho_default
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5151};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.vol.V PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* cooTow2.m_flow_nominal PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1181]] /* cooTow2.tau PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1176]] /* cooTow2.rho_default PARAM */),"cooTow2.rho_default",equationIndexes));
  threadData->lastEquationSolved = 5151;
}

/*
equation index: 5152
type: SIMPLE_ASSIGN
cooTow2.vol.dynBal.fluidVolume = cooTow2.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5152};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1189]] /* cooTow2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1183]] /* cooTow2.vol.V PARAM */);
  threadData->lastEquationSolved = 5152;
}

/*
equation index: 5165
type: SIMPLE_ASSIGN
cooTow2.vol.m_flow_nominal = cooTow2.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* cooTow2.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* cooTow2.m_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5165;
}

/*
equation index: 5166
type: SIMPLE_ASSIGN
cooTow2.vol.m_flow_small = 1e-4 * abs(cooTow2.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5166};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1199]] /* cooTow2.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1198]] /* cooTow2.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5166;
}

/*
equation index: 5185
type: SIMPLE_ASSIGN
cooTow2.m_flow_small = 1e-4 * abs(cooTow2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5185};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1158]] /* cooTow2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1157]] /* cooTow2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5185;
}

/*
equation index: 5187
type: SIMPLE_ASSIGN
TCHWChi2Out.ratTau = TCHWChi2Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5187};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* TCHWChi2Out.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 5187;
}

/*
equation index: 5188
type: SIMPLE_ASSIGN
TCHWChi2Out.tauHeaTraInv = if TCHWChi2Out.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi2Out.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5188};
  modelica_boolean tmp40;
  tmp40 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* TCHWChi2Out.tauHeaTraInv PARAM */) = (tmp40?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* TCHWChi2Out.tauHeaTra PARAM */),"TCHWChi2Out.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 5188;
}

/*
equation index: 5194
type: SIMPLE_ASSIGN
TCHWChi2Out.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5194};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TCHWChi2Out.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5194;
}

/*
equation index: 5195
type: SIMPLE_ASSIGN
TCHWChi2Out.m_flow_small = 1e-4 * TCHWChi2Out.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5195};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* TCHWChi2Out.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* TCHWChi2Out.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5195;
}

/*
equation index: 5197
type: SIMPLE_ASSIGN
TCHWChi2In.ratTau = TCHWChi2In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5197};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* TCHWChi2In.ratTau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */);
  threadData->lastEquationSolved = 5197;
}

/*
equation index: 5198
type: SIMPLE_ASSIGN
TCHWChi2In.tauHeaTraInv = if TCHWChi2In.tauHeaTra < 1e-10 then 0.0 else 1.0 / TCHWChi2In.tauHeaTra
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5198};
  modelica_boolean tmp41;
  tmp41 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */),1e-10);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* TCHWChi2In.tauHeaTraInv PARAM */) = (tmp41?0.0:DIVISION_SIM(1.0,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* TCHWChi2In.tauHeaTra PARAM */),"TCHWChi2In.tauHeaTra",equationIndexes));
  threadData->lastEquationSolved = 5198;
}

/*
equation index: 5204
type: SIMPLE_ASSIGN
TCHWChi2In.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* TCHWChi2In.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5204;
}

/*
equation index: 5205
type: SIMPLE_ASSIGN
TCHWChi2In.m_flow_small = 1e-4 * TCHWChi2In.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5205};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* TCHWChi2In.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* TCHWChi2In.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5205;
}

/*
equation index: 5207
type: SIMPLE_ASSIGN
val8.m_flow_nominal = mCHW_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5207};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2156]] /* mCHW_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5207;
}

/*
equation index: 5208
type: SIMPLE_ASSIGN
val8.kFixed = 0.0030932931235336655 * val8.m_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5208};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2786]] /* val8.kFixed PARAM */) = (0.0030932931235336655) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5208;
}

/*
equation index: 5214
type: SIMPLE_ASSIGN
val8.dp_nominal = 104510.0 + val8.dpValve_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5214};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* val8.dp_nominal PARAM */) = 104510.0 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2782]] /* val8.dpValve_nominal PARAM */);
  threadData->lastEquationSolved = 5214;
}

/*
equation index: 5215
type: SIMPLE_ASSIGN
val8.dp_nominal_pos = abs(val8.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5215};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2784]] /* val8.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2783]] /* val8.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5215;
}

/*
equation index: 5216
type: SIMPLE_ASSIGN
val8.m_flow_nominal_pos = abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5216};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2789]] /* val8.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5216;
}

/*
equation index: 5219
type: SIMPLE_ASSIGN
val8.eta_default = logic1.val8.Medium.dynamicViscosity(val8.sta_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5219};
  logic1_val8_Medium_ThermodynamicState tmp42;
  logic1_val8_Medium_ThermodynamicState_wrap_vars(threadData,tmp42, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2795]] /* val8.sta_default.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2794]] /* val8.sta_default.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2785]] /* val8.eta_default PARAM */) = omc_logic1_val8_Medium_dynamicViscosity(threadData, tmp42);
  threadData->lastEquationSolved = 5219;
}

/*
equation index: 5220
type: SIMPLE_ASSIGN
val8.m_flow_turbulent = val8.deltaM * abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2791]] /* val8.m_flow_turbulent PARAM */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2780]] /* val8.deltaM PARAM */)) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5220;
}

/*
equation index: 5227
type: SIMPLE_ASSIGN
val8.m_flow_small = 1e-4 * abs(val8.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5227};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2790]] /* val8.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2788]] /* val8.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5227;
}

/*
equation index: 5269
type: SIMPLE_ASSIGN
pumCHW2.eff.per.speeds_rpm[1] = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5269};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2339]] /* pumCHW2.eff.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5269;
}

/*
equation index: 5270
type: SIMPLE_ASSIGN
pumCHW2.eff.per.constantSpeed_rpm = pumCHW2.eff.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5270};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2325]] /* pumCHW2.eff.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2337]] /* pumCHW2.eff.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5270;
}

/*
equation index: 5274
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5274};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[712]] /* pumCHW2.eff.per.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[721]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5274;
}

/*
equation index: 5275
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.P[1] = pumCHW2.per.power.P[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5275};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2330]] /* pumCHW2.eff.per.power.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2365]] /* pumCHW2.per.power.P[1] PARAM */);
  threadData->lastEquationSolved = 5275;
}

/*
equation index: 5276
type: SIMPLE_ASSIGN
pumCHW2.eff.per.power.V_flow[1] = pumCHW2.per.power.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5276};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2331]] /* pumCHW2.eff.per.power.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2366]] /* pumCHW2.per.power.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5276;
}

/*
equation index: 5277
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.eta[1] = pumCHW2.per.motorEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5277};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2329]] /* pumCHW2.eff.per.motorEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2364]] /* pumCHW2.per.motorEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5277;
}

/*
equation index: 5278
type: SIMPLE_ASSIGN
pumCHW2.eff.per.motorEfficiency.V_flow[1] = pumCHW2.per.motorEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5278};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2328]] /* pumCHW2.eff.per.motorEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2363]] /* pumCHW2.per.motorEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5278;
}

/*
equation index: 5279
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.eta[1] = pumCHW2.per.hydraulicEfficiency.eta[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5279};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2327]] /* pumCHW2.eff.per.hydraulicEfficiency.eta[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2362]] /* pumCHW2.per.hydraulicEfficiency.eta[1] PARAM */);
  threadData->lastEquationSolved = 5279;
}

/*
equation index: 5280
type: SIMPLE_ASSIGN
pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] = pumCHW2.per.hydraulicEfficiency.V_flow[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5280};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2326]] /* pumCHW2.eff.per.hydraulicEfficiency.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2361]] /* pumCHW2.per.hydraulicEfficiency.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 5280;
}

/*
equation index: 5294
type: SIMPLE_ASSIGN
pumCHW2.heaDis.motorCooledByFluid = pumCHW2.per.motorCooledByFluid
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5294};
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[718]] /* pumCHW2.heaDis.motorCooledByFluid PARAM */) = (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[721]] /* pumCHW2.per.motorCooledByFluid PARAM */);
  threadData->lastEquationSolved = 5294;
}

/*
equation index: 5300
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5300};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2378]] /* pumCHW2.preSou.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5300;
}

/*
equation index: 5301
type: SIMPLE_ASSIGN
pumCHW2.preSou.m_flow_start = pumCHW2.m_flow_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5301};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2379]] /* pumCHW2.preSou.m_flow_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2356]] /* pumCHW2.m_flow_start PARAM */);
  threadData->lastEquationSolved = 5301;
}

/*
equation index: 5304
type: SIMPLE_ASSIGN
pumCHW2.vol.tau = pumCHW2.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5304};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2414]] /* pumCHW2.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2387]] /* pumCHW2.tau PARAM */);
  threadData->lastEquationSolved = 5304;
}

/*
equation index: 5305
type: SIMPLE_ASSIGN
pumCHW2.vol.V_nominal = 25.120375 * pumCHW2.vol.tau / 995.586
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5305};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2390]] /* pumCHW2.vol.V_nominal PARAM */) = (25.120375) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2414]] /* pumCHW2.vol.tau PARAM */),995.586,"995.586",equationIndexes));
  threadData->lastEquationSolved = 5305;
}

/*
equation index: 5308
type: SIMPLE_ASSIGN
pumCHW2.vol.T_start = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5308};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCHW2.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 5308;
}

/*
equation index: 5309
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.T = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5309};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* pumCHW2.vol.state_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5309;
}

/*
equation index: 5310
type: SIMPLE_ASSIGN
pumCHW2.vol.p_start = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5310};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 5310;
}

/*
equation index: 5311
type: SIMPLE_ASSIGN
pumCHW2.vol.state_start.p = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5311};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2413]] /* pumCHW2.vol.state_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5311;
}

/*
equation index: 5315
type: SIMPLE_ASSIGN
pumCHW2.vol.rho_start = logic1.pumCHW2.vol.Medium.density(pumCHW2.vol.state_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5315};
  logic1_pumCHW2_vol_Medium_ThermodynamicState tmp43;
  logic1_pumCHW2_vol_Medium_ThermodynamicState_wrap_vars(threadData,tmp43, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2413]] /* pumCHW2.vol.state_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2412]] /* pumCHW2.vol.state_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2409]] /* pumCHW2.vol.rho_start PARAM */) = omc_logic1_pumCHW2_vol_Medium_density(threadData, tmp43);
  threadData->lastEquationSolved = 5315;
}

/*
equation index: 5316
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.p_start = pumCHW2.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5316};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* pumCHW2.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2407]] /* pumCHW2.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5316;
}

/*
equation index: 5317
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.T_start = pumCHW2.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5317};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCHW2.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2388]] /* pumCHW2.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5317;
}

/*
equation index: 5318
type: SIMPLE_ASSIGN
pumCHW2.vol.X_start[1] = pumCHW2.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5318};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCHW2.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2292]] /* pumCHW2.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5318;
}

/*
equation index: 5319
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.X_start[1] = pumCHW2.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5319};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2391]] /* pumCHW2.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5319;
}

/*
equation index: 5320
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.hStart = logic1.pumCHW2.vol.dynBal.Medium.specificEnthalpy_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, pumCHW2.vol.dynBal.X_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5320};
  real_array tmp44;
  real_array_create(&tmp44, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2394]] /* pumCHW2.vol.dynBal.X_start[1] PARAM */))), 1, (_index_t)1);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2397]] /* pumCHW2.vol.dynBal.hStart PARAM */) = omc_logic1_pumCHW2_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCHW2.vol.dynBal.T_start PARAM */), tmp44);
  threadData->lastEquationSolved = 5320;
}

/*
equation index: 5325
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.rho_start = logic1.pumCHW2.vol.dynBal.Medium.density(logic1.pumCHW2.vol.dynBal.Medium.setState_pTX(pumCHW2.vol.dynBal.p_start, pumCHW2.vol.dynBal.T_start, {}))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5325};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2401]] /* pumCHW2.vol.dynBal.rho_start PARAM */) = omc_logic1_pumCHW2_vol_dynBal_Medium_density(threadData, omc_logic1_pumCHW2_vol_dynBal_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2399]] /* pumCHW2.vol.dynBal.p_start PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2393]] /* pumCHW2.vol.dynBal.T_start PARAM */), _OMC_LIT83));
  threadData->lastEquationSolved = 5325;
}

/*
equation index: 5328
type: SIMPLE_ASSIGN
pumCHW2.vol.V = pumCHW2.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5328};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCHW2.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2390]] /* pumCHW2.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5328;
}

/*
equation index: 5329
type: SIMPLE_ASSIGN
pumCHW2.vol.dynBal.fluidVolume = pumCHW2.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5329};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2396]] /* pumCHW2.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2389]] /* pumCHW2.vol.V PARAM */);
  threadData->lastEquationSolved = 5329;
}

/*
equation index: 5342
type: SIMPLE_ASSIGN
pumCHW2.vol.m_flow_small = pumCHW2.m_flow_small
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2406]] /* pumCHW2.vol.m_flow_small PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2355]] /* pumCHW2.m_flow_small PARAM */);
  threadData->lastEquationSolved = 5342;
}

/*
equation index: 5351
type: SIMPLE_ASSIGN
pumCHW2.sta_start.p = pumCHW2.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2385]] /* pumCHW2.sta_start.p PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2358]] /* pumCHW2.p_start PARAM */);
  threadData->lastEquationSolved = 5351;
}

/*
equation index: 5352
type: SIMPLE_ASSIGN
pumCHW2.sta_start.T = pumCHW2.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2384]] /* pumCHW2.sta_start.T PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2290]] /* pumCHW2.T_start PARAM */);
  threadData->lastEquationSolved = 5352;
}

/*
equation index: 5353
type: SIMPLE_ASSIGN
pumCHW2.h_outflow_start = logic1.pumCHW2.Medium.specificEnthalpy(pumCHW2.sta_start)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5353};
  logic1_pumCHW2_Medium_ThermodynamicState tmp45;
  logic1_pumCHW2_Medium_ThermodynamicState_wrap_vars(threadData,tmp45, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2385]] /* pumCHW2.sta_start.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2384]] /* pumCHW2.sta_start.T PARAM */));
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2351]] /* pumCHW2.h_outflow_start PARAM */) = omc_logic1_pumCHW2_Medium_specificEnthalpy(threadData, tmp45);
  threadData->lastEquationSolved = 5353;
}

/*
equation index: 5365
type: SIMPLE_ASSIGN
pumCHW2.stageInputs[1] = pumCHW2.massFlowRates[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2386]] /* pumCHW2.stageInputs[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2357]] /* pumCHW2.massFlowRates[1] PARAM */);
  threadData->lastEquationSolved = 5365;
}

/*
equation index: 5366
type: SIMPLE_ASSIGN
pumCHW2.constInput = pumCHW2.constantMassFlowRate
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2296]] /* pumCHW2.constInput PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2297]] /* pumCHW2.constantMassFlowRate PARAM */);
  threadData->lastEquationSolved = 5366;
}

/*
equation index: 5369
type: SIMPLE_ASSIGN
pumCHW2.per.speeds_rpm[1] = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2374]] /* pumCHW2.per.speeds_rpm[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5369;
}

/*
equation index: 5370
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed_rpm = pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5370};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* pumCHW2.per.constantSpeed_rpm PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.speed_rpm_nominal PARAM */);
  threadData->lastEquationSolved = 5370;
}

/*
equation index: 5371
type: SIMPLE_ASSIGN
pumCHW2.per.speeds[1] = pumCHW2.per.speeds_rpm[1] / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5371};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2373]] /* pumCHW2.per.speeds[1] PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2374]] /* pumCHW2.per.speeds_rpm[1] PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5371;
}

/*
equation index: 5372
type: SIMPLE_ASSIGN
pumCHW2.per.constantSpeed = pumCHW2.per.constantSpeed_rpm / pumCHW2.per.speed_rpm_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5372};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2359]] /* pumCHW2.per.constantSpeed PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2360]] /* pumCHW2.per.constantSpeed_rpm PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2372]] /* pumCHW2.per.speed_rpm_nominal PARAM */),"pumCHW2.per.speed_rpm_nominal",equationIndexes);
  threadData->lastEquationSolved = 5372;
}

/*
equation index: 5395
type: SIMPLE_ASSIGN
junOut.mDyn_flow_nominal = 0.3333333333333333 * (abs(junOut.m_flow_nominal[1]) + abs(junOut.m_flow_nominal[2]) + abs(junOut.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5395};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junOut.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junOut.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junOut.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1966]] /* junOut.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 5395;
}

/*
equation index: 5396
type: SIMPLE_ASSIGN
junOut.vol.m_flow_nominal = junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5396};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junOut.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junOut.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5396;
}

/*
equation index: 5397
type: SIMPLE_ASSIGN
junOut.vol.tau = junOut.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5397};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junOut.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2017]] /* junOut.tau PARAM */);
  threadData->lastEquationSolved = 5397;
}

/*
equation index: 5398
type: SIMPLE_ASSIGN
junOut.vol.V_nominal = 0.8333333333333334 * junOut.vol.m_flow_nominal * junOut.vol.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5398};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junOut.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junOut.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2053]] /* junOut.vol.tau PARAM */)));
  threadData->lastEquationSolved = 5398;
}

/*
equation index: 5411
type: SIMPLE_ASSIGN
junOut.vol.T_start = junOut.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5411};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junOut.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1955]] /* junOut.T_start PARAM */);
  threadData->lastEquationSolved = 5411;
}

/*
equation index: 5412
type: SIMPLE_ASSIGN
junOut.vol.dynBal.T_start = junOut.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5412};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junOut.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2018]] /* junOut.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5412;
}

/*
equation index: 5413
type: SIMPLE_ASSIGN
junOut.vol.X_start[1] = junOut.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5413};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junOut.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1956]] /* junOut.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5413;
}

/*
equation index: 5414
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[1] = junOut.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5414};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2021]] /* junOut.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5414;
}

/*
equation index: 5415
type: SIMPLE_ASSIGN
junOut.vol.dynBal.hStart = 1006.0 * (-273.15 + junOut.vol.dynBal.T_start) * (1.0 - junOut.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junOut.vol.dynBal.T_start)) * junOut.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5415};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2029]] /* junOut.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junOut.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2024]] /* junOut.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2025]] /* junOut.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5415;
}

/*
equation index: 5423
type: SIMPLE_ASSIGN
junOut.vol.p_start = junOut.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5423};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2042]] /* junOut.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1968]] /* junOut.p_start PARAM */);
  threadData->lastEquationSolved = 5423;
}

/*
equation index: 5424
type: SIMPLE_ASSIGN
junOut.vol.dynBal.p_start = junOut.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5424};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junOut.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2042]] /* junOut.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5424;
}

/*
equation index: 5425
type: SIMPLE_ASSIGN
junOut.vol.dynBal.rho_start = 1.1843079200592153e-5 * junOut.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5425};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2033]] /* junOut.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2031]] /* junOut.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5425;
}

/*
equation index: 5428
type: SIMPLE_ASSIGN
junOut.vol.V = junOut.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5428};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junOut.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2020]] /* junOut.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5428;
}

/*
equation index: 5429
type: SIMPLE_ASSIGN
junOut.vol.dynBal.fluidVolume = junOut.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5429};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2028]] /* junOut.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2019]] /* junOut.vol.V PARAM */);
  threadData->lastEquationSolved = 5429;
}

/*
equation index: 5437
type: SIMPLE_ASSIGN
junOut.vol.X_start[2] = junOut.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5437};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junOut.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1957]] /* junOut.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5437;
}

/*
equation index: 5438
type: SIMPLE_ASSIGN
junOut.vol.dynBal.X_start[2] = junOut.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5438};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2026]] /* junOut.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2022]] /* junOut.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5438;
}

/*
equation index: 5444
type: SIMPLE_ASSIGN
junOut.vol.m_flow_small = 1e-4 * abs(junOut.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5444};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2041]] /* junOut.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2040]] /* junOut.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5444;
}

/*
equation index: 5457
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal = junOut.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5457};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junOut.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1966]] /* junOut.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 5457;
}

/*
equation index: 5458
type: SIMPLE_ASSIGN
junOut.res3.m_flow_nominal_pos = abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5458};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2010]] /* junOut.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junOut.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5458;
}

/*
equation index: 5460
type: SIMPLE_ASSIGN
junOut.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5460};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2007]] /* junOut.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2013]] /* junOut.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5460;
}

/*
equation index: 5472
type: SIMPLE_ASSIGN
junOut.res3.m_flow_small = 1e-4 * abs(junOut.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5472};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2011]] /* junOut.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2009]] /* junOut.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5472;
}

/*
equation index: 5479
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal = junOut.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5479};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junOut.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1965]] /* junOut.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 5479;
}

/*
equation index: 5480
type: SIMPLE_ASSIGN
junOut.res2.m_flow_nominal_pos = abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5480};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1994]] /* junOut.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junOut.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5480;
}

/*
equation index: 5482
type: SIMPLE_ASSIGN
junOut.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5482};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1991]] /* junOut.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1997]] /* junOut.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5482;
}

/*
equation index: 5494
type: SIMPLE_ASSIGN
junOut.res2.m_flow_small = 1e-4 * abs(junOut.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5494};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1995]] /* junOut.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1993]] /* junOut.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5494;
}

/*
equation index: 5501
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal = junOut.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5501};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junOut.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1964]] /* junOut.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 5501;
}

/*
equation index: 5502
type: SIMPLE_ASSIGN
junOut.res1.m_flow_nominal_pos = abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5502};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1978]] /* junOut.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junOut.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5502;
}

/*
equation index: 5504
type: SIMPLE_ASSIGN
junOut.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junOut.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5504};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1975]] /* junOut.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1981]] /* junOut.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5504;
}

/*
equation index: 5516
type: SIMPLE_ASSIGN
junOut.res1.m_flow_small = 1e-4 * abs(junOut.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5516};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1979]] /* junOut.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1977]] /* junOut.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5516;
}

/*
equation index: 5518
type: SIMPLE_ASSIGN
junOut.m_flow_small = 1e-4 * junOut.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5518};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1967]] /* junOut.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1962]] /* junOut.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5518;
}

/*
equation index: 5548
type: SIMPLE_ASSIGN
junRet.mDyn_flow_nominal = 0.3333333333333333 * (abs(junRet.m_flow_nominal[1]) + abs(junRet.m_flow_nominal[2]) + abs(junRet.m_flow_nominal[3]))
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5548};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2061]] /* junRet.mDyn_flow_nominal PARAM */) = (0.3333333333333333) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* junRet.m_flow_nominal[1] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2064]] /* junRet.m_flow_nominal[2] PARAM */)) + fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2065]] /* junRet.m_flow_nominal[3] PARAM */)));
  threadData->lastEquationSolved = 5548;
}

/*
equation index: 5549
type: SIMPLE_ASSIGN
junRet.vol.m_flow_nominal = junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5549};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2139]] /* junRet.vol.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2061]] /* junRet.mDyn_flow_nominal PARAM */);
  threadData->lastEquationSolved = 5549;
}

/*
equation index: 5550
type: SIMPLE_ASSIGN
junRet.vol.tau = junRet.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5550};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2152]] /* junRet.vol.tau PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2116]] /* junRet.tau PARAM */);
  threadData->lastEquationSolved = 5550;
}

/*
equation index: 5551
type: SIMPLE_ASSIGN
junRet.vol.V_nominal = 0.8333333333333334 * junRet.vol.m_flow_nominal * junRet.vol.tau
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5551};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2119]] /* junRet.vol.V_nominal PARAM */) = (0.8333333333333334) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2139]] /* junRet.vol.m_flow_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2152]] /* junRet.vol.tau PARAM */)));
  threadData->lastEquationSolved = 5551;
}

/*
equation index: 5564
type: SIMPLE_ASSIGN
junRet.vol.T_start = junRet.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5564};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2117]] /* junRet.vol.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2054]] /* junRet.T_start PARAM */);
  threadData->lastEquationSolved = 5564;
}

/*
equation index: 5565
type: SIMPLE_ASSIGN
junRet.vol.dynBal.T_start = junRet.vol.T_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5565};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* junRet.vol.dynBal.T_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2117]] /* junRet.vol.T_start PARAM */);
  threadData->lastEquationSolved = 5565;
}

/*
equation index: 5566
type: SIMPLE_ASSIGN
junRet.vol.X_start[1] = junRet.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5566};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2120]] /* junRet.vol.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2055]] /* junRet.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5566;
}

/*
equation index: 5567
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[1] = junRet.vol.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5567};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.dynBal.X_start[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2120]] /* junRet.vol.X_start[1] PARAM */);
  threadData->lastEquationSolved = 5567;
}

/*
equation index: 5568
type: SIMPLE_ASSIGN
junRet.vol.dynBal.hStart = 1006.0 * (-273.15 + junRet.vol.dynBal.T_start) * (1.0 - junRet.vol.dynBal.X_start[1]) + (2.5010145e6 + 1860.0 * (-273.15 + junRet.vol.dynBal.T_start)) * junRet.vol.dynBal.X_start[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5568};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2128]] /* junRet.vol.dynBal.hStart PARAM */) = (1006.0) * ((-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* junRet.vol.dynBal.T_start PARAM */)) * (1.0 - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.dynBal.X_start[1] PARAM */))) + (2.5010145e6 + (1860.0) * (-273.15 + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2123]] /* junRet.vol.dynBal.T_start PARAM */))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2124]] /* junRet.vol.dynBal.X_start[1] PARAM */));
  threadData->lastEquationSolved = 5568;
}

/*
equation index: 5576
type: SIMPLE_ASSIGN
junRet.vol.p_start = junRet.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5576};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2141]] /* junRet.vol.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2067]] /* junRet.p_start PARAM */);
  threadData->lastEquationSolved = 5576;
}

/*
equation index: 5577
type: SIMPLE_ASSIGN
junRet.vol.dynBal.p_start = junRet.vol.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5577};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* junRet.vol.dynBal.p_start PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2141]] /* junRet.vol.p_start PARAM */);
  threadData->lastEquationSolved = 5577;
}

/*
equation index: 5578
type: SIMPLE_ASSIGN
junRet.vol.dynBal.rho_start = 1.1843079200592153e-5 * junRet.vol.dynBal.p_start
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5578};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2132]] /* junRet.vol.dynBal.rho_start PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2130]] /* junRet.vol.dynBal.p_start PARAM */));
  threadData->lastEquationSolved = 5578;
}

/*
equation index: 5581
type: SIMPLE_ASSIGN
junRet.vol.V = junRet.vol.V_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5581};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2118]] /* junRet.vol.V PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2119]] /* junRet.vol.V_nominal PARAM */);
  threadData->lastEquationSolved = 5581;
}

/*
equation index: 5582
type: SIMPLE_ASSIGN
junRet.vol.dynBal.fluidVolume = junRet.vol.V
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5582};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2127]] /* junRet.vol.dynBal.fluidVolume PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2118]] /* junRet.vol.V PARAM */);
  threadData->lastEquationSolved = 5582;
}

/*
equation index: 5590
type: SIMPLE_ASSIGN
junRet.vol.X_start[2] = junRet.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5590};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2121]] /* junRet.vol.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2056]] /* junRet.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5590;
}

/*
equation index: 5591
type: SIMPLE_ASSIGN
junRet.vol.dynBal.X_start[2] = junRet.vol.X_start[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5591};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2125]] /* junRet.vol.dynBal.X_start[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2121]] /* junRet.vol.X_start[2] PARAM */);
  threadData->lastEquationSolved = 5591;
}

/*
equation index: 5597
type: SIMPLE_ASSIGN
junRet.vol.m_flow_small = 1e-4 * abs(junRet.vol.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5597};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2140]] /* junRet.vol.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2139]] /* junRet.vol.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5597;
}

/*
equation index: 5610
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal = junRet.m_flow_nominal[3]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5610};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2108]] /* junRet.res3.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2065]] /* junRet.m_flow_nominal[3] PARAM */);
  threadData->lastEquationSolved = 5610;
}

/*
equation index: 5611
type: SIMPLE_ASSIGN
junRet.res3.m_flow_nominal_pos = abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5611};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2109]] /* junRet.res3.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2108]] /* junRet.res3.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5611;
}

/*
equation index: 5613
type: SIMPLE_ASSIGN
junRet.res3.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res3.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5613};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2106]] /* junRet.res3.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2112]] /* junRet.res3.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5613;
}

/*
equation index: 5625
type: SIMPLE_ASSIGN
junRet.res3.m_flow_small = 1e-4 * abs(junRet.res3.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5625};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2110]] /* junRet.res3.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2108]] /* junRet.res3.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5625;
}

/*
equation index: 5632
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal = junRet.m_flow_nominal[2]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5632};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2092]] /* junRet.res2.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2064]] /* junRet.m_flow_nominal[2] PARAM */);
  threadData->lastEquationSolved = 5632;
}

/*
equation index: 5633
type: SIMPLE_ASSIGN
junRet.res2.m_flow_nominal_pos = abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5633};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2093]] /* junRet.res2.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2092]] /* junRet.res2.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5633;
}

/*
equation index: 5635
type: SIMPLE_ASSIGN
junRet.res2.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res2.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5635};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2090]] /* junRet.res2.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2096]] /* junRet.res2.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5635;
}

/*
equation index: 5647
type: SIMPLE_ASSIGN
junRet.res2.m_flow_small = 1e-4 * abs(junRet.res2.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5647};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2094]] /* junRet.res2.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2092]] /* junRet.res2.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5647;
}

/*
equation index: 5654
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal = junRet.m_flow_nominal[1]
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5654};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2076]] /* junRet.res1.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2063]] /* junRet.m_flow_nominal[1] PARAM */);
  threadData->lastEquationSolved = 5654;
}

/*
equation index: 5655
type: SIMPLE_ASSIGN
junRet.res1.m_flow_nominal_pos = abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5655};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2077]] /* junRet.res1.m_flow_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2076]] /* junRet.res1.m_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5655;
}

/*
equation index: 5657
type: SIMPLE_ASSIGN
junRet.res1.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * junRet.res1.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5657};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2074]] /* junRet.res1.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2080]] /* junRet.res1.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5657;
}

/*
equation index: 5669
type: SIMPLE_ASSIGN
junRet.res1.m_flow_small = 1e-4 * abs(junRet.res1.m_flow_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5669};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2078]] /* junRet.res1.m_flow_small PARAM */) = (1e-4) * (fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2076]] /* junRet.res1.m_flow_nominal PARAM */)));
  threadData->lastEquationSolved = 5669;
}

/*
equation index: 5671
type: SIMPLE_ASSIGN
junRet.m_flow_small = 1e-4 * junRet.mDyn_flow_nominal
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5671};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2066]] /* junRet.m_flow_small PARAM */) = (1e-4) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2061]] /* junRet.mDyn_flow_nominal PARAM */));
  threadData->lastEquationSolved = 5671;
}

/*
equation index: 5682
type: SIMPLE_ASSIGN
damOA.cL[1] = (log(damOA.k0) + (-damOA.b) - damOA.a) / damOA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5682};
  modelica_real tmp46;
  modelica_real tmp47;
  tmp46 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* damOA.k0 PARAM */);
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
  }tmp47 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* damOA.cL[1] PARAM */) = DIVISION_SIM(log(tmp46) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */),(tmp47 * tmp47),"damOA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5682;
}

/*
equation index: 5683
type: SIMPLE_ASSIGN
damOA.cL[2] = (2.0 * damOA.b + (-2.0) * log(damOA.k0) + 2.0 * damOA.a - damOA.b * damOA.yL) / damOA.yL
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5683};
  modelica_real tmp48;
  tmp48 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* damOA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1254]] /* damOA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */)) + (-2.0) * (log(tmp48)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.yL PARAM */),"damOA.yL",equationIndexes);
  threadData->lastEquationSolved = 5683;
}

/*
equation index: 5684
type: SIMPLE_ASSIGN
damOA.cL[3] = log(damOA.k0)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5684};
  modelica_real tmp49;
  tmp49 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1264]] /* damOA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1255]] /* damOA.cL[3] PARAM */) = log(tmp49);
  threadData->lastEquationSolved = 5684;
}

/*
equation index: 5685
type: SIMPLE_ASSIGN
damOA.cU[1] = (log(damOA.k1) - damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5685};
  modelica_real tmp50;
  modelica_real tmp51;
  tmp50 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.k1 PARAM */);
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
  }tmp51 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* damOA.cU[1] PARAM */) = DIVISION_SIM(log(tmp50) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */),1.0 + (tmp51 * tmp51) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 5685;
}

/*
equation index: 5686
type: SIMPLE_ASSIGN
damOA.cU[2] = (damOA.b * damOA.yU ^ 2.0 + 2.0 * log(damOA.k1) * damOA.yU + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b) / (-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5686};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  tmp52 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */);
  tmp53 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.k1 PARAM */);
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
  }tmp54 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1257]] /* damOA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */)) * ((tmp52 * tmp52)) + (2.0) * ((log(tmp53)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */)) - ((tmp54 * tmp54)),"-1.0 + 2.0 * damOA.yU - damOA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5686;
}

/*
equation index: 5687
type: SIMPLE_ASSIGN
damOA.cU[3] = (damOA.yU ^ 2.0 * (log(damOA.k1) + damOA.b) + (-2.0) * (damOA.b + damOA.a) * damOA.yU + damOA.b + damOA.a) / (1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5687};
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  tmp55 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */);
  tmp56 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1265]] /* damOA.k1 PARAM */);
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
  }tmp57 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1258]] /* damOA.cU[3] PARAM */) = DIVISION_SIM(((tmp55 * tmp55)) * (log(tmp56) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */),1.0 + (tmp57 * tmp57) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */)),"1.0 + damOA.yU ^ 2.0 + (-2.0) * damOA.yU",equationIndexes);
  threadData->lastEquationSolved = 5687;
}

/*
equation index: 5688
type: SIMPLE_ASSIGN
damOA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damOA.a, damOA.b, damOA.cL, damOA.cU, damOA.yL, damOA.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5688};
  real_array tmp58;
  real_array tmp59;
  real_array_create(&tmp58, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1253]] /* damOA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp59, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1256]] /* damOA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* damOA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1251]] /* damOA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1252]] /* damOA.b PARAM */), tmp58, tmp59, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1280]] /* damOA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1281]] /* damOA.yU PARAM */));
  threadData->lastEquationSolved = 5688;
}

/*
equation index: 5690
type: SIMPLE_ASSIGN
damOA.rho_default = 1.1843079200592153e-5 * damOA.sta_default.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5690};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* damOA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1278]] /* damOA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5690;
}

/*
equation index: 5691
type: SIMPLE_ASSIGN
damOA.A = 55.989691542288554 / (damOA.v_nominal * damOA.rho_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5691};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* damOA.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1279]] /* damOA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* damOA.rho_default PARAM */)),"damOA.v_nominal * damOA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5691;
}

/*
equation index: 5692
type: SIMPLE_ASSIGN
damOA.kDam_default = 1.4142135623730951 * sqrt(damOA.rho_default) * damOA.A / damOA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5692};
  modelica_real tmp60;
  tmp60 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1273]] /* damOA.rho_default PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* damOA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp60)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* damOA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1268]] /* damOA.kThetaSqRt_default PARAM */),"damOA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5692;
}

/*
equation index: 5693
type: SIMPLE_ASSIGN
damOA.facRouDuc = if damOA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5693};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* damOA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[373]] /* damOA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5693;
}

/*
equation index: 5699
type: SIMPLE_ASSIGN
damOA.dp_nominal = (55.989691542288554 / damOA.kDam_default) ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5699};
  modelica_real tmp61;
  tmp61 = DIVISION_SIM(55.989691542288554,(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1266]] /* damOA.kDam_default PARAM */),"damOA.kDam_default",equationIndexes);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* damOA.dp_nominal PARAM */) = (tmp61 * tmp61);
  threadData->lastEquationSolved = 5699;
}

/*
equation index: 5700
type: SIMPLE_ASSIGN
damOA.dp_nominal_pos = abs(damOA.dp_nominal)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5700};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1261]] /* damOA.dp_nominal_pos PARAM */) = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1260]] /* damOA.dp_nominal PARAM */));
  threadData->lastEquationSolved = 5700;
}

/*
equation index: 5703
type: SIMPLE_ASSIGN
damOA.eta_default = 3.88335940547e-6 + 4.89493640395e-8 * damOA.sta_default.T
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5703};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* damOA.eta_default PARAM */) = 3.88335940547e-6 + (4.89493640395e-8) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1275]] /* damOA.sta_default.T PARAM */));
  threadData->lastEquationSolved = 5703;
}

/*
equation index: 5706
type: SIMPLE_ASSIGN
damOA.m_flow_turbulent = if damOA.use_deltaM then damOA.deltaM * 55.989691542288554 else damOA.eta_default * damOA.ReC * sqrt(damOA.A) * damOA.facRouDuc
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5706};
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  tmp63 = (modelica_boolean)(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[376]] /* damOA.use_deltaM PARAM */);
  if(tmp63)
  {
    tmp64 = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1259]] /* damOA.deltaM PARAM */)) * (55.989691542288554);
  }
  else
  {
    tmp62 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1247]] /* damOA.A PARAM */);
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
    tmp64 = ((((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1262]] /* damOA.eta_default PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1248]] /* damOA.ReC PARAM */))) * (sqrt(tmp62))) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1263]] /* damOA.facRouDuc PARAM */));
  }
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1272]] /* damOA.m_flow_turbulent PARAM */) = tmp64;
  threadData->lastEquationSolved = 5706;
}

/*
equation index: 5716
type: SIMPLE_ASSIGN
damEA.cL[1] = (log(damEA.k0) + (-damEA.b) - damEA.a) / damEA.yL ^ 2.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5716};
  modelica_real tmp65;
  modelica_real tmp66;
  tmp65 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* damEA.k0 PARAM */);
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
  }tmp66 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.yL PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damEA.cL[1] PARAM */) = DIVISION_SIM(log(tmp65) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */)) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */),(tmp66 * tmp66),"damEA.yL ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5716;
}

/*
equation index: 5717
type: SIMPLE_ASSIGN
damEA.cL[2] = (2.0 * damEA.b + (-2.0) * log(damEA.k0) + 2.0 * damEA.a - damEA.b * damEA.yL) / damEA.yL
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5717};
  modelica_real tmp67;
  tmp67 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* damEA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1218]] /* damEA.cL[2] PARAM */) = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */)) + (-2.0) * (log(tmp67)) + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */)) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.yL PARAM */))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.yL PARAM */),"damEA.yL",equationIndexes);
  threadData->lastEquationSolved = 5717;
}

/*
equation index: 5718
type: SIMPLE_ASSIGN
damEA.cL[3] = log(damEA.k0)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5718};
  modelica_real tmp68;
  tmp68 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1228]] /* damEA.k0 PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1219]] /* damEA.cL[3] PARAM */) = log(tmp68);
  threadData->lastEquationSolved = 5718;
}

/*
equation index: 5719
type: SIMPLE_ASSIGN
damEA.cU[1] = (log(damEA.k1) - damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5719};
  modelica_real tmp69;
  modelica_real tmp70;
  tmp69 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.k1 PARAM */);
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
  }tmp70 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damEA.cU[1] PARAM */) = DIVISION_SIM(log(tmp69) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */),1.0 + (tmp70 * tmp70) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 5719;
}

/*
equation index: 5720
type: SIMPLE_ASSIGN
damEA.cU[2] = (damEA.b * damEA.yU ^ 2.0 + 2.0 * log(damEA.k1) * damEA.yU + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b) / (-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5720};
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  tmp71 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */);
  tmp72 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.k1 PARAM */);
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
  }tmp73 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1221]] /* damEA.cU[2] PARAM */) = DIVISION_SIM(((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */)) * ((tmp71 * tmp71)) + (2.0) * ((log(tmp72)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */))) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */),-1.0 + (2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */)) - ((tmp73 * tmp73)),"-1.0 + 2.0 * damEA.yU - damEA.yU ^ 2.0",equationIndexes);
  threadData->lastEquationSolved = 5720;
}

/*
equation index: 5721
type: SIMPLE_ASSIGN
damEA.cU[3] = (damEA.yU ^ 2.0 * (log(damEA.k1) + damEA.b) + (-2.0) * (damEA.b + damEA.a) * damEA.yU + damEA.b + damEA.a) / (1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5721};
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  tmp74 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */);
  tmp75 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1229]] /* damEA.k1 PARAM */);
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
  }tmp76 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1222]] /* damEA.cU[3] PARAM */) = DIVISION_SIM(((tmp74 * tmp74)) * (log(tmp75) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */)) + (-2.0) * (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */))) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */),1.0 + (tmp76 * tmp76) + (-2.0) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */)),"1.0 + damEA.yU ^ 2.0 + (-2.0) * damEA.yU",equationIndexes);
  threadData->lastEquationSolved = 5721;
}

/*
equation index: 5722
type: SIMPLE_ASSIGN
damEA.kThetaSqRt_default = Buildings.Fluid.Actuators.BaseClasses.exponentialDamper(1.0, damEA.a, damEA.b, damEA.cL, damEA.cU, damEA.yL, damEA.yU)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5722};
  real_array tmp77;
  real_array tmp78;
  real_array_create(&tmp77, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1217]] /* damEA.cL[1] PARAM */))), 1, (_index_t)3);
  real_array_create(&tmp78, ((modelica_real*)&((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1220]] /* damEA.cU[1] PARAM */))), 1, (_index_t)3);
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* damEA.kThetaSqRt_default PARAM */) = omc_Buildings_Fluid_Actuators_BaseClasses_exponentialDamper(threadData, 1.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1215]] /* damEA.a PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1216]] /* damEA.b PARAM */), tmp77, tmp78, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1244]] /* damEA.yL PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1245]] /* damEA.yU PARAM */));
  threadData->lastEquationSolved = 5722;
}

/*
equation index: 5724
type: SIMPLE_ASSIGN
damEA.rho_default = 1.1843079200592153e-5 * damEA.sta_default.p
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5724};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* damEA.rho_default PARAM */) = (1.1843079200592153e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1242]] /* damEA.sta_default.p PARAM */));
  threadData->lastEquationSolved = 5724;
}

/*
equation index: 5725
type: SIMPLE_ASSIGN
damEA.A = 55.989691542288554 / (damEA.v_nominal * damEA.rho_default)
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5725};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damEA.A PARAM */) = DIVISION_SIM(55.989691542288554,((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1243]] /* damEA.v_nominal PARAM */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* damEA.rho_default PARAM */)),"damEA.v_nominal * damEA.rho_default",equationIndexes);
  threadData->lastEquationSolved = 5725;
}

/*
equation index: 5726
type: SIMPLE_ASSIGN
damEA.kDam_default = 1.4142135623730951 * sqrt(damEA.rho_default) * damEA.A / damEA.kThetaSqRt_default
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5726};
  modelica_real tmp79;
  tmp79 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1237]] /* damEA.rho_default PARAM */);
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
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1230]] /* damEA.kDam_default PARAM */) = (1.4142135623730951) * ((sqrt(tmp79)) * (DIVISION_SIM((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1211]] /* damEA.A PARAM */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1232]] /* damEA.kThetaSqRt_default PARAM */),"damEA.kThetaSqRt_default",equationIndexes)));
  threadData->lastEquationSolved = 5726;
}

/*
equation index: 5727
type: SIMPLE_ASSIGN
damEA.facRouDuc = if damEA.roundDuct then 0.8862269254527579 else 1.0
*/
OMC_DISABLE_OPT
static void logic1_raw_eqFunction_5727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5727};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1227]] /* damEA.facRouDuc PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[364]] /* damEA.roundDuct PARAM */)?0.8862269254527579:1.0);
  threadData->lastEquationSolved = 5727;
}
OMC_DISABLE_OPT
void logic1_raw_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[478])(DATA*, threadData_t*) = {
    logic1_raw_eqFunction_4116,
    logic1_raw_eqFunction_4117,
    logic1_raw_eqFunction_4118,
    logic1_raw_eqFunction_4119,
    logic1_raw_eqFunction_4120,
    logic1_raw_eqFunction_4122,
    logic1_raw_eqFunction_4123,
    logic1_raw_eqFunction_4125,
    logic1_raw_eqFunction_1352,
    logic1_raw_eqFunction_173,
    logic1_raw_eqFunction_1351,
    logic1_raw_eqFunction_1350,
    logic1_raw_eqFunction_1349,
    logic1_raw_eqFunction_1348,
    logic1_raw_eqFunction_1347,
    logic1_raw_eqFunction_1345,
    logic1_raw_eqFunction_1344,
    logic1_raw_eqFunction_1342,
    logic1_raw_eqFunction_1341,
    logic1_raw_eqFunction_1334,
    logic1_raw_eqFunction_1333,
    logic1_raw_eqFunction_1332,
    logic1_raw_eqFunction_1331,
    logic1_raw_eqFunction_1330,
    logic1_raw_eqFunction_1329,
    logic1_raw_eqFunction_1328,
    logic1_raw_eqFunction_1327,
    logic1_raw_eqFunction_1326,
    logic1_raw_eqFunction_1325,
    logic1_raw_eqFunction_1324,
    logic1_raw_eqFunction_1323,
    logic1_raw_eqFunction_1322,
    logic1_raw_eqFunction_1321,
    logic1_raw_eqFunction_4161,
    logic1_raw_eqFunction_4162,
    logic1_raw_eqFunction_4163,
    logic1_raw_eqFunction_4164,
    logic1_raw_eqFunction_4165,
    logic1_raw_eqFunction_4166,
    logic1_raw_eqFunction_4167,
    logic1_raw_eqFunction_4168,
    logic1_raw_eqFunction_4169,
    logic1_raw_eqFunction_4170,
    logic1_raw_eqFunction_4171,
    logic1_raw_eqFunction_4172,
    logic1_raw_eqFunction_4173,
    logic1_raw_eqFunction_4174,
    logic1_raw_eqFunction_4175,
    logic1_raw_eqFunction_4176,
    logic1_raw_eqFunction_4177,
    logic1_raw_eqFunction_4178,
    logic1_raw_eqFunction_4179,
    logic1_raw_eqFunction_4180,
    logic1_raw_eqFunction_4181,
    logic1_raw_eqFunction_4182,
    logic1_raw_eqFunction_4183,
    logic1_raw_eqFunction_4184,
    logic1_raw_eqFunction_4185,
    logic1_raw_eqFunction_4191,
    logic1_raw_eqFunction_4192,
    logic1_raw_eqFunction_4193,
    logic1_raw_eqFunction_4196,
    logic1_raw_eqFunction_4197,
    logic1_raw_eqFunction_4204,
    logic1_raw_eqFunction_4212,
    logic1_raw_eqFunction_4213,
    logic1_raw_eqFunction_4214,
    logic1_raw_eqFunction_4216,
    logic1_raw_eqFunction_4217,
    logic1_raw_eqFunction_4218,
    logic1_raw_eqFunction_4219,
    logic1_raw_eqFunction_4222,
    logic1_raw_eqFunction_4223,
    logic1_raw_eqFunction_4224,
    logic1_raw_eqFunction_4225,
    logic1_raw_eqFunction_4229,
    logic1_raw_eqFunction_4230,
    logic1_raw_eqFunction_4231,
    logic1_raw_eqFunction_4232,
    logic1_raw_eqFunction_4233,
    logic1_raw_eqFunction_4234,
    logic1_raw_eqFunction_4239,
    logic1_raw_eqFunction_4242,
    logic1_raw_eqFunction_4243,
    logic1_raw_eqFunction_4256,
    logic1_raw_eqFunction_4269,
    logic1_raw_eqFunction_4270,
    logic1_raw_eqFunction_4273,
    logic1_raw_eqFunction_4282,
    logic1_raw_eqFunction_4289,
    logic1_raw_eqFunction_4290,
    logic1_raw_eqFunction_4293,
    logic1_raw_eqFunction_4302,
    logic1_raw_eqFunction_4309,
    logic1_raw_eqFunction_4310,
    logic1_raw_eqFunction_4313,
    logic1_raw_eqFunction_4322,
    logic1_raw_eqFunction_4324,
    logic1_raw_eqFunction_4341,
    logic1_raw_eqFunction_4342,
    logic1_raw_eqFunction_4343,
    logic1_raw_eqFunction_4345,
    logic1_raw_eqFunction_4346,
    logic1_raw_eqFunction_4347,
    logic1_raw_eqFunction_4348,
    logic1_raw_eqFunction_4351,
    logic1_raw_eqFunction_4352,
    logic1_raw_eqFunction_4353,
    logic1_raw_eqFunction_4354,
    logic1_raw_eqFunction_4358,
    logic1_raw_eqFunction_4359,
    logic1_raw_eqFunction_4360,
    logic1_raw_eqFunction_4361,
    logic1_raw_eqFunction_4362,
    logic1_raw_eqFunction_4363,
    logic1_raw_eqFunction_4368,
    logic1_raw_eqFunction_4371,
    logic1_raw_eqFunction_4372,
    logic1_raw_eqFunction_4385,
    logic1_raw_eqFunction_4398,
    logic1_raw_eqFunction_4399,
    logic1_raw_eqFunction_4402,
    logic1_raw_eqFunction_4411,
    logic1_raw_eqFunction_4418,
    logic1_raw_eqFunction_4419,
    logic1_raw_eqFunction_4422,
    logic1_raw_eqFunction_4431,
    logic1_raw_eqFunction_4438,
    logic1_raw_eqFunction_4439,
    logic1_raw_eqFunction_4442,
    logic1_raw_eqFunction_4451,
    logic1_raw_eqFunction_4453,
    logic1_raw_eqFunction_4470,
    logic1_raw_eqFunction_4471,
    logic1_raw_eqFunction_4472,
    logic1_raw_eqFunction_4474,
    logic1_raw_eqFunction_4475,
    logic1_raw_eqFunction_4476,
    logic1_raw_eqFunction_4477,
    logic1_raw_eqFunction_4480,
    logic1_raw_eqFunction_4481,
    logic1_raw_eqFunction_4482,
    logic1_raw_eqFunction_4483,
    logic1_raw_eqFunction_4487,
    logic1_raw_eqFunction_4488,
    logic1_raw_eqFunction_4489,
    logic1_raw_eqFunction_4490,
    logic1_raw_eqFunction_4491,
    logic1_raw_eqFunction_4492,
    logic1_raw_eqFunction_4497,
    logic1_raw_eqFunction_4500,
    logic1_raw_eqFunction_4501,
    logic1_raw_eqFunction_4514,
    logic1_raw_eqFunction_4527,
    logic1_raw_eqFunction_4528,
    logic1_raw_eqFunction_4531,
    logic1_raw_eqFunction_4540,
    logic1_raw_eqFunction_4547,
    logic1_raw_eqFunction_4548,
    logic1_raw_eqFunction_4551,
    logic1_raw_eqFunction_4560,
    logic1_raw_eqFunction_4567,
    logic1_raw_eqFunction_4568,
    logic1_raw_eqFunction_4571,
    logic1_raw_eqFunction_4580,
    logic1_raw_eqFunction_4582,
    logic1_raw_eqFunction_4599,
    logic1_raw_eqFunction_4600,
    logic1_raw_eqFunction_4601,
    logic1_raw_eqFunction_4603,
    logic1_raw_eqFunction_4604,
    logic1_raw_eqFunction_4605,
    logic1_raw_eqFunction_4606,
    logic1_raw_eqFunction_4609,
    logic1_raw_eqFunction_4610,
    logic1_raw_eqFunction_4611,
    logic1_raw_eqFunction_4612,
    logic1_raw_eqFunction_4616,
    logic1_raw_eqFunction_4617,
    logic1_raw_eqFunction_4618,
    logic1_raw_eqFunction_4619,
    logic1_raw_eqFunction_4620,
    logic1_raw_eqFunction_4621,
    logic1_raw_eqFunction_4626,
    logic1_raw_eqFunction_4629,
    logic1_raw_eqFunction_4630,
    logic1_raw_eqFunction_4643,
    logic1_raw_eqFunction_4656,
    logic1_raw_eqFunction_4657,
    logic1_raw_eqFunction_4660,
    logic1_raw_eqFunction_4669,
    logic1_raw_eqFunction_4676,
    logic1_raw_eqFunction_4677,
    logic1_raw_eqFunction_4680,
    logic1_raw_eqFunction_4689,
    logic1_raw_eqFunction_4696,
    logic1_raw_eqFunction_4697,
    logic1_raw_eqFunction_4700,
    logic1_raw_eqFunction_4709,
    logic1_raw_eqFunction_4711,
    logic1_raw_eqFunction_4722,
    logic1_raw_eqFunction_4723,
    logic1_raw_eqFunction_4724,
    logic1_raw_eqFunction_4725,
    logic1_raw_eqFunction_4726,
    logic1_raw_eqFunction_4727,
    logic1_raw_eqFunction_4728,
    logic1_raw_eqFunction_4729,
    logic1_raw_eqFunction_4730,
    logic1_raw_eqFunction_4731,
    logic1_raw_eqFunction_4732,
    logic1_raw_eqFunction_4733,
    logic1_raw_eqFunction_4734,
    logic1_raw_eqFunction_4735,
    logic1_raw_eqFunction_4738,
    logic1_raw_eqFunction_4741,
    logic1_raw_eqFunction_4747,
    logic1_raw_eqFunction_4748,
    logic1_raw_eqFunction_4749,
    logic1_raw_eqFunction_4752,
    logic1_raw_eqFunction_4761,
    logic1_raw_eqFunction_4768,
    logic1_raw_eqFunction_4769,
    logic1_raw_eqFunction_4770,
    logic1_raw_eqFunction_4773,
    logic1_raw_eqFunction_4782,
    logic1_raw_eqFunction_4786,
    logic1_raw_eqFunction_4787,
    logic1_raw_eqFunction_4788,
    logic1_raw_eqFunction_4789,
    logic1_raw_eqFunction_4793,
    logic1_raw_eqFunction_4794,
    logic1_raw_eqFunction_4795,
    logic1_raw_eqFunction_4796,
    logic1_raw_eqFunction_4797,
    logic1_raw_eqFunction_4798,
    logic1_raw_eqFunction_4803,
    logic1_raw_eqFunction_4806,
    logic1_raw_eqFunction_4807,
    logic1_raw_eqFunction_4820,
    logic1_raw_eqFunction_4821,
    logic1_raw_eqFunction_4830,
    logic1_raw_eqFunction_4831,
    logic1_raw_eqFunction_4832,
    logic1_raw_eqFunction_4833,
    logic1_raw_eqFunction_4837,
    logic1_raw_eqFunction_4838,
    logic1_raw_eqFunction_4839,
    logic1_raw_eqFunction_4840,
    logic1_raw_eqFunction_4841,
    logic1_raw_eqFunction_4842,
    logic1_raw_eqFunction_4847,
    logic1_raw_eqFunction_4850,
    logic1_raw_eqFunction_4851,
    logic1_raw_eqFunction_4864,
    logic1_raw_eqFunction_4865,
    logic1_raw_eqFunction_4889,
    logic1_raw_eqFunction_4890,
    logic1_raw_eqFunction_4893,
    logic1_raw_eqFunction_4894,
    logic1_raw_eqFunction_4900,
    logic1_raw_eqFunction_4901,
    logic1_raw_eqFunction_4903,
    logic1_raw_eqFunction_4904,
    logic1_raw_eqFunction_4910,
    logic1_raw_eqFunction_4911,
    logic1_raw_eqFunction_4913,
    logic1_raw_eqFunction_4914,
    logic1_raw_eqFunction_4920,
    logic1_raw_eqFunction_4921,
    logic1_raw_eqFunction_4922,
    logic1_raw_eqFunction_4925,
    logic1_raw_eqFunction_4926,
    logic1_raw_eqFunction_4933,
    logic1_raw_eqFunction_4935,
    logic1_raw_eqFunction_4936,
    logic1_raw_eqFunction_4937,
    logic1_raw_eqFunction_4983,
    logic1_raw_eqFunction_4984,
    logic1_raw_eqFunction_4988,
    logic1_raw_eqFunction_4989,
    logic1_raw_eqFunction_4990,
    logic1_raw_eqFunction_4991,
    logic1_raw_eqFunction_4992,
    logic1_raw_eqFunction_4993,
    logic1_raw_eqFunction_4994,
    logic1_raw_eqFunction_5008,
    logic1_raw_eqFunction_5014,
    logic1_raw_eqFunction_5015,
    logic1_raw_eqFunction_5018,
    logic1_raw_eqFunction_5019,
    logic1_raw_eqFunction_5022,
    logic1_raw_eqFunction_5023,
    logic1_raw_eqFunction_5024,
    logic1_raw_eqFunction_5025,
    logic1_raw_eqFunction_5029,
    logic1_raw_eqFunction_5030,
    logic1_raw_eqFunction_5031,
    logic1_raw_eqFunction_5032,
    logic1_raw_eqFunction_5033,
    logic1_raw_eqFunction_5034,
    logic1_raw_eqFunction_5039,
    logic1_raw_eqFunction_5042,
    logic1_raw_eqFunction_5043,
    logic1_raw_eqFunction_5056,
    logic1_raw_eqFunction_5065,
    logic1_raw_eqFunction_5066,
    logic1_raw_eqFunction_5067,
    logic1_raw_eqFunction_5079,
    logic1_raw_eqFunction_5080,
    logic1_raw_eqFunction_5083,
    logic1_raw_eqFunction_5084,
    logic1_raw_eqFunction_5085,
    logic1_raw_eqFunction_5086,
    logic1_raw_eqFunction_5102,
    logic1_raw_eqFunction_5103,
    logic1_raw_eqFunction_5108,
    logic1_raw_eqFunction_5111,
    logic1_raw_eqFunction_5112,
    logic1_raw_eqFunction_5113,
    logic1_raw_eqFunction_5118,
    logic1_raw_eqFunction_5119,
    logic1_raw_eqFunction_5127,
    logic1_raw_eqFunction_5131,
    logic1_raw_eqFunction_5132,
    logic1_raw_eqFunction_5133,
    logic1_raw_eqFunction_5134,
    logic1_raw_eqFunction_5138,
    logic1_raw_eqFunction_5139,
    logic1_raw_eqFunction_5140,
    logic1_raw_eqFunction_5141,
    logic1_raw_eqFunction_5142,
    logic1_raw_eqFunction_5143,
    logic1_raw_eqFunction_5148,
    logic1_raw_eqFunction_5151,
    logic1_raw_eqFunction_5152,
    logic1_raw_eqFunction_5165,
    logic1_raw_eqFunction_5166,
    logic1_raw_eqFunction_5185,
    logic1_raw_eqFunction_5187,
    logic1_raw_eqFunction_5188,
    logic1_raw_eqFunction_5194,
    logic1_raw_eqFunction_5195,
    logic1_raw_eqFunction_5197,
    logic1_raw_eqFunction_5198,
    logic1_raw_eqFunction_5204,
    logic1_raw_eqFunction_5205,
    logic1_raw_eqFunction_5207,
    logic1_raw_eqFunction_5208,
    logic1_raw_eqFunction_5214,
    logic1_raw_eqFunction_5215,
    logic1_raw_eqFunction_5216,
    logic1_raw_eqFunction_5219,
    logic1_raw_eqFunction_5220,
    logic1_raw_eqFunction_5227,
    logic1_raw_eqFunction_5269,
    logic1_raw_eqFunction_5270,
    logic1_raw_eqFunction_5274,
    logic1_raw_eqFunction_5275,
    logic1_raw_eqFunction_5276,
    logic1_raw_eqFunction_5277,
    logic1_raw_eqFunction_5278,
    logic1_raw_eqFunction_5279,
    logic1_raw_eqFunction_5280,
    logic1_raw_eqFunction_5294,
    logic1_raw_eqFunction_5300,
    logic1_raw_eqFunction_5301,
    logic1_raw_eqFunction_5304,
    logic1_raw_eqFunction_5305,
    logic1_raw_eqFunction_5308,
    logic1_raw_eqFunction_5309,
    logic1_raw_eqFunction_5310,
    logic1_raw_eqFunction_5311,
    logic1_raw_eqFunction_5315,
    logic1_raw_eqFunction_5316,
    logic1_raw_eqFunction_5317,
    logic1_raw_eqFunction_5318,
    logic1_raw_eqFunction_5319,
    logic1_raw_eqFunction_5320,
    logic1_raw_eqFunction_5325,
    logic1_raw_eqFunction_5328,
    logic1_raw_eqFunction_5329,
    logic1_raw_eqFunction_5342,
    logic1_raw_eqFunction_5351,
    logic1_raw_eqFunction_5352,
    logic1_raw_eqFunction_5353,
    logic1_raw_eqFunction_5365,
    logic1_raw_eqFunction_5366,
    logic1_raw_eqFunction_5369,
    logic1_raw_eqFunction_5370,
    logic1_raw_eqFunction_5371,
    logic1_raw_eqFunction_5372,
    logic1_raw_eqFunction_5395,
    logic1_raw_eqFunction_5396,
    logic1_raw_eqFunction_5397,
    logic1_raw_eqFunction_5398,
    logic1_raw_eqFunction_5411,
    logic1_raw_eqFunction_5412,
    logic1_raw_eqFunction_5413,
    logic1_raw_eqFunction_5414,
    logic1_raw_eqFunction_5415,
    logic1_raw_eqFunction_5423,
    logic1_raw_eqFunction_5424,
    logic1_raw_eqFunction_5425,
    logic1_raw_eqFunction_5428,
    logic1_raw_eqFunction_5429,
    logic1_raw_eqFunction_5437,
    logic1_raw_eqFunction_5438,
    logic1_raw_eqFunction_5444,
    logic1_raw_eqFunction_5457,
    logic1_raw_eqFunction_5458,
    logic1_raw_eqFunction_5460,
    logic1_raw_eqFunction_5472,
    logic1_raw_eqFunction_5479,
    logic1_raw_eqFunction_5480,
    logic1_raw_eqFunction_5482,
    logic1_raw_eqFunction_5494,
    logic1_raw_eqFunction_5501,
    logic1_raw_eqFunction_5502,
    logic1_raw_eqFunction_5504,
    logic1_raw_eqFunction_5516,
    logic1_raw_eqFunction_5518,
    logic1_raw_eqFunction_5548,
    logic1_raw_eqFunction_5549,
    logic1_raw_eqFunction_5550,
    logic1_raw_eqFunction_5551,
    logic1_raw_eqFunction_5564,
    logic1_raw_eqFunction_5565,
    logic1_raw_eqFunction_5566,
    logic1_raw_eqFunction_5567,
    logic1_raw_eqFunction_5568,
    logic1_raw_eqFunction_5576,
    logic1_raw_eqFunction_5577,
    logic1_raw_eqFunction_5578,
    logic1_raw_eqFunction_5581,
    logic1_raw_eqFunction_5582,
    logic1_raw_eqFunction_5590,
    logic1_raw_eqFunction_5591,
    logic1_raw_eqFunction_5597,
    logic1_raw_eqFunction_5610,
    logic1_raw_eqFunction_5611,
    logic1_raw_eqFunction_5613,
    logic1_raw_eqFunction_5625,
    logic1_raw_eqFunction_5632,
    logic1_raw_eqFunction_5633,
    logic1_raw_eqFunction_5635,
    logic1_raw_eqFunction_5647,
    logic1_raw_eqFunction_5654,
    logic1_raw_eqFunction_5655,
    logic1_raw_eqFunction_5657,
    logic1_raw_eqFunction_5669,
    logic1_raw_eqFunction_5671,
    logic1_raw_eqFunction_5682,
    logic1_raw_eqFunction_5683,
    logic1_raw_eqFunction_5684,
    logic1_raw_eqFunction_5685,
    logic1_raw_eqFunction_5686,
    logic1_raw_eqFunction_5687,
    logic1_raw_eqFunction_5688,
    logic1_raw_eqFunction_5690,
    logic1_raw_eqFunction_5691,
    logic1_raw_eqFunction_5692,
    logic1_raw_eqFunction_5693,
    logic1_raw_eqFunction_5699,
    logic1_raw_eqFunction_5700,
    logic1_raw_eqFunction_5703,
    logic1_raw_eqFunction_5706,
    logic1_raw_eqFunction_5716,
    logic1_raw_eqFunction_5717,
    logic1_raw_eqFunction_5718,
    logic1_raw_eqFunction_5719,
    logic1_raw_eqFunction_5720,
    logic1_raw_eqFunction_5721,
    logic1_raw_eqFunction_5722,
    logic1_raw_eqFunction_5724,
    logic1_raw_eqFunction_5725,
    logic1_raw_eqFunction_5726,
    logic1_raw_eqFunction_5727
  };
  
  for (int id = 0; id < 478; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif